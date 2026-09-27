#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractionUpdateOrder_UpdatePhase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionUpdateOrder_UpdatePhase)
// Forward declare root types
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder/UpdatePhase");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase
struct CORDL_TYPE XRInteractionUpdateOrder_UpdatePhase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRInteractionUpdateOrder_UpdatePhase_Unwrapped
enum struct __XRInteractionUpdateOrder_UpdatePhase_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x0),
__E_Dynamic = static_cast<int32_t>(0x1),
__E_Late = static_cast<int32_t>(0x2),
__E_OnBeforeRender = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRInteractionUpdateOrder_UpdatePhase_Unwrapped () const noexcept {
return static_cast<__XRInteractionUpdateOrder_UpdatePhase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionUpdateOrder_UpdatePhase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRInteractionUpdateOrder_UpdatePhase(int32_t  value__) noexcept;

/// @brief Field Dynamic value: I32(1)
static ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase const Dynamic;

/// @brief Field Fixed value: I32(0)
static ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase const Fixed;

/// @brief Field Late value: I32(2)
static ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase const Late;

/// @brief Field OnBeforeRender value: I32(3)
static ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase const OnBeforeRender;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
