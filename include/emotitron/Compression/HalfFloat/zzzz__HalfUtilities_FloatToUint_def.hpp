#pragma once
// IWYU pragma private; include "emotitron/Compression/HalfFloat/HalfUtilities_FloatToUint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HalfUtilities_FloatToUint)
// Forward declare root types
namespace GlobalNamespace {
struct HalfUtilities_FloatToUint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HalfUtilities_FloatToUint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalfUtilities_FloatToUint, "emotitron.Compression.HalfFloat", "HalfUtilities/FloatToUint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: emotitron.Compression.HalfFloat.HalfUtilities/FloatToUint
struct CORDL_TYPE HalfUtilities_FloatToUint {
public:
// Declarations
/// @brief Field floatValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_floatValue, put=__cordl_internal_set_floatValue)) float_t  floatValue;

/// @brief Field uintValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_uintValue, put=__cordl_internal_set_uintValue)) uint32_t  uintValue;

constexpr float_t const& __cordl_internal_get_floatValue() const;

constexpr float_t& __cordl_internal_get_floatValue() ;

constexpr uint32_t const& __cordl_internal_get_uintValue() const;

constexpr uint32_t& __cordl_internal_get_uintValue() ;

constexpr void __cordl_internal_set_floatValue(float_t  value) ;

constexpr void __cordl_internal_set_uintValue(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HalfUtilities_FloatToUint() ;

// Ctor Parameters [CppParam { name: "uintValue", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HalfUtilities_FloatToUint(uint32_t  uintValue, float_t  floatValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uintValue_padding[0x0];
/// @brief Field uintValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uintValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uintValue_padding_forAlignment[0x0];
/// @brief Field uintValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uintValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___floatValue_padding[0x0];
/// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
 float_t  ___floatValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___floatValue_padding_forAlignment[0x0];
/// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
 float_t  ___floatValue_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HalfUtilities_FloatToUint) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
