#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor_QuerySnapVolumeInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRRayInteractor_QuerySnapVolumeInteraction)
// Forward declare root types
namespace GlobalNamespace {
struct XRRayInteractor_QuerySnapVolumeInteraction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor/QuerySnapVolumeInteraction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/QuerySnapVolumeInteraction
struct CORDL_TYPE XRRayInteractor_QuerySnapVolumeInteraction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRRayInteractor_QuerySnapVolumeInteraction_Unwrapped
enum struct __XRRayInteractor_QuerySnapVolumeInteraction_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Collide = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRRayInteractor_QuerySnapVolumeInteraction_Unwrapped () const noexcept {
return static_cast<__XRRayInteractor_QuerySnapVolumeInteraction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor_QuerySnapVolumeInteraction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRRayInteractor_QuerySnapVolumeInteraction(int32_t  value__) noexcept;

/// @brief Field Collide value: I32(1)
static ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction const Collide;

/// @brief Field Ignore value: I32(0)
static ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction const Ignore;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11462};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
