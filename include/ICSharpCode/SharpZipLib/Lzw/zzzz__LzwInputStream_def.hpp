#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Lzw/LzwInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LzwInputStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Lzw {
class LzwInputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*, "ICSharpCode.SharpZipLib.Lzw", "LzwInputStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Lzw {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Lzw.LzwInputStream
class CORDL_TYPE LzwInputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <IsStreamOwner>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStreamOwner_k__BackingField, put=__cordl_internal_set__IsStreamOwner_k__BackingField)) bool  _IsStreamOwner_k__BackingField;

/// @brief Field baseInputStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseInputStream, put=__cordl_internal_set_baseInputStream)) ::System::IO::Stream*  baseInputStream;

/// @brief Field bitMask, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitMask, put=__cordl_internal_set_bitMask)) int32_t  bitMask;

/// @brief Field bitPos, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitPos, put=__cordl_internal_set_bitPos)) int32_t  bitPos;

/// @brief Field blockMode, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockMode, put=__cordl_internal_set_blockMode)) bool  blockMode;

/// @brief Field data, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

/// @brief Field end, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field eof, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_eof, put=__cordl_internal_set_eof)) bool  eof;

/// @brief Field finChar, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_finChar, put=__cordl_internal_set_finChar)) uint8_t  finChar;

/// @brief Field freeEnt, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_freeEnt, put=__cordl_internal_set_freeEnt)) int32_t  freeEnt;

/// @brief Field got, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_got, put=__cordl_internal_set_got)) int32_t  got;

/// @brief Field headerParsed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_headerParsed, put=__cordl_internal_set_headerParsed)) bool  headerParsed;

/// @brief Field isClosed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClosed, put=__cordl_internal_set_isClosed)) bool  isClosed;

/// @brief Field maxBits, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBits, put=__cordl_internal_set_maxBits)) int32_t  maxBits;

/// @brief Field maxCode, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCode, put=__cordl_internal_set_maxCode)) int32_t  maxCode;

/// @brief Field maxMaxCode, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMaxCode, put=__cordl_internal_set_maxMaxCode)) int32_t  maxMaxCode;

/// @brief Field nBits, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_nBits, put=__cordl_internal_set_nBits)) int32_t  nBits;

/// @brief Field oldCode, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_oldCode, put=__cordl_internal_set_oldCode)) int32_t  oldCode;

/// @brief Field one, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_one, put=__cordl_internal_set_one)) ::ArrayW<uint8_t>  one;

/// @brief Field stack, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_stack, put=__cordl_internal_set_stack)) ::ArrayW<uint8_t>  stack;

/// @brief Field stackP, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_stackP, put=__cordl_internal_set_stackP)) int32_t  stackP;

/// @brief Field tabPrefix, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tabPrefix, put=__cordl_internal_set_tabPrefix)) ::ArrayW<int32_t>  tabPrefix;

/// @brief Field tabSuffix, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tabSuffix, put=__cordl_internal_set_tabSuffix)) ::ArrayW<uint8_t>  tabSuffix;

/// @brief Field zeros, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_zeros, put=__cordl_internal_set_zeros)) ::ArrayW<int32_t>  zeros;

/// @brief Method Dispose, addr 0x9ff5b9c, size 0x34, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Fill, addr 0x9ff5904, size 0x5c, virtual false, abstract: false, final false
inline void Fill() ;

/// @brief Method Flush, addr 0x9ff5a4c, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream* New_ctor(::System::IO::Stream*  baseInputStream) ;

/// @brief Method ParseHeader, addr 0x9ff5550, size 0x3b4, virtual false, abstract: false, final false
inline void ParseHeader() ;

/// @brief Method Read, addr 0x9ff4d58, size 0x7f8, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9ff4d00, size 0x58, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method ResetBuf, addr 0x9ff5960, size 0x4c, virtual false, abstract: false, final false
inline int32_t ResetBuf(int32_t  bitPosition) ;

/// @brief Method Seek, addr 0x9ff5a6c, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9ff5ab8, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9ff5b04, size 0x4c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x9ff5b50, size 0x4c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr bool const& __cordl_internal_get__IsStreamOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStreamOwner_k__BackingField() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseInputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseInputStream() ;

constexpr int32_t const& __cordl_internal_get_bitMask() const;

constexpr int32_t& __cordl_internal_get_bitMask() ;

constexpr int32_t const& __cordl_internal_get_bitPos() const;

constexpr int32_t& __cordl_internal_get_bitPos() ;

constexpr bool const& __cordl_internal_get_blockMode() const;

constexpr bool& __cordl_internal_get_blockMode() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr bool const& __cordl_internal_get_eof() const;

constexpr bool& __cordl_internal_get_eof() ;

constexpr uint8_t const& __cordl_internal_get_finChar() const;

constexpr uint8_t& __cordl_internal_get_finChar() ;

constexpr int32_t const& __cordl_internal_get_freeEnt() const;

constexpr int32_t& __cordl_internal_get_freeEnt() ;

constexpr int32_t const& __cordl_internal_get_got() const;

constexpr int32_t& __cordl_internal_get_got() ;

constexpr bool const& __cordl_internal_get_headerParsed() const;

constexpr bool& __cordl_internal_get_headerParsed() ;

constexpr bool const& __cordl_internal_get_isClosed() const;

constexpr bool& __cordl_internal_get_isClosed() ;

constexpr int32_t const& __cordl_internal_get_maxBits() const;

constexpr int32_t& __cordl_internal_get_maxBits() ;

