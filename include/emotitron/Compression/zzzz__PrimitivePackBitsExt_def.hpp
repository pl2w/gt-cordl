#pragma once
// IWYU pragma private; include "emotitron/Compression/PrimitivePackBitsExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitivePackBitsExt)
// Forward declare root types
namespace emotitron::Compression {
class PrimitivePackBitsExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::PrimitivePackBitsExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::PrimitivePackBitsExt*, "emotitron.Compression", "PrimitivePackBitsExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.PrimitivePackBitsExt
class CORDL_TYPE PrimitivePackBitsExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ReadPackedBits, addr 0x5dd6004, size 0xa4, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(uint16_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBits, addr 0x5dd5f44, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(uint32_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBits, addr 0x5dd5e84, size 0x9c, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBits(uint64_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits, addr 0x5dd611c, size 0x20, virtual false, abstract: false, final false
static inline int16_t ReadSignedPackedBits(uint32_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits, addr 0x5dd6100, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBits(uint64_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBits, addr 0x5dd613c, size 0x20, virtual false, abstract: false, final false
static inline int8_t ReadSignedPackedBits(uint16_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBits, addr 0x5dd5d74, size 0xd8, virtual false, abstract: false, final false
static inline uint16_t WritePackedBits(uint16_t  buffer, uint8_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBits, addr 0x5dd5c74, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t WritePackedBits(uint32_t  buffer, uint16_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBits, addr 0x5dd5b70, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t WritePackedBits(uint64_t  buffer, uint32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits, addr 0x5dd60f0, size 0x10, virtual false, abstract: false, final false
static inline uint16_t WriteSignedPackedBits(uint16_t  buffer, int8_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits, addr 0x5dd60e0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t WriteSignedPackedBits(uint32_t  buffer, int16_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBits, addr 0x5dd60d4, size 0xc, virtual false, abstract: false, final false
static inline uint64_t WriteSignedPackedBits(uint64_t  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitivePackBitsExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitivePackBitsExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitivePackBitsExt(PrimitivePackBitsExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitivePackBitsExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitivePackBitsExt(PrimitivePackBitsExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5092};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::PrimitivePackBitsExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
