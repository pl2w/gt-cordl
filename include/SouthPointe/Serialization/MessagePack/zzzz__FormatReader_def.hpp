#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/FormatReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatReader)
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class FormatReader;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::FormatReader*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::FormatReader*, "SouthPointe.Serialization.MessagePack", "FormatReader");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.FormatReader
class CORDL_TYPE FormatReader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Position)) int64_t  Position;

/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

/// @brief Method FastForward, addr 0x9d0741c, size 0xc0, virtual false, abstract: false, final false
inline void FastForward(int64_t  offset) ;

static inline ::SouthPointe::Serialization::MessagePack::FormatReader* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method ReadArrayLength, addr 0x9d06d40, size 0xe8, virtual false, abstract: false, final false
inline int32_t ReadArrayLength(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadBin16, addr 0x9d06cac, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBin16() ;

/// @brief Method ReadBin32, addr 0x9d06ccc, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBin32() ;

/// @brief Method ReadBin8, addr 0x9d06be8, size 0x38, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBin8() ;

/// @brief Method ReadBytesOfLength, addr 0x9d06c20, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBytesOfLength(int32_t  length) ;

/// @brief Method ReadExtLength, addr 0x9d06f00, size 0xf4, virtual false, abstract: false, final false
inline uint32_t ReadExtLength(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadExtType, addr 0x9d06ff4, size 0x104, virtual false, abstract: false, final false
inline int8_t ReadExtType(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadFixStr, addr 0x9d06aa4, size 0x8, virtual false, abstract: false, final false
inline ::StringW ReadFixStr(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadFloat32, addr 0x9d0695c, size 0x74, virtual false, abstract: false, final false
inline float_t ReadFloat32() ;

/// @brief Method ReadFloat64, addr 0x9d06a00, size 0x74, virtual false, abstract: false, final false
inline double_t ReadFloat64() ;

/// @brief Method ReadFormat, addr 0x9d063ec, size 0x70, virtual false, abstract: false, final false
inline ::SouthPointe::Serialization::MessagePack::Format ReadFormat() ;

/// @brief Method ReadInt16, addr 0x9d0670c, size 0x98, virtual false, abstract: false, final false
inline int16_t ReadInt16() ;

/// @brief Method ReadInt32, addr 0x9d067a4, size 0xbc, virtual false, abstract: false, final false
inline int32_t ReadInt32() ;

/// @brief Method ReadInt64, addr 0x9d06860, size 0xfc, virtual false, abstract: false, final false
inline int64_t ReadInt64() ;

/// @brief Method ReadInt8, addr 0x9d066e4, size 0x28, virtual false, abstract: false, final false
inline int8_t ReadInt8() ;

/// @brief Method ReadMapLength, addr 0x9d06e28, size 0xd8, virtual false, abstract: false, final false
inline int32_t ReadMapLength(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadNegativeFixInt, addr 0x9d066dc, size 0x8, virtual false, abstract: false, final false
inline int8_t ReadNegativeFixInt(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadPositiveFixInt, addr 0x9d0645c, size 0x8, virtual false, abstract: false, final false
inline uint8_t ReadPositiveFixInt(::SouthPointe::Serialization::MessagePack::Format  format) ;

/// @brief Method ReadStr16, addr 0x9d06b54, size 0x20, virtual false, abstract: false, final false
inline ::StringW ReadStr16() ;

/// @brief Method ReadStr32, addr 0x9d06b74, size 0x74, virtual false, abstract: false, final false
inline ::StringW ReadStr32() ;

/// @brief Method ReadStr8, addr 0x9d06b1c, size 0x38, virtual false, abstract: false, final false
inline ::StringW ReadStr8() ;

/// @brief Method ReadStringOfLength, addr 0x9d06aac, size 0x70, virtual false, abstract: false, final false
inline ::StringW ReadStringOfLength(int32_t  length) ;

/// @brief Method ReadUInt16, addr 0x9d0648c, size 0x98, virtual false, abstract: false, final false
inline uint16_t ReadUInt16() ;

/// @brief Method ReadUInt32, addr 0x9d06524, size 0xbc, virtual false, abstract: false, final false
inline uint32_t ReadUInt32() ;

/// @brief Method ReadUInt64, addr 0x9d065e0, size 0xfc, virtual false, abstract: false, final false
inline uint64_t ReadUInt64() ;

/// @brief Method ReadUInt8, addr 0x9d06464, size 0x28, virtual false, abstract: false, final false
inline uint8_t ReadUInt8() ;

/// @brief Method Skip, addr 0x9d070f8, size 0x324, virtual false, abstract: false, final false
inline void Skip() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x9d0636c, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_Position, addr 0x9d05dec, size 0x20, virtual false, abstract: false, final false
inline int64_t get_Position() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatReader(FormatReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatReader(FormatReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31737};

/// @brief Field stream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::FormatReader, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::FormatReader, ___buffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::FormatReader) == 0x20, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
