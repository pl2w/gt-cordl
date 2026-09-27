#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2OutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2OutputStream)
namespace GlobalNamespace {
struct BZip2OutputStream_StackElement;
}
namespace ICSharpCode::SharpZipLib::Checksum {
class IChecksum;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::BZip2 {
class BZip2OutputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream*, "ICSharpCode.SharpZipLib.BZip2", "BZip2OutputStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::BZip2 {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream
class CORDL_TYPE BZip2OutputStream : public ::System::IO::Stream {
public:
// Declarations
using StackElement = ::GlobalNamespace::BZip2OutputStream_StackElement;

 __declspec(property(get=get_BytesWritten)) int32_t  BytesWritten;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <IsStreamOwner>k__BackingField, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStreamOwner_k__BackingField, put=__cordl_internal_set__IsStreamOwner_k__BackingField)) bool  _IsStreamOwner_k__BackingField;

/// @brief Field allowableBlockSize, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_allowableBlockSize, put=__cordl_internal_set_allowableBlockSize)) int32_t  allowableBlockSize;

/// @brief Field baseStream, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseStream, put=__cordl_internal_set_baseStream)) ::System::IO::Stream*  baseStream;

/// @brief Field block, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_block, put=__cordl_internal_set_block)) ::ArrayW<uint8_t>  block;

/// @brief Field blockCRC, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockCRC, put=__cordl_internal_set_blockCRC)) uint32_t  blockCRC;

/// @brief Field blockRandomised, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockRandomised, put=__cordl_internal_set_blockRandomised)) bool  blockRandomised;

/// @brief Field blockSize100k, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockSize100k, put=__cordl_internal_set_blockSize100k)) int32_t  blockSize100k;

/// @brief Field bsBuff, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_bsBuff, put=__cordl_internal_set_bsBuff)) int32_t  bsBuff;

/// @brief Field bsLive, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_bsLive, put=__cordl_internal_set_bsLive)) int32_t  bsLive;

/// @brief Field bytesOut, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_bytesOut, put=__cordl_internal_set_bytesOut)) int32_t  bytesOut;

/// @brief Field combinedCRC, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_combinedCRC, put=__cordl_internal_set_combinedCRC)) uint32_t  combinedCRC;

/// @brief Field currentChar, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentChar, put=__cordl_internal_set_currentChar)) int32_t  currentChar;

/// @brief Field disposed_, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed_, put=__cordl_internal_set_disposed_)) bool  disposed_;

/// @brief Field firstAttempt, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstAttempt, put=__cordl_internal_set_firstAttempt)) bool  firstAttempt;

/// @brief Field ftab, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ftab, put=__cordl_internal_set_ftab)) ::ArrayW<int32_t>  ftab;

/// @brief Field inUse, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_inUse, put=__cordl_internal_set_inUse)) ::ArrayW<bool>  inUse;

/// @brief Field increments, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_increments, put=__cordl_internal_set_increments)) ::ArrayW<int32_t>  increments;

/// @brief Field last, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_last, put=__cordl_internal_set_last)) int32_t  last;

/// @brief Field mCrc, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCrc, put=__cordl_internal_set_mCrc)) ::ICSharpCode::SharpZipLib::Checksum::IChecksum*  mCrc;

/// @brief Field mtfFreq, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mtfFreq, put=__cordl_internal_set_mtfFreq)) ::ArrayW<int32_t>  mtfFreq;

/// @brief Field nBlocksRandomised, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nBlocksRandomised, put=__cordl_internal_set_nBlocksRandomised)) int32_t  nBlocksRandomised;

/// @brief Field nInUse, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_nInUse, put=__cordl_internal_set_nInUse)) int32_t  nInUse;

/// @brief Field nMTF, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nMTF, put=__cordl_internal_set_nMTF)) int32_t  nMTF;

/// @brief Field origPtr, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_origPtr, put=__cordl_internal_set_origPtr)) int32_t  origPtr;

/// @brief Field quadrant, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_quadrant, put=__cordl_internal_set_quadrant)) ::ArrayW<int32_t>  quadrant;

/// @brief Field runLength, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_runLength, put=__cordl_internal_set_runLength)) int32_t  runLength;

/// @brief Field selector, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::ArrayW<char16_t>  selector;

/// @brief Field selectorMtf, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectorMtf, put=__cordl_internal_set_selectorMtf)) ::ArrayW<char16_t>  selectorMtf;

/// @brief Field seqToUnseq, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_seqToUnseq, put=__cordl_internal_set_seqToUnseq)) ::ArrayW<char16_t>  seqToUnseq;

/// @brief Field szptr, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_szptr, put=__cordl_internal_set_szptr)) ::ArrayW<int16_t>  szptr;

/// @brief Field unseqToSeq, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_unseqToSeq, put=__cordl_internal_set_unseqToSeq)) ::ArrayW<char16_t>  unseqToSeq;

/// @brief Field workDone, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_workDone, put=__cordl_internal_set_workDone)) int32_t  workDone;

/// @brief Field workFactor, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_workFactor, put=__cordl_internal_set_workFactor)) int32_t  workFactor;

/// @brief Field workLimit, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_workLimit, put=__cordl_internal_set_workLimit)) int32_t  workLimit;

/// @brief Field zptr, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_zptr, put=__cordl_internal_set_zptr)) ::ArrayW<int32_t>  zptr;

/// @brief Method AllocateCompressStructures, addr 0xa000b58, size 0x120, virtual false, abstract: false, final false
inline void AllocateCompressStructures() ;

/// @brief Method BsFinishedWithStream, addr 0xa001b18, size 0x70, virtual false, abstract: false, final false
inline void BsFinishedWithStream() ;

/// @brief Method BsPutIntVS, addr 0xa001b88, size 0x4, virtual false, abstract: false, final false
inline void BsPutIntVS(int32_t  numBits, int32_t  c) ;

/// @brief Method BsPutUChar, addr 0xa001950, size 0xc, virtual false, abstract: false, final false
inline void BsPutUChar(int32_t  c) ;

/// @brief Method BsPutint, addr 0xa001a10, size 0x54, virtual false, abstract: false, final false
inline void BsPutint(int32_t  u) ;

/// @brief Method BsW, addr 0xa001a64, size 0x8c, virtual false, abstract: false, final false
inline void BsW(int32_t  n, int32_t  v) ;

/// @brief Method Dispose, addr 0xa001714, size 0x1a0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DoReversibleTransformation, addr 0xa00195c, size 0xb4, virtual false, abstract: false, final false
inline void DoReversibleTransformation() ;

/// @brief Method EndBlock, addr 0xa001594, size 0x178, virtual false, abstract: false, final false
inline void EndBlock() ;

/// @brief Method EndCompression, addr 0xa0018b4, size 0x7c, virtual false, abstract: false, final false
inline void EndCompression() ;

/// @brief Method Finalize, addr 0xa000dc8, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Flush, addr 0xa001930, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FullGtU, addr 0xa0036fc, size 0x2f4, virtual false, abstract: false, final false
inline bool FullGtU(int32_t  i1, int32_t  i2) ;

/// @brief Method GenerateMTFValues, addr 0xa00309c, size 0x36c, virtual false, abstract: false, final false
inline void GenerateMTFValues() ;

/// @brief Method HbAssignCodes, addr 0xa003014, size 0x88, virtual false, abstract: false, final false
static inline void HbAssignCodes(::ArrayW<int32_t>  code, ::ArrayW<char16_t>  length, int32_t  minLen, int32_t  maxLen, int32_t  alphaSize) ;

/// @brief Method HbMakeCodeLengths, addr 0xa0029f4, size 0x620, virtual false, abstract: false, final false
static inline void HbMakeCodeLengths(::ArrayW<char16_t>  len, ::ArrayW<int32_t>  freq, int32_t  alphaSize, int32_t  maxLen) ;

/// @brief Method InitBlock, addr 0xa000cd4, size 0xf4, virtual false, abstract: false, final false
inline void InitBlock() ;

/// @brief Method Initialize, addr 0xa000c78, size 0x5c, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MainSort, addr 0xa003e64, size 0x820, virtual false, abstract: false, final false
inline void MainSort() ;

/// @brief Method MakeMaps, addr 0xa001508, size 0x8c, virtual false, abstract: false, final false
inline void MakeMaps() ;

/// @brief Method Med3, addr 0xa003e38, size 0x2c, virtual false, abstract: false, final false
static inline uint8_t Med3(uint8_t  a, uint8_t  b, uint8_t  c) ;

/// @brief Method MoveToFrontCodeAndSend, addr 0xa001af0, size 0x28, virtual false, abstract: false, final false
inline void MoveToFrontCodeAndSend() ;

static inline ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream* New_ctor(::System::IO::Stream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream* New_ctor(::System::IO::Stream*  stream, int32_t  blockSize) ;

/// @brief Method Panic, addr 0xa0029ac, size 0x48, virtual false, abstract: false, final false
static inline void Panic() ;

/// @brief Method QSort3, addr 0xa003a64, size 0x3d4, virtual false, abstract: false, final false
inline void QSort3(int32_t  loSt, int32_t  hiSt, int32_t  dSt) ;

/// @brief Method RandomiseBlock, addr 0xa004684, size 0x4f4, virtual false, abstract: false, final false
inline void RandomiseBlock() ;

/// @brief Method Read, addr 0xa001004, size 0x4c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0xa000fb8, size 0x4c, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0xa000f20, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SendMTFValues, addr 0xa001b8c, size 0xe20, virtual false, abstract: false, final false
inline void SendMTFValues() ;

/// @brief Method SetLength, addr 0xa000f6c, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method SimpleSort, addr 0xa003408, size 0x2f4, virtual false, abstract: false, final false
inline void SimpleSort(int32_t  lo, int32_t  hi, int32_t  d) ;

/// @brief Method Vswap, addr 0xa0039f0, size 0x74, virtual false, abstract: false, final false
inline void Vswap(int32_t  p1, int32_t  p2, int32_t  n) ;

/// @brief Method Write, addr 0xa001050, size 0x168, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0xa0011b8, size 0x74, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteRun, addr 0xa00122c, size 0x2dc, virtual false, abstract: false, final false
inline void WriteRun() ;

constexpr bool const& __cordl_internal_get__IsStreamOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStreamOwner_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_allowableBlockSize() const;

constexpr int32_t& __cordl_internal_get_allowableBlockSize() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseStream() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_block() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_block() ;

constexpr uint32_t const& __cordl_internal_get_blockCRC() const;

constexpr uint32_t& __cordl_internal_get_blockCRC() ;

constexpr bool const& __cordl_internal_get_blockRandomised() const;

constexpr bool& __cordl_internal_get_blockRandomised() ;

constexpr int32_t const& __cordl_internal_get_blockSize100k() const;

constexpr int32_t& __cordl_internal_get_blockSize100k() ;

constexpr int32_t const& __cordl_internal_get_bsBuff() const;

constexpr int32_t& __cordl_internal_get_bsBuff() ;

constexpr int32_t const& __cordl_internal_get_bsLive() const;

constexpr int32_t& __cordl_internal_get_bsLive() ;

constexpr int32_t const& __cordl_internal_get_bytesOut() const;

constexpr int32_t& __cordl_internal_get_bytesOut() ;

constexpr uint32_t const& __cordl_internal_get_combinedCRC() const;

constexpr uint32_t& __cordl_internal_get_combinedCRC() ;

constexpr int32_t const& __cordl_internal_get_currentChar() const;

constexpr int32_t& __cordl_internal_get_currentChar() ;

constexpr bool const& __cordl_internal_get_disposed_() const;

constexpr bool& __cordl_internal_get_disposed_() ;

constexpr bool const& __cordl_internal_get_firstAttempt() const;

constexpr bool& __cordl_internal_get_firstAttempt() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_ftab() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_ftab() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_inUse() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_inUse() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_increments() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_increments() ;

constexpr int32_t const& __cordl_internal_get_last() const;

constexpr int32_t& __cordl_internal_get_last() ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* const& __cordl_internal_get_mCrc() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum*& __cordl_internal_get_mCrc() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_mtfFreq() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_mtfFreq() ;

constexpr int32_t const& __cordl_internal_get_nBlocksRandomised() const;

constexpr int32_t& __cordl_internal_get_nBlocksRandomised() ;

constexpr int32_t const& __cordl_internal_get_nInUse() const;

constexpr int32_t& __cordl_internal_get_nInUse() ;

constexpr int32_t const& __cordl_internal_get_nMTF() const;

constexpr int32_t& __cordl_internal_get_nMTF() ;

constexpr int32_t const& __cordl_internal_get_origPtr() const;

constexpr int32_t& __cordl_internal_get_origPtr() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_quadrant() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_quadrant() ;

constexpr int32_t const& __cordl_internal_get_runLength() const;

constexpr int32_t& __cordl_internal_get_runLength() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_selector() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_selector() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_selectorMtf() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_selectorMtf() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_seqToUnseq() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_seqToUnseq() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_szptr() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_szptr() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_unseqToSeq() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_unseqToSeq() ;

constexpr int32_t const& __cordl_internal_get_workDone() const;

constexpr int32_t& __cordl_internal_get_workDone() ;

constexpr int32_t const& __cordl_internal_get_workFactor() const;

constexpr int32_t& __cordl_internal_get_workFactor() ;

constexpr int32_t const& __cordl_internal_get_workLimit() const;

constexpr int32_t& __cordl_internal_get_workLimit() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_zptr() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_zptr() ;

constexpr void __cordl_internal_set__IsStreamOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_allowableBlockSize(int32_t  value) ;

constexpr void __cordl_internal_set_baseStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_block(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_blockCRC(uint32_t  value) ;

constexpr void __cordl_internal_set_blockRandomised(bool  value) ;

constexpr void __cordl_internal_set_blockSize100k(int32_t  value) ;

constexpr void __cordl_internal_set_bsBuff(int32_t  value) ;

constexpr void __cordl_internal_set_bsLive(int32_t  value) ;

constexpr void __cordl_internal_set_bytesOut(int32_t  value) ;

constexpr void __cordl_internal_set_combinedCRC(uint32_t  value) ;

constexpr void __cordl_internal_set_currentChar(int32_t  value) ;

constexpr void __cordl_internal_set_disposed_(bool  value) ;

constexpr void __cordl_internal_set_firstAttempt(bool  value) ;

constexpr void __cordl_internal_set_ftab(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_inUse(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_increments(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_last(int32_t  value) ;

constexpr void __cordl_internal_set_mCrc(::ICSharpCode::SharpZipLib::Checksum::IChecksum*  value) ;

constexpr void __cordl_internal_set_mtfFreq(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_nBlocksRandomised(int32_t  value) ;

constexpr void __cordl_internal_set_nInUse(int32_t  value) ;

constexpr void __cordl_internal_set_nMTF(int32_t  value) ;

constexpr void __cordl_internal_set_origPtr(int32_t  value) ;

constexpr void __cordl_internal_set_quadrant(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_runLength(int32_t  value) ;

constexpr void __cordl_internal_set_selector(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_selectorMtf(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_seqToUnseq(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_szptr(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_unseqToSeq(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_workDone(int32_t  value) ;

constexpr void __cordl_internal_set_workFactor(int32_t  value) ;

constexpr void __cordl_internal_set_workLimit(int32_t  value) ;

constexpr void __cordl_internal_set_zptr(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa000b50, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0x9ffe5a0, size 0x290, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, int32_t  blockSize) ;

/// @brief Method get_BytesWritten, addr 0xa00170c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BytesWritten() ;

/// @brief Method get_CanRead, addr 0xa000e6c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa000e74, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa000e7c, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_IsStreamOwner, addr 0xa000e5c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0xa000e98, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa000eb4, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_IsStreamOwner, addr 0xa000e64, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0xa000ed4, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BZip2OutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BZip2OutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BZip2OutputStream(BZip2OutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BZip2OutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BZip2OutputStream(BZip2OutputStream const& ) = delete;

/// @brief Field CLEARMASK offset 0xffffffff size 0x4
static constexpr int32_t  CLEARMASK{static_cast<int32_t>(0xffdfffff)};

/// @brief Field DEPTH_THRESH offset 0xffffffff size 0x4
static constexpr int32_t  DEPTH_THRESH{static_cast<int32_t>(0xa)};

/// @brief Field GREATER_ICOST offset 0xffffffff size 0x4
static constexpr int32_t  GREATER_ICOST{static_cast<int32_t>(0xf)};

/// @brief Field LESSER_ICOST offset 0xffffffff size 0x4
static constexpr int32_t  LESSER_ICOST{static_cast<int32_t>(0x0)};

/// @brief Field QSORT_STACK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  QSORT_STACK_SIZE{static_cast<int32_t>(0x3e8)};

/// @brief Field SETMASK offset 0xffffffff size 0x4
static constexpr int32_t  SETMASK{static_cast<int32_t>(0x200000)};

/// @brief Field SMALL_THRESH offset 0xffffffff size 0x4
static constexpr int32_t  SMALL_THRESH{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17448};

/// @brief Field increments, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___increments;

/// @brief Field last, offset: 0x30, size: 0x4, def value: None
 int32_t  ___last;

/// @brief Field origPtr, offset: 0x34, size: 0x4, def value: None
 int32_t  ___origPtr;

/// @brief Field blockSize100k, offset: 0x38, size: 0x4, def value: None
 int32_t  ___blockSize100k;

/// @brief Field blockRandomised, offset: 0x3c, size: 0x1, def value: None
 bool  ___blockRandomised;

/// @brief Field bytesOut, offset: 0x40, size: 0x4, def value: None
 int32_t  ___bytesOut;

/// @brief Field bsBuff, offset: 0x44, size: 0x4, def value: None
 int32_t  ___bsBuff;

/// @brief Field bsLive, offset: 0x48, size: 0x4, def value: None
 int32_t  ___bsLive;

/// @brief Field mCrc, offset: 0x50, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::IChecksum*  ___mCrc;

/// @brief Field inUse, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<bool>  ___inUse;

/// @brief Field nInUse, offset: 0x60, size: 0x4, def value: None
 int32_t  ___nInUse;

/// @brief Field seqToUnseq, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___seqToUnseq;

/// @brief Field unseqToSeq, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___unseqToSeq;

/// @brief Field selector, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___selector;

/// @brief Field selectorMtf, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___selectorMtf;

/// @brief Field block, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___block;

/// @brief Field quadrant, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___quadrant;

/// @brief Field zptr, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___zptr;

/// @brief Field szptr, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___szptr;

/// @brief Field ftab, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___ftab;

/// @brief Field nMTF, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___nMTF;

/// @brief Field mtfFreq, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___mtfFreq;

/// @brief Field workFactor, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___workFactor;

/// @brief Field workDone, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___workDone;

/// @brief Field workLimit, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___workLimit;

/// @brief Field firstAttempt, offset: 0xcc, size: 0x1, def value: None
 bool  ___firstAttempt;

/// @brief Field nBlocksRandomised, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___nBlocksRandomised;

/// @brief Field currentChar, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___currentChar;

/// @brief Field runLength, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___runLength;

/// @brief Field blockCRC, offset: 0xdc, size: 0x4, def value: None
 uint32_t  ___blockCRC;

/// @brief Field combinedCRC, offset: 0xe0, size: 0x4, def value: None
 uint32_t  ___combinedCRC;

/// @brief Field allowableBlockSize, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___allowableBlockSize;

/// @brief Field baseStream, offset: 0xe8, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseStream;

/// @brief Field disposed_, offset: 0xf0, size: 0x1, def value: None
 bool  ___disposed_;

/// [CompilerGenerated]
/// @brief Field <IsStreamOwner>k__BackingField, offset: 0xf1, size: 0x1, def value: None
 bool  ____IsStreamOwner_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___increments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___last) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___origPtr) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___blockSize100k) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___blockRandomised) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___bytesOut) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___bsBuff) == 0x44, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___bsLive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___mCrc) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___inUse) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___nInUse) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___seqToUnseq) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___unseqToSeq) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___selector) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___selectorMtf) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___block) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___quadrant) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___zptr) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___szptr) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___ftab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___nMTF) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___mtfFreq) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___workFactor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___workDone) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___workLimit) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___firstAttempt) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___nBlocksRandomised) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___currentChar) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___runLength) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___blockCRC) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___combinedCRC) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___allowableBlockSize) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___baseStream) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ___disposed_) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream, ____IsStreamOwner_k__BackingField) == 0xf1, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::BZip2::BZip2OutputStream) == 0xf8, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::BZip2
