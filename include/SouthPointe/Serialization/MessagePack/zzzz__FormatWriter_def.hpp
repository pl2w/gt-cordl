#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/FormatWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatWriter)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class FormatWriter;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::FormatWriter*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::FormatWriter*, "SouthPointe.Serialization.MessagePack", "FormatWriter");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.FormatWriter
class CORDL_TYPE FormatWriter : public ::System::Object {
public:
// Declarations
/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

static inline ::SouthPointe::Serialization::MessagePack::FormatWriter* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Write, addr 0x9d08244, size 0x108, virtual false, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  bytes) ;

/// @brief Method Write, addr 0x9d080bc, size 0x188, virtual false, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0x9d07620, size 0x2c, virtual false, abstract: false, final false
inline void Write(bool  value) ;

/// @brief Method Write, addr 0x9d07fbc, size 0x68, virtual false, abstract: false, final false
inline void Write(double_t  value) ;

/// @brief Method Write, addr 0x9d07efc, size 0x68, virtual false, abstract: false, final false
inline void Write(float_t  value) ;

/// @brief Method Write, addr 0x9d07b74, size 0x7c, virtual false, abstract: false, final false
inline void Write(int16_t  value) ;

/// @brief Method Write, addr 0x9d07c58, size 0x78, virtual false, abstract: false, final false
inline void Write(int32_t  value) ;

/// @brief Method Write, addr 0x9d07d70, size 0x7c, virtual false, abstract: false, final false
inline void Write(int64_t  value) ;

/// @brief Method Write, addr 0x9d07a28, size 0x8c, virtual false, abstract: false, final false
inline void Write(int8_t  value) ;

/// @brief Method Write, addr 0x9d076ec, size 0x64, virtual false, abstract: false, final false
inline void Write(uint16_t  value) ;

/// @brief Method Write, addr 0x9d077b8, size 0x60, virtual false, abstract: false, final false
inline void Write(uint32_t  value) ;

/// @brief Method Write, addr 0x9d078b8, size 0x60, virtual false, abstract: false, final false
inline void Write(uint64_t  value) ;

/// @brief Method Write, addr 0x9d0764c, size 0x60, virtual false, abstract: false, final false
inline void Write(uint8_t  value) ;

/// @brief Method WriteArrayHeader, addr 0x9d0834c, size 0xa8, virtual false, abstract: false, final false
inline void WriteArrayHeader(int32_t  length) ;

/// @brief Method WriteBinHeader, addr 0x9d083f4, size 0xc0, virtual false, abstract: false, final false
inline void WriteBinHeader(int32_t  length) ;

/// @brief Method WriteExtHeader, addr 0x9d08558, size 0x16c, virtual false, abstract: false, final false
inline void WriteExtHeader(uint32_t  length, int8_t  extType) ;

/// @brief Method WriteFormat, addr 0x9d075dc, size 0x20, virtual false, abstract: false, final false
inline void WriteFormat(uint8_t  formatValue) ;

/// @brief Method WriteInt16, addr 0x9d07bf0, size 0x68, virtual false, abstract: false, final false
inline void WriteInt16(int16_t  value) ;

/// @brief Method WriteInt32, addr 0x9d07cd0, size 0xa0, virtual false, abstract: false, final false
inline void WriteInt32(int32_t  value) ;

/// @brief Method WriteInt64, addr 0x9d07dec, size 0x110, virtual false, abstract: false, final false
inline void WriteInt64(int64_t  value) ;

/// @brief Method WriteInt8, addr 0x9d07b54, size 0x20, virtual false, abstract: false, final false
inline void WriteInt8(int8_t  value) ;

/// @brief Method WriteMapHeader, addr 0x9d084b4, size 0xa4, virtual false, abstract: false, final false
inline void WriteMapHeader(int32_t  length) ;

/// @brief Method WriteNegativeFixInt, addr 0x9d07ab4, size 0xa0, virtual false, abstract: false, final false
inline void WriteNegativeFixInt(int8_t  value) ;

/// @brief Method WriteNil, addr 0x9d075fc, size 0x24, virtual false, abstract: false, final false
inline void WriteNil() ;

/// @brief Method WritePositiveFixInt, addr 0x9d076ac, size 0x20, virtual false, abstract: false, final false
inline void WritePositiveFixInt(uint8_t  value) ;

/// @brief Method WriteRawByte, addr 0x9d086c4, size 0x20, virtual false, abstract: false, final false
inline void WriteRawByte(uint8_t  value) ;

/// @brief Method WriteUInt16, addr 0x9d07750, size 0x68, virtual false, abstract: false, final false
inline void WriteUInt16(uint16_t  value) ;

/// @brief Method WriteUInt32, addr 0x9d07818, size 0xa0, virtual false, abstract: false, final false
inline void WriteUInt32(uint32_t  value) ;

/// @brief Method WriteUInt64, addr 0x9d07918, size 0x110, virtual false, abstract: false, final false
inline void WriteUInt64(uint64_t  value) ;

/// @brief Method WriteUInt8, addr 0x9d076cc, size 0x20, virtual false, abstract: false, final false
inline void WriteUInt8(uint8_t  value) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x9d0755c, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatWriter(FormatWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatWriter(FormatWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31738};

/// @brief Field stream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::FormatWriter, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::FormatWriter, ___buffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::FormatWriter) == 0x20, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
