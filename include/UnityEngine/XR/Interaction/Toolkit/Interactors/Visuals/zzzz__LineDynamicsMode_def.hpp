#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/LineDynamicsMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineDynamicsMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
struct LineDynamicsMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "LineDynamicsMode");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.LineDynamicsMode
struct CORDL_TYPE LineDynamicsMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LineDynamicsMode_Unwrapped
enum struct __LineDynamicsMode_Unwrapped : int32_t {
__E_Traditional = static_cast<int32_t>(0x0),
__E_RetractOnHitLoss = static_cast<int32_t>(0x1),
__E_ExpandFromHitPoint = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LineDynamicsMode_Unwrapped () const noexcept {
return static_cast<__LineDynamicsMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LineDynamicsMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LineDynamicsMode(int32_t  value__) noexcept;

/// @brief Field ExpandFromHitPoint value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode const ExpandFromHitPoint;

/// @brief Field RetractOnHitLoss value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode const RetractOnHitLoss;

/// @brief Field Traditional value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode const Traditional;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
