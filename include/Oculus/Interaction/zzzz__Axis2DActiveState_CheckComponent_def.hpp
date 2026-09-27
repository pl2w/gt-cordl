#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis2DActiveState_CheckComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis2DActiveState_CheckComponent)
// Forward declare root types
namespace GlobalNamespace {
struct Axis2DActiveState_CheckComponent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Axis2DActiveState_CheckComponent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Axis2DActiveState_CheckComponent, "Oculus.Interaction", "Axis2DActiveState/CheckComponent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Axis2DActiveState/CheckComponent
struct CORDL_TYPE Axis2DActiveState_CheckComponent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Axis2DActiveState_CheckComponent_Unwrapped
enum struct __Axis2DActiveState_CheckComponent_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axis2DActiveState_CheckComponent_Unwrapped () const noexcept {
return static_cast<__Axis2DActiveState_CheckComponent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Axis2DActiveState_CheckComponent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Axis2DActiveState_CheckComponent(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::GlobalNamespace::Axis2DActiveState_CheckComponent const All;

/// @brief Field Any value: I32(0)
static ::GlobalNamespace::Axis2DActiveState_CheckComponent const Any;

/// @brief Field X value: I32(1)
static ::GlobalNamespace::Axis2DActiveState_CheckComponent const X;

/// @brief Field Y value: I32(2)
static ::GlobalNamespace::Axis2DActiveState_CheckComponent const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Axis2DActiveState_CheckComponent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Axis2DActiveState_CheckComponent) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
