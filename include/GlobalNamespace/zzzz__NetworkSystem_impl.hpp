#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystem.hpp"
#include "GlobalNamespace/zzzz__NetSystemState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemConfig_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetSystemState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem__RefreshNonce_d__94_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "GlobalNamespace/zzzz__RPCArgBuffer_1_def.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "GorillaNetworking/zzzz__SO_NetworkVoiceSettings_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_1_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_groupJoinInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_groupJoinInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e93d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_groupJoinInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.set_groupJoinInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(bool)>(&::GlobalNamespace::NetworkSystem::set_groupJoinInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e93d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"set_groupJoinInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_netState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetSystemState (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_netState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e93e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_netState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.set_netState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetSystemState)>(&::GlobalNamespace::NetworkSystem::set_netState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56e13fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"set_netState", {}, {::i2c::type_of<::GlobalNamespace::NetSystemState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_NetPlayerCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::NetPlayer*>* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_NetPlayerCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e93e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_NetPlayerCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_LocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_LocalPlayer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56e02a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_MasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_MasterClient)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56e93f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_LocalRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Recorder> (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_LocalRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e94fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_LocalRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_LocalSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Speaker> (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_LocalSpeaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e9504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_LocalSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.JoinedNetworkRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::JoinedNetworkRoom)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56e1bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"JoinedNetworkRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.MultiplayerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::MultiplayerStarted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56e950c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"MultiplayerStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.PreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::PreLeavingRoom)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56e9520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"PreLeavingRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.SinglePlayerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::SinglePlayerStarted)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x56e1c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"SinglePlayerStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::PlayerJoined)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56e1dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"PlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::PlayerLeft)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x56ddb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"PlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.OnMasterClientSwitchedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::OnMasterClientSwitchedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e9534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"OnMasterClientSwitchedCallback", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.add_OnRaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::System::Action_3<uint8_t,::System::Object*,int32_t>*)>(&::GlobalNamespace::NetworkSystem::add_OnRaiseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56e958c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"add_OnRaiseEvent", {}, {::i2c::type_of<::System::Action_3<uint8_t,::System::Object*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.remove_OnRaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::System::Action_3<uint8_t,::System::Object*,int32_t>*)>(&::GlobalNamespace::NetworkSystem::remove_OnRaiseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56e963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"remove_OnRaiseEvent", {}, {::i2c::type_of<::System::Action_3<uint8_t,::System::Object*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.RaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(uint8_t, ::System::Object*, int32_t)>(&::GlobalNamespace::NetworkSystem::RaiseEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56e96ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.add_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::GlobalNamespace::NetworkSystem::add_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56e9708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"add_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.remove_OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::GlobalNamespace::NetworkSystem::remove_OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56e97b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"remove_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.CustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::GlobalNamespace::NetworkSystem::CustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56e9868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"CustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.CustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::StringW)>(&::GlobalNamespace::NetworkSystem::CustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56e98e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"CustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.Initialise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::Initialise)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x56e0790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.RegisterSceneNetworkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::RegisterSceneNetworkItem)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56e9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RegisterSceneNetworkItem", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.AttachObjectInGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::AttachObjectInGame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56dba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.DetatchSceneObjectInGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::DetatchSceneObjectInGame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e9a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetAuthenticationValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::AuthenticationValues* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetAuthenticationValues)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56e9a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.SetAuthenticationValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::Photon::Realtime::AuthenticationValues*)>(&::GlobalNamespace::NetworkSystem::SetAuthenticationValues)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56e9ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.FinishAuthenticating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::FinishAuthenticating)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ConnectToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* (::GlobalNamespace::NetworkSystem::*)(::StringW, ::GlobalNamespace::RoomConfig*, int32_t)>(&::GlobalNamespace::NetworkSystem::ConnectToRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.JoinFriendsRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystem::*)(::StringW, int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::NetworkSystem::JoinFriendsRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ReturnToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::ReturnToSinglePlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.JoinPubWithFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::JoinPubWithFriends)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_WrongVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_WrongVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e9b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_WrongVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.SetWrongVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::SetWrongVersion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56e9b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"SetWrongVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*, bool)>(&::GlobalNamespace::NetworkSystem::NetInstantiate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56e9b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"NetInstantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::NetworkSystem::NetInstantiate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56e9bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"NetInstantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::NetworkSystem::NetInstantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, bool)>(&::GlobalNamespace::NetworkSystem::NetInstantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, uint8_t, ::ArrayW<::System::Object*>, ::Fusion::NetworkRunner_OnBeforeSpawned*)>(&::GlobalNamespace::NetworkSystem::NetInstantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.SetPlayerObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*, ::System::Nullable_1<int32_t>)>(&::GlobalNamespace::NetworkSystem::SetPlayerObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::NetDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_RPC*, bool)>(&::GlobalNamespace::NetworkSystem::CallRPC)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_StringRPC*, ::StringW, bool)>(&::GlobalNamespace::NetworkSystem::CallRPC)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(int32_t, ::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_RPC*)>(&::GlobalNamespace::NetworkSystem::CallRPC)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.CallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(int32_t, ::UnityEngine::MonoBehaviour*, ::GlobalNamespace::NetworkSystem_StringRPC*, ::StringW)>(&::GlobalNamespace::NetworkSystem::CallRPC)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetRandomRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::NetworkSystem::GetRandomRoomName)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x56e5ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetRandomRoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetRandomWeightedRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetRandomWeightedRegion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.RefreshNonce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::RefreshNonce)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56e9c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RefreshNonce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetSteamAuthTicketSuccessCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::StringW)>(&::GlobalNamespace::NetworkSystem::GetSteamAuthTicketSuccessCallback)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56e9d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetSteamAuthTicketSuccessCallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetSteamAuthTicketFailureCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::Steamworks::EResult)>(&::GlobalNamespace::NetworkSystem::GetSteamAuthTicketFailureCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56e9e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetSteamAuthTicketFailureCallback", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ReGetNonce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::ReGetNonce)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56e9e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"ReGetNonce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.BroadcastMyRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(bool, ::StringW, ::StringW)>(&::GlobalNamespace::NetworkSystem::BroadcastMyRoom)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x56e9f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"BroadcastMyRoom", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.InstantCheckGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(::StringW, ::StringW)>(&::GlobalNamespace::NetworkSystem::InstantCheckGroupData)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x56ea23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"InstantCheckGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetNetPlayerByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetNetPlayerByID)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56ea4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetNetPlayerByID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetRaiseEventReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(uint8_t, ::System::Object*)>(&::GlobalNamespace::NetworkSystem::NetRaiseEventReliable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ea5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetRaiseEventUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(uint8_t, ::System::Object*)>(&::GlobalNamespace::NetworkSystem::NetRaiseEventUnreliable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ea5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetRaiseEventReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(uint8_t, ::System::Object*, ::GlobalNamespace::NetEventOptions*)>(&::GlobalNamespace::NetworkSystem::NetRaiseEventReliable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ea5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.NetRaiseEventUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(uint8_t, ::System::Object*, ::GlobalNamespace::NetEventOptions*)>(&::GlobalNamespace::NetworkSystem::NetRaiseEventUnreliable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ea5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ShuffleRoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, bool)>(&::GlobalNamespace::NetworkSystem::ShuffleRoomName)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x56e5658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"ShuffleRoomName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::NetworkSystem::mod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ea5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"mod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.AwaitSceneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::AwaitSceneReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_CurrentPhotonBackend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_CurrentPhotonBackend)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetLocalPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkSystem::GetPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56e7dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.FindPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetworkSystem::FindPlayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56ea5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"FindPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::NetworkSystem::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::NetworkSystem::GetPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56da474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.SetMyNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::StringW)>(&::GlobalNamespace::NetworkSystem::SetMyNickName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetMyNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetMyNickName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetMyDefaultName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetMyDefaultName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetNickName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::GetNickName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetMyUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetMyUserID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetUserID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::GetUserID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.SetMyTutorialComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::SetMyTutorialComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetMyTutorialCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetMyTutorialCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayerTutorialCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetPlayerTutorialCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetMyPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GetMyPlatform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56ea6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetMyPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayerPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetPlayerPlatform)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56ea734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayerPlatform", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayerMothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::GetPlayerMothershipId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56ea768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayerMothershipId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayerPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::GetPlayerPlatform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetPlayerMothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem::GetPlayerMothershipId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.AddVoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::GorillaNetworking::SO_NetworkVoiceSettings*)>(&::GlobalNamespace::NetworkSystem::AddVoiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ea79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"AddVoiceSettings", {}, {::i2c::type_of<::GorillaNetworking::SO_NetworkVoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.AddRemoteVoiceAddedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::GlobalNamespace::NetworkSystem::AddRemoteVoiceAddedCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_VoiceConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::VoiceConnection> (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_VoiceConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_IsOnline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_InRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_RoomName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.RoomStringStripped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::RoomStringStripped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.RoomString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::RoomString)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x56ea7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RoomString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_GameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_GameModeString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_CurrentRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_CurrentRegion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_SessionIsPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_SessionIsPrivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_SessionIsSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_SessionIsSubscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_LocalPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_LocalPlayerID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_AllNetPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NetPlayer*> (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_AllNetPlayers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56eaaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_PlayerListOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NetPlayer*> (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_PlayerListOthers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56eaaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.UpdateNetPlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::UpdateNetPlayerList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.UpdatePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::UpdatePlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56dd7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"UpdatePlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_SimTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_SimTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_SimDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_SimDeltaTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_SimTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_SimTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_TickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_TickRate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_ServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_ServerTimestamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_RoomPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_RoomPlayerCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GlobalPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::GlobalPlayerCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.get_CurrentRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RoomConfig* (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::get_CurrentRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56eac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_CurrentRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.set_CurrentRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)(::GlobalNamespace::RoomConfig*)>(&::GlobalNamespace::NetworkSystem::set_CurrentRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56eac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"set_CurrentRoom", {}, {::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.IsObjectLocallyOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::IsObjectLocallyOwned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.IsObjectRoomObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::IsObjectRoomObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ShouldUpdateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::ShouldUpdateObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ShouldWriteObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::ShouldWriteObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.GetOwningPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkSystem::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::NetworkSystem::GetOwningPlayerID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.ShouldSpawnLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)(int32_t)>(&::GlobalNamespace::NetworkSystem::ShouldSpawnLocally)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem.IsTotalAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::IsTotalAuthority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem::*)()>(&::GlobalNamespace::NetworkSystem::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x56e04f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkSystemConfig& GlobalNamespace::NetworkSystem::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::GlobalNamespace::NetworkSystemConfig const& GlobalNamespace::NetworkSystem::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_config(::GlobalNamespace::NetworkSystemConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr bool& GlobalNamespace::NetworkSystem::__cordl_internal_get_changingSceneManually()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changingSceneManually;
}
constexpr bool const& GlobalNamespace::NetworkSystem::__cordl_internal_get_changingSceneManually() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changingSceneManually;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_changingSceneManually(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changingSceneManually = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::NetworkSystem::__cordl_internal_get_regionNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::NetworkSystem::__cordl_internal_get_regionNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionNames;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_regionNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionNames = value;
}
constexpr int32_t& GlobalNamespace::NetworkSystem::__cordl_internal_get_currentRegionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRegionIndex;
}
constexpr int32_t const& GlobalNamespace::NetworkSystem::__cordl_internal_get_currentRegionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRegionIndex;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_currentRegionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRegionIndex = value;
}
constexpr bool& GlobalNamespace::NetworkSystem::__cordl_internal_get__groupJoinInProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupJoinInProgress_k__BackingField;
}
constexpr bool const& GlobalNamespace::NetworkSystem::__cordl_internal_get__groupJoinInProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupJoinInProgress_k__BackingField;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set__groupJoinInProgress_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupJoinInProgress_k__BackingField = value;
}
constexpr bool& GlobalNamespace::NetworkSystem::__cordl_internal_get_nonceRefreshed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonceRefreshed;
}
constexpr bool const& GlobalNamespace::NetworkSystem::__cordl_internal_get_nonceRefreshed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonceRefreshed;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_nonceRefreshed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonceRefreshed = value;
}
constexpr bool& GlobalNamespace::NetworkSystem::__cordl_internal_get_isWrongVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isWrongVersion;
}
constexpr bool const& GlobalNamespace::NetworkSystem::__cordl_internal_get_isWrongVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isWrongVersion;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_isWrongVersion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isWrongVersion = value;
}
constexpr ::GlobalNamespace::NetSystemState& GlobalNamespace::NetworkSystem::__cordl_internal_get_testState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testState;
}
constexpr ::GlobalNamespace::NetSystemState const& GlobalNamespace::NetworkSystem::__cordl_internal_get_testState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testState;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_testState(::GlobalNamespace::NetSystemState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testState = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_netPlayerCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netPlayerCache;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_netPlayerCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netPlayerCache;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_netPlayerCache(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netPlayerCache = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& GlobalNamespace::NetworkSystem::__cordl_internal_get_localRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRecorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& GlobalNamespace::NetworkSystem::__cordl_internal_get_localRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRecorder;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_localRecorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRecorder = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& GlobalNamespace::NetworkSystem::__cordl_internal_get_localSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpeaker;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& GlobalNamespace::NetworkSystem::__cordl_internal_get_localSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpeaker;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_localSpeaker(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localSpeaker = value;
}
constexpr bool& GlobalNamespace::NetworkSystem::__cordl_internal_get__IsMasterClient_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMasterClient_k__BackingField;
}
constexpr bool const& GlobalNamespace::NetworkSystem::__cordl_internal_get__IsMasterClient_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMasterClient_k__BackingField;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set__IsMasterClient_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMasterClient_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_SceneObjectsToAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObjectsToAttach;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_SceneObjectsToAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObjectsToAttach;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_SceneObjectsToAttach(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneObjectsToAttach = value;
}
constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>& GlobalNamespace::NetworkSystem::__cordl_internal_get_VoiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceSettings;
}
constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings> const& GlobalNamespace::NetworkSystem::__cordl_internal_get_VoiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceSettings;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_VoiceSettings(::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_remoteVoiceAddedCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoiceAddedCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_remoteVoiceAddedCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoiceAddedCallbacks;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_remoteVoiceAddedCallbacks(::System::Collections::Generic::List_1<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteVoiceAddedCallbacks = value;
}
constexpr ::GorillaTag::DelegateListProcessor*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnJoinedRoomEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnJoinedRoomEvent;
}
constexpr ::GorillaTag::DelegateListProcessor* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnJoinedRoomEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnJoinedRoomEvent;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnJoinedRoomEvent(::GorillaTag::DelegateListProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnJoinedRoomEvent = value;
}
constexpr ::GorillaTag::DelegateListProcessor*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnMultiplayerStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMultiplayerStarted;
}
constexpr ::GorillaTag::DelegateListProcessor* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnMultiplayerStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMultiplayerStarted;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnMultiplayerStarted(::GorillaTag::DelegateListProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMultiplayerStarted = value;
}
constexpr ::GorillaTag::DelegateListProcessor*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnReturnedToSinglePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReturnedToSinglePlayer;
}
constexpr ::GorillaTag::DelegateListProcessor* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnReturnedToSinglePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReturnedToSinglePlayer;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnReturnedToSinglePlayer(::GorillaTag::DelegateListProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReturnedToSinglePlayer = value;
}
constexpr ::GorillaTag::DelegateListProcessor*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnPreLeavingRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPreLeavingRoom;
}
constexpr ::GorillaTag::DelegateListProcessor* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnPreLeavingRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPreLeavingRoom;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnPreLeavingRoom(::GorillaTag::DelegateListProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPreLeavingRoom = value;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnPlayerJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerJoined;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnPlayerJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerJoined;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnPlayerJoined(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerJoined = value;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnPlayerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeft;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnPlayerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeft;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnPlayerLeft(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerLeft = value;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnMasterClientSwitchedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMasterClientSwitchedEvent;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnMasterClientSwitchedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMasterClientSwitchedEvent;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnMasterClientSwitchedEvent(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMasterClientSwitchedEvent = value;
}
constexpr ::System::Action_3<uint8_t,::System::Object*,int32_t>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnRaiseEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRaiseEvent;
}
constexpr ::System::Action_3<uint8_t,::System::Object*,int32_t>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnRaiseEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRaiseEvent;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnRaiseEvent(::System::Action_3<uint8_t,::System::Object*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRaiseEvent = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnCustomAuthenticationResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCustomAuthenticationResponse;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& GlobalNamespace::NetworkSystem::__cordl_internal_get_OnCustomAuthenticationResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCustomAuthenticationResponse;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_OnCustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCustomAuthenticationResponse = value;
}
constexpr ::StringW& GlobalNamespace::NetworkSystem::__cordl_internal_get_groupJoinOverrideGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJoinOverrideGameMode;
}
constexpr ::StringW const& GlobalNamespace::NetworkSystem::__cordl_internal_get_groupJoinOverrideGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupJoinOverrideGameMode;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set_groupJoinOverrideGameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupJoinOverrideGameMode = value;
}
constexpr ::GlobalNamespace::RoomConfig*& GlobalNamespace::NetworkSystem::__cordl_internal_get__CurrentRoom_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentRoom_k__BackingField;
}
constexpr ::GlobalNamespace::RoomConfig* const& GlobalNamespace::NetworkSystem::__cordl_internal_get__CurrentRoom_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentRoom_k__BackingField;
}
constexpr void GlobalNamespace::NetworkSystem::__cordl_internal_set__CurrentRoom_k__BackingField(::GlobalNamespace::RoomConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentRoom_k__BackingField = value;
}
inline void GlobalNamespace::NetworkSystem::setStaticF_Instance(::UnityW<::GlobalNamespace::NetworkSystem>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::NetworkSystem>, "Instance", ::GlobalNamespace::NetworkSystem*>(std::forward<::UnityW<::GlobalNamespace::NetworkSystem>>(value));
}
inline ::UnityW<::GlobalNamespace::NetworkSystem> GlobalNamespace::NetworkSystem::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::NetworkSystem>, "Instance", ::GlobalNamespace::NetworkSystem*>();
}
inline void GlobalNamespace::NetworkSystem::setStaticF_EmptyArgs(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EmptyArgs", ::GlobalNamespace::NetworkSystem*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::NetworkSystem::getStaticF_EmptyArgs()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EmptyArgs", ::GlobalNamespace::NetworkSystem*>();
}
inline void GlobalNamespace::NetworkSystem::setStaticF_shuffleStringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "shuffleStringBuilder", ::GlobalNamespace::NetworkSystem*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GlobalNamespace::NetworkSystem::getStaticF_shuffleStringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "shuffleStringBuilder", ::GlobalNamespace::NetworkSystem*>();
}
inline void GlobalNamespace::NetworkSystem::setStaticF_reusableSB(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "reusableSB", ::GlobalNamespace::NetworkSystem*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GlobalNamespace::NetworkSystem::getStaticF_reusableSB()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "reusableSB", ::GlobalNamespace::NetworkSystem*>();
}
inline bool GlobalNamespace::NetworkSystem::get_groupJoinInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_groupJoinInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::set_groupJoinInProgress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"set_groupJoinInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NetSystemState GlobalNamespace::NetworkSystem::get_netState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_netState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetSystemState>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::set_netState(::GlobalNamespace::NetSystemState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"set_netState", {}, {::i2c::type_of<::GlobalNamespace::NetSystemState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::NetworkSystem::get_NetPlayerCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_NetPlayerCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::NetPlayer*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::get_LocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_LocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::get_IsMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::get_MasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::Unity::Recorder> GlobalNamespace::NetworkSystem::get_LocalRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_LocalRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Recorder>>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::Unity::Speaker> GlobalNamespace::NetworkSystem::get_LocalSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_LocalSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Speaker>>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::JoinedNetworkRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"JoinedNetworkRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::MultiplayerStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"MultiplayerStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::PreLeavingRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"PreLeavingRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::SinglePlayerStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"SinglePlayerStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::PlayerJoined(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"PlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::NetworkSystem::PlayerLeft(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"PlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::NetworkSystem::OnMasterClientSwitchedCallback(::GlobalNamespace::NetPlayer*  nMaster)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"OnMasterClientSwitchedCallback", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nMaster);
}
inline void GlobalNamespace::NetworkSystem::add_OnRaiseEvent(::System::Action_3<uint8_t,::System::Object*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"add_OnRaiseEvent", {}, {::i2c::type_of<::System::Action_3<uint8_t,::System::Object*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkSystem::remove_OnRaiseEvent(::System::Action_3<uint8_t,::System::Object*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"remove_OnRaiseEvent", {}, {::i2c::type_of<::System::Action_3<uint8_t,::System::Object*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkSystem::RaiseEvent(uint8_t  eventCode, ::System::Object*  data, int32_t  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data, source);
}
inline void GlobalNamespace::NetworkSystem::add_OnCustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"add_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkSystem::remove_OnCustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"remove_OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkSystem::CustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"CustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::NetworkSystem::CustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"CustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void GlobalNamespace::NetworkSystem::Initialise()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::RegisterSceneNetworkItem(::UnityEngine::GameObject*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RegisterSceneNetworkItem", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkSystem::AttachObjectInGame(::UnityEngine::GameObject*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkSystem::DetatchSceneObjectInGame(::UnityEngine::GameObject*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline ::Photon::Realtime::AuthenticationValues* GlobalNamespace::NetworkSystem::GetAuthenticationValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AuthenticationValues*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::SetAuthenticationValues(::Photon::Realtime::AuthenticationValues*  authValues)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authValues);
}
inline void GlobalNamespace::NetworkSystem::FinishAuthenticating()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>* GlobalNamespace::NetworkSystem::ConnectToRoom(::StringW  roomName, ::GlobalNamespace::RoomConfig*  opts, int32_t  regionIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*>(this, ___internal_method, roomName, opts, regionIndex);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystem::JoinFriendsRoom(::StringW  userID, int32_t  actorID, ::StringW  keyToFollow, ::StringW  shufflerToFollow)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, userID, actorID, keyToFollow, shufflerToFollow);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystem::ReturnToSinglePlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::JoinPubWithFriends()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::get_WrongVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_WrongVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::SetWrongVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"SetWrongVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystem::NetInstantiate(::UnityEngine::GameObject*  prefab, bool  isRoomObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"NetInstantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystem::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, bool  isRoomObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"NetInstantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystem::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystem::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  playerAuthID, bool  isRoomObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, playerAuthID, isRoomObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::NetworkSystem::NetInstantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  isRoomObject, uint8_t  group, ::ArrayW<::System::Object*>  data, ::Fusion::NetworkRunner_OnBeforeSpawned*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, isRoomObject, group, data, callback);
}
inline void GlobalNamespace::NetworkSystem::SetPlayerObject(::UnityEngine::GameObject*  playerInstance, ::System::Nullable_1<int32_t>  owningPlayerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerInstance, owningPlayerID);
}
inline void GlobalNamespace::NetworkSystem::NetDestroy(::UnityEngine::GameObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void GlobalNamespace::NetworkSystem::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, bool  sendToSelf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, sendToSelf);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetworkSystem::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args, bool  sendToSelf)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 23}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, args, sendToSelf);
}
inline void GlobalNamespace::NetworkSystem::CallRPC(::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message, bool  sendToSelf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, rpcMethod, message, sendToSelf);
}
inline void GlobalNamespace::NetworkSystem::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetworkSystem::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_RPC*  rpcMethod, ::GlobalNamespace::RPCArgBuffer_1<T>  args)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 26}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod, args);
}
inline void GlobalNamespace::NetworkSystem::CallRPC(int32_t  targetPlayerID, ::UnityEngine::MonoBehaviour*  component, ::GlobalNamespace::NetworkSystem_StringRPC*  rpcMethod, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerID, component, rpcMethod, message);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetRandomRoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetRandomRoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetRandomWeightedRegion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystem::RefreshNonce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RefreshNonce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::GetSteamAuthTicketSuccessCallback(::StringW  ticket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetSteamAuthTicketSuccessCallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticket);
}
inline void GlobalNamespace::NetworkSystem::GetSteamAuthTicketFailureCallback(::Steamworks::EResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetSteamAuthTicketFailureCallback", {}, {::i2c::type_of<::Steamworks::EResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::NetworkSystem::ReGetNonce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"ReGetNonce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::BroadcastMyRoom(bool  create, ::StringW  key, ::StringW  shuffler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"BroadcastMyRoom", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, create, key, shuffler);
}
inline bool GlobalNamespace::NetworkSystem::InstantCheckGroupData(::StringW  userID, ::StringW  keyToFollow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"InstantCheckGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userID, keyToFollow);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::GetNetPlayerByID(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetNetPlayerByID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, playerActorNumber);
}
inline void GlobalNamespace::NetworkSystem::NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data);
}
inline void GlobalNamespace::NetworkSystem::NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data);
}
inline void GlobalNamespace::NetworkSystem::NetRaiseEventReliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data, options);
}
inline void GlobalNamespace::NetworkSystem::NetRaiseEventUnreliable(uint8_t  eventCode, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, data, options);
}
inline ::StringW GlobalNamespace::NetworkSystem::ShuffleRoomName(::StringW  room, ::StringW  shuffle, bool  encode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"ShuffleRoomName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, room, shuffle, encode);
}
inline int32_t GlobalNamespace::NetworkSystem::mod(int32_t  x, int32_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"mod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, m);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NetworkSystem::AwaitSceneReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::get_CurrentPhotonBackend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::GetLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::GetPlayer(int32_t  PlayerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, PlayerID);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::GetPlayer(::Photon::Realtime::Player*  punPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, punPlayer);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::FindPlayer(::Photon::Realtime::Player*  punPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"FindPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, punPlayer);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetworkSystem::GetPlayer(::Fusion::PlayerRef  playerRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, playerRef);
}
inline void GlobalNamespace::NetworkSystem::SetMyNickName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetMyNickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetMyDefaultName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetNickName(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetNickName(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetMyUserID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetUserID(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetUserID(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystem::SetMyTutorialComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::GetMyTutorialCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::GetPlayerTutorialCompletion(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetMyPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetMyPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetPlayerPlatform(int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayerPlatform", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetPlayerMothershipId(int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"GetPlayerMothershipId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerID);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetPlayerPlatform(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::NetworkSystem::GetPlayerMothershipId(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkSystem::AddVoiceSettings(::GorillaNetworking::SO_NetworkVoiceSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"AddVoiceSettings", {}, {::i2c::type_of<::GorillaNetworking::SO_NetworkVoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::NetworkSystem::AddRemoteVoiceAddedCallback(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::UnityW<::Photon::Voice::Unity::VoiceConnection> GlobalNamespace::NetworkSystem::get_VoiceConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::VoiceConnection>>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::get_IsOnline()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::get_InRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::get_RoomName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::RoomStringStripped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::RoomString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"RoomString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::get_GameModeString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkSystem::get_CurrentRegion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::get_SessionIsPrivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem::get_SessionIsSubscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystem::get_LocalPlayerID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NetPlayer*> GlobalNamespace::NetworkSystem::get_AllNetPlayers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NetPlayer*>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NetPlayer*> GlobalNamespace::NetworkSystem::get_PlayerListOthers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NetPlayer*>>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::UpdateNetPlayerList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::UpdatePlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"UpdatePlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::NetworkSystem::get_SimTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::NetworkSystem::get_SimDeltaTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystem::get_SimTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystem::get_TickRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystem::get_ServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystem::get_RoomPlayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkSystem::GlobalPlayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomConfig* GlobalNamespace::NetworkSystem::get_CurrentRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"get_CurrentRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomConfig*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::set_CurrentRoom(::GlobalNamespace::RoomConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {"set_CurrentRoom", {}, {::i2c::type_of<::GlobalNamespace::RoomConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NetworkSystem::IsObjectLocallyOwned(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystem::IsObjectRoomObject(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystem::ShouldUpdateObject(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystem::ShouldWriteObjectData(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::NetworkSystem::GetOwningPlayerID(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::NetworkSystem::ShouldSpawnLocally(int32_t  playerID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerID);
}
inline bool GlobalNamespace::NetworkSystem::IsTotalAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkSystem* GlobalNamespace::NetworkSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem::NetworkSystem()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::*)(int32_t)>(&::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56e9ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::*)()>(&::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56eb258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::*)()>(&::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::MoveNext)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x56eb25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::*)()>(&::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56eb3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::*)()>(&::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56eb3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::*)()>(&::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56eb434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::NetworkSystem>& GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::NetworkSystem> const& GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::NetworkSystem__ReGetNonce_d__97::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NetworkSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::NetworkSystem__ReGetNonce_d__97::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem__ReGetNonce_d__97::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::NetworkSystem__ReGetNonce_d__97::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97* GlobalNamespace::NetworkSystem__ReGetNonce_d__97::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem__ReGetNonce_d__97*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::NetworkSystem__ReGetNonce_d__97::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::NetworkSystem__ReGetNonce_d__97::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::NetworkSystem__ReGetNonce_d__97::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NetworkSystem__ReGetNonce_d__97::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::NetworkSystem__ReGetNonce_d__97::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::NetworkSystem__ReGetNonce_d__97::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem__ReGetNonce_d__97::NetworkSystem__ReGetNonce_d__97()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c__DisplayClass99_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c__DisplayClass99_0::*)()>(&::GlobalNamespace::NetworkSystem___c__DisplayClass99_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ea4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c__DisplayClass99_0._InstantCheckGroupData_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c__DisplayClass99_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GlobalNamespace::NetworkSystem___c__DisplayClass99_0::_InstantCheckGroupData_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56eb1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*>(),
                        {"<InstantCheckGroupData>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::NetworkSystem___c__DisplayClass99_0::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& GlobalNamespace::NetworkSystem___c__DisplayClass99_0::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void GlobalNamespace::NetworkSystem___c__DisplayClass99_0::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
inline void GlobalNamespace::NetworkSystem___c__DisplayClass99_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystem___c__DisplayClass99_0::_InstantCheckGroupData_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*>(),
                        {"<InstantCheckGroupData>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::NetworkSystem___c__DisplayClass99_0* GlobalNamespace::NetworkSystem___c__DisplayClass99_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem___c__DisplayClass99_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem___c__DisplayClass99_0::NetworkSystem___c__DisplayClass99_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c__DisplayClass100_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c__DisplayClass100_0::*)()>(&::GlobalNamespace::NetworkSystem___c__DisplayClass100_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ea5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c__DisplayClass100_0._GetNetPlayerByID_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem___c__DisplayClass100_0::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem___c__DisplayClass100_0::_GetNetPlayerByID_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56eb1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*>(),
                        {"<GetNetPlayerByID>b__0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NetworkSystem___c__DisplayClass100_0::__cordl_internal_get_playerActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorNumber;
}
constexpr int32_t const& GlobalNamespace::NetworkSystem___c__DisplayClass100_0::__cordl_internal_get_playerActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorNumber;
}
constexpr void GlobalNamespace::NetworkSystem___c__DisplayClass100_0::__cordl_internal_set_playerActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerActorNumber = value;
}
inline void GlobalNamespace::NetworkSystem___c__DisplayClass100_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem___c__DisplayClass100_0::_GetNetPlayerByID_b__0(::GlobalNamespace::NetPlayer*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*>(),
                        {"<GetNetPlayerByID>b__0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::GlobalNamespace::NetworkSystem___c__DisplayClass100_0* GlobalNamespace::NetworkSystem___c__DisplayClass100_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem___c__DisplayClass100_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem___c__DisplayClass100_0::NetworkSystem___c__DisplayClass100_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c::*)()>(&::GlobalNamespace::NetworkSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56eb130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._get_LocalPlayer_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem___c::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem___c::_get_LocalPlayer_b__25_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56eb138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<get_LocalPlayer>b__25_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._get_MasterClient_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem___c::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem___c::_get_MasterClient_b__30_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56eb158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<get_MasterClient>b__30_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._BroadcastMyRoom_b__98_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GlobalNamespace::NetworkSystem___c::_BroadcastMyRoom_b__98_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56eb178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<BroadcastMyRoom>b__98_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._BroadcastMyRoom_b__98_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::NetworkSystem___c::_BroadcastMyRoom_b__98_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56eb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<BroadcastMyRoom>b__98_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._InstantCheckGroupData_b__99_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::NetworkSystem___c::_InstantCheckGroupData_b__99_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56eb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<InstantCheckGroupData>b__99_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem___c._get_PlayerListOthers_b__159_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSystem___c::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetworkSystem___c::_get_PlayerListOthers_b__159_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56eb184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<get_PlayerListOthers>b__159_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9(::GlobalNamespace::NetworkSystem___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetworkSystem___c*, "<>9", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::GlobalNamespace::NetworkSystem___c*>(value));
}
inline ::GlobalNamespace::NetworkSystem___c* GlobalNamespace::NetworkSystem___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetworkSystem___c*, "<>9", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9__25_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__25_0", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::NetworkSystem___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__25_0", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9__30_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__30_0", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::NetworkSystem___c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__30_0", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9__98_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__98_0", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(value));
}
inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* GlobalNamespace::NetworkSystem___c::getStaticF___9__98_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__98_0", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9__98_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__98_1", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::NetworkSystem___c::getStaticF___9__98_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__98_1", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9__99_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__99_1", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::NetworkSystem___c::getStaticF___9__99_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__99_1", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::setStaticF___9__159_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__159_0", ::GlobalNamespace::NetworkSystem___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::NetworkSystem___c::getStaticF___9__159_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::NetPlayer*>*, "<>9__159_0", ::GlobalNamespace::NetworkSystem___c*>();
}
inline void GlobalNamespace::NetworkSystem___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetworkSystem___c::_get_LocalPlayer_b__25_0(::GlobalNamespace::NetPlayer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<get_LocalPlayer>b__25_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool GlobalNamespace::NetworkSystem___c::_get_MasterClient_b__30_0(::GlobalNamespace::NetPlayer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<get_MasterClient>b__30_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void GlobalNamespace::NetworkSystem___c::_BroadcastMyRoom_b__98_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<BroadcastMyRoom>b__98_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::NetworkSystem___c::_BroadcastMyRoom_b__98_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<BroadcastMyRoom>b__98_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::NetworkSystem___c::_InstantCheckGroupData_b__99_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<InstantCheckGroupData>b__99_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline bool GlobalNamespace::NetworkSystem___c::_get_PlayerListOthers_b__159_0(::GlobalNamespace::NetPlayer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem___c*>(),
                        {"<get_PlayerListOthers>b__159_0", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::NetworkSystem___c* GlobalNamespace::NetworkSystem___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem___c::NetworkSystem___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56eafd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56eb088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56eb09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::*)(::System::IAsyncResult*)>(&::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56eb0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::Invoke(::ArrayW<uint8_t>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::System::IAsyncResult* GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::BeginInvoke(::ArrayW<uint8_t>  args, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, args, callback, object);
}
inline void GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder::NetworkSystem_StaticRPCPlaceholder()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StaticRPC::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::NetworkSystem_StaticRPC::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56eaee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPC.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StaticRPC::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::NetworkSystem_StaticRPC::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56eaf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPC.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::NetworkSystem_StaticRPC::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::NetworkSystem_StaticRPC::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56eafac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StaticRPC.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StaticRPC::*)(::System::IAsyncResult*)>(&::GlobalNamespace::NetworkSystem_StaticRPC::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56eafcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystem_StaticRPC::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::NetworkSystem_StaticRPC::Invoke(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* GlobalNamespace::NetworkSystem_StaticRPC::BeginInvoke(::ArrayW<uint8_t>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void GlobalNamespace::NetworkSystem_StaticRPC::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StaticRPC*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::NetworkSystem_StaticRPC* GlobalNamespace::NetworkSystem_StaticRPC::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem_StaticRPC*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem_StaticRPC::NetworkSystem_StaticRPC()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StringRPC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StringRPC::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::NetworkSystem_StringRPC::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56eadf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StringRPC.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StringRPC::*)(::StringW)>(&::GlobalNamespace::NetworkSystem_StringRPC::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56eaea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StringRPC.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::NetworkSystem_StringRPC::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::NetworkSystem_StringRPC::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56eaebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_StringRPC.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_StringRPC::*)(::System::IAsyncResult*)>(&::GlobalNamespace::NetworkSystem_StringRPC::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56eaedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystem_StringRPC::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::NetworkSystem_StringRPC::Invoke(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* GlobalNamespace::NetworkSystem_StringRPC::BeginInvoke(::StringW  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, callback, object);
}
inline void GlobalNamespace::NetworkSystem_StringRPC::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_StringRPC*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::NetworkSystem_StringRPC* GlobalNamespace::NetworkSystem_StringRPC::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem_StringRPC*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem_StringRPC::NetworkSystem_StringRPC()   {
}
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_RPC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_RPC::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::NetworkSystem_RPC::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56ead08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_RPC.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_RPC::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::NetworkSystem_RPC::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56eadb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_RPC.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::NetworkSystem_RPC::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::NetworkSystem_RPC::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56eadcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystem_RPC.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystem_RPC::*)(::System::IAsyncResult*)>(&::GlobalNamespace::NetworkSystem_RPC::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56eadec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystem_RPC::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::NetworkSystem_RPC::Invoke(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* GlobalNamespace::NetworkSystem_RPC::BeginInvoke(::ArrayW<uint8_t>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void GlobalNamespace::NetworkSystem_RPC::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkSystem_RPC*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::NetworkSystem_RPC* GlobalNamespace::NetworkSystem_RPC::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkSystem_RPC*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystem_RPC::NetworkSystem_RPC()   {
}
