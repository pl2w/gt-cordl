#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/CurveInteractionCaster_QuerySnapVolumeInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveInteractionCaster_QuerySnapVolumeInteraction)
// Forward declare root types
namespace GlobalNamespace {
struct CurveInteractionCaster_QuerySnapVolumeInteraction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "CurveInteractionCaster/QuerySnapVolumeInteraction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster/QuerySnapVolumeInteraction
struct CORDL_TYPE CurveInteractionCaster_QuerySnapVolumeInteraction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CurveInteractionCaster_QuerySnapVolumeInteraction_Unwrapped
enum struct __CurveInteractionCaster_QuerySnapVolumeInteraction_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Collide = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CurveInteractionCaster_QuerySnapVolumeInteraction_Unwrapped () const noexcept {
return static_cast<__CurveInteractionCaster_QuerySnapVolumeInteraction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CurveInteractionCaster_QuerySnapVolumeInteraction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CurveInteractionCaster_QuerySnapVolumeInteraction(int32_t  value__) noexcept;

/// @brief Field Collide value: I32(1)
static ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction const Collide;

/// @brief Field Ignore value: I32(0)
static ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction const Ignore;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
