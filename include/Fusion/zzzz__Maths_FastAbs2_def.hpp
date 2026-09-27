#pragma once
// IWYU pragma private; include "Fusion/Maths_FastAbs2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Maths_FastAbs2)
// Forward declare root types
namespace GlobalNamespace {
struct Maths_FastAbs2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Maths_FastAbs2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Maths_FastAbs2, "Fusion", "Maths/FastAbs2");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Maths/FastAbs2
struct CORDL_TYPE Maths_FastAbs2 {
public:
// Declarations
/// @brief Field single, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_single, put=__cordl_internal_set_single)) float_t  single;

/// @brief Field uint32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_uint32, put=__cordl_internal_set_uint32)) uint32_t  uint32;

constexpr float_t const& __cordl_internal_get_single() const;

constexpr float_t& __cordl_internal_get_single() ;

constexpr uint32_t const& __cordl_internal_get_uint32() const;

constexpr uint32_t& __cordl_internal_get_uint32() ;

constexpr void __cordl_internal_set_single(float_t  value) ;

constexpr void __cordl_internal_set_uint32(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Maths_FastAbs2() ;

// Ctor Parameters [CppParam { name: "uint32", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "single", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Maths_FastAbs2(uint32_t  uint32, float_t  single) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uint32_padding[0x0];
/// @brief Field uint32, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uint32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uint32_padding_forAlignment[0x0];
/// @brief Field uint32, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uint32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___single_padding[0x0];
/// @brief Field single, offset: 0x0, size: 0x4, def value: None
 float_t  ___single;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___single_padding_forAlignment[0x0];
/// @brief Field single, offset: 0x0, size: 0x4, def value: None
 float_t  ___single_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Maths_FastAbs2) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
