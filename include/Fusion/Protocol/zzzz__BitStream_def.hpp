#pragma once
// IWYU pragma private; include "Fusion/Protocol/BitStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitStream)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Fusion::Protocol {
class BitStream;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::BitStream*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::BitStream*, "Fusion.Protocol", "BitStream");
// Dependencies System.Object
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.BitStream
class CORDL_TYPE BitStream : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BytesRequired)) int32_t  BytesRequired;

 __declspec(property(get=get_Data)) ::ArrayW<uint8_t>  Data;

 __declspec(property(get=get_Overflowing)) bool  Overflowing;

 __declspec(property(get=get_Position, put=set_Position)) int32_t  Position;

 __declspec(property(get=get_Reading, put=set_Reading)) bool  Reading;

 __declspec(property(get=get_Writing, put=set_Writing)) bool  Writing;

/// @brief Field _data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint8_t>  _data;

/// @brief Field _ptr, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__ptr, put=__cordl_internal_set__ptr)) int32_t  _ptr;

/// @brief Field _size, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Field _write, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__write, put=__cordl_internal_set__write)) bool  _write;

/// @brief Method CanRead, addr 0x60208f8, size 0x14, virtual false, abstract: false, final false
inline bool CanRead(int32_t  bits) ;

/// @brief Method Expand, addr 0x6020850, size 0xa8, virtual false, abstract: false, final false
inline void Expand() ;

/// @brief Method InternalReadByte, addr 0x6020a24, size 0xe8, virtual false, abstract: false, final false
inline uint8_t InternalReadByte(int32_t  bits) ;

/// @brief Method InternalWriteByte, addr 0x60209c8, size 0x3c, virtual false, abstract: false, final false
inline void InternalWriteByte(uint8_t  value, int32_t  bits) ;

static inline ::Fusion::Protocol::BitStream* New_ctor() ;

static inline ::Fusion::Protocol::BitStream* New_ctor(::ArrayW<uint8_t>  arr) ;

static inline ::Fusion::Protocol::BitStream* New_ctor(::ArrayW<uint8_t>  arr, int32_t  size) ;

/// @brief Method ReadBool, addr 0x6020a04, size 0x20, virtual false, abstract: false, final false
inline bool ReadBool() ;

/// @brief Method ReadByte, addr 0x6020b80, size 0x8, virtual false, abstract: false, final false
inline uint8_t ReadByte() ;

/// @brief Method ReadByte, addr 0x6020b48, size 0x4, virtual false, abstract: false, final false
inline uint8_t ReadByte(int32_t  bits) ;

/// @brief Method ReadByteArray, addr 0x60211e8, size 0x18, virtual false, abstract: false, final false
inline void ReadByteArray(::ArrayW<uint8_t>  to) ;

