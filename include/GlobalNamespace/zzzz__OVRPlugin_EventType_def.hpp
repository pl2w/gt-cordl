#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_EventType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_EventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_EventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_EventType, "", "OVRPlugin/EventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/EventType
struct CORDL_TYPE OVRPlugin_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_EventType_Unwrapped
enum struct __OVRPlugin_EventType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_DisplayRefreshRateChanged = static_cast<int32_t>(0x1),
__E_SpatialAnchorCreateComplete = static_cast<int32_t>(0x31),
__E_SpaceSetComponentStatusComplete = static_cast<int32_t>(0x32),
__E_SpaceQueryResults = static_cast<int32_t>(0x33),
__E_SpaceQueryComplete = static_cast<int32_t>(0x34),
__E_SpaceSaveComplete = static_cast<int32_t>(0x35),
__E_SpaceEraseComplete = static_cast<int32_t>(0x36),
__E_SpaceShareResult = static_cast<int32_t>(0x38),
__E_SpaceListSaveResult = static_cast<int32_t>(0x39),
__E_SpaceShareToGroupsComplete = static_cast<int32_t>(0x3a),
__E_SceneCaptureComplete = static_cast<int32_t>(0x64),
__E_VirtualKeyboardCommitText = static_cast<int32_t>(0xc9),
__E_VirtualKeyboardBackspace = static_cast<int32_t>(0xca),
__E_VirtualKeyboardEnter = static_cast<int32_t>(0xcb),
__E_VirtualKeyboardShown = static_cast<int32_t>(0xcc),
__E_VirtualKeyboardHidden = static_cast<int32_t>(0xcd),
__E_SpaceDiscoveryResultsAvailable = static_cast<int32_t>(0x12c),
__E_SpaceDiscoveryComplete = static_cast<int32_t>(0x12d),
__E_SpacesSaveResult = static_cast<int32_t>(0x12e),
__E_SpacesEraseResult = static_cast<int32_t>(0x12f),
__E_ColocationSessionStartAdvertisementComplete = static_cast<int32_t>(0x172),
__E_ColocationSessionAdvertisementComplete = static_cast<int32_t>(0x173),
__E_ColocationSessionStopAdvertisementComplete = static_cast<int32_t>(0x174),
__E_ColocationSessionStartDiscoveryComplete = static_cast<int32_t>(0x175),
__E_ColocationSessionDiscoveryResult = static_cast<int32_t>(0x176),
__E_ColocationSessionDiscoveryComplete = static_cast<int32_t>(0x177),
__E_ColocationSessionStopDiscoveryComplete = static_cast<int32_t>(0x178),
__E_PassthroughLayerResumed = static_cast<int32_t>(0x1f4),
__E_BoundaryVisibilityChanged = static_cast<int32_t>(0x1fe),
__E_CreateDynamicObjectTrackerResult = static_cast<int32_t>(0x28a),
__E_SetDynamicObjectTrackedClassesResult = static_cast<int32_t>(0x28b),
__E_ReferenceSpaceChangePending = static_cast<int32_t>(0x488),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_EventType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_EventType(int32_t  value__) noexcept;

/// @brief Field BoundaryVisibilityChanged value: I32(510)
static ::GlobalNamespace::OVRPlugin_EventType const BoundaryVisibilityChanged;

/// @brief Field ColocationSessionAdvertisementComplete value: I32(371)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionAdvertisementComplete;

/// @brief Field ColocationSessionDiscoveryComplete value: I32(375)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionDiscoveryComplete;

/// @brief Field ColocationSessionDiscoveryResult value: I32(374)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionDiscoveryResult;

/// @brief Field ColocationSessionStartAdvertisementComplete value: I32(370)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionStartAdvertisementComplete;

/// @brief Field ColocationSessionStartDiscoveryComplete value: I32(373)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionStartDiscoveryComplete;

/// @brief Field ColocationSessionStopAdvertisementComplete value: I32(372)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionStopAdvertisementComplete;

/// @brief Field ColocationSessionStopDiscoveryComplete value: I32(376)
static ::GlobalNamespace::OVRPlugin_EventType const ColocationSessionStopDiscoveryComplete;

/// @brief Field CreateDynamicObjectTrackerResult value: I32(650)
static ::GlobalNamespace::OVRPlugin_EventType const CreateDynamicObjectTrackerResult;

/// @brief Field DisplayRefreshRateChanged value: I32(1)
static ::GlobalNamespace::OVRPlugin_EventType const DisplayRefreshRateChanged;

/// @brief Field PassthroughLayerResumed value: I32(500)
static ::GlobalNamespace::OVRPlugin_EventType const PassthroughLayerResumed;

/// @brief Field ReferenceSpaceChangePending value: I32(1160)
static ::GlobalNamespace::OVRPlugin_EventType const ReferenceSpaceChangePending;

/// @brief Field SceneCaptureComplete value: I32(100)
static ::GlobalNamespace::OVRPlugin_EventType const SceneCaptureComplete;

/// @brief Field SetDynamicObjectTrackedClassesResult value: I32(651)
static ::GlobalNamespace::OVRPlugin_EventType const SetDynamicObjectTrackedClassesResult;

/// @brief Field SpaceDiscoveryComplete value: I32(301)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceDiscoveryComplete;

/// @brief Field SpaceDiscoveryResultsAvailable value: I32(300)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceDiscoveryResultsAvailable;

/// @brief Field SpaceEraseComplete value: I32(54)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceEraseComplete;

/// @brief Field SpaceListSaveResult value: I32(57)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceListSaveResult;

/// @brief Field SpaceQueryComplete value: I32(52)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceQueryComplete;

/// @brief Field SpaceQueryResults value: I32(51)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceQueryResults;

/// @brief Field SpaceSaveComplete value: I32(53)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceSaveComplete;

/// @brief Field SpaceSetComponentStatusComplete value: I32(50)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceSetComponentStatusComplete;

/// @brief Field SpaceShareResult value: I32(56)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceShareResult;

/// @brief Field SpaceShareToGroupsComplete value: I32(58)
static ::GlobalNamespace::OVRPlugin_EventType const SpaceShareToGroupsComplete;

/// @brief Field SpacesEraseResult value: I32(303)
static ::GlobalNamespace::OVRPlugin_EventType const SpacesEraseResult;

/// @brief Field SpacesSaveResult value: I32(302)
static ::GlobalNamespace::OVRPlugin_EventType const SpacesSaveResult;

/// @brief Field SpatialAnchorCreateComplete value: I32(49)
static ::GlobalNamespace::OVRPlugin_EventType const SpatialAnchorCreateComplete;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::OVRPlugin_EventType const Unknown;

/// @brief Field VirtualKeyboardBackspace value: I32(202)
static ::GlobalNamespace::OVRPlugin_EventType const VirtualKeyboardBackspace;

/// @brief Field VirtualKeyboardCommitText value: I32(201)
static ::GlobalNamespace::OVRPlugin_EventType const VirtualKeyboardCommitText;

/// @brief Field VirtualKeyboardEnter value: I32(203)
static ::GlobalNamespace::OVRPlugin_EventType const VirtualKeyboardEnter;

/// @brief Field VirtualKeyboardHidden value: I32(205)
static ::GlobalNamespace::OVRPlugin_EventType const VirtualKeyboardHidden;

/// @brief Field VirtualKeyboardShown value: I32(204)
static ::GlobalNamespace::OVRPlugin_EventType const VirtualKeyboardShown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12179};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_EventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