constexpr int32_t const& __cordl_internal_get_maxCode() const;

constexpr int32_t& __cordl_internal_get_maxCode() ;

constexpr int32_t const& __cordl_internal_get_maxMaxCode() const;

constexpr int32_t& __cordl_internal_get_maxMaxCode() ;

constexpr int32_t const& __cordl_internal_get_nBits() const;

constexpr int32_t& __cordl_internal_get_nBits() ;

constexpr int32_t const& __cordl_internal_get_oldCode() const;

constexpr int32_t& __cordl_internal_get_oldCode() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_one() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_one() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_stack() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_stack() ;

constexpr int32_t const& __cordl_internal_get_stackP() const;

constexpr int32_t& __cordl_internal_get_stackP() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tabPrefix() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tabPrefix() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_tabSuffix() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_tabSuffix() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_zeros() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_zeros() ;

constexpr void __cordl_internal_set__IsStreamOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_baseInputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_bitMask(int32_t  value) ;

constexpr void __cordl_internal_set_bitPos(int32_t  value) ;

constexpr void __cordl_internal_set_blockMode(bool  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_eof(bool  value) ;

constexpr void __cordl_internal_set_finChar(uint8_t  value) ;

constexpr void __cordl_internal_set_freeEnt(int32_t  value) ;

constexpr void __cordl_internal_set_got(int32_t  value) ;

constexpr void __cordl_internal_set_headerParsed(bool  value) ;

constexpr void __cordl_internal_set_isClosed(bool  value) ;

constexpr void __cordl_internal_set_maxBits(int32_t  value) ;

constexpr void __cordl_internal_set_maxCode(int32_t  value) ;

constexpr void __cordl_internal_set_maxMaxCode(int32_t  value) ;

constexpr void __cordl_internal_set_nBits(int32_t  value) ;

constexpr void __cordl_internal_set_oldCode(int32_t  value) ;

constexpr void __cordl_internal_set_one(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_stack(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_stackP(int32_t  value) ;

constexpr void __cordl_internal_set_tabPrefix(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_tabSuffix(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_zeros(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x9ff4c00, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream) ;

/// @brief Method get_CanRead, addr 0x9ff59ac, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9ff59c8, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9ff59d0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_IsStreamOwner, addr 0x9ff4bf0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9ff59d8, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9ff59e0, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_IsStreamOwner, addr 0x9ff4bf8, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9ff5a00, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LzwInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LzwInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LzwInputStream(LzwInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LzwInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LzwInputStream(LzwInputStream const& ) = delete;

/// @brief Field EXTRA offset 0xffffffff size 0x4
static constexpr int32_t  EXTRA{static_cast<int32_t>(0x40)};

/// @brief Field TBL_CLEAR offset 0xffffffff size 0x4
static constexpr int32_t  TBL_CLEAR{static_cast<int32_t>(0x100)};

/// @brief Field TBL_FIRST offset 0xffffffff size 0x4
static constexpr int32_t  TBL_FIRST{static_cast<int32_t>(0x101)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17402};

/// [CompilerGenerated]
/// @brief Field <IsStreamOwner>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsStreamOwner_k__BackingField;

/// @brief Field baseInputStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseInputStream;

/// @brief Field isClosed, offset: 0x38, size: 0x1, def value: None
 bool  ___isClosed;

/// @brief Field one, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___one;

/// @brief Field headerParsed, offset: 0x48, size: 0x1, def value: None
 bool  ___headerParsed;

/// @brief Field tabPrefix, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tabPrefix;

/// @brief Field tabSuffix, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___tabSuffix;

/// @brief Field zeros, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___zeros;

/// @brief Field stack, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___stack;

/// @brief Field blockMode, offset: 0x70, size: 0x1, def value: None
 bool  ___blockMode;

/// @brief Field nBits, offset: 0x74, size: 0x4, def value: None
 int32_t  ___nBits;

/// @brief Field maxBits, offset: 0x78, size: 0x4, def value: None
 int32_t  ___maxBits;

/// @brief Field maxMaxCode, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___maxMaxCode;

/// @brief Field maxCode, offset: 0x80, size: 0x4, def value: None
 int32_t  ___maxCode;

/// @brief Field bitMask, offset: 0x84, size: 0x4, def value: None
 int32_t  ___bitMask;

/// @brief Field oldCode, offset: 0x88, size: 0x4, def value: None
 int32_t  ___oldCode;

/// @brief Field finChar, offset: 0x8c, size: 0x1, def value: None
 uint8_t  ___finChar;

/// @brief Field stackP, offset: 0x90, size: 0x4, def value: None
 int32_t  ___stackP;

/// @brief Field freeEnt, offset: 0x94, size: 0x4, def value: None
 int32_t  ___freeEnt;

/// @brief Field data, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

/// @brief Field bitPos, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___bitPos;

/// @brief Field end, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field got, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___got;

/// @brief Field eof, offset: 0xac, size: 0x1, def value: None
 bool  ___eof;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ____IsStreamOwner_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___baseInputStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___isClosed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___one) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___headerParsed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___tabPrefix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___tabSuffix) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___zeros) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___stack) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___blockMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___nBits) == 0x74, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___maxBits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___maxMaxCode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___maxCode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___bitMask) == 0x84, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___oldCode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___finChar) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___stackP) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___freeEnt) == 0x94, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___data) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___bitPos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___end) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___got) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream, ___eof) == 0xac, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Lzw::LzwInputStream) == 0xb0, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Lzw
