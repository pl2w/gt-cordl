#pragma once
// IWYU pragma private; include "emotitron/Compression/PrimitiveSerializeExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveSerializeExt)
namespace emotitron::Compression::Utilities {
struct ByteConverter;
}
// Forward declare root types
namespace emotitron::Compression {
class PrimitiveSerializeExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::PrimitiveSerializeExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::PrimitiveSerializeExt*, "emotitron.Compression", "PrimitiveSerializeExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.PrimitiveSerializeExt
class CORDL_TYPE PrimitiveSerializeExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method Extract, addr 0x5dd7890, size 0x2c, virtual false, abstract: false, final false
static inline uint32_t Extract(uint16_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method Extract, addr 0x5dd7858, size 0x24, virtual false, abstract: false, final false
static inline uint32_t Extract(uint32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Always include the [ref int bitposition] argument. Extracting from position 0 would be better handled with a mask operation.")]
/// @brief Method Extract, addr 0x5dd787c, size 0x14, virtual false, abstract: false, final false
static inline uint32_t Extract(uint32_t  value, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method Extract, addr 0x5dd78bc, size 0x2c, virtual false, abstract: false, final false
static inline uint32_t Extract(uint8_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method Extract, addr 0x5dd7820, size 0x24, virtual false, abstract: false, final false
static inline uint64_t Extract(uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Always include the [ref int bitposition] argument. Extracting from position 0 would be better handled with a mask operation.")]
/// @brief Method Extract, addr 0x5dd7844, size 0x14, virtual false, abstract: false, final false
static inline uint64_t Extract(uint64_t  value, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Argument order changed")]
/// @brief Method Extract, addr 0x5dd781c, size 0x4, virtual false, abstract: false, final false
static inline uint64_t Extract(uint64_t  value, int32_t  bits, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// [Obsolete("Always include the [ref int bitposition] argument. Extracting from position 0 would be better handled with a mask operation.")]
/// @brief Method Extract, addr 0x5dd78e8, size 0x18, virtual false, abstract: false, final false
static inline uint8_t Extract(uint8_t  value, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method ExtractFloat, addr 0x5dd7948, size 0x18, virtual false, abstract: false, final false
static inline float_t ExtractFloat(uint64_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method ExtractHalfFloat, addr 0x5dd7d5c, size 0x6c, virtual false, abstract: false, final false
static inline float_t ExtractHalfFloat(uint32_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// [Obsolete("Use Read instead.")]
/// @brief Method ExtractHalfFloat, addr 0x5dd7c84, size 0x6c, virtual false, abstract: false, final false
static inline float_t ExtractHalfFloat(uint64_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7900, size 0x30, virtual false, abstract: false, final false
static inline void Inject(float_t  f, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6760, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(::emotitron::Compression::Utilities::ByteConverter  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd66f0, size 0x38, virtual false, abstract: false, final false
static inline void Inject(::emotitron::Compression::Utilities::ByteConverter  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6680, size 0x38, virtual false, abstract: false, final false
static inline void Inject(::emotitron::Compression::Utilities::ByteConverter  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd67d8, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(::emotitron::Compression::Utilities::ByteConverter  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd70a8, size 0x30, virtual false, abstract: false, final false
static inline void Inject(bool  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7078, size 0x30, virtual false, abstract: false, final false
static inline void Inject(bool  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7048, size 0x30, virtual false, abstract: false, final false
static inline void Inject(bool  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd70d8, size 0x2c, virtual false, abstract: false, final false
static inline void Inject(bool  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7604, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7640, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint16_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd73e4, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7420, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint32_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd71c8, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7204, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint64_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7744, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7780, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, ::by_ref<uint8_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6c28, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd75d4, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint16_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6a74, size 0x38, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd73b8, size 0x2c, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint32_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd68c8, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7198, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint64_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6e2c, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7714, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, ::by_ref<uint8_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd679c, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd75a4, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint16_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6728, size 0x38, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd738c, size 0x2c, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint32_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Argument order changed")]
/// @brief Method Inject, addr 0x5dd7dc8, size 0x38, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint32_t>  buffer, int32_t  bits, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd66b8, size 0x38, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd716c, size 0x2c, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint64_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// [Obsolete("Argument order changed")]
/// @brief Method Inject, addr 0x5dd7e00, size 0x38, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint64_t>  buffer, int32_t  bits, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd6814, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd76e4, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, ::by_ref<uint8_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7670, size 0x40, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd76b0, size 0x34, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint16_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7450, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd748c, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint32_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7234, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd7270, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint64_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd77b0, size 0x3c, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd77ec, size 0x30, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, ::by_ref<uint8_t>  buffer, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectAsHalfFloat, addr 0x5dd7ab0, size 0x9c, virtual false, abstract: false, final false
static inline uint16_t InjectAsHalfFloat(float_t  f, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method InjectAsHalfFloat, addr 0x5dd7960, size 0x9c, virtual false, abstract: false, final false
static inline uint16_t InjectAsHalfFloat(float_t  f, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6ca8, size 0x48, virtual false, abstract: false, final false
static inline void InjectSigned(int16_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6aec, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int16_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6944, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int16_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6eac, size 0x48, virtual false, abstract: false, final false
static inline void InjectSigned(int16_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6c64, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int32_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6aac, size 0x40, virtual false, abstract: false, final false
static inline void InjectSigned(int32_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6904, size 0x40, virtual false, abstract: false, final false
static inline void InjectSigned(int32_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6e68, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int32_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6be4, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int64_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6a34, size 0x40, virtual false, abstract: false, final false
static inline void InjectSigned(int64_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6888, size 0x40, virtual false, abstract: false, final false
static inline void InjectSigned(int64_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6de8, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int64_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6cf0, size 0x48, virtual false, abstract: false, final false
static inline void InjectSigned(int8_t  value, ::by_ref<uint16_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6b30, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int8_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6988, size 0x44, virtual false, abstract: false, final false
static inline void InjectSigned(int8_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd6ef4, size 0x48, virtual false, abstract: false, final false
static inline void InjectSigned(int8_t  value, ::by_ref<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd752c, size 0x3c, virtual false, abstract: false, final false
static inline void InjectUnsigned(int16_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd7314, size 0x3c, virtual false, abstract: false, final false
static inline void InjectUnsigned(int16_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd74f4, size 0x38, virtual false, abstract: false, final false
static inline void InjectUnsigned(int32_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd72d8, size 0x3c, virtual false, abstract: false, final false
static inline void InjectUnsigned(int32_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd74bc, size 0x38, virtual false, abstract: false, final false
static inline void InjectUnsigned(int64_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd72a0, size 0x38, virtual false, abstract: false, final false
static inline void InjectUnsigned(int64_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd7568, size 0x3c, virtual false, abstract: false, final false
static inline void InjectUnsigned(int8_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd7350, size 0x3c, virtual false, abstract: false, final false
static inline void InjectUnsigned(int8_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd60a8, size 0x2c, virtual false, abstract: false, final false
static inline uint32_t Read(uint16_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd5fe0, size 0x24, virtual false, abstract: false, final false
static inline uint32_t Read(uint32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd6f74, size 0x2c, virtual false, abstract: false, final false
static inline uint32_t Read(uint8_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd5f20, size 0x24, virtual false, abstract: false, final false
static inline uint64_t Read(uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadBool, addr 0x5dd7134, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadBool(uint16_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadBool, addr 0x5dd7104, size 0x18, virtual false, abstract: false, final false
static inline bool ReadBool(uint64_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadBool, addr 0x5dd7150, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadBool(uint8_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadFloat, addr 0x5dd7930, size 0x18, virtual false, abstract: false, final false
static inline float_t ReadFloat(uint64_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadHalfFloat, addr 0x5dd7cf0, size 0x6c, virtual false, abstract: false, final false
static inline float_t ReadHalfFloat(uint32_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadHalfFloat, addr 0x5dd7b4c, size 0x6c, virtual false, abstract: false, final false
static inline float_t ReadHalfFloat(uint64_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd6d38, size 0x38, virtual false, abstract: false, final false
static inline int32_t ReadSigned(uint16_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd6b74, size 0x30, virtual false, abstract: false, final false
static inline int32_t ReadSigned(uint32_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd69cc, size 0x30, virtual false, abstract: false, final false
static inline int32_t ReadSigned(uint64_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSigned, addr 0x5dd6f3c, size 0x38, virtual false, abstract: false, final false
static inline int32_t ReadSigned(uint8_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadtBool, addr 0x5dd711c, size 0x18, virtual false, abstract: false, final false
static inline bool ReadtBool(uint32_t  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd5e4c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t Write(uint16_t  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd5d44, size 0x30, virtual false, abstract: false, final false
static inline uint32_t Write(uint32_t  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd5c44, size 0x30, virtual false, abstract: false, final false
static inline uint64_t Write(uint64_t  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd6db0, size 0x38, virtual false, abstract: false, final false
static inline uint8_t Write(uint8_t  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd6ba4, size 0x40, virtual false, abstract: false, final false
static inline uint16_t WriteSigned(uint16_t  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd69fc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t WriteSigned(uint32_t  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd6850, size 0x38, virtual false, abstract: false, final false
static inline uint64_t WriteSigned(uint64_t  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSigned, addr 0x5dd6d70, size 0x40, virtual false, abstract: false, final false
static inline uint8_t WriteSigned(uint8_t  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritetBool, addr 0x5dd6ff0, size 0x2c, virtual false, abstract: false, final false
static inline uint16_t WritetBool(uint16_t  buffer, bool  value, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WritetBool, addr 0x5dd6fc8, size 0x28, virtual false, abstract: false, final false
static inline uint32_t WritetBool(uint32_t  buffer, bool  value, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WritetBool, addr 0x5dd6fa0, size 0x28, virtual false, abstract: false, final false
static inline uint64_t WritetBool(uint64_t  buffer, bool  value, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method WritetBool, addr 0x5dd701c, size 0x2c, virtual false, abstract: false, final false
static inline uint8_t WritetBool(uint8_t  buffer, bool  value, ::by_ref<int32_t>  bitposition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitiveSerializeExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveSerializeExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitiveSerializeExt(PrimitiveSerializeExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveSerializeExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitiveSerializeExt(PrimitiveSerializeExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5094};

/// @brief Field overrunerror offset 0xffffffff size 0x8
static constexpr ::ConstString  overrunerror{u"Write buffer overrun. writepos + bits exceeds target length. Data loss will occur."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::PrimitiveSerializeExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
