#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/CustomMatchmakingFusion.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "Fusion/zzzz__SessionInfo_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion__CreateRoom_d__11_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion__GetSessionList_d__25_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion__JoinOpenRoom_d__13_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion__JoinRoom_d__12_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomCreationOptions_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.get_GameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::GameMode (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_GameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_GameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.set_GameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(::Fusion::GameMode)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::set_GameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5a0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"set_GameMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f5a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f5a1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f5a2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.InitializeNetworkRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::InitializeNetworkRunner)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f5a440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"InitializeNetworkRunner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.CreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::CreateRoom)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f5a52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"CreateRoom", {}, {::i2c::type_of<::GlobalNamespace::CustomMatchmaking_RoomCreationOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::JoinRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9f5a658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.JoinOpenRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::JoinOpenRoom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9f5a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"JoinOpenRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::LeaveRoom)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x9f5a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"LeaveRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.get_SupportsRoomPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_SupportsRoomPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5ab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_SupportsRoomPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_IsConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f5ab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.get_ConnectedRoomToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_ConnectedRoomToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f5adc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_ConnectedRoomToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.GetActiveNetworkRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::GetActiveNetworkRunner)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9f5ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"GetActiveNetworkRunner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.GetSceneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneInfo (*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::GetSceneInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f5ade8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"GetSceneInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.TryGetActiveSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Fusion::SceneRef>)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::TryGetActiveSceneRef)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f5aea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"TryGetActiveSceneRef", {}, {::i2c::type_of<::by_ref<::Fusion::SceneRef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.ClearSessionList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::ClearSessionList)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f5af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"ClearSessionList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.GetSessionList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(float_t)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::GetSessionList)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9f5af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"GetSessionList", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.SelectSessionToJoinFromList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SessionInfo* (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::SelectSessionToJoinFromList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f5b0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion.OnSessionListUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::OnSessionListUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f5b11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f5b128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::GameMode& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get_gameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameMode;
}
constexpr ::Fusion::GameMode const& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get_gameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameMode;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_set_gameMode(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameMode = value;
}
constexpr int32_t& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get_getSessionListTimeoutS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSessionListTimeoutS;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get_getSessionListTimeoutS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSessionListTimeoutS;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_set_getSessionListTimeoutS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getSessionListTimeoutS = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get__runnerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runnerPrefab;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get__runnerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runnerPrefab;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_set__runnerPrefab(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runnerPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get__sessionList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionList;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>* const& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_get__sessionList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionList;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::__cordl_internal_set__sessionList(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionList = value;
}
inline ::Fusion::GameMode Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_GameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_GameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::GameMode>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::set_GameMode(::Fusion::GameMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"set_GameMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkRunner> Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::InitializeNetworkRunner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"InitializeNetworkRunner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::CreateRoom(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"CreateRoom", {}, {::i2c::type_of<::GlobalNamespace::CustomMatchmaking_RoomCreationOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, options);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::JoinRoom(::StringW  roomToken, ::StringW  roomPassword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"JoinRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, roomToken, roomPassword);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::JoinOpenRoom(::StringW  lobbyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"JoinOpenRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*>(this, ___internal_method, lobbyName);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::LeaveRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"LeaveRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_SupportsRoomPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_SupportsRoomPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::get_ConnectedRoomToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"get_ConnectedRoomToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkRunner> Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::GetActiveNetworkRunner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"GetActiveNetworkRunner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(nullptr, ___internal_method);
}
inline ::Fusion::NetworkSceneInfo Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::GetSceneInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"GetSceneInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneInfo>(nullptr, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::TryGetActiveSceneRef(::by_ref<::Fusion::SceneRef>  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"TryGetActiveSceneRef", {}, {::i2c::type_of<::by_ref<::Fusion::SceneRef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneRef);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::ClearSessionList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"ClearSessionList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::GetSessionList(float_t  timeoutS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"GetSessionList", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*>(this, ___internal_method, timeoutS);
}
inline ::Fusion::SessionInfo* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::SelectSessionToJoinFromList(::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SessionInfo*>(this, ___internal_method, sessionList);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {"OnSessionListUpdated", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sessionList);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion*>());
}
/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::operator ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::i___Meta__XR__MultiplayerBlocks__Shared__CustomMatchmaking_ICustomMatchmakingBehaviour() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion::CustomMatchmakingFusion()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5b13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0._GetSessionList_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::_GetSessionList_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f5b144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*>(),
                        {"<GetSessionList>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>* const& Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::_GetSessionList_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*>(),
                        {"<GetSessionList>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0* Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion___c__DisplayClass25_0::CustomMatchmakingFusion___c__DisplayClass25_0()   {
}
