#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTelemetry.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorTelemetryData_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionTelemetryData_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "GlobalNamespace/zzzz__GTGameModeEventType_def.hpp"
#include "GlobalNamespace/zzzz__GTKidEventType_def.hpp"
#include "GlobalNamespace/zzzz__GTShopEventType_def.hpp"
#include "GlobalNamespace/zzzz__GTZoneEventType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__MothershipAnalyticsEvent_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWriteEventsResponse_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabAuthenticator_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.EnqueueTelemetryEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*, ::ArrayW<::StringW>)>(&::GlobalNamespace::GorillaTelemetry::EnqueueTelemetryEvent)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x593ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"EnqueueTelemetryEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.FlushMothershipTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaTelemetry::FlushMothershipTelemetry)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x5940390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"FlushMothershipTelemetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GetEventListForArrayMothership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>* (*)(::ArrayW<::GlobalNamespace::MothershipAnalyticsEvent*>, int32_t)>(&::GlobalNamespace::GorillaTelemetry::GetEventListForArrayMothership)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5940974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GetEventListForArrayMothership", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAnalyticsEvent*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GorillaTelemetry::IsConnected)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5940bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.IsConnectedToPlayfab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GorillaTelemetry::IsConnectedToPlayfab)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5940d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"IsConnectedToPlayfab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.IsConnectedIgnoreRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GorillaTelemetry::IsConnectedIgnoreRoom)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5940e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"IsConnectedIgnoreRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PlayFabUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::GorillaTelemetry::PlayFabUserId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5940f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PlayFabUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.SerializeCustomTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::GlobalNamespace::GorillaTelemetry::SerializeCustomTags)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5940220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"SerializeCustomTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.EnqueueZoneEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ZoneDef*, ::GlobalNamespace::GTZoneEventType)>(&::GlobalNamespace::GorillaTelemetry::EnqueueZoneEvent)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5940fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"EnqueueZoneEvent", {}, {::i2c::type_of<::GlobalNamespace::ZoneDef*>(), ::i2c::type_of<::GlobalNamespace::GTZoneEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostCustomMapZoneEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTZoneEventType, int64_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::PostCustomMapZoneEvent)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x59413ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapZoneEvent", {}, {::i2c::type_of<::GlobalNamespace::GTZoneEventType>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostGameModeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTGameModeEventType, ::GorillaGameModes::GameModeType)>(&::GlobalNamespace::GorillaTelemetry::PostGameModeEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59416d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostGameModeEvent", {}, {::i2c::type_of<::GlobalNamespace::GTGameModeEventType>(), ::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostShopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GTShopEventType, ::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GlobalNamespace::GorillaTelemetry::PostShopEvent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5941868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostShopEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.FetchItemArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*)>(&::GlobalNamespace::GorillaTelemetry::FetchItemArgs)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5941ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"FetchItemArgs", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostShopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GTShopEventType, ::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*)>(&::GlobalNamespace::GorillaTelemetry::PostShopEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5941940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostShopEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostBuilderKioskEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GTShopEventType, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem)>(&::GlobalNamespace::GorillaTelemetry::PostBuilderKioskEvent)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5941e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostBuilderKioskEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.BuilderItemsToStrings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*)>(&::GlobalNamespace::GorillaTelemetry::BuilderItemsToStrings)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x594207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"BuilderItemsToStrings", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostBuilderKioskEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GTShopEventType, ::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*)>(&::GlobalNamespace::GorillaTelemetry::PostBuilderKioskEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5941ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostBuilderKioskEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostKidEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool, bool, ::KID::Model::AgeStatusType, ::GlobalNamespace::GTKidEventType)>(&::GlobalNamespace::GorillaTelemetry::PostKidEvent)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x59423ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostKidEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::KID::Model::AgeStatusType>(), ::i2c::type_of<::GlobalNamespace::GTKidEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.WamGameStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::WamGameStart)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5942680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"WamGameStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.WamLevelEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, ::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::WamLevelEnd)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x59427e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"WamLevelEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostCustomMapPerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GorillaTelemetry::PostCustomMapPerformance)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5942b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapPerformance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostCustomMapTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int64_t, ::StringW, int32_t, int32_t, int32_t, bool)>(&::GlobalNamespace::GorillaTelemetry::PostCustomMapTracking)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5942e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapTracking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostCustomMapDownloadEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int64_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::PostCustomMapDownloadEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59431d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapDownloadEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostCustomMapRegistryEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::StringW, int64_t, ::StringW, ::System::DateTime, ::System::DateTime, ::ArrayW<::StringW>, int32_t, int32_t, bool, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GorillaTelemetry::PostCustomMapRegistryEvent)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x59431d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapRegistryEvent", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorShiftStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, float_t, bool, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorShiftStart)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5943678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorShiftStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorGameEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Collections::Generic::List_1<::StringW>*, int32_t, bool, float_t, float_t, bool, ::GlobalNamespace::ZoneClearReason, int32_t, int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, int32_t, int32_t)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorGameEnd)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x59439a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorGameEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorFloorStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, float_t, bool, int32_t, ::StringW, int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorFloorStart)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5943f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorFloorStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorFloorComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Collections::Generic::List_1<::StringW>*, int32_t, bool, float_t, float_t, bool, ::GlobalNamespace::ZoneClearReason, int32_t, int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, int32_t, int32_t, ::StringW, ::StringW, int32_t, bool, ::StringW, int32_t)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorFloorComplete)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x5944318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorFloorComplete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorToolPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, int32_t, int32_t, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorToolPurchased)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5944a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorToolPurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorRankUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorRankUp)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5944ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorRankUp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorToolUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorToolUnlock)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5944e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorToolUnlock", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorPodUpgradePurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorPodUpgradePurchased)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5944fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorPodUpgradePurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorToolUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorToolUpgrade)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5945208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorToolUpgrade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorChaosSeedStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorChaosSeedStart)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x59454f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorChaosSeedStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorChaosJuiceCollected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorChaosJuiceCollected)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5945704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorChaosJuiceCollected", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorOverdrivePurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorOverdrivePurchased)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x59458b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorOverdrivePurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.GhostReactorCreditsRefillPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t, int32_t, ::StringW)>(&::GlobalNamespace::GorillaTelemetry::GhostReactorCreditsRefillPurchased)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5945ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorCreditsRefillPurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.SuperInfectionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t, float_t, float_t, float_t, float_t, float_t, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*, float_t, float_t, float_t, float_t, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*, int32_t, int32_t, int32_t, int32_t, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*, int32_t, int32_t, ::ArrayW<::ArrayW<bool>>, int32_t)>(&::GlobalNamespace::GorillaTelemetry::SuperInfectionEvent)> {
  constexpr static std::size_t size = 0xe30;
  constexpr static std::size_t addrs = 0x5945cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"SuperInfectionEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::ArrayW<bool>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.SuperInfectionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t, int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::GorillaTelemetry::SuperInfectionEvent)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5946b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"SuperInfectionEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry.PostNotificationEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GorillaTelemetry::PostNotificationEvent)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5946d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostNotificationEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaTelemetry::setStaticF_TELEMETRY_FLUSH_SEC(float_t  value)  {
::cordl_internals::setStaticField<float_t, "TELEMETRY_FLUSH_SEC", ::GlobalNamespace::GorillaTelemetry*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::GorillaTelemetry::getStaticF_TELEMETRY_FLUSH_SEC()  {
return ::cordl_internals::getStaticField<float_t, "TELEMETRY_FLUSH_SEC", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_telemetryEventsQueueMothership(::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>*, "telemetryEventsQueueMothership", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>* GlobalNamespace::GorillaTelemetry::getStaticF_telemetryEventsQueueMothership()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::GlobalNamespace::MothershipAnalyticsEvent*>*, "telemetryEventsQueueMothership", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gListPoolMothership(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>*, "gListPoolMothership", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>* GlobalNamespace::GorillaTelemetry::getStaticF_gListPoolMothership()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>*, "gListPoolMothership", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gPlayFabAuth(::UnityW<::GorillaNetworking::PlayFabAuthenticator>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::PlayFabAuthenticator>, "gPlayFabAuth", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::UnityW<::GorillaNetworking::PlayFabAuthenticator>>(value));
}
inline ::UnityW<::GorillaNetworking::PlayFabAuthenticator> GlobalNamespace::GorillaTelemetry::getStaticF_gPlayFabAuth()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::PlayFabAuthenticator>, "gPlayFabAuth", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gZoneEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gZoneEventArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gZoneEventArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gZoneEventArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gCustomMapZoneEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapZoneEventArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gCustomMapZoneEventArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapZoneEventArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gNotifEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gNotifEventArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gNotifEventArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gNotifEventArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_nextStayTimestamp(float_t  value)  {
::cordl_internals::setStaticField<float_t, "nextStayTimestamp", ::GlobalNamespace::GorillaTelemetry*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::GorillaTelemetry::getStaticF_nextStayTimestamp()  {
return ::cordl_internals::getStaticField<float_t, "nextStayTimestamp", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGameModeStartEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gGameModeStartEventArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gGameModeStartEventArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gGameModeStartEventArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gShopEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gShopEventArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gShopEventArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gShopEventArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gSingleItemParam(::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>, "gSingleItemParam", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>>(value));
}
inline ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem> GlobalNamespace::GorillaTelemetry::getStaticF_gSingleItemParam()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>, "gSingleItemParam", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gSingleItemBuilderParam(::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>, "gSingleItemBuilderParam", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>>(value));
}
inline ::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> GlobalNamespace::GorillaTelemetry::getStaticF_gSingleItemBuilderParam()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>, "gSingleItemBuilderParam", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gKidEventArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gKidEventArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gKidEventArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gKidEventArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gWamGameStartArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gWamGameStartArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gWamGameStartArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gWamGameStartArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gWamLevelEndArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gWamLevelEndArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gWamLevelEndArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gWamLevelEndArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gCustomMapPerfArgs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapPerfArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gCustomMapPerfArgs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapPerfArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gCustomMapTrackingMetrics(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapTrackingMetrics", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gCustomMapTrackingMetrics()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapTrackingMetrics", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gCustomMapDownloadMetrics(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapDownloadMetrics", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gCustomMapDownloadMetrics()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapDownloadMetrics", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gCustomMapRegistryMetrics(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapRegistryMetrics", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GlobalNamespace::GorillaTelemetry::getStaticF_gCustomMapRegistryMetrics()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "gCustomMapRegistryMetrics", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorShiftStartArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorShiftStartArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorShiftStartArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorShiftStartArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorShiftEndArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorShiftEndArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorShiftEndArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorShiftEndArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorFloorStartArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorFloorStartArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorFloorStartArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorFloorStartArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorFloorEndArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorFloorEndArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorFloorEndArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorFloorEndArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorToolPurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorToolPurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorToolPurchasedArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorToolPurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorRankUpArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorRankUpArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorRankUpArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorRankUpArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorToolUnlockArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorToolUnlockArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorToolUnlockArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorToolUnlockArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorPodUpgradePurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorPodUpgradePurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorPodUpgradePurchasedArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorPodUpgradePurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorToolUpgradeArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorToolUpgradeArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorToolUpgradeArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorToolUpgradeArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorChaosSeedStartArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorChaosSeedStartArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorChaosSeedStartArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorChaosSeedStartArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorChaosJuiceCollectedArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorChaosJuiceCollectedArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorChaosJuiceCollectedArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorChaosJuiceCollectedArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorOverdrivePurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorOverdrivePurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorOverdrivePurchasedArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorOverdrivePurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gGhostReactorCreditsRefillPurchasedArgs(::GlobalNamespace::GhostReactorTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorCreditsRefillPurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::GhostReactorTelemetryData>(value));
}
inline ::GlobalNamespace::GhostReactorTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gGhostReactorCreditsRefillPurchasedArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorTelemetryData, "gGhostReactorCreditsRefillPurchasedArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gSuperInfectionArgs(::GlobalNamespace::SuperInfectionTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SuperInfectionTelemetryData, "gSuperInfectionArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::SuperInfectionTelemetryData>(value));
}
inline ::GlobalNamespace::SuperInfectionTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gSuperInfectionArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SuperInfectionTelemetryData, "gSuperInfectionArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::setStaticF_gSuperInfectionPurchaseArgs(::GlobalNamespace::SuperInfectionTelemetryData  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SuperInfectionTelemetryData, "gSuperInfectionPurchaseArgs", ::GlobalNamespace::GorillaTelemetry*>(std::forward<::GlobalNamespace::SuperInfectionTelemetryData>(value));
}
inline ::GlobalNamespace::SuperInfectionTelemetryData GlobalNamespace::GorillaTelemetry::getStaticF_gSuperInfectionPurchaseArgs()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SuperInfectionTelemetryData, "gSuperInfectionPurchaseArgs", ::GlobalNamespace::GorillaTelemetry*>();
}
inline void GlobalNamespace::GorillaTelemetry::EnqueueTelemetryEvent(::StringW  eventName, ::System::Object*  content, /* [CanBeNull] */ ::ArrayW<::StringW>  customTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"EnqueueTelemetryEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventName, content, customTags);
}
inline void GlobalNamespace::GorillaTelemetry::FlushMothershipTelemetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"FlushMothershipTelemetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>* GlobalNamespace::GorillaTelemetry::GetEventListForArrayMothership(::ArrayW<::GlobalNamespace::MothershipAnalyticsEvent*>  array, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GetEventListForArrayMothership", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::MothershipAnalyticsEvent*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MothershipAnalyticsEvent*>*>(nullptr, ___internal_method, array, count);
}
inline bool GlobalNamespace::GorillaTelemetry::IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GorillaTelemetry::IsConnectedToPlayfab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"IsConnectedToPlayfab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::GorillaTelemetry::IsConnectedIgnoreRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"IsConnectedIgnoreRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaTelemetry::PlayFabUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PlayFabUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaTelemetry::SerializeCustomTags(::ArrayW<::StringW>  customTags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"SerializeCustomTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, customTags);
}
inline void GlobalNamespace::GorillaTelemetry::EnqueueZoneEvent(::GlobalNamespace::ZoneDef*  zone, ::GlobalNamespace::GTZoneEventType  zoneEventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"EnqueueZoneEvent", {}, {::i2c::type_of<::GlobalNamespace::ZoneDef*>(), ::i2c::type_of<::GlobalNamespace::GTZoneEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone, zoneEventType);
}
inline bool GlobalNamespace::GorillaTelemetry::PostCustomMapZoneEvent(::GlobalNamespace::GTZoneEventType  zoneEventType, int64_t  mapId, ::StringW  mapSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapZoneEvent", {}, {::i2c::type_of<::GlobalNamespace::GTZoneEventType>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, zoneEventType, mapId, mapSource);
}
inline void GlobalNamespace::GorillaTelemetry::PostGameModeEvent(::GlobalNamespace::GTGameModeEventType  gameModeEvent, ::GorillaGameModes::GameModeType  gameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostGameModeEvent", {}, {::i2c::type_of<::GlobalNamespace::GTGameModeEventType>(), ::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameModeEvent, gameMode);
}
inline void GlobalNamespace::GorillaTelemetry::PostShopEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::GlobalNamespace::CosmeticsController_CosmeticItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostShopEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerRig, shopEvent, item);
}
inline ::ArrayW<::StringW> GlobalNamespace::GorillaTelemetry::FetchItemArgs(::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"FetchItemArgs", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, items);
}
inline void GlobalNamespace::GorillaTelemetry::PostShopEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostShopEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerRig, shopEvent, items);
}
inline void GlobalNamespace::GorillaTelemetry::PostBuilderKioskEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostBuilderKioskEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerRig, shopEvent, item);
}
inline ::ArrayW<::StringW> GlobalNamespace::GorillaTelemetry::BuilderItemsToStrings(::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"BuilderItemsToStrings", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, items);
}
inline void GlobalNamespace::GorillaTelemetry::PostBuilderKioskEvent(::GlobalNamespace::VRRig*  playerRig, ::GlobalNamespace::GTShopEventType  shopEvent, ::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostBuilderKioskEvent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::GTShopEventType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerRig, shopEvent, items);
}
inline void GlobalNamespace::GorillaTelemetry::PostKidEvent(bool  joinGroupsEnabled, bool  voiceChatEnabled, bool  customUsernamesEnabled, ::KID::Model::AgeStatusType  ageCategory, ::GlobalNamespace::GTKidEventType  kidEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostKidEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::KID::Model::AgeStatusType>(), ::i2c::type_of<::GlobalNamespace::GTKidEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, joinGroupsEnabled, voiceChatEnabled, customUsernamesEnabled, ageCategory, kidEvent);
}
inline void GlobalNamespace::GorillaTelemetry::WamGameStart(::StringW  playerId, ::StringW  gameId, ::StringW  machineId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"WamGameStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId, gameId, machineId);
}
inline void GlobalNamespace::GorillaTelemetry::WamLevelEnd(::StringW  playerId, int32_t  gameId, ::StringW  machineId, int32_t  currentLevelNumber, int32_t  levelGoodMolesShown, int32_t  levelHazardMolesShown, int32_t  levelMinScore, int32_t  currentScore, int32_t  levelHazardMolesHit, ::StringW  currentGameResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"WamLevelEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId, gameId, machineId, currentLevelNumber, levelGoodMolesShown, levelHazardMolesShown, levelMinScore, currentScore, levelHazardMolesHit, currentGameResult);
}
inline void GlobalNamespace::GorillaTelemetry::PostCustomMapPerformance(::StringW  mapName, int64_t  mapModId, int32_t  lowestFPS, int32_t  lowestDC, int32_t  lowestPC, int32_t  avgFPS, int32_t  avgDC, int32_t  avgPC, int32_t  highestFPS, int32_t  highestDC, int32_t  highestPC, int32_t  playtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapPerformance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mapName, mapModId, lowestFPS, lowestDC, lowestPC, avgFPS, avgDC, avgPC, highestFPS, highestDC, highestPC, playtime);
}
inline void GlobalNamespace::GorillaTelemetry::PostCustomMapTracking(::StringW  mapName, int64_t  mapModId, ::StringW  mapCreatorUsername, int32_t  minPlayers, int32_t  maxPlayers, int32_t  playtime, bool  privateRoom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapTracking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mapName, mapModId, mapCreatorUsername, minPlayers, maxPlayers, playtime, privateRoom);
}
inline void GlobalNamespace::GorillaTelemetry::PostCustomMapDownloadEvent(::StringW  mapName, int64_t  mapModId, ::StringW  mapCreatorUsername)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapDownloadEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mapName, mapModId, mapCreatorUsername);
}
inline void GlobalNamespace::GorillaTelemetry::PostCustomMapRegistryEvent(int64_t  mapModId, ::StringW  mapName, int64_t  creatorId, ::StringW  creatorUsername, ::System::DateTime  dateLive, ::System::DateTime  dateUpdated, ::ArrayW<::StringW>  tags, int32_t  mapSupportVersion, int32_t  maxPlayers, bool  hasCustomGameMode, int32_t  gravityZoneCount, int32_t  sizeChangerCount, int32_t  handHoldCount, int32_t  mapperAssetCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostCustomMapRegistryEvent", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mapModId, mapName, creatorId, creatorUsername, dateLive, dateUpdated, tags, mapSupportVersion, maxPlayers, hasCustomGameMode, gravityZoneCount, sizeChangerCount, handHoldCount, mapperAssetCount);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorShiftStart(::StringW  gameId, int32_t  initialCores, float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  numPlayers, int32_t  floorJoined, ::StringW  playerRank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorShiftStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, initialCores, timeIntoShift, wasPlayerInAtStart, numPlayers, floorJoined, playerRank);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorGameEnd(::StringW  gameId, int32_t  finalCores, int32_t  totalCoresCollectedByPlayer, int32_t  totalCoresCollectedByGroup, int32_t  totalCoresSpentByPlayer, int32_t  totalCoresSpentByGroup, int32_t  gatesUnlocked, int32_t  deaths, ::System::Collections::Generic::List_1<::StringW>*  itemsPurchased, int32_t  shiftCut, bool  isShiftActuallyEnding, float_t  timeIntoShiftAtJoin, float_t  playDuration, bool  wasPlayerInAtStart, ::GlobalNamespace::ZoneClearReason  zoneClearReason, int32_t  maxNumberOfPlayersInShift, int32_t  endNumberOfPlayers, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  itemTypesHeldThisShift, int32_t  revives, int32_t  numShiftsPlayed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorGameEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, finalCores, totalCoresCollectedByPlayer, totalCoresCollectedByGroup, totalCoresSpentByPlayer, totalCoresSpentByGroup, gatesUnlocked, deaths, itemsPurchased, shiftCut, isShiftActuallyEnding, timeIntoShiftAtJoin, playDuration, wasPlayerInAtStart, zoneClearReason, maxNumberOfPlayersInShift, endNumberOfPlayers, itemTypesHeldThisShift, revives, numShiftsPlayed);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorFloorStart(::StringW  gameId, int32_t  initialCores, float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  numPlayers, ::StringW  playerRank, int32_t  floor, ::StringW  preset, ::StringW  modifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorFloorStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, initialCores, timeIntoShift, wasPlayerInAtStart, numPlayers, playerRank, floor, preset, modifier);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorFloorComplete(::StringW  gameId, int32_t  finalCores, int32_t  totalCoresCollectedByPlayer, int32_t  totalCoresCollectedByGroup, int32_t  totalCoresSpentByPlayer, int32_t  totalCoresSpentByGroup, int32_t  gatesUnlocked, int32_t  deaths, ::System::Collections::Generic::List_1<::StringW>*  itemsPurchased, int32_t  shiftCut, bool  isShiftActuallyEnding, float_t  timeIntoShiftAtJoin, float_t  playDuration, bool  wasPlayerInAtStart, ::GlobalNamespace::ZoneClearReason  zoneClearReason, int32_t  maxNumberOfPlayersInShift, int32_t  endNumberOfPlayers, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  itemTypesHeldThisShift, int32_t  revives, int32_t  floor, ::StringW  preset, ::StringW  modifier, int32_t  chaosSeedsCollected, bool  objectivesCompleted, ::StringW  section, int32_t  xpGained)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorFloorComplete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, finalCores, totalCoresCollectedByPlayer, totalCoresCollectedByGroup, totalCoresSpentByPlayer, totalCoresSpentByGroup, gatesUnlocked, deaths, itemsPurchased, shiftCut, isShiftActuallyEnding, timeIntoShiftAtJoin, playDuration, wasPlayerInAtStart, zoneClearReason, maxNumberOfPlayersInShift, endNumberOfPlayers, itemTypesHeldThisShift, revives, floor, preset, modifier, chaosSeedsCollected, objectivesCompleted, section, xpGained);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorToolPurchased(::StringW  gameId, ::StringW  toolName, int32_t  toolLevel, int32_t  coresSpent, int32_t  shinyRocksSpent, int32_t  floor, ::StringW  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorToolPurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, toolName, toolLevel, coresSpent, shinyRocksSpent, floor, preset);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorRankUp(::StringW  gameId, ::StringW  newRank, int32_t  floor, ::StringW  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorRankUp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, newRank, floor, preset);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorToolUnlock(::StringW  gameId, ::StringW  toolName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorToolUnlock", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, toolName);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorPodUpgradePurchased(::StringW  gameId, ::StringW  toolName, int32_t  level, int32_t  shinyRocksSpent, int32_t  juiceSpent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorPodUpgradePurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, toolName, level, shinyRocksSpent, juiceSpent);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorToolUpgrade(::StringW  gameId, ::StringW  upgradeType, ::StringW  toolName, int32_t  newLevel, int32_t  juiceSpent, int32_t  griftSpent, int32_t  coresSpent, int32_t  floor, ::StringW  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorToolUpgrade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, upgradeType, toolName, newLevel, juiceSpent, griftSpent, coresSpent, floor, preset);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorChaosSeedStart(::StringW  gameId, ::StringW  unlockTime, int32_t  chaosSeedsInQueue, int32_t  floor, ::StringW  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorChaosSeedStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, unlockTime, chaosSeedsInQueue, floor, preset);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorChaosJuiceCollected(::StringW  gameId, int32_t  juiceCollected, int32_t  coresProcessedByOverdrive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorChaosJuiceCollected", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, juiceCollected, coresProcessedByOverdrive);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorOverdrivePurchased(::StringW  gameId, int32_t  shinyRocksUsed, int32_t  chaosSeedsInQueue, int32_t  floor, ::StringW  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorOverdrivePurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, shinyRocksUsed, chaosSeedsInQueue, floor, preset);
}
inline void GlobalNamespace::GorillaTelemetry::GhostReactorCreditsRefillPurchased(::StringW  gameId, int32_t  shinyRocksSpent, int32_t  finalCredits, int32_t  floor, ::StringW  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"GhostReactorCreditsRefillPurchased", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameId, shinyRocksSpent, finalCredits, floor, preset);
}
inline void GlobalNamespace::GorillaTelemetry::SuperInfectionEvent(bool  roomDisconnect, float_t  totalPlayTime, float_t  roomPlayTime, float_t  sessionPlayTime, float_t  intervalPlayTime, float_t  terminalTotalTime, float_t  terminalIntervalTime, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  timeUsingGadgetsTotal, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  timeUsingGadgetsInterval, float_t  timeUsingOwnGadgetsTotal, float_t  timeUsingOwnGadgetsInterval, float_t  timeUsingOthersGadgetsTotal, float_t  timeUsingOthersGadgetsInterval, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  tagsUsingGadgetsTotal, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  tagsUsingGadgetsInterval, int32_t  tagsHoldingOwnGadgetsTotal, int32_t  tagsHoldingOwnGadgetsInterval, int32_t  tagsHoldingOthersGadgetsTotal, int32_t  tagsHoldingOthersGadgetsInterval, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourcesGatheredTotal, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  resourcesGatheredInterval, int32_t  roundsPlayedTotal, int32_t  roundsPlayedInterval, ::ArrayW<::ArrayW<bool>>  unlockedNodes, int32_t  numberOfPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"SuperInfectionEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::ArrayW<bool>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomDisconnect, totalPlayTime, roomPlayTime, sessionPlayTime, intervalPlayTime, terminalTotalTime, terminalIntervalTime, timeUsingGadgetsTotal, timeUsingGadgetsInterval, timeUsingOwnGadgetsTotal, timeUsingOwnGadgetsInterval, timeUsingOthersGadgetsTotal, timeUsingOthersGadgetsInterval, tagsUsingGadgetsTotal, tagsUsingGadgetsInterval, tagsHoldingOwnGadgetsTotal, tagsHoldingOwnGadgetsInterval, tagsHoldingOthersGadgetsTotal, tagsHoldingOthersGadgetsInterval, resourcesGatheredTotal, resourcesGatheredInterval, roundsPlayedTotal, roundsPlayedInterval, unlockedNodes, numberOfPlayers);
}
inline void GlobalNamespace::GorillaTelemetry::SuperInfectionEvent(::StringW  purchaseType, int32_t  shinyRockCost, int32_t  techPointsPurchased, float_t  totalPlayTime, float_t  roomPlayTime, float_t  sessionPlayTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"SuperInfectionEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, purchaseType, shinyRockCost, techPointsPurchased, totalPlayTime, roomPlayTime, sessionPlayTime);
}
inline void GlobalNamespace::GorillaTelemetry::PostNotificationEvent(::StringW  notificationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry*>(),
                        {"PostNotificationEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notificationType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTelemetry::GorillaTelemetry()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTelemetry___c::*)()>(&::GlobalNamespace::GorillaTelemetry___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59470ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry___c._FlushMothershipTelemetry_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTelemetry___c::*)(::GlobalNamespace::MothershipWriteEventsResponse*)>(&::GlobalNamespace::GorillaTelemetry___c::_FlushMothershipTelemetry_b__10_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59470b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry___c*>(),
                        {"<FlushMothershipTelemetry>b__10_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipWriteEventsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry___c._FlushMothershipTelemetry_b__10_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTelemetry___c::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::GorillaTelemetry___c::_FlushMothershipTelemetry_b__10_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59470b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry___c*>(),
                        {"<FlushMothershipTelemetry>b__10_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaTelemetry___c::setStaticF___9(::GlobalNamespace::GorillaTelemetry___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaTelemetry___c*, "<>9", ::GlobalNamespace::GorillaTelemetry___c*>(std::forward<::GlobalNamespace::GorillaTelemetry___c*>(value));
}
inline ::GlobalNamespace::GorillaTelemetry___c* GlobalNamespace::GorillaTelemetry___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaTelemetry___c*, "<>9", ::GlobalNamespace::GorillaTelemetry___c*>();
}
inline void GlobalNamespace::GorillaTelemetry___c::setStaticF___9__10_0(::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*, "<>9__10_0", ::GlobalNamespace::GorillaTelemetry___c*>(std::forward<::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>* GlobalNamespace::GorillaTelemetry___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*, "<>9__10_0", ::GlobalNamespace::GorillaTelemetry___c*>();
}
inline void GlobalNamespace::GorillaTelemetry___c::setStaticF___9__10_1(::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*, "<>9__10_1", ::GlobalNamespace::GorillaTelemetry___c*>(std::forward<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>* GlobalNamespace::GorillaTelemetry___c::getStaticF___9__10_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*, "<>9__10_1", ::GlobalNamespace::GorillaTelemetry___c*>();
}
inline void GlobalNamespace::GorillaTelemetry___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTelemetry___c::_FlushMothershipTelemetry_b__10_0(::GlobalNamespace::MothershipWriteEventsResponse*  resp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry___c*>(),
                        {"<FlushMothershipTelemetry>b__10_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipWriteEventsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resp);
}
inline void GlobalNamespace::GorillaTelemetry___c::_FlushMothershipTelemetry_b__10_1(::GlobalNamespace::MothershipError*  err, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry___c*>(),
                        {"<FlushMothershipTelemetry>b__10_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err, i);
}
inline ::GlobalNamespace::GorillaTelemetry___c* GlobalNamespace::GorillaTelemetry___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTelemetry___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTelemetry___c::GorillaTelemetry___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry_BatchRunner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaTelemetry_BatchRunner::*)()>(&::GlobalNamespace::GorillaTelemetry_BatchRunner::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5946e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry_BatchRunner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTelemetry_BatchRunner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTelemetry_BatchRunner::*)()>(&::GlobalNamespace::GorillaTelemetry_BatchRunner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5946f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry_BatchRunner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaTelemetry_BatchRunner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry_BatchRunner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTelemetry_BatchRunner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTelemetry_BatchRunner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTelemetry_BatchRunner* GlobalNamespace::GorillaTelemetry_BatchRunner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTelemetry_BatchRunner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTelemetry_BatchRunner::GorillaTelemetry_BatchRunner()   {
}
//  Writing Method size for method: ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::*)(int32_t)>(&::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5946ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::*)()>(&::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5946f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::*)()>(&::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5946f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::*)()>(&::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5946ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::*)()>(&::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5947004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::*)()>(&::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_get__start_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start_5__2;
}
constexpr float_t const& GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_get__start_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start_5__2;
}
constexpr void GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::__cordl_internal_set__start_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____start_5__2 = value;
}
inline void GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0* GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatchRunner_GorillaTelemetry__Start_d__0::BatchRunner_GorillaTelemetry__Start_d__0()   {
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTelemetry_k::GorillaTelemetry_k()   {
}
