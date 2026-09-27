#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2InputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2InputStream)
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
class BZip2InputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream*, "ICSharpCode.SharpZipLib.BZip2", "BZip2InputStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::BZip2 {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.BZip2.BZip2InputStream
class CORDL_TYPE BZip2InputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <IsStreamOwner>k__BackingField, offset 0xf5, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStreamOwner_k__BackingField, put=__cordl_internal_set__IsStreamOwner_k__BackingField)) bool  _IsStreamOwner_k__BackingField;

/// @brief Field baseArray, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseArray, put=__cordl_internal_set_baseArray)) ::ArrayW<::ArrayW<int32_t>>  baseArray;

/// @brief Field baseStream, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseStream, put=__cordl_internal_set_baseStream)) ::System::IO::Stream*  baseStream;

/// @brief Field blockRandomised, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockRandomised, put=__cordl_internal_set_blockRandomised)) bool  blockRandomised;

/// @brief Field blockSize100k, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockSize100k, put=__cordl_internal_set_blockSize100k)) int32_t  blockSize100k;

/// @brief Field bsBuff, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bsBuff, put=__cordl_internal_set_bsBuff)) int32_t  bsBuff;

/// @brief Field bsLive, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bsLive, put=__cordl_internal_set_bsLive)) int32_t  bsLive;

/// @brief Field ch2, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_ch2, put=__cordl_internal_set_ch2)) int32_t  ch2;

/// @brief Field chPrev, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_chPrev, put=__cordl_internal_set_chPrev)) int32_t  chPrev;

/// @brief Field computedBlockCRC, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_computedBlockCRC, put=__cordl_internal_set_computedBlockCRC)) int32_t  computedBlockCRC;

/// @brief Field computedCombinedCRC, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_computedCombinedCRC, put=__cordl_internal_set_computedCombinedCRC)) uint32_t  computedCombinedCRC;

/// @brief Field count, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field currentChar, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentChar, put=__cordl_internal_set_currentChar)) int32_t  currentChar;

/// @brief Field currentState, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) int32_t  currentState;

/// @brief Field i2, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_i2, put=__cordl_internal_set_i2)) int32_t  i2;

/// @brief Field inUse, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_inUse, put=__cordl_internal_set_inUse)) ::ArrayW<bool>  inUse;

/// @brief Field j2, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_j2, put=__cordl_internal_set_j2)) int32_t  j2;

/// @brief Field last, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_last, put=__cordl_internal_set_last)) int32_t  last;

/// @brief Field limit, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_limit, put=__cordl_internal_set_limit)) ::ArrayW<::ArrayW<int32_t>>  limit;

/// @brief Field ll8, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ll8, put=__cordl_internal_set_ll8)) ::ArrayW<uint8_t>  ll8;

/// @brief Field mCrc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCrc, put=__cordl_internal_set_mCrc)) ::ICSharpCode::SharpZipLib::Checksum::IChecksum*  mCrc;

/// @brief Field minLens, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_minLens, put=__cordl_internal_set_minLens)) ::ArrayW<int32_t>  minLens;

/// @brief Field nInUse, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_nInUse, put=__cordl_internal_set_nInUse)) int32_t  nInUse;

/// @brief Field origPtr, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_origPtr, put=__cordl_internal_set_origPtr)) int32_t  origPtr;

/// @brief Field perm, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_perm, put=__cordl_internal_set_perm)) ::ArrayW<::ArrayW<int32_t>>  perm;

/// @brief Field rNToGo, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rNToGo, put=__cordl_internal_set_rNToGo)) int32_t  rNToGo;

/// @brief Field rTPos, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_rTPos, put=__cordl_internal_set_rTPos)) int32_t  rTPos;

/// @brief Field selector, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::ArrayW<uint8_t>  selector;

/// @brief Field selectorMtf, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectorMtf, put=__cordl_internal_set_selectorMtf)) ::ArrayW<uint8_t>  selectorMtf;

/// @brief Field seqToUnseq, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_seqToUnseq, put=__cordl_internal_set_seqToUnseq)) ::ArrayW<uint8_t>  seqToUnseq;

