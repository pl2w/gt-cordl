#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor_RotateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRRayInteractor_RotateMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRRayInteractor_RotateMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRRayInteractor_RotateMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRRayInteractor_RotateMode, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor/RotateMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/RotateMode
struct CORDL_TYPE XRRayInteractor_RotateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRRayInteractor_RotateMode_Unwrapped
enum struct __XRRayInteractor_RotateMode_Unwrapped : int32_t {
__E_RotateOverTime = static_cast<int32_t>(0x0),
__E_MatchDirection = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRRayInteractor_RotateMode_Unwrapped () const noexcept {
return static_cast<__XRRayInteractor_RotateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor_RotateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRRayInteractor_RotateMode(int32_t  value__) noexcept;

/// @brief Field MatchDirection value: I32(1)
static ::GlobalNamespace::XRRayInteractor_RotateMode const MatchDirection;

/// @brief Field RotateOverTime value: I32(0)
static ::GlobalNamespace::XRRayInteractor_RotateMode const RotateOverTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRRayInteractor_RotateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRRayInteractor_RotateMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
