#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlXmlStreamWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlXmlStreamWrapper)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Data::SqlTypes {
class SqlXmlStreamWrapper;
}
// Write type traits
MARK_REF_T(::System::Data::SqlTypes::SqlXmlStreamWrapper*);
DEFINE_IL2CPP_CLASS(::System::Data::SqlTypes::SqlXmlStreamWrapper*, "System.Data.SqlTypes", "SqlXmlStreamWrapper");
// Dependencies System.IO.Stream
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SqlXmlStreamWrapper
class CORDL_TYPE SqlXmlStreamWrapper : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _isClosed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isClosed, put=__cordl_internal_set__isClosed)) bool  _isClosed;

/// @brief Field _lPosition, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lPosition, put=__cordl_internal_set__lPosition)) int64_t  _lPosition;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Method Dispose, addr 0xa99efa4, size 0x10, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xa99ef88, size 0x1c, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method IsStreamClosed, addr 0xa99e3bc, size 0x70, virtual false, abstract: false, final false
inline bool IsStreamClosed() ;

static inline ::System::Data::SqlTypes::SqlXmlStreamWrapper* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Read, addr 0xa99e884, size 0x1bc, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0xa99ecf4, size 0x118, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0xa99e71c, size 0x168, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa99eef4, size 0x94, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ThrowIfStreamCannotRead, addr 0xa99ea40, size 0x7c, virtual false, abstract: false, final false
inline void ThrowIfStreamCannotRead(::StringW  method) ;

/// @brief Method ThrowIfStreamCannotSeek, addr 0xa99e570, size 0x7c, virtual false, abstract: false, final false
inline void ThrowIfStreamCannotSeek(::StringW  method) ;

/// @brief Method ThrowIfStreamCannotWrite, addr 0xa99ec78, size 0x7c, virtual false, abstract: false, final false
inline void ThrowIfStreamCannotWrite(::StringW  method) ;

/// @brief Method ThrowIfStreamClosed, addr 0xa99e508, size 0x68, virtual false, abstract: false, final false
inline void ThrowIfStreamClosed(::StringW  method) ;

/// @brief Method Write, addr 0xa99eabc, size 0x1bc, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0xa99ee0c, size 0xe8, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr bool const& __cordl_internal_get__isClosed() const;

constexpr bool& __cordl_internal_get__isClosed() ;

constexpr int64_t const& __cordl_internal_get__lPosition() const;

constexpr int64_t& __cordl_internal_get__lPosition() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr void __cordl_internal_set__isClosed(bool  value) ;

constexpr void __cordl_internal_set__lPosition(int64_t  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa99da64, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_CanRead, addr 0xa99e384, size 0x38, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa99e42c, size 0x38, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa99e464, size 0x38, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa99e49c, size 0x6c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa99e5ec, size 0x5c, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xa99e648, size 0xd4, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlXmlStreamWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlXmlStreamWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlXmlStreamWrapper(SqlXmlStreamWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlXmlStreamWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlXmlStreamWrapper(SqlXmlStreamWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21109};

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _lPosition, offset: 0x30, size: 0x8, def value: None
 int64_t  ____lPosition;

/// @brief Field _isClosed, offset: 0x38, size: 0x1, def value: None
 bool  ____isClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlXmlStreamWrapper, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlXmlStreamWrapper, ____lPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlXmlStreamWrapper, ____isClosed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Data::SqlTypes::SqlXmlStreamWrapper) == 0x40, "Size mismatch!");

} // namespace end def System::Data::SqlTypes