/// @brief Field storedBlockCRC, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_storedBlockCRC, put=__cordl_internal_set_storedBlockCRC)) int32_t  storedBlockCRC;

/// @brief Field storedCombinedCRC, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_storedCombinedCRC, put=__cordl_internal_set_storedCombinedCRC)) int32_t  storedCombinedCRC;

/// @brief Field streamEnd, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_streamEnd, put=__cordl_internal_set_streamEnd)) bool  streamEnd;

/// @brief Field tPos, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tPos, put=__cordl_internal_set_tPos)) int32_t  tPos;

/// @brief Field tt, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tt, put=__cordl_internal_set_tt)) ::ArrayW<int32_t>  tt;

/// @brief Field unseqToSeq, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_unseqToSeq, put=__cordl_internal_set_unseqToSeq)) ::ArrayW<uint8_t>  unseqToSeq;

/// @brief Field unzftab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_unzftab, put=__cordl_internal_set_unzftab)) ::ArrayW<int32_t>  unzftab;

/// @brief Field z, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) uint8_t  z;

/// @brief Method BadBlockHeader, addr 0x9fff638, size 0x48, virtual false, abstract: false, final false
static inline void BadBlockHeader() ;

/// @brief Method BlockOverrun, addr 0xa000814, size 0x48, virtual false, abstract: false, final false
static inline void BlockOverrun() ;

/// @brief Method BsGetInt32, addr 0x9fff680, size 0x68, virtual false, abstract: false, final false
inline int32_t BsGetInt32() ;

/// @brief Method BsGetIntVS, addr 0xa000068, size 0x4, virtual false, abstract: false, final false
inline int32_t BsGetIntVS(int32_t  numBits) ;

/// @brief Method BsGetUChar, addr 0x9fff4f0, size 0x14, virtual false, abstract: false, final false
inline char16_t BsGetUChar() ;

/// @brief Method BsR, addr 0x9fff6e8, size 0x58, virtual false, abstract: false, final false
inline int32_t BsR(int32_t  n) ;

/// @brief Method Complete, addr 0x9fff608, size 0x30, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method CompressedStreamEOF, addr 0xa00001c, size 0x4c, virtual false, abstract: false, final false
static inline void CompressedStreamEOF() ;

/// @brief Method CrcError, addr 0x9ffff18, size 0x48, virtual false, abstract: false, final false
static inline void CrcError() ;

/// @brief Method Dispose, addr 0x9ffefe0, size 0x28, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndBlock, addr 0x9fffe50, size 0xc8, virtual false, abstract: false, final false
inline void EndBlock() ;

/// @brief Method FillBuffer, addr 0x9ffff60, size 0xbc, virtual false, abstract: false, final false
inline void FillBuffer() ;

/// @brief Method Flush, addr 0x9ffeda8, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetAndMoveToFrontDecode, addr 0x9fff740, size 0x710, virtual false, abstract: false, final false
inline void GetAndMoveToFrontDecode() ;

/// @brief Method HbCreateDecodeTables, addr 0xa0005f4, size 0x220, virtual false, abstract: false, final false
static inline void HbCreateDecodeTables(::ArrayW<int32_t>  limit, ::ArrayW<int32_t>  baseArray, ::ArrayW<int32_t>  perm, ::ArrayW<char16_t>  length, int32_t  minLen, int32_t  maxLen, int32_t  alphaSize) ;

/// @brief Method InitBlock, addr 0x9ffe99c, size 0x1c4, virtual false, abstract: false, final false
inline void InitBlock() ;

/// @brief Method Initialize, addr 0x9ffe8f0, size 0xac, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MakeMaps, addr 0x9fff460, size 0x90, virtual false, abstract: false, final false
inline void MakeMaps() ;

static inline ::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Read, addr 0x9ffeef8, size 0xe8, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9fff008, size 0x68, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method RecvDecodingTables, addr 0xa00006c, size 0x588, virtual false, abstract: false, final false
inline void RecvDecodingTables() ;

