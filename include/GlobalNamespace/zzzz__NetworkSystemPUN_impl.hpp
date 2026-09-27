#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkRegionInfo_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_InternalState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_InternalState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__AwaitSceneReady_d__89_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__CacheRegionInfo_d__57_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__ConnectToRoom_d__69_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__Initialise_d__56_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__InternalDisconnect_d__74_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__JoinFriendsRoom_d__70_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__JoinRandomPublicRoom_d__68_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__MakeOrFindRoom_d__64_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__OnDisconnected_d__120_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__ReturnToSinglePlayer_d__73_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__TryCreateRoom_d__67_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__TryJoinRoomInRegion_d__66_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__TryJoinRoom_d__65_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__WaitForStateCheck_d__62_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__WaitForState_d__61_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "GlobalNamespace/zzzz__PunNetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RPCArgBuffer_1_def.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Voice/PUN/zzzz__PhotonVoiceNetwork_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__SharedGroupDataRecord_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_AllNetPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NetPlayer*> (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_AllNetPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ecf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_PlayerListOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NetPlayer*> (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_PlayerListOthers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ecf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_VoiceConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::VoiceConnection> (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_VoiceConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ecf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_lowestPingRegionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_lowestPingRegionIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56ecf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"get_lowestPingRegionIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_internalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSystemPUN_InternalState (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_internalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ecfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"get_internalState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.set_internalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::NetworkSystemPUN_InternalState)>(&::GlobalNamespace::NetworkSystemPUN::set_internalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ecfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"set_internalState", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystemPUN_InternalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_CurrentPhotonBackend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_CurrentPhotonBackend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56ecfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_IsOnline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56ed004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_InRoom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56ed014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_RoomName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56ed064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.RoomStringStripped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::RoomStringStripped)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x56ed0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.AppendStringFromDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::System::Collections::IDictionary*, ::StringW, int32_t, ::System::Text::StringBuilder*)>(&::GlobalNamespace::NetworkSystemPUN::AppendStringFromDict)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x56ed808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"AppendStringFromDict", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_GameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_GameModeString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x56ed9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_CurrentRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_CurrentRegion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56eda80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_SessionIsPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_SessionIsPrivate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56edad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_SessionIsSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_SessionIsSubscription)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56edb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_LocalPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_LocalPlayerID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56edc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_ServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_ServerTimestamp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56edc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_SimTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_SimTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56edcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_SimDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_SimDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56edd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_SimTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_SimTick)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56edd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_TickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_TickRate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56edd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_RoomPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_RoomPlayerCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56edde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56ede4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.Initialise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::Initialise)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56ede9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.CacheRegionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::CacheRegionInfo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56edf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"CacheRegionInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetAuthenticationValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::AuthenticationValues* (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetAuthenticationValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56ee01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.SetAuthenticationValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::Photon::Realtime::AuthenticationValues*)>(&::GlobalNamespace::NetworkSystemPUN::SetAuthenticationValues)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56ee06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.FinishAuthenticating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::FinishAuthenticating)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x56ee0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.WaitForState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemPUN::*)(::System::Threading::CancellationToken, ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>, float_t)>(&::GlobalNamespace::NetworkSystemPUN::WaitForState)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56ee248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"WaitForState", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.WaitForStateCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NetworkSystemPUN::*)(::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>, float_t)>(&::GlobalNamespace::NetworkSystemPUN::WaitForStateCheck)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56ee364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"WaitForStateCheck", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.WaitForStateCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::NetworkSystemPUN_InternalState, float_t)>(&::GlobalNamespace::NetworkSystemPUN::WaitForStateCheck)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56ee494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"WaitForStateCheck", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystemPUN_InternalState>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.MakeOrFindRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemPUN::*)(::StringW, ::GlobalNamespace::RoomConfig*, int32_t)>(&::GlobalNamespace::NetworkSystemPUN::MakeOrFindRoom)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x56ee51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"MakeOrFindRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.TryJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NetworkSystemPUN::*)(::StringW, ::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystemPUN::TryJoinRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56ee664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"TryJoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.TryJoinRoomInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NetworkSystemPUN::*)(::StringW, ::GlobalNamespace::RoomConfig*, int32_t)>(&::GlobalNamespace::NetworkSystemPUN::TryJoinRoomInRegion)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56ee79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"TryJoinRoomInRegion", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.TryCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemPUN::*)(::StringW, ::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystemPUN::TryCreateRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56ee8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"TryCreateRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.JoinRandomPublicRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystemPUN::JoinRandomPublicRoom)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56eea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"JoinRandomPublicRoom", {}, {::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.ConnectToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystemPUN::*)(::StringW, ::GlobalNamespace::RoomConfig*, int32_t)>(&::GlobalNamespace::NetworkSystemPUN::ConnectToRoom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56eeb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.JoinFriendsRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemPUN::*)(::StringW, int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::NetworkSystemPUN::JoinFriendsRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56eec78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.JoinPubWithFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::JoinPubWithFriends)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56eedb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetRandomWeightedRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetRandomWeightedRegion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56eede8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.ReturnToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::ReturnToSinglePlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56eeed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.InternalDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::InternalDisconnect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56eefb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"InternalDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.AddVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::AddVoice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ef088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"AddVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.SetupVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::SetupVoice)> {
  constexpr static std::size_t size = 0xc24;
  constexpr static std::size_t addrs = 0x56ef08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"SetupVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.AddRemoteVoiceAddedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::GlobalNamespace::NetworkSystemPUN::AddRemoteVoiceAddedCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56efcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::NetworkSystemPUN::NetInstantiate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x56efd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, bool)>(&::GlobalNamespace::NetworkSystemPUN::NetInstantiate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56efef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, uint8_t, ::ArrayW<::System::Object*>, ::Fusion::NetworkRunner_OnBeforeSpawned*)>(&::GlobalNamespace::NetworkSystemPUN::NetInstantiate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x56eff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.NetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemPUN::NetDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56f00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.SetPlayerObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*, ::System::Nullable_1<int32_t>)>(&::GlobalNamespace::NetworkSystemPUN::SetPlayerObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56f0184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_RPC*, bool)>(&::GlobalNamespace::NetworkSystemPUN::CallRPC)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56f0188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_StringRPC*, ::StringW, bool)>(&::GlobalNamespace::NetworkSystemPUN::CallRPC)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56f02b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(int32_t, ::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_RPC*)>(&::GlobalNamespace::NetworkSystemPUN::CallRPC)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x56f03b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(int32_t, ::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_StringRPC*, ::StringW)>(&::GlobalNamespace::NetworkSystemPUN::CallRPC)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x56f052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.AwaitSceneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::AwaitSceneReady)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56f0678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetLocalPlayer)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x56f073c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystemPUN::*)(int32_t)>(&::GlobalNamespace::NetworkSystemPUN::GetPlayer)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x56f0908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.SetMyNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::StringW)>(&::GlobalNamespace::NetworkSystemPUN::SetMyNickName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56f0c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetMyNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetMyNickName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56f0dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetMyDefaultName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetMyDefaultName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56f0e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)(int32_t)>(&::GlobalNamespace::NetworkSystemPUN::GetNickName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56f0e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemPUN::GetNickName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56f0ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.SetMyTutorialComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::SetMyTutorialComplete)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x56f0edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetMyTutorialCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetMyTutorialCompletion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56f1038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetPlayerTutorialCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)(int32_t)>(&::GlobalNamespace::NetworkSystemPUN::GetPlayerTutorialCompletion)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x56f10bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetPlayerPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemPUN::GetPlayerPlatform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56f11a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetPlayerMothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemPUN::GetPlayerMothershipId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56f127c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetMyUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetMyUserID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56f1354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)(int32_t)>(&::GlobalNamespace::NetworkSystemPUN::GetUserID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56f13b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystemPUN::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystemPUN::GetUserID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56f13e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GlobalPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GlobalPlayerCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56f1474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.IsObjectLocallyOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemPUN::IsObjectLocallyOwned)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56f14d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.UpdateNetPlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::UpdateNetPlayerList)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x56f1578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.IsObjectRoomObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemPUN::IsObjectRoomObject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56f1d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.ShouldUpdateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemPUN::ShouldUpdateObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56f1e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.ShouldWriteObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemPUN::ShouldWriteObjectData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56f1e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetOwningPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystemPUN::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystemPUN::GetOwningPlayerID)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56f1e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.ShouldSpawnLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)(int32_t)>(&::GlobalNamespace::NetworkSystemPUN::ShouldSpawnLocally)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56f1ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.IsTotalAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::IsTotalAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f1f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnConnectedtoMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::OnConnectedtoMaster)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56f1f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnConnectedtoMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56f1fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(int16_t, ::StringW)>(&::GlobalNamespace::NetworkSystemPUN::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56f1ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(int16_t, ::StringW)>(&::GlobalNamespace::NetworkSystemPUN::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56f20cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkSystemPUN::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56f217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkSystemPUN::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56f21c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::Photon::Realtime::DisconnectCause)>(&::GlobalNamespace::NetworkSystemPUN::OnDisconnected)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56f21fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkSystemPUN::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56f22b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.GetCancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken> (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::GetCancellationToken)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56f22d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"GetCancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.ResetSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::ResetSystem)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x56f23ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"ResetSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.UpdateZoneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(bool, ::StringW)>(&::GlobalNamespace::NetworkSystemPUN::UpdateZoneInfo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x56f2614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"UpdateZoneInfo", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56f2858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)()>(&::GlobalNamespace::NetworkSystemPUN::__n__0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56f2954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"<>n__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN._SetupVoice_b__76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::GlobalNamespace::NetworkSystemPUN::_SetupVoice_b__76_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56f2958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"<SetupVoice>b__76_0", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::NetworkRegionInfo*>& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_regionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionData;
}
constexpr ::ArrayW<::GlobalNamespace::NetworkRegionInfo*> const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_regionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionData;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_regionData(::ArrayW<::GlobalNamespace::NetworkRegionInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionData = value;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_roomTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_roomTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomTask;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_roomTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomTask = value;
}
constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>*& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_playerPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPool;
}
constexpr ::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>* const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_playerPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPool;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_playerPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::PunNetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPool = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_m_allNetPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allNetPlayers;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_m_allNetPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allNetPlayers;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_m_allNetPlayers(::ArrayW<::GlobalNamespace::NetPlayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_allNetPlayers = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_m_otherNetPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_otherNetPlayers;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_m_otherNetPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_otherNetPlayers;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_m_otherNetPlayers(::ArrayW<::GlobalNamespace::NetPlayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_otherNetPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>*& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get__taskCancelTokens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____taskCancelTokens;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>* const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get__taskCancelTokens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____taskCancelTokens;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set__taskCancelTokens(::System::Collections::Generic::List_1<::System::Threading::CancellationTokenSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____taskCancelTokens = value;
}
constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_punVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___punVoice;
}
constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_punVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___punVoice;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_punVoice(::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___punVoice = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_VoiceNetworkObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceNetworkObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_VoiceNetworkObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceNetworkObject;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_VoiceNetworkObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceNetworkObject = value;
}
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_currentState(::GlobalNamespace::NetworkSystemPUN_InternalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_firstRoomJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstRoomJoin;
}
constexpr bool const& GlobalNamespace::NetworkSystemPUN::__cordl_internal_get_firstRoomJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstRoomJoin;
}
constexpr void GlobalNamespace::NetworkSystemPUN::__cordl_internal_set_firstRoomJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstRoomJoin = value;
}
inline ::ArrayW<::GlobalNamespace::NetPlayer*> GlobalNamespace::NetworkSystemPUN::get_AllNetPlayers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NetPlayer*>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NetPlayer*> GlobalNamespace::NetworkSystemPUN::get_PlayerListOthers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NetPlayer*>>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::Unity::VoiceConnection> GlobalNamespace::NetworkSystemPUN::get_VoiceConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::VoiceConnection>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::get_lowestPingRegionIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"get_lowestPingRegionIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkSystemPUN_InternalState GlobalNamespace::NetworkSystemPUN::get_internalState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"get_internalState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSystemPUN_InternalState>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::set_internalState(::GlobalNamespace::NetworkSystemPUN_InternalState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"set_internalState", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystemPUN_InternalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::get_CurrentPhotonBackend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::get_IsOnline()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::get_InRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::get_RoomName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::RoomStringStripped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::AppendStringFromDict(::System::Collections::IDictionary*  dict, ::StringW  key, int32_t  maxStrLen, ::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"AppendStringFromDict", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict, key, maxStrLen, sb);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::get_GameModeString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::get_CurrentRegion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::get_SessionIsPrivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::get_SessionIsSubscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::get_LocalPlayerID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::get_ServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::NetworkSystemPUN::get_SimTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::NetworkSystemPUN::get_SimDeltaTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::get_SimTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::get_TickRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::get_RoomPlayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::get_IsMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::Initialise()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemPUN::CacheRegionInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"CacheRegionInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Photon::Realtime::AuthenticationValues* GlobalNamespace::NetworkSystemPUN::GetAuthenticationValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AuthenticationValues*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::SetAuthenticationValues(::Photon::Realtime::AuthenticationValues*  authValues)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authValues);
}
inline void GlobalNamespace::NetworkSystemPUN::FinishAuthenticating()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemPUN::WaitForState(::System::Threading::CancellationToken  ct, ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates, float_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"WaitForState", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, ct, desiredStates, timeout);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NetworkSystemPUN::WaitForStateCheck(::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates, float_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"WaitForStateCheck", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, desiredStates, timeout);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NetworkSystemPUN::WaitForStateCheck(::GlobalNamespace::NetworkSystemPUN_InternalState  desiredState, float_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"WaitForStateCheck", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystemPUN_InternalState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, desiredState, timeout);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemPUN::MakeOrFindRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"MakeOrFindRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, roomName, opts, regionIndex);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NetworkSystemPUN::TryJoinRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"TryJoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, roomName, opts);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NetworkSystemPUN::TryJoinRoomInRegion(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"TryJoinRoomInRegion", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, roomName, opts, regionIndex);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemPUN::TryCreateRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"TryCreateRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, roomName, opts);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemPUN::JoinRandomPublicRoom(::GlobalNamespace::RoomConfig*  opts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"JoinRandomPublicRoom", {}, {::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, opts);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystemPUN::ConnectToRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, roomName, opts, regionIndex);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemPUN::JoinFriendsRoom(::StringW  userID, int32_t  actorIDToFollow, ::StringW  keyToFollow, ::StringW  shufflerToFollow)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, userID, actorIDToFollow, keyToFollow, shufflerToFollow);
}
inline void GlobalNamespace::NetworkSystemPUN::JoinPubWithFriends()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetRandomWeightedRegion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemPUN::ReturnToSinglePlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemPUN::InternalDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"InternalDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::AddVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"AddVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::SetupVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"SetupVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::AddRemoteVoiceAddedCallback(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystemPUN::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystemPUN::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  playerAuthID, bool  isRoomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, playerAuthID, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystemPUN::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject, uint8_t  group, ::ArrayW<::System::Object*>  data, ::Fusion::NetworkRunner_OnBeforeSpawned*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, isRoomObject, group, data, callback);
}
inline void GlobalNamespace::NetworkSystemPUN::NetDestroy(::UnityEngine::GameObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void GlobalNamespace::NetworkSystemPUN::SetPlayerObject(::UnityEngine::GameObject*  playerInstance, ::System::Nullable_1<int32_t>  owningPlayerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerInstance, owningPlayerID);
}
inline void GlobalNamespace::NetworkSystemPUN::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, bool  sendToSelf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, sendToSelf);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetworkSystemPUN::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args, bool  sendToSelf)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 23}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, args, sendToSelf);
}
inline void GlobalNamespace::NetworkSystemPUN::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message, bool  sendToSelf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, message, sendToSelf);
}
inline void GlobalNamespace::NetworkSystemPUN::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetworkSystemPUN::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 26}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod, args);
}
inline void GlobalNamespace::NetworkSystemPUN::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod, message);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystemPUN::AwaitSceneReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystemPUN::GetLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystemPUN::GetPlayer(int32_t  PlayerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, PlayerID);
}
inline void GlobalNamespace::NetworkSystemPUN::SetMyNickName(::StringW  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetMyNickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetMyDefaultName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetNickName(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetNickName(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystemPUN::SetMyTutorialComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::GetMyTutorialCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::GetPlayerTutorialCompletion(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetPlayerPlatform(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetPlayerMothershipId(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetMyUserID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetUserID(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystemPUN::GetUserID(::GlobalNamespace::NetPlayer*  netPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, netPlayer);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::GlobalPlayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::IsObjectLocallyOwned(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void GlobalNamespace::NetworkSystemPUN::UpdateNetPlayerList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystemPUN::IsObjectRoomObject(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemPUN::ShouldUpdateObject(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemPUN::ShouldWriteObjectData(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::NetworkSystemPUN::GetOwningPlayerID(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystemPUN::ShouldSpawnLocally(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerID);
}
inline bool GlobalNamespace::NetworkSystemPUN::IsTotalAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::OnConnectedtoMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnConnectedtoMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void GlobalNamespace::NetworkSystemPUN::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void GlobalNamespace::NetworkSystemPUN::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::NetworkSystemPUN::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::NetworkSystemPUN::OnDisconnected(::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void GlobalNamespace::NetworkSystemPUN::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline ::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken> GlobalNamespace::NetworkSystemPUN::GetCancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"GetCancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken>>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::ResetSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"ResetSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::UpdateZoneInfo(bool  roomIsPublic, ::StringW  zoneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"UpdateZoneInfo", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomIsPublic, zoneName);
}
inline void GlobalNamespace::NetworkSystemPUN::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::__n__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"<>n__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN::_SetupVoice_b__76_0(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN*>(),
                        {"<SetupVoice>b__76_0", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::NetworkSystemPUN* GlobalNamespace::NetworkSystemPUN::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemPUN*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemPUN::NetworkSystemPUN()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::*)()>(&::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570772c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0._JoinFriendsRoom_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::_JoinFriendsRoom_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5707734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>(),
                        {"<JoinFriendsRoom>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0._JoinFriendsRoom_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::_JoinFriendsRoom_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5707830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>(),
                        {"<JoinFriendsRoom>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*& GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>* const& GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::__cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr bool& GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::__cordl_internal_get_callbackFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackFinished;
}
constexpr bool const& GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::__cordl_internal_get_callbackFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackFinished;
}
constexpr void GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::__cordl_internal_set_callbackFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackFinished = value;
}
inline void GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::_JoinFriendsRoom_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>(),
                        {"<JoinFriendsRoom>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::_JoinFriendsRoom_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>(),
                        {"<JoinFriendsRoom>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0* GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0::NetworkSystemPUN___c__DisplayClass70_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c::*)()>(&::GlobalNamespace::NetworkSystemPUN___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57076a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c._FinishAuthenticating_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c::*)(::System::Threading::CancellationTokenSource*)>(&::GlobalNamespace::NetworkSystemPUN___c::_FinishAuthenticating_b__60_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57076a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {"<FinishAuthenticating>b__60_0", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c._ReturnToSinglePlayer_b__73_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c::*)(::System::Threading::CancellationTokenSource*)>(&::GlobalNamespace::NetworkSystemPUN___c::_ReturnToSinglePlayer_b__73_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57076d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {"<ReturnToSinglePlayer>b__73_0", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN___c._ResetSystem_b__123_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN___c::*)(::System::Threading::CancellationTokenSource*)>(&::GlobalNamespace::NetworkSystemPUN___c::_ResetSystem_b__123_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5707700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {"<ResetSystem>b__123_0", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemPUN___c::setStaticF___9(::GlobalNamespace::NetworkSystemPUN___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetworkSystemPUN___c*, "<>9", ::GlobalNamespace::NetworkSystemPUN___c*>(std::forward<::GlobalNamespace::NetworkSystemPUN___c*>(value));
}
inline ::GlobalNamespace::NetworkSystemPUN___c* GlobalNamespace::NetworkSystemPUN___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetworkSystemPUN___c*, "<>9", ::GlobalNamespace::NetworkSystemPUN___c*>();
}
inline void GlobalNamespace::NetworkSystemPUN___c::setStaticF___9__60_0(::System::Action_1<::System::Threading::CancellationTokenSource*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Threading::CancellationTokenSource*>*, "<>9__60_0", ::GlobalNamespace::NetworkSystemPUN___c*>(std::forward<::System::Action_1<::System::Threading::CancellationTokenSource*>*>(value));
}
inline ::System::Action_1<::System::Threading::CancellationTokenSource*>* GlobalNamespace::NetworkSystemPUN___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::CancellationTokenSource*>*, "<>9__60_0", ::GlobalNamespace::NetworkSystemPUN___c*>();
}
inline void GlobalNamespace::NetworkSystemPUN___c::setStaticF___9__73_0(::System::Action_1<::System::Threading::CancellationTokenSource*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Threading::CancellationTokenSource*>*, "<>9__73_0", ::GlobalNamespace::NetworkSystemPUN___c*>(std::forward<::System::Action_1<::System::Threading::CancellationTokenSource*>*>(value));
}
inline ::System::Action_1<::System::Threading::CancellationTokenSource*>* GlobalNamespace::NetworkSystemPUN___c::getStaticF___9__73_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::CancellationTokenSource*>*, "<>9__73_0", ::GlobalNamespace::NetworkSystemPUN___c*>();
}
inline void GlobalNamespace::NetworkSystemPUN___c::setStaticF___9__123_0(::System::Action_1<::System::Threading::CancellationTokenSource*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Threading::CancellationTokenSource*>*, "<>9__123_0", ::GlobalNamespace::NetworkSystemPUN___c*>(std::forward<::System::Action_1<::System::Threading::CancellationTokenSource*>*>(value));
}
inline ::System::Action_1<::System::Threading::CancellationTokenSource*>* GlobalNamespace::NetworkSystemPUN___c::getStaticF___9__123_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::CancellationTokenSource*>*, "<>9__123_0", ::GlobalNamespace::NetworkSystemPUN___c*>();
}
inline void GlobalNamespace::NetworkSystemPUN___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN___c::_FinishAuthenticating_b__60_0(::System::Threading::CancellationTokenSource*  cts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {"<FinishAuthenticating>b__60_0", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cts);
}
inline void GlobalNamespace::NetworkSystemPUN___c::_ReturnToSinglePlayer_b__73_0(::System::Threading::CancellationTokenSource*  cts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {"<ReturnToSinglePlayer>b__73_0", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cts);
}
inline void GlobalNamespace::NetworkSystemPUN___c::_ResetSystem_b__123_0(::System::Threading::CancellationTokenSource*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN___c*>(),
                        {"<ResetSystem>b__123_0", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::GlobalNamespace::NetworkSystemPUN___c* GlobalNamespace::NetworkSystemPUN___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystemPUN___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemPUN___c::NetworkSystemPUN___c()   {
}
