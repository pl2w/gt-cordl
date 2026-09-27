#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize)
namespace GlobalNamespace {
struct OVRDeserialize_BoundaryVisibilityChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_CreateDynamicObjectTrackerResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_EventDataReferenceSpaceChangePending;
}
namespace GlobalNamespace {
struct OVRDeserialize_PassthroughLayerResumedData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SetDynamicObjectTrackedClassesResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_ShareSpacesToGroupsCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceShareResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesEraseResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpatialAnchorCreateCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StopColocationSessionAdvertisementCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_StopColocationSessionDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDeserialize;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRDeserialize*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize*, "", "OVRDeserialize");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRDeserialize
class CORDL_TYPE OVRDeserialize : public ::System::Object {
public:
// Declarations
using BoundaryVisibilityChangedData = ::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData;

using ColocationSessionAdvertisementCompleteData = ::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData;

using ColocationSessionDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData;

using ColocationSessionDiscoveryResultData = ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData;

using CreateDynamicObjectTrackerResultData = ::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData;

using DisplayRefreshRateChangedData = ::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData;

using EventDataReferenceSpaceChangePending = ::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending;

using PassthroughLayerResumedData = ::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData;

using SceneCaptureCompleteData = ::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData;

using SetDynamicObjectTrackedClassesResultData = ::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData;

using ShareSpacesToGroupsCompleteData = ::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData;

using SpaceDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData;

using SpaceDiscoveryResultsData = ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData;

using SpaceEraseCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData;

using SpaceListSaveResultData = ::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData;

using SpaceQueryCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData;

using SpaceQueryResultsData = ::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData;

using SpaceSaveCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData;

using SpaceSetComponentStatusCompleteData = ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData;

using SpaceShareResultData = ::GlobalNamespace::OVRDeserialize_SpaceShareResultData;

using SpacesEraseResultData = ::GlobalNamespace::OVRDeserialize_SpacesEraseResultData;

using SpacesSaveResultData = ::GlobalNamespace::OVRDeserialize_SpacesSaveResultData;

using SpatialAnchorCreateCompleteData = ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData;

using StartColocationSessionAdvertisementCompleteData = ::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData;

using StartColocationSessionDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData;

using StopColocationSessionAdvertisementCompleteData = ::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData;

using StopColocationSessionDiscoveryCompleteData = ::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData;

/// @brief Method ByteArrayToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T ByteArrayToStructure(::ArrayW<uint8_t>  bytes) ;

/// [Extension]
/// @brief Method MarshalEntireStructAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T MarshalEntireStructAs(::GlobalNamespace::OVRPlugin_EventDataBuffer  eventDataBuffer, ::Unity::Collections::Allocator  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRDeserialize(OVRDeserialize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRDeserialize(OVRDeserialize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12635};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRDeserialize) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
