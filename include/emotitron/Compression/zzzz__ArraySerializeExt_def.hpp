#pragma once
// IWYU pragma private; include "emotitron/Compression/ArraySerializeExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySerializeExt)
// Forward declare root types
namespace emotitron::Compression {
class ArraySerializeExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::ArraySerializeExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::ArraySerializeExt*, "emotitron.Compression", "ArraySerializeExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.ArraySerializeExt
class CORDL_TYPE ArraySerializeExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Append, addr 0x5dd47d0, size 0x84, virtual false, abstract: false, final false
static inline void Append(::ArrayW<uint32_t>  buffer, uint32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Append, addr 0x5dd3724, size 0x9c, virtual false, abstract: false, final false
static inline void Append(::ArrayW<uint32_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Append, addr 0x5dd3874, size 0x84, virtual false, abstract: false, final false
static inline void Append(::ArrayW<uint64_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Append, addr 0x5dd35d0, size 0xa0, virtual false, abstract: false, final false
static inline void Append(::ArrayW<uint8_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method IndexAsUInt32, addr 0x5dd4b40, size 0x3c, virtual false, abstract: false, final false
static inline uint32_t IndexAsUInt32(::ArrayW<uint64_t>  buffer, int32_t  index) ;

/// [Extension]
/// @brief Method IndexAsUInt32, addr 0x5dd4ac8, size 0x78, virtual false, abstract: false, final false
static inline uint32_t IndexAsUInt32(::ArrayW<uint8_t>  buffer, int32_t  index) ;

/// [Extension]
/// @brief Method IndexAsUInt64, addr 0x5dd4a80, size 0x48, virtual false, abstract: false, final false
static inline uint64_t IndexAsUInt64(::ArrayW<uint32_t>  buffer, int32_t  index) ;

/// [Extension]
/// @brief Method IndexAsUInt64, addr 0x5dd49a4, size 0xdc, virtual false, abstract: false, final false
static inline uint64_t IndexAsUInt64(::ArrayW<uint8_t>  buffer, int32_t  index) ;

/// [Extension]
/// @brief Method IndexAsUInt8, addr 0x5dd4bb4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t IndexAsUInt8(::ArrayW<uint32_t>  buffer, int32_t  index) ;

/// [Extension]
/// @brief Method IndexAsUInt8, addr 0x5dd4b7c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t IndexAsUInt8(::ArrayW<uint64_t>  buffer, int32_t  index) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd2a14, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t Read(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd28d4, size 0xa4, virtual false, abstract: false, final false
static inline uint64_t Read(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd2b4c, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t Read(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadBool, addr 0x5dd4930, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadBool(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadBool, addr 0x5dd4914, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadBool(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadBool, addr 0x5dd494c, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadBool(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadByte, addr 0x5dd48f4, size 0x10, virtual false, abstract: false, final false
static inline uint8_t ReadByte(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadByte, addr 0x5dd4904, size 0x10, virtual false, abstract: false, final false
static inline uint8_t ReadByte(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadByte, addr 0x5dd48e4, size 0x10, virtual false, abstract: false, final false
static inline uint8_t ReadByte(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadChar, addr 0x5dd497c, size 0x14, virtual false, abstract: false, final false
static inline char16_t ReadChar(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadChar, addr 0x5dd4968, size 0x14, virtual false, abstract: false, final false
static inline char16_t ReadChar(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadChar, addr 0x5dd4990, size 0x14, virtual false, abstract: false, final false
static inline char16_t ReadChar(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadFloat, addr 0x5dd47b4, size 0x18, virtual false, abstract: false, final false
static inline float_t ReadFloat(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd4150, size 0x80, virtual false, abstract: false, final false
static inline void ReadOutSafe(::ArrayW<uint64_t>  source, int32_t  srcStartPos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd4010, size 0x98, virtual false, abstract: false, final false
static inline void ReadOutSafe(::ArrayW<uint64_t>  source, int32_t  srcStartPos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd3ee8, size 0x80, virtual false, abstract: false, final false
static inline void ReadOutSafe(::ArrayW<uint8_t>  source, int32_t  srcStartPos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd3dc0, size 0x80, virtual false, abstract: false, final false
static inline void ReadOutSafe(::ArrayW<uint8_t>  source, int32_t  srcStartPos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd470c, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSigned(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd4728, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSigned(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd46f0, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSigned(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned64, addr 0x5dd4760, size 0x1c, virtual false, abstract: false, final false
static inline int64_t ReadSigned64(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned64, addr 0x5dd477c, size 0x1c, virtual false, abstract: false, final false
static inline int64_t ReadSigned64(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned64, addr 0x5dd4744, size 0x1c, virtual false, abstract: false, final false
static inline int64_t ReadSigned64(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadUInt16, addr 0x5dd48c4, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ReadUInt16(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadUInt16, addr 0x5dd48d4, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ReadUInt16(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadUInt16, addr 0x5dd48b4, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ReadUInt16(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadUInt32, addr 0x5dd4894, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ReadUInt32(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadUInt32, addr 0x5dd48a4, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ReadUInt32(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadUInt32, addr 0x5dd4884, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ReadUInt32(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Just use Read(), it return a ulong already.")]
/// @brief Method ReadUInt64, addr 0x5dd487c, size 0x4, virtual false, abstract: false, final false
static inline uint64_t ReadUInt64(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Just use Read(), it return a ulong already.")]
/// @brief Method ReadUInt64, addr 0x5dd4880, size 0x4, virtual false, abstract: false, final false
static inline uint64_t ReadUInt64(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Just use Read(), it return a ulong already.")]
/// @brief Method ReadUInt64, addr 0x5dd4878, size 0x4, virtual false, abstract: false, final false
static inline uint64_t ReadUInt64(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd24bc, size 0xcc, virtual false, abstract: false, final false
static inline void Write(::ArrayW<uint32_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd2344, size 0xc8, virtual false, abstract: false, final false
static inline void Write(::ArrayW<uint64_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd262c, size 0xf4, virtual false, abstract: false, final false
static inline void Write(::ArrayW<uint8_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteBool, addr 0x5dd4860, size 0xc, virtual false, abstract: false, final false
static inline void WriteBool(::ArrayW<uint32_t>  buffer, bool  b, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WriteBool, addr 0x5dd4854, size 0xc, virtual false, abstract: false, final false
static inline void WriteBool(::ArrayW<uint64_t>  buffer, bool  b, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WriteBool, addr 0x5dd486c, size 0xc, virtual false, abstract: false, final false
static inline void WriteBool(::ArrayW<uint8_t>  buffer, bool  b, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WriteFloat, addr 0x5dd4798, size 0x14, virtual false, abstract: false, final false
static inline void WriteFloat(::ArrayW<uint8_t>  buffer, float_t  value, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd46b4, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(::ArrayW<uint32_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd46d8, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(::ArrayW<uint32_t>  buffer, int64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd46c0, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(::ArrayW<uint64_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd46e4, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(::ArrayW<uint64_t>  buffer, int64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd46a8, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(::ArrayW<uint8_t>  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd46cc, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(::ArrayW<uint8_t>  buffer, int64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd433c, size 0x144, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint16_t>  buffer) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd42f0, size 0x4c, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint16_t>  buffer, int32_t  startByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd42a8, size 0x48, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint16_t>  buffer, int32_t  startByte, int32_t  endByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd4514, size 0xb8, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint32_t>  buffer) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd44c8, size 0x4c, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint32_t>  buffer, int32_t  startByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd4480, size 0x48, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint32_t>  buffer, int32_t  startByte, int32_t  endByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd465c, size 0x4c, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint64_t>  buffer) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd460c, size 0x50, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint64_t>  buffer, int32_t  startByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd45cc, size 0x40, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint64_t>  buffer, int32_t  startByte, int32_t  endByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd4260, size 0x48, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint8_t>  buffer) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd4210, size 0x50, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint8_t>  buffer, int32_t  startByte) ;

/// [Extension]
/// @brief Method Zero, addr 0x5dd41d0, size 0x40, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint8_t>  buffer, int32_t  startByte, int32_t  endByte) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySerializeExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySerializeExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySerializeExt(ArraySerializeExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySerializeExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySerializeExt(ArraySerializeExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5087};

/// @brief Field bufferOverrunMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  bufferOverrunMsg{u"Byte buffer length exceeded by write or read. Dataloss will occur. Likely due to a Read/Write mismatch."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::ArraySerializeExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
