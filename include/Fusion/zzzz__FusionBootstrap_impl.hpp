#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrap.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__FusionBootstrap_Stage_impl.hpp"
#include "Fusion/zzzz__FusionBootstrap_StartModes_impl.hpp"
#include "Fusion/zzzz__FusionMppmCommand_impl.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "Fusion/zzzz__SceneRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionBootstrap_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__FusionBootstrap_Stage_def.hpp"
#include "Fusion/zzzz__FusionBootstrap_StartModes_def.hpp"
#include "Fusion/zzzz__FusionBootstrap_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_CurrentStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FusionBootstrap_Stage (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_CurrentStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CurrentStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.set_CurrentStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(::GlobalNamespace::FusionBootstrap_Stage)>(&::Fusion::FusionBootstrap::set_CurrentStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"set_CurrentStage", {}, {::i2c::type_of<::GlobalNamespace::FusionBootstrap_Stage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_LastCreatedClientIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_LastCreatedClientIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_LastCreatedClientIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.set_LastCreatedClientIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(int32_t)>(&::Fusion::FusionBootstrap::set_LastCreatedClientIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"set_LastCreatedClientIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_CurrentServerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::GameMode (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_CurrentServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CurrentServerMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.set_CurrentServerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(::Fusion::GameMode)>(&::Fusion::FusionBootstrap::set_CurrentServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ea310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"set_CurrentServerMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_CanAddClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_CanAddClients)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60ea318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CanAddClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_CanAddSharedClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_CanAddSharedClients)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60ea33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CanAddSharedClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_IsShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_IsShutdown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ea360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_IsShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_IsShutdownAndMultiPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_IsShutdownAndMultiPeer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ea370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_IsShutdownAndMultiPeer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_UsingMultiPeerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_UsingMultiPeerMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60ea3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_UsingMultiPeerMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_ShowAutoClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_ShowAutoClients)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60ea3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_ShowAutoClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::Start)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x60ea428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.ShowUserInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::ShowUserInterface)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60ea980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"ShowUserInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.TryGetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)(::by_ref<::Fusion::SceneRef>)>(&::Fusion::FusionBootstrap::TryGetSceneRef)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60ea818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"TryGetSceneRef", {}, {::i2c::type_of<::by_ref<::Fusion::SceneRef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartSinglePlayer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60eaa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartServer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60eaa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartHost)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60eaad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartClient)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60eab28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartSharedClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartSharedClient)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60eab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartAutoClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartAutoClient)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60eaba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartServerPlusClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartServerPlusClients)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60eabfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartHostPlusClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartHostPlusClients)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartHostPlusClients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60eacfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartServerPlusClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(int32_t)>(&::Fusion::FusionBootstrap::StartServerPlusClients)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60eafcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartHostPlusClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(int32_t)>(&::Fusion::FusionBootstrap::StartHostPlusClients)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60eac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartHostPlusClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartMultipleClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(int32_t)>(&::Fusion::FusionBootstrap::StartMultipleClients)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60eb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartMultipleClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartMultipleSharedClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(int32_t)>(&::Fusion::FusionBootstrap::StartMultipleSharedClients)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60eb194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartMultipleSharedClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartMultipleAutoClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)(int32_t)>(&::Fusion::FusionBootstrap::StartMultipleAutoClients)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60eb278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartMultipleAutoClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.ShutdownAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::ShutdownAll)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x60ead00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"ShutdownAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartWithClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::FusionBootstrap::*)(::Fusion::GameMode, ::Fusion::SceneRef, int32_t)>(&::Fusion::FusionBootstrap::StartWithClients)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60ea8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartWithClients", {}, {::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartWithMppmVirtualInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::StartWithMppmVirtualInstance)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60ea7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartWithMppmVirtualInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.AddClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::AddClient)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60eb3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"AddClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.AddSharedClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::AddSharedClient)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60eb5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"AddSharedClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.AddClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::FusionBootstrap::*)(::Fusion::GameMode, ::Fusion::SceneRef)>(&::Fusion::FusionBootstrap::AddClient)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x60eb3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"AddClient", {}, {::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.StartClients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::FusionBootstrap::*)(int32_t, ::Fusion::GameMode, ::Fusion::SceneRef)>(&::Fusion::FusionBootstrap::StartClients)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60eb5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartClients", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.InitializeNetworkRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::FusionBootstrap::*)(::Fusion::NetworkRunner*, ::Fusion::GameMode, ::Fusion::Sockets::NetAddress, ::Fusion::SceneRef, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, ::Fusion::INetworkRunnerUpdater*)>(&::Fusion::FusionBootstrap::InitializeNetworkRunner)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x60eb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_IsMPPMEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Fusion::FusionBootstrap::get_IsMPPMEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60eba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_IsMPPMEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap.get_ShouldShowGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::get_ShouldShowGUI)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60eba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_ShouldShowGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap::*)()>(&::Fusion::FusionBootstrap::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60ebae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::FusionBootstrap::__cordl_internal_get_RunnerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunnerPrefab;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::FusionBootstrap::__cordl_internal_get_RunnerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunnerPrefab;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_RunnerPrefab(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunnerPrefab = value;
}
constexpr ::GlobalNamespace::FusionBootstrap_StartModes& Fusion::FusionBootstrap::__cordl_internal_get_StartMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMode;
}
constexpr ::GlobalNamespace::FusionBootstrap_StartModes const& Fusion::FusionBootstrap::__cordl_internal_get_StartMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMode;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_StartMode(::GlobalNamespace::FusionBootstrap_StartModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartMode = value;
}
constexpr ::Fusion::GameMode& Fusion::FusionBootstrap::__cordl_internal_get_AutoStartAs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoStartAs;
}
constexpr ::Fusion::GameMode const& Fusion::FusionBootstrap::__cordl_internal_get_AutoStartAs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoStartAs;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_AutoStartAs(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoStartAs = value;
}
constexpr bool& Fusion::FusionBootstrap::__cordl_internal_get_AutoHideGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoHideGUI;
}
constexpr bool const& Fusion::FusionBootstrap::__cordl_internal_get_AutoHideGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoHideGUI;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_AutoHideGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoHideGUI = value;
}
constexpr int32_t& Fusion::FusionBootstrap::__cordl_internal_get_AutoClients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoClients;
}
constexpr int32_t const& Fusion::FusionBootstrap::__cordl_internal_get_AutoClients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoClients;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_AutoClients(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoClients = value;
}
constexpr float_t& Fusion::FusionBootstrap::__cordl_internal_get_ClientStartDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientStartDelay;
}
constexpr float_t const& Fusion::FusionBootstrap::__cordl_internal_get_ClientStartDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientStartDelay;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_ClientStartDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientStartDelay = value;
}
constexpr uint16_t& Fusion::FusionBootstrap::__cordl_internal_get_ServerPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPort;
}
constexpr uint16_t const& Fusion::FusionBootstrap::__cordl_internal_get_ServerPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPort;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_ServerPort(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerPort = value;
}
constexpr ::StringW& Fusion::FusionBootstrap::__cordl_internal_get_DefaultRoomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultRoomName;
}
constexpr ::StringW const& Fusion::FusionBootstrap::__cordl_internal_get_DefaultRoomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultRoomName;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_DefaultRoomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultRoomName = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::FusionBootstrap::__cordl_internal_get__server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::FusionBootstrap::__cordl_internal_get__server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____server;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set__server(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____server = value;
}
constexpr ::StringW& Fusion::FusionBootstrap::__cordl_internal_get_InitialScenePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialScenePath;
}
constexpr ::StringW const& Fusion::FusionBootstrap::__cordl_internal_get_InitialScenePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialScenePath;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_InitialScenePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialScenePath = value;
}
constexpr ::GlobalNamespace::FusionBootstrap_Stage& Fusion::FusionBootstrap::__cordl_internal_get__currentStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStage;
}
constexpr ::GlobalNamespace::FusionBootstrap_Stage const& Fusion::FusionBootstrap::__cordl_internal_get__currentStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStage;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set__currentStage(::GlobalNamespace::FusionBootstrap_Stage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStage = value;
}
constexpr bool& Fusion::FusionBootstrap::__cordl_internal_get_AutoConnectVirtualInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnectVirtualInstances;
}
constexpr bool const& Fusion::FusionBootstrap::__cordl_internal_get_AutoConnectVirtualInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnectVirtualInstances;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_AutoConnectVirtualInstances(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoConnectVirtualInstances = value;
}
constexpr float_t& Fusion::FusionBootstrap::__cordl_internal_get_VirtualInstanceConnectDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualInstanceConnectDelay;
}
constexpr float_t const& Fusion::FusionBootstrap::__cordl_internal_get_VirtualInstanceConnectDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualInstanceConnectDelay;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set_VirtualInstanceConnectDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualInstanceConnectDelay = value;
}
constexpr int32_t& Fusion::FusionBootstrap::__cordl_internal_get__LastCreatedClientIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCreatedClientIndex_k__BackingField;
}
constexpr int32_t const& Fusion::FusionBootstrap::__cordl_internal_get__LastCreatedClientIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCreatedClientIndex_k__BackingField;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set__LastCreatedClientIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastCreatedClientIndex_k__BackingField = value;
}
constexpr ::Fusion::GameMode& Fusion::FusionBootstrap::__cordl_internal_get__CurrentServerMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentServerMode_k__BackingField;
}
constexpr ::Fusion::GameMode const& Fusion::FusionBootstrap::__cordl_internal_get__CurrentServerMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentServerMode_k__BackingField;
}
constexpr void Fusion::FusionBootstrap::__cordl_internal_set__CurrentServerMode_k__BackingField(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentServerMode_k__BackingField = value;
}
inline void Fusion::FusionBootstrap::setStaticF__initialScenePath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_initialScenePath", ::Fusion::FusionBootstrap*>(std::forward<::StringW>(value));
}
inline ::StringW Fusion::FusionBootstrap::getStaticF__initialScenePath()  {
return ::cordl_internals::getStaticField<::StringW, "_initialScenePath", ::Fusion::FusionBootstrap*>();
}
inline ::GlobalNamespace::FusionBootstrap_Stage Fusion::FusionBootstrap::get_CurrentStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CurrentStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FusionBootstrap_Stage>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::set_CurrentStage(::GlobalNamespace::FusionBootstrap_Stage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"set_CurrentStage", {}, {::i2c::type_of<::GlobalNamespace::FusionBootstrap_Stage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::FusionBootstrap::get_LastCreatedClientIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_LastCreatedClientIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::set_LastCreatedClientIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"set_LastCreatedClientIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::GameMode Fusion::FusionBootstrap::get_CurrentServerMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CurrentServerMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::GameMode>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::set_CurrentServerMode(::Fusion::GameMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"set_CurrentServerMode", {}, {::i2c::type_of<::Fusion::GameMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::FusionBootstrap::get_CanAddClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CanAddClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap::get_CanAddSharedClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_CanAddSharedClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap::get_IsShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_IsShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap::get_IsShutdownAndMultiPeer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_IsShutdownAndMultiPeer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap::get_UsingMultiPeerMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_UsingMultiPeerMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap::get_ShowAutoClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_ShowAutoClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::ShowUserInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"ShowUserInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap::TryGetSceneRef(::by_ref<::Fusion::SceneRef>  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"TryGetSceneRef", {}, {::i2c::type_of<::by_ref<::Fusion::SceneRef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneRef);
}
inline void Fusion::FusionBootstrap::StartSinglePlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartHost()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartSharedClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartAutoClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartServerPlusClients()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartHostPlusClients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartHostPlusClients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::StartServerPlusClients(int32_t  clientCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCount);
}
inline void Fusion::FusionBootstrap::StartHostPlusClients(int32_t  clientCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartHostPlusClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCount);
}
inline void Fusion::FusionBootstrap::StartMultipleClients(int32_t  clientCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartMultipleClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCount);
}
inline void Fusion::FusionBootstrap::StartMultipleSharedClients(int32_t  clientCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartMultipleSharedClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCount);
}
inline void Fusion::FusionBootstrap::StartMultipleAutoClients(int32_t  clientCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartMultipleAutoClients", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCount);
}
inline void Fusion::FusionBootstrap::ShutdownAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"ShutdownAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::FusionBootstrap::StartWithClients(::Fusion::GameMode  serverMode, ::Fusion::SceneRef  sceneRef, int32_t  clientCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartWithClients", {}, {::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, serverMode, sceneRef, clientCount);
}
inline ::System::Collections::IEnumerator* Fusion::FusionBootstrap::StartWithMppmVirtualInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartWithMppmVirtualInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::AddClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"AddClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::AddSharedClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"AddSharedClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::FusionBootstrap::AddClient(::Fusion::GameMode  serverMode, ::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"AddClient", {}, {::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, serverMode, sceneRef);
}
inline ::System::Collections::IEnumerator* Fusion::FusionBootstrap::StartClients(int32_t  clientCount, ::Fusion::GameMode  serverMode, ::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"StartClients", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::GameMode>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, clientCount, serverMode, sceneRef);
}
inline ::System::Threading::Tasks::Task* Fusion::FusionBootstrap::InitializeNetworkRunner(::Fusion::NetworkRunner*  runner, ::Fusion::GameMode  gameMode, ::Fusion::Sockets::NetAddress  address, ::Fusion::SceneRef  scene, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  onGameStarted, ::Fusion::INetworkRunnerUpdater*  updater)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, runner, gameMode, address, scene, onGameStarted, updater);
}
inline bool Fusion::FusionBootstrap::get_IsMPPMEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_IsMPPMEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Fusion::FusionBootstrap::get_ShouldShowGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {"get_ShouldShowGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionBootstrap* Fusion::FusionBootstrap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBootstrap*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionBootstrap::FusionBootstrap()   {
}
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::*)(int32_t)>(&::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60eb384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::*)()>(&::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ec870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::*)()>(&::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::MoveNext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60ec874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::*)()>(&::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::*)()>(&::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ec974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::*)()>(&::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Fusion::FusionBootstrap>& Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::FusionBootstrap> const& Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::__cordl_internal_set___4__this(::UnityW<::Fusion::FusionBootstrap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59* Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59::FusionBootstrap__StartWithMppmVirtualInstance_d__59()   {
}
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithClients_d__58._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartWithClients_d__58::*)(int32_t)>(&::Fusion::FusionBootstrap__StartWithClients_d__58::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60eb35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithClients_d__58.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartWithClients_d__58::*)()>(&::Fusion::FusionBootstrap__StartWithClients_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ebf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithClients_d__58.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap__StartWithClients_d__58::*)()>(&::Fusion::FusionBootstrap__StartWithClients_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x60ebf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithClients_d__58.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionBootstrap__StartWithClients_d__58::*)()>(&::Fusion::FusionBootstrap__StartWithClients_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithClients_d__58.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartWithClients_d__58::*)()>(&::Fusion::FusionBootstrap__StartWithClients_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ec830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartWithClients_d__58.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionBootstrap__StartWithClients_d__58::*)()>(&::Fusion::FusionBootstrap__StartWithClients_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ec868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Fusion::FusionBootstrap>& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::FusionBootstrap> const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set___4__this(::UnityW<::Fusion::FusionBootstrap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::GameMode& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get_serverMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMode;
}
constexpr ::Fusion::GameMode const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get_serverMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMode;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set_serverMode(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverMode = value;
}
constexpr int32_t& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get_clientCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCount;
}
constexpr int32_t const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get_clientCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCount;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set_clientCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientCount = value;
}
constexpr ::Fusion::SceneRef& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
constexpr ::System::Threading::Tasks::Task*& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get__serverTask_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverTask_5__2;
}
constexpr ::System::Threading::Tasks::Task* const& Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_get__serverTask_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverTask_5__2;
}
constexpr void Fusion::FusionBootstrap__StartWithClients_d__58::__cordl_internal_set__serverTask_5__2(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverTask_5__2 = value;
}
inline void Fusion::FusionBootstrap__StartWithClients_d__58::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::FusionBootstrap__StartWithClients_d__58::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap__StartWithClients_d__58::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionBootstrap__StartWithClients_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap__StartWithClients_d__58::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionBootstrap__StartWithClients_d__58::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartWithClients_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::FusionBootstrap__StartWithClients_d__58* Fusion::FusionBootstrap__StartWithClients_d__58::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBootstrap__StartWithClients_d__58*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::FusionBootstrap__StartWithClients_d__58::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::FusionBootstrap__StartWithClients_d__58::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::FusionBootstrap__StartWithClients_d__58::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::FusionBootstrap__StartWithClients_d__58::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::FusionBootstrap__StartWithClients_d__58::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::FusionBootstrap__StartWithClients_d__58::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionBootstrap__StartWithClients_d__58::FusionBootstrap__StartWithClients_d__58()   {
}
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartClients_d__63._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartClients_d__63::*)(int32_t)>(&::Fusion::FusionBootstrap__StartClients_d__63::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60eb678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartClients_d__63.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartClients_d__63::*)()>(&::Fusion::FusionBootstrap__StartClients_d__63::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ebc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartClients_d__63.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionBootstrap__StartClients_d__63::*)()>(&::Fusion::FusionBootstrap__StartClients_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x60ebc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartClients_d__63.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionBootstrap__StartClients_d__63::*)()>(&::Fusion::FusionBootstrap__StartClients_d__63::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ebef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartClients_d__63.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap__StartClients_d__63::*)()>(&::Fusion::FusionBootstrap__StartClients_d__63::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ebefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap__StartClients_d__63.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionBootstrap__StartClients_d__63::*)()>(&::Fusion::FusionBootstrap__StartClients_d__63::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ebf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Fusion::FusionBootstrap>& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::FusionBootstrap> const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set___4__this(::UnityW<::Fusion::FusionBootstrap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::GameMode& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get_serverMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMode;
}
constexpr ::Fusion::GameMode const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get_serverMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverMode;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set_serverMode(::Fusion::GameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverMode = value;
}
constexpr ::Fusion::SceneRef& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
constexpr int32_t& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get_clientCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCount;
}
constexpr int32_t const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get_clientCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientCount;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set_clientCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientCount = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get__clientTasks_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientTasks_5__2;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get__clientTasks_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientTasks_5__2;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set__clientTasks_5__2(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientTasks_5__2 = value;
}
constexpr ::System::Threading::Tasks::Task*& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get__clientsStartTask_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientsStartTask_5__3;
}
constexpr ::System::Threading::Tasks::Task* const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get__clientsStartTask_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientsStartTask_5__3;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set__clientsStartTask_5__3(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientsStartTask_5__3 = value;
}
constexpr int32_t& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get__i_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr int32_t const& Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_get__i_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr void Fusion::FusionBootstrap__StartClients_d__63::__cordl_internal_set__i_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__4 = value;
}
inline void Fusion::FusionBootstrap__StartClients_d__63::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::FusionBootstrap__StartClients_d__63::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::FusionBootstrap__StartClients_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionBootstrap__StartClients_d__63::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap__StartClients_d__63::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionBootstrap__StartClients_d__63::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap__StartClients_d__63*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::FusionBootstrap__StartClients_d__63* Fusion::FusionBootstrap__StartClients_d__63::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBootstrap__StartClients_d__63*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::FusionBootstrap__StartClients_d__63::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::FusionBootstrap__StartClients_d__63::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::FusionBootstrap__StartClients_d__63::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::FusionBootstrap__StartClients_d__63::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::FusionBootstrap__StartClients_d__63::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::FusionBootstrap__StartClients_d__63::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionBootstrap__StartClients_d__63::FusionBootstrap__StartClients_d__63()   {
}
//  Writing Method size for method: ::Fusion::FusionBootstrap___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap___c::*)()>(&::Fusion::FusionBootstrap___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ebc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap___c._StartWithClients_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap___c::*)(::Fusion::NetworkRunner*)>(&::Fusion::FusionBootstrap___c::_StartWithClients_b__58_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ebc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap___c*>(),
                        {"<StartWithClients>b__58_0", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionBootstrap___c::setStaticF___9(::Fusion::FusionBootstrap___c*  value)  {
::cordl_internals::setStaticField<::Fusion::FusionBootstrap___c*, "<>9", ::Fusion::FusionBootstrap___c*>(std::forward<::Fusion::FusionBootstrap___c*>(value));
}
inline ::Fusion::FusionBootstrap___c* Fusion::FusionBootstrap___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::FusionBootstrap___c*, "<>9", ::Fusion::FusionBootstrap___c*>();
}
inline void Fusion::FusionBootstrap___c::setStaticF___9__58_0(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "<>9__58_0", ::Fusion::FusionBootstrap___c*>(std::forward<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* Fusion::FusionBootstrap___c::getStaticF___9__58_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*, "<>9__58_0", ::Fusion::FusionBootstrap___c*>();
}
inline void Fusion::FusionBootstrap___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap___c::_StartWithClients_b__58_0(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap___c*>(),
                        {"<StartWithClients>b__58_0", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline ::Fusion::FusionBootstrap___c* Fusion::FusionBootstrap___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBootstrap___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionBootstrap___c::FusionBootstrap___c()   {
}
//  Writing Method size for method: ::Fusion::FusionBootstrap_StartCommand.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap_StartCommand::*)()>(&::Fusion::FusionBootstrap_StartCommand::Execute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60ebb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionBootstrap_StartCommand*>(),
                    {::i2c::class_of<::Fusion::FusionBootstrap_StartCommand*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionBootstrap_StartCommand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionBootstrap_StartCommand::*)()>(&::Fusion::FusionBootstrap_StartCommand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ebba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap_StartCommand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_RoomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr ::StringW const& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_RoomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr void Fusion::FusionBootstrap_StartCommand::__cordl_internal_set_RoomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomName = value;
}
constexpr ::Fusion::SceneRef& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_InitialScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialScene;
}
constexpr ::Fusion::SceneRef const& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_InitialScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialScene;
}
constexpr void Fusion::FusionBootstrap_StartCommand::__cordl_internal_set_InitialScene(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialScene = value;
}
constexpr int32_t& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_ClientCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientCount;
}
constexpr int32_t const& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_ClientCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientCount;
}
constexpr void Fusion::FusionBootstrap_StartCommand::__cordl_internal_set_ClientCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientCount = value;
}
constexpr bool& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_IsShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsShared;
}
constexpr bool const& Fusion::FusionBootstrap_StartCommand::__cordl_internal_get_IsShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsShared;
}
constexpr void Fusion::FusionBootstrap_StartCommand::__cordl_internal_set_IsShared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsShared = value;
}
inline void Fusion::FusionBootstrap_StartCommand::setStaticF_Instance(::Fusion::FusionBootstrap_StartCommand*  value)  {
::cordl_internals::setStaticField<::Fusion::FusionBootstrap_StartCommand*, "Instance", ::Fusion::FusionBootstrap_StartCommand*>(std::forward<::Fusion::FusionBootstrap_StartCommand*>(value));
}
inline ::Fusion::FusionBootstrap_StartCommand* Fusion::FusionBootstrap_StartCommand::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::FusionBootstrap_StartCommand*, "Instance", ::Fusion::FusionBootstrap_StartCommand*>();
}
inline void Fusion::FusionBootstrap_StartCommand::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionBootstrap_StartCommand*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionBootstrap_StartCommand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionBootstrap_StartCommand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionBootstrap_StartCommand* Fusion::FusionBootstrap_StartCommand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionBootstrap_StartCommand*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionBootstrap_StartCommand::FusionBootstrap_StartCommand()   {
}
