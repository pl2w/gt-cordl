#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController_Event.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_ClipType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrackController_Event)
namespace GlobalNamespace {
struct Event_VisualEffectControlTrackController_ClipType;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Event;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlTrackController_Event);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlTrackController_Event, "UnityEngine.VFX", "VisualEffectControlTrackController/Event");
// Dependencies UnityEngine.VFX.VisualEffectControlTrackController::Event::ClipType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Event
struct CORDL_TYPE VisualEffectControlTrackController_Event {
public:
// Declarations
using ClipType = ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType;

// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController_Event() ;

// Ctor Parameters [CppParam { name: "nameId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attribute", ty: "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "clipIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "clipType", ty: "::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlTrackController_Event(int32_t  nameId, ::UnityEngine::VFX::VFXEventAttribute*  attribute, double_t  time, int32_t  clipIndex, ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType  clipType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30035};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field nameId, offset: 0x0, size: 0x4, def value: None
 int32_t  nameId;

/// @brief Field attribute, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::VFX::VFXEventAttribute*  attribute;

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 double_t  time;

/// @brief Field clipIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  clipIndex;

/// @brief Field clipType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType  clipType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Event, nameId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Event, attribute) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Event, time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Event, clipIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlTrackController_Event, clipType) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlTrackController_Event) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
