#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_BoundaryVisibilityChangedData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionAdvertisementCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionDiscoveryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionDiscoveryResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_CreateDynamicObjectTrackerResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_DisplayRefreshRateChangedData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_EventDataReferenceSpaceChangePending_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_PassthroughLayerResumedData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SceneCaptureCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SetDynamicObjectTrackedClassesResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_ShareSpacesToGroupsCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceDiscoveryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceDiscoveryResultsData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceEraseCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceListSaveResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceQueryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceQueryResultsData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceSaveCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceSetComponentStatusCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceShareResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpacesEraseResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpacesSaveResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpatialAnchorCreateCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_StartColocationSessionAdvertisementCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_StartColocationSessionDiscoveryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_StopColocationSessionAdvertisementCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_StopColocationSessionDiscoveryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventDataBuffer_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GlobalNamespace::OVRDeserialize::ByteArrayToStructure(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRDeserialize*>(),
                    {"ByteArrayToStructure", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, bytes);
}
template<typename T>
inline T GlobalNamespace::OVRDeserialize::MarshalEntireStructAs(::GlobalNamespace::OVRPlugin_EventDataBuffer  eventDataBuffer, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRDeserialize*>(),
                    {"MarshalEntireStructAs", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_EventDataBuffer>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, eventDataBuffer, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize::OVRDeserialize()   {
}
