#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_EventDataReferenceSpaceChangePending.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRDeserialize_EventDataReferenceSpaceChangePending)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_EventDataReferenceSpaceChangePending;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending, "", "OVRDeserialize/EventDataReferenceSpaceChangePending");
// Dependencies OVRPlugin::Bool, OVRPlugin::EventType, OVRPlugin::Posef, OVRPlugin::TrackingOrigin
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/EventDataReferenceSpaceChangePending
struct CORDL_TYPE OVRDeserialize_EventDataReferenceSpaceChangePending {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_EventDataReferenceSpaceChangePending() ;

// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReferenceSpaceType", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: None, comment: None }, CppParam { name: "ChangeTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PoseValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "PoseInPreviousSpace", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_EventDataReferenceSpaceChangePending(::GlobalNamespace::OVRPlugin_EventType  EventType, ::GlobalNamespace::OVRPlugin_TrackingOrigin  ReferenceSpaceType, double_t  ChangeTime, ::GlobalNamespace::OVRPlugin_Bool  PoseValid, ::GlobalNamespace::OVRPlugin_Posef  PoseInPreviousSpace) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12634};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EventType  EventType;

/// @brief Field ReferenceSpaceType, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingOrigin  ReferenceSpaceType;

/// @brief Field ChangeTime, offset: 0x8, size: 0x8, def value: None
 double_t  ChangeTime;

/// @brief Field PoseValid, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  PoseValid;

/// @brief Field PoseInPreviousSpace, offset: 0x14, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  PoseInPreviousSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending, ReferenceSpaceType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending, ChangeTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending, PoseValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending, PoseInPreviousSpace) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
