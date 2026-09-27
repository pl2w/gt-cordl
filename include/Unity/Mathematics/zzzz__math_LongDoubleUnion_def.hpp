#pragma once
// IWYU pragma private; include "Unity/Mathematics/math_LongDoubleUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(math_LongDoubleUnion)
// Forward declare root types
namespace GlobalNamespace {
struct math_LongDoubleUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::math_LongDoubleUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::math_LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Mathematics.math/LongDoubleUnion
struct CORDL_TYPE math_LongDoubleUnion {
public:
// Declarations
/// @brief Field doubleValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleValue, put=__cordl_internal_set_doubleValue)) double_t  doubleValue;

/// @brief Field longValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_longValue, put=__cordl_internal_set_longValue)) int64_t  longValue;

constexpr double_t const& __cordl_internal_get_doubleValue() const;

constexpr double_t& __cordl_internal_get_doubleValue() ;

constexpr int64_t const& __cordl_internal_get_longValue() const;

constexpr int64_t& __cordl_internal_get_longValue() ;

constexpr void __cordl_internal_set_doubleValue(double_t  value) ;

constexpr void __cordl_internal_set_longValue(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr math_LongDoubleUnion() ;

// Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr math_LongDoubleUnion(int64_t  longValue, double_t  doubleValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___longValue_padding[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___longValue_padding_forAlignment[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___doubleValue_padding[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___doubleValue_padding_forAlignment[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::math_LongDoubleUnion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
