#pragma once
// IWYU pragma private; include "GorillaExtensions/GorillaMath_FloatIntUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaMath_FloatIntUnion)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaMath_FloatIntUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaMath_FloatIntUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMath_FloatIntUnion, "GorillaExtensions", "GorillaMath/FloatIntUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaExtensions.GorillaMath/FloatIntUnion
struct CORDL_TYPE GorillaMath_FloatIntUnion {
public:
// Declarations
/// @brief Field f, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_f, put=__cordl_internal_set_f)) float_t  f;

/// @brief Field tmp, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tmp, put=__cordl_internal_set_tmp)) int32_t  tmp;

constexpr float_t const& __cordl_internal_get_f() const;

constexpr float_t& __cordl_internal_get_f() ;

constexpr int32_t const& __cordl_internal_get_tmp() const;

constexpr int32_t& __cordl_internal_get_tmp() ;

constexpr void __cordl_internal_set_f(float_t  value) ;

constexpr void __cordl_internal_set_tmp(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaMath_FloatIntUnion() ;

// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tmp", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaMath_FloatIntUnion(float_t  f, int32_t  tmp) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___f_padding[0x0];
/// @brief Field f, offset: 0x0, size: 0x4, def value: None
 float_t  ___f;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___f_padding_forAlignment[0x0];
/// @brief Field f, offset: 0x0, size: 0x4, def value: None
 float_t  ___f_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___tmp_padding[0x0];
/// @brief Field tmp, offset: 0x0, size: 0x4, def value: None
 int32_t  ___tmp;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___tmp_padding_forAlignment[0x0];
/// @brief Field tmp, offset: 0x0, size: 0x4, def value: None
 int32_t  ___tmp_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaMath_FloatIntUnion) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
