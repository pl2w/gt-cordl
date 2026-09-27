#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRBaseInteractable_DistanceCalculationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBaseInteractable_DistanceCalculationMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRBaseInteractable_DistanceCalculationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRBaseInteractable/DistanceCalculationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable/DistanceCalculationMode
struct CORDL_TYPE XRBaseInteractable_DistanceCalculationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRBaseInteractable_DistanceCalculationMode_Unwrapped
enum struct __XRBaseInteractable_DistanceCalculationMode_Unwrapped : int32_t {
__E_TransformPosition = static_cast<int32_t>(0x0),
__E_ColliderPosition = static_cast<int32_t>(0x1),
__E_ColliderVolume = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRBaseInteractable_DistanceCalculationMode_Unwrapped () const noexcept {
return static_cast<__XRBaseInteractable_DistanceCalculationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInteractable_DistanceCalculationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRBaseInteractable_DistanceCalculationMode(int32_t  value__) noexcept;

/// @brief Field ColliderPosition value: I32(1)
static ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode const ColliderPosition;

/// @brief Field ColliderVolume value: I32(2)
static ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode const ColliderVolume;

/// @brief Field TransformPosition value: I32(0)
static ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode const TransformPosition;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11519};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