/// @brief Method Seek, addr 0x9ffedc8, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetDecompressStructureSizes, addr 0x9fff504, size 0x104, virtual false, abstract: false, final false
inline void SetDecompressStructureSizes(int32_t  newSize100k) ;

/// @brief Method SetLength, addr 0x9ffee14, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method SetupBlock, addr 0x9ffeb60, size 0x184, virtual false, abstract: false, final false
inline void SetupBlock() ;

/// @brief Method SetupNoRandPartA, addr 0xa000a18, size 0x138, virtual false, abstract: false, final false
inline void SetupNoRandPartA() ;

/// @brief Method SetupNoRandPartB, addr 0x9fff2c0, size 0xa8, virtual false, abstract: false, final false
inline void SetupNoRandPartB() ;

/// @brief Method SetupNoRandPartC, addr 0x9fff368, size 0xf8, virtual false, abstract: false, final false
inline void SetupNoRandPartC() ;

/// @brief Method SetupRandPartA, addr 0xa00085c, size 0x1bc, virtual false, abstract: false, final false
inline void SetupRandPartA() ;

/// @brief Method SetupRandPartB, addr 0x9fff070, size 0x158, virtual false, abstract: false, final false
inline void SetupRandPartB() ;

/// @brief Method SetupRandPartC, addr 0x9fff1c8, size 0xf8, virtual false, abstract: false, final false
inline void SetupRandPartC() ;

/// @brief Method Write, addr 0x9ffee60, size 0x4c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x9ffeeac, size 0x4c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr bool const& __cordl_internal_get__IsStreamOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStreamOwner_k__BackingField() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get_baseArray() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get_baseArray() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseStream() ;

constexpr bool const& __cordl_internal_get_blockRandomised() const;

constexpr bool& __cordl_internal_get_blockRandomised() ;

constexpr int32_t const& __cordl_internal_get_blockSize100k() const;

constexpr int32_t& __cordl_internal_get_blockSize100k() ;

constexpr int32_t const& __cordl_internal_get_bsBuff() const;

constexpr int32_t& __cordl_internal_get_bsBuff() ;

constexpr int32_t const& __cordl_internal_get_bsLive() const;

constexpr int32_t& __cordl_internal_get_bsLive() ;

constexpr int32_t const& __cordl_internal_get_ch2() const;

constexpr int32_t& __cordl_internal_get_ch2() ;

constexpr int32_t const& __cordl_internal_get_chPrev() const;

constexpr int32_t& __cordl_internal_get_chPrev() ;

constexpr int32_t const& __cordl_internal_get_computedBlockCRC() const;

constexpr int32_t& __cordl_internal_get_computedBlockCRC() ;

constexpr uint32_t const& __cordl_internal_get_computedCombinedCRC() const;

constexpr uint32_t& __cordl_internal_get_computedCombinedCRC() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_currentChar() const;

constexpr int32_t& __cordl_internal_get_currentChar() ;

constexpr int32_t const& __cordl_internal_get_currentState() const;

constexpr int32_t& __cordl_internal_get_currentState() ;

constexpr int32_t const& __cordl_internal_get_i2() const;

constexpr int32_t& __cordl_internal_get_i2() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_inUse() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_inUse() ;

constexpr int32_t const& __cordl_internal_get_j2() const;

constexpr int32_t& __cordl_internal_get_j2() ;

constexpr int32_t const& __cordl_internal_get_last() const;

constexpr int32_t& __cordl_internal_get_last() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get_limit() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get_limit() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_ll8() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_ll8() ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* const& __cordl_internal_get_mCrc() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum*& __cordl_internal_get_mCrc() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_minLens() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_minLens() ;

constexpr int32_t const& __cordl_internal_get_nInUse() const;

constexpr int32_t& __cordl_internal_get_nInUse() ;

constexpr int32_t const& __cordl_internal_get_origPtr() const;

constexpr int32_t& __cordl_internal_get_origPtr() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get_perm() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get_perm() ;

constexpr int32_t const& __cordl_internal_get_rNToGo() const;

constexpr int32_t& __cordl_internal_get_rNToGo() ;

constexpr int32_t const& __cordl_internal_get_rTPos() const;

