#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRGazeInteractor_GazeAssistanceCalculation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGazeInteractor_GazeAssistanceCalculation)
// Forward declare root types
namespace GlobalNamespace {
struct XRGazeInteractor_GazeAssistanceCalculation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRGazeInteractor/GazeAssistanceCalculation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor/GazeAssistanceCalculation
struct CORDL_TYPE XRGazeInteractor_GazeAssistanceCalculation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRGazeInteractor_GazeAssistanceCalculation_Unwrapped
enum struct __XRGazeInteractor_GazeAssistanceCalculation_Unwrapped : int32_t {
__E_FixedSize = static_cast<int32_t>(0x0),
__E_ColliderSize = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRGazeInteractor_GazeAssistanceCalculation_Unwrapped () const noexcept {
return static_cast<__XRGazeInteractor_GazeAssistanceCalculation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRGazeInteractor_GazeAssistanceCalculation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRGazeInteractor_GazeAssistanceCalculation(int32_t  value__) noexcept;

/// @brief Field ColliderSize value: I32(1)
static ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation const ColliderSize;

/// @brief Field FixedSize value: I32(0)
static ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation const FixedSize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11453};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
