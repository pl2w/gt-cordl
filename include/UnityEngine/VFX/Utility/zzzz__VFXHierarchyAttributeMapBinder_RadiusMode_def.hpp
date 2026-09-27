#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXHierarchyAttributeMapBinder_RadiusMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXHierarchyAttributeMapBinder_RadiusMode)
// Forward declare root types
namespace GlobalNamespace {
struct VFXHierarchyAttributeMapBinder_RadiusMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode, "UnityEngine.VFX.Utility", "VFXHierarchyAttributeMapBinder/RadiusMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXHierarchyAttributeMapBinder/RadiusMode
struct CORDL_TYPE VFXHierarchyAttributeMapBinder_RadiusMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped
enum struct __VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x0),
__E_Interpolate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped () const noexcept {
return static_cast<__VFXHierarchyAttributeMapBinder_RadiusMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VFXHierarchyAttributeMapBinder_RadiusMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXHierarchyAttributeMapBinder_RadiusMode(int32_t  value__) noexcept;

/// @brief Field Fixed value: I32(0)
static ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode const Fixed;

/// @brief Field Interpolate value: I32(1)
static ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode const Interpolate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