/// @brief Method ReadByteArray, addr 0x6021200, size 0x104, virtual false, abstract: false, final false
inline void ReadByteArray(::ArrayW<uint8_t>  to, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByteArrayLengthPrefixed, addr 0x6021458, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadByteArrayLengthPrefixed() ;

/// @brief Method ReadInt, addr 0x6020f60, size 0x4, virtual false, abstract: false, final false
inline int32_t ReadInt(int32_t  bits) ;

/// @brief Method ReadString, addr 0x6021584, size 0xf4, virtual false, abstract: false, final false
inline ::StringW ReadString(::System::Text::Encoding*  encoding) ;

/// @brief Method ReadUInt, addr 0x6020e0c, size 0x150, virtual false, abstract: false, final false
inline uint32_t ReadUInt(int32_t  bits) ;

/// @brief Method ReadULong, addr 0x6021030, size 0x34, virtual false, abstract: false, final false
inline uint64_t ReadULong() ;

/// @brief Method ReadULong, addr 0x6020fb0, size 0x50, virtual false, abstract: false, final false
inline uint64_t ReadULong(int32_t  bits) ;

/// @brief Method ReadUShort, addr 0x6020c68, size 0x38, virtual false, abstract: false, final false
inline uint16_t ReadUShort() ;

/// @brief Method ReadUShort, addr 0x6020c0c, size 0x54, virtual false, abstract: false, final false
inline uint16_t ReadUShort(int32_t  bits) ;

/// @brief Method Reset, addr 0x602090c, size 0x18, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x6020924, size 0x5c, virtual false, abstract: false, final false
inline void Reset(int32_t  byteSize) ;

/// @brief Method Serialize, addr 0x60219d4, size 0x130, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::ArrayW<uint8_t>>  array, ::by_ref<int32_t>  length) ;

/// @brief Method Serialize, addr 0x60218f4, size 0xe0, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::ArrayW<uint8_t>>  value) ;

/// @brief Method Serialize, addr 0x6021754, size 0x68, virtual false, abstract: false, final false
inline void Serialize(::by_ref<::StringW>  value) ;

/// @brief Method Serialize, addr 0x60218bc, size 0x8, virtual false, abstract: false, final false
inline void Serialize(::by_ref<int32_t>  value) ;

/// @brief Method Serialize, addr 0x60218c4, size 0x30, virtual false, abstract: false, final false
inline void Serialize(::by_ref<int32_t>  value, int32_t  bits) ;

/// @brief Method Serialize, addr 0x6021884, size 0x8, virtual false, abstract: false, final false
inline void Serialize(::by_ref<uint32_t>  value) ;

/// @brief Method Serialize, addr 0x602188c, size 0x30, virtual false, abstract: false, final false
inline void Serialize(::by_ref<uint32_t>  value, int32_t  bits) ;

/// @brief Method Serialize, addr 0x60217bc, size 0x70, virtual false, abstract: false, final false
inline void Serialize(::by_ref<uint64_t>  value) ;

/// @brief Method Serialize, addr 0x602182c, size 0x58, virtual false, abstract: false, final false
inline void Serialize(::by_ref<uint8_t>  value) ;

/// @brief Method SetBuffer, addr 0x602081c, size 0x34, virtual false, abstract: false, final false
inline void SetBuffer(::ArrayW<uint8_t>  arr, int32_t  size) ;

/// @brief Method WriteBool, addr 0x6020980, size 0x48, virtual false, abstract: false, final false
inline bool WriteBool(bool  value) ;

/// @brief Method WriteByte, addr 0x6020b4c, size 0x34, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteByte, addr 0x6020b0c, size 0x3c, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value, int32_t  bits) ;

/// @brief Method WriteByteArray, addr 0x6021064, size 0x18, virtual false, abstract: false, final false
inline void WriteByteArray(::ArrayW<uint8_t>  from) ;

/// @brief Method WriteByteArray, addr 0x602107c, size 0x16c, virtual false, abstract: false, final false
inline void WriteByteArray(::ArrayW<uint8_t>  from, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByteArrayLengthPrefixed, addr 0x6021304, size 0x154, virtual false, abstract: false, final false
inline void WriteByteArrayLengthPrefixed(::ArrayW<uint8_t>  array, int32_t  maxLength) ;

/// @brief Method WriteByteAt, addr 0x6021678, size 0xdc, virtual false, abstract: false, final false
static inline void WriteByteAt(::ArrayW<uint8_t>  data, int32_t  ptr, int32_t  bits, uint8_t  value) ;

/// @brief Method WriteInt, addr 0x6020f5c, size 0x4, virtual false, abstract: false, final false
inline void WriteInt(int32_t  value, int32_t  bits) ;

/// @brief Method WriteString, addr 0x6021508, size 0x7c, virtual false, abstract: false, final false
inline void WriteString(::StringW  value, ::System::Text::Encoding*  encoding) ;

/// @brief Method WriteUInt, addr 0x6020ca0, size 0x16c, virtual false, abstract: false, final false
inline void WriteUInt(uint32_t  value, int32_t  bits) ;

/// @brief Method WriteULong, addr 0x6021000, size 0x30, virtual false, abstract: false, final false
inline void WriteULong(uint64_t  value) ;

/// @brief Method WriteULong, addr 0x6020f64, size 0x4c, virtual false, abstract: false, final false
inline void WriteULong(uint64_t  value, int32_t  bits) ;

/// @brief Method WriteUShort, addr 0x6020c60, size 0x8, virtual false, abstract: false, final false
inline void WriteUShort(uint16_t  value) ;

/// @brief Method WriteUShort, addr 0x6020b88, size 0x84, virtual false, abstract: false, final false
inline void WriteUShort(uint16_t  value, int32_t  bits) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__ptr() const;

constexpr int32_t& __cordl_internal_get__ptr() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr bool const& __cordl_internal_get__write() const;

constexpr bool& __cordl_internal_get__write() ;

constexpr void __cordl_internal_set__data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__ptr(int32_t  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

constexpr void __cordl_internal_set__write(bool  value) ;

/// @brief Method .ctor, addr 0x6020738, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x602078c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  arr) ;

/// @brief Method .ctor, addr 0x60207d8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  arr, int32_t  size) ;

/// @brief Method get_BytesRequired, addr 0x6020698, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_BytesRequired() ;

/// @brief Method get_Data, addr 0x6020730, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Data() ;

/// @brief Method get_Overflowing, addr 0x60206f4, size 0x10, virtual false, abstract: false, final false
inline bool get_Overflowing() ;

/// @brief Method get_Position, addr 0x6020618, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Position() ;

/// @brief Method get_Reading, addr 0x6020714, size 0x10, virtual false, abstract: false, final false
inline bool get_Reading() ;

/// @brief Method get_Writing, addr 0x6020704, size 0x8, virtual false, abstract: false, final false
inline bool get_Writing() ;

/// @brief Method set_Position, addr 0x6020620, size 0x78, virtual false, abstract: false, final false
inline void set_Position(int32_t  value) ;

/// @brief Method set_Reading, addr 0x6020724, size 0xc, virtual false, abstract: false, final false
inline void set_Reading(bool  value) ;

/// @brief Method set_Writing, addr 0x602070c, size 0x8, virtual false, abstract: false, final false
inline void set_Writing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitStream(BitStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitStream(BitStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29311};

/// @brief Field _ptr, offset: 0x10, size: 0x4, def value: None
 int32_t  ____ptr;

/// @brief Field _size, offset: 0x14, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____data;

/// @brief Field _write, offset: 0x20, size: 0x1, def value: None
 bool  ____write;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::BitStream, ____ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::BitStream, ____size) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::BitStream, ____data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::BitStream, ____write) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::BitStream) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Protocol
