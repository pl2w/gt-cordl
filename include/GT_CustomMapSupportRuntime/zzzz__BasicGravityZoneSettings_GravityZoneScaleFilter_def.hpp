#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/BasicGravityZoneSettings_GravityZoneScaleFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGravityZoneSettings_GravityZoneScaleFilter)
// Forward declare root types
namespace GlobalNamespace {
struct BasicGravityZoneSettings_GravityZoneScaleFilter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter, "GT_CustomMapSupportRuntime", "BasicGravityZoneSettings/GravityZoneScaleFilter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.BasicGravityZoneSettings/GravityZoneScaleFilter
struct CORDL_TYPE BasicGravityZoneSettings_GravityZoneScaleFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BasicGravityZoneSettings_GravityZoneScaleFilter_Unwrapped
enum struct __BasicGravityZoneSettings_GravityZoneScaleFilter_Unwrapped : int32_t {
__E_Anyone = static_cast<int32_t>(0x0),
__E_SmallOnly = static_cast<int32_t>(0x1),
__E_NotSmall = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BasicGravityZoneSettings_GravityZoneScaleFilter_Unwrapped () const noexcept {
return static_cast<__BasicGravityZoneSettings_GravityZoneScaleFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BasicGravityZoneSettings_GravityZoneScaleFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BasicGravityZoneSettings_GravityZoneScaleFilter(int32_t  value__) noexcept;

/// @brief Field Anyone value: I32(0)
static ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter const Anyone;

/// @brief Field NotSmall value: I32(2)
static ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter const NotSmall;

/// @brief Field SmallOnly value: I32(1)
static ::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter const SmallOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicGravityZoneSettings_GravityZoneScaleFilter) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