constexpr int32_t& __cordl_internal_get_rTPos() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_selector() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_selector() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_selectorMtf() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_selectorMtf() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_seqToUnseq() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_seqToUnseq() ;

constexpr int32_t const& __cordl_internal_get_storedBlockCRC() const;

constexpr int32_t& __cordl_internal_get_storedBlockCRC() ;

constexpr int32_t const& __cordl_internal_get_storedCombinedCRC() const;

constexpr int32_t& __cordl_internal_get_storedCombinedCRC() ;

constexpr bool const& __cordl_internal_get_streamEnd() const;

constexpr bool& __cordl_internal_get_streamEnd() ;

constexpr int32_t const& __cordl_internal_get_tPos() const;

constexpr int32_t& __cordl_internal_get_tPos() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tt() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tt() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_unseqToSeq() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_unseqToSeq() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_unzftab() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_unzftab() ;

constexpr uint8_t const& __cordl_internal_get_z() const;

constexpr uint8_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set__IsStreamOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_baseArray(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set_baseStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_blockRandomised(bool  value) ;

constexpr void __cordl_internal_set_blockSize100k(int32_t  value) ;

constexpr void __cordl_internal_set_bsBuff(int32_t  value) ;

constexpr void __cordl_internal_set_bsLive(int32_t  value) ;

constexpr void __cordl_internal_set_ch2(int32_t  value) ;

constexpr void __cordl_internal_set_chPrev(int32_t  value) ;

constexpr void __cordl_internal_set_computedBlockCRC(int32_t  value) ;

constexpr void __cordl_internal_set_computedCombinedCRC(uint32_t  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_currentChar(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(int32_t  value) ;

constexpr void __cordl_internal_set_i2(int32_t  value) ;

constexpr void __cordl_internal_set_inUse(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_j2(int32_t  value) ;

constexpr void __cordl_internal_set_last(int32_t  value) ;

constexpr void __cordl_internal_set_limit(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set_ll8(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_mCrc(::ICSharpCode::SharpZipLib::Checksum::IChecksum*  value) ;

constexpr void __cordl_internal_set_minLens(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_nInUse(int32_t  value) ;

constexpr void __cordl_internal_set_origPtr(int32_t  value) ;

constexpr void __cordl_internal_set_perm(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set_rNToGo(int32_t  value) ;

constexpr void __cordl_internal_set_rTPos(int32_t  value) ;

constexpr void __cordl_internal_set_selector(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_selectorMtf(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_seqToUnseq(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_storedBlockCRC(int32_t  value) ;

constexpr void __cordl_internal_set_storedCombinedCRC(int32_t  value) ;

constexpr void __cordl_internal_set_streamEnd(bool  value) ;

constexpr void __cordl_internal_set_tPos(int32_t  value) ;

constexpr void __cordl_internal_set_tt(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_unseqToSeq(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_unzftab(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_z(uint8_t  value) ;

/// @brief Method .ctor, addr 0x9ffdfb0, size 0x368, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_CanRead, addr 0x9ffecf4, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9ffed10, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9ffed18, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_IsStreamOwner, addr 0x9ffece4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9ffed20, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9ffed3c, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_IsStreamOwner, addr 0x9ffecec, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9ffed5c, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BZip2InputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BZip2InputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BZip2InputStream(BZip2InputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BZip2InputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BZip2InputStream(BZip2InputStream const& ) = delete;

/// @brief Field NO_RAND_PART_A_STATE offset 0xffffffff size 0x4
static constexpr int32_t  NO_RAND_PART_A_STATE{static_cast<int32_t>(0x5)};

/// @brief Field NO_RAND_PART_B_STATE offset 0xffffffff size 0x4
static constexpr int32_t  NO_RAND_PART_B_STATE{static_cast<int32_t>(0x6)};

/// @brief Field NO_RAND_PART_C_STATE offset 0xffffffff size 0x4
static constexpr int32_t  NO_RAND_PART_C_STATE{static_cast<int32_t>(0x7)};

/// @brief Field RAND_PART_A_STATE offset 0xffffffff size 0x4
static constexpr int32_t  RAND_PART_A_STATE{static_cast<int32_t>(0x2)};

/// @brief Field RAND_PART_B_STATE offset 0xffffffff size 0x4
static constexpr int32_t  RAND_PART_B_STATE{static_cast<int32_t>(0x3)};

/// @brief Field RAND_PART_C_STATE offset 0xffffffff size 0x4
static constexpr int32_t  RAND_PART_C_STATE{static_cast<int32_t>(0x4)};

/// @brief Field START_BLOCK_STATE offset 0xffffffff size 0x4
static constexpr int32_t  START_BLOCK_STATE{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17446};

/// @brief Field last, offset: 0x28, size: 0x4, def value: None
 int32_t  ___last;

/// @brief Field origPtr, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___origPtr;

/// @brief Field blockSize100k, offset: 0x30, size: 0x4, def value: None
 int32_t  ___blockSize100k;

/// @brief Field blockRandomised, offset: 0x34, size: 0x1, def value: None
 bool  ___blockRandomised;

/// @brief Field bsBuff, offset: 0x38, size: 0x4, def value: None
 int32_t  ___bsBuff;

/// @brief Field bsLive, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___bsLive;

/// @brief Field mCrc, offset: 0x40, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::IChecksum*  ___mCrc;

/// @brief Field inUse, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<bool>  ___inUse;

/// @brief Field nInUse, offset: 0x50, size: 0x4, def value: None
 int32_t  ___nInUse;

/// @brief Field seqToUnseq, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___seqToUnseq;

/// @brief Field unseqToSeq, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___unseqToSeq;

/// @brief Field selector, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___selector;

/// @brief Field selectorMtf, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___selectorMtf;

/// @brief Field tt, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tt;

/// @brief Field ll8, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___ll8;

/// @brief Field unzftab, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___unzftab;

/// @brief Field limit, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ___limit;

/// @brief Field baseArray, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ___baseArray;

/// @brief Field perm, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ___perm;

/// @brief Field minLens, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___minLens;

/// @brief Field baseStream, offset: 0xb0, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseStream;

/// @brief Field streamEnd, offset: 0xb8, size: 0x1, def value: None
 bool  ___streamEnd;

/// @brief Field currentChar, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___currentChar;

/// @brief Field currentState, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___currentState;

/// @brief Field storedBlockCRC, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___storedBlockCRC;

/// @brief Field storedCombinedCRC, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___storedCombinedCRC;

/// @brief Field computedBlockCRC, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___computedBlockCRC;

/// @brief Field computedCombinedCRC, offset: 0xd0, size: 0x4, def value: None
 uint32_t  ___computedCombinedCRC;

/// @brief Field count, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field chPrev, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___chPrev;

/// @brief Field ch2, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___ch2;

/// @brief Field tPos, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___tPos;

/// @brief Field rNToGo, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___rNToGo;

/// @brief Field rTPos, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___rTPos;

/// @brief Field i2, offset: 0xec, size: 0x4, def value: None
 int32_t  ___i2;

/// @brief Field j2, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___j2;

/// @brief Field z, offset: 0xf4, size: 0x1, def value: None
 uint8_t  ___z;

/// [CompilerGenerated]
/// @brief Field <IsStreamOwner>k__BackingField, offset: 0xf5, size: 0x1, def value: None
 bool  ____IsStreamOwner_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___last) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___origPtr) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___blockSize100k) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___blockRandomised) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___bsBuff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___bsLive) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___mCrc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___inUse) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___nInUse) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___seqToUnseq) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___unseqToSeq) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___selector) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___selectorMtf) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___tt) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___ll8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___unzftab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___limit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___baseArray) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___perm) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___minLens) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___baseStream) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___streamEnd) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___currentChar) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___currentState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___storedBlockCRC) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___storedCombinedCRC) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___computedBlockCRC) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___computedCombinedCRC) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___count) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___chPrev) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___ch2) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___tPos) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___rNToGo) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___rTPos) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___i2) == 0xec, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___j2) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ___z) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream, ____IsStreamOwner_k__BackingField) == 0xf5, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::BZip2::BZip2InputStream) == 0xf8, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::BZip2
