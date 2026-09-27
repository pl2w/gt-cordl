#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisArcadeObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SynthesisArcadeObject_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisArcadeObject_SynthesisCallbacks_DRM_STATUS_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisArcadeObject_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisColumns_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisUdpCommand_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "WebSocketSharp/zzzz__ErrorEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__MessageEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__WebSocket_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SynthesisArcadeObject> (*)()>(&::GlobalNamespace::SynthesisArcadeObject::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b24168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.ReadCommandLineArgument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::ReadCommandLineArgument)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5b241c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"ReadCommandLineArgument", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.processLiveCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::processLiveCommand)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b243cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"processLiveCommand", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.processLiveCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW, ::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::processLiveCommand)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b24498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"processLiveCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.processUnknownLiveCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW, ::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::processUnknownLiveCommand)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b2466c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"processUnknownLiveCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.UdpHelloWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::UdpHelloWorld)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b24720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"UdpHelloWorld", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(bool)>(&::GlobalNamespace::SynthesisArcadeObject::OnApplicationPause)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b247d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::Update)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5b247d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::OnDestroy)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b25198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::Start)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x5b25430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.ConnectToWebSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::ConnectToWebSocket)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5b24ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"ConnectToWebSocket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.WebsocketBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::WebsocketBroadcast)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b267c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"WebsocketBroadcast", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.StartMultiplayerSynchronization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)(::System::Action_1<::StringW>*, ::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::StartMultiplayerSynchronization)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b26884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"StartMultiplayerSynchronization", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.CancelMultiplayerSynchronization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::CancelMultiplayerSynchronization)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5b26b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"CancelMultiplayerSynchronization", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.Wsclient_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::System::Object*, ::WebSocketSharp::MessageEventArgs*)>(&::GlobalNamespace::SynthesisArcadeObject::Wsclient_OnMessage)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5b26db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnMessage", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::WebSocketSharp::MessageEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.Wsclient_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::System::Object*, ::System::EventArgs*)>(&::GlobalNamespace::SynthesisArcadeObject::Wsclient_OnOpen)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b27068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnOpen", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.onWsSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::SynthesisArcadeObject::onWsSend)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"onWsSend", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.Wsclient_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::System::Object*, ::WebSocketSharp::ErrorEventArgs*)>(&::GlobalNamespace::SynthesisArcadeObject::Wsclient_OnError)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b27070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::WebSocketSharp::ErrorEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.Wsclient_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::System::Object*, ::System::EventArgs*)>(&::GlobalNamespace::SynthesisArcadeObject::Wsclient_OnClose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b27138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnClose", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.EnableLicensingCheckTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::EnableLicensingCheckTask)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b26758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"EnableLicensingCheckTask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.AddToLeaderboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::AddToLeaderboard)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b27204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"AddToLeaderboard", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.sessionSecondsLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::sessionSecondsLeft)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b27380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"sessionSecondsLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.resetBillingSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::resetBillingSession)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b27464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"resetBillingSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.setEngineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW, ::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::setEngineData)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5b275d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"setEngineData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.excludeFromDefaultBilling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::excludeFromDefaultBilling)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b27874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"excludeFromDefaultBilling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.startManualPpmTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::startManualPpmTracking)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5b279e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"startManualPpmTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.stopManualPpmTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::stopManualPpmTracking)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b27c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"stopManualPpmTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.AndroidConfigFileRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::AndroidConfigFileRead)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b27da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"AndroidConfigFileRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject.AndroidConfigFileWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject::*)(::StringW, ::StringW)>(&::GlobalNamespace::SynthesisArcadeObject::AndroidConfigFileWrite)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5b27f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"AndroidConfigFileWrite", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject::*)()>(&::GlobalNamespace::SynthesisArcadeObject::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b280cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_TAG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TAG;
}
constexpr ::StringW const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_TAG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TAG;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_TAG(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TAG = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_co()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___co;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_co() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___co;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_co(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___co = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synthesisGameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesisGameId;
}
constexpr ::StringW const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synthesisGameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesisGameId;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_synthesisGameId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synthesisGameId = value;
}
constexpr bool& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synthesisCdnBuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesisCdnBuild;
}
constexpr bool const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synthesisCdnBuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesisCdnBuild;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_synthesisCdnBuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synthesisCdnBuild = value;
}
constexpr bool& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_disableSynthesisDRMInUnityEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableSynthesisDRMInUnityEditor;
}
constexpr bool const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_disableSynthesisDRMInUnityEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableSynthesisDRMInUnityEditor;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_disableSynthesisDRMInUnityEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableSynthesisDRMInUnityEditor = value;
}
constexpr bool& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_quitGame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quitGame;
}
constexpr bool const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_quitGame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quitGame;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_quitGame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quitGame = value;
}
constexpr bool& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_manualPpmTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualPpmTracking;
}
constexpr bool const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_manualPpmTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualPpmTracking;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_manualPpmTracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manualPpmTracking = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_webSocketClientAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webSocketClientAddress;
}
constexpr ::StringW const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_webSocketClientAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webSocketClientAddress;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_webSocketClientAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webSocketClientAddress = value;
}
constexpr double_t& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_webSocketLastConnectionAttemptEpoch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webSocketLastConnectionAttemptEpoch;
}
constexpr double_t const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_webSocketLastConnectionAttemptEpoch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webSocketLastConnectionAttemptEpoch;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_webSocketLastConnectionAttemptEpoch(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webSocketLastConnectionAttemptEpoch = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synchronizationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchronizationAction;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synchronizationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchronizationAction;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_synchronizationAction(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchronizationAction = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synthesisFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesisFlags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_synthesisFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesisFlags;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_synthesisFlags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synthesisFlags = value;
}
constexpr int32_t& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_successfulDrmChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfulDrmChecks;
}
constexpr int32_t const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_successfulDrmChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfulDrmChecks;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_successfulDrmChecks(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successfulDrmChecks = value;
}
constexpr bool& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_enableLiveInteractions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableLiveInteractions;
}
constexpr bool const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_enableLiveInteractions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableLiveInteractions;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_enableLiveInteractions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableLiveInteractions = value;
}
constexpr int32_t& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_udpPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpPort;
}
constexpr int32_t const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_udpPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpPort;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_udpPort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___udpPort = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_commandDefinitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_commandDefinitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandDefinitions;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_commandDefinitions(::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandDefinitions = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_fallbackCommandProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackCommandProcessor;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_fallbackCommandProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackCommandProcessor;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_fallbackCommandProcessor(::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackCommandProcessor = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_svrInterfaceAndroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___svrInterfaceAndroid;
}
constexpr ::UnityEngine::AndroidJavaObject* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_svrInterfaceAndroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___svrInterfaceAndroid;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_svrInterfaceAndroid(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___svrInterfaceAndroid = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_unityActivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityActivity;
}
constexpr ::UnityEngine::AndroidJavaObject* const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_unityActivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityActivity;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_unityActivity(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityActivity = value;
}
constexpr bool& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_allowEnteringTheLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowEnteringTheLoop;
}
constexpr bool const& GlobalNamespace::SynthesisArcadeObject::__cordl_internal_get_allowEnteringTheLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowEnteringTheLoop;
}
constexpr void GlobalNamespace::SynthesisArcadeObject::__cordl_internal_set_allowEnteringTheLoop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowEnteringTheLoop = value;
}
inline void GlobalNamespace::SynthesisArcadeObject::setStaticF__instance(::UnityW<::GlobalNamespace::SynthesisArcadeObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SynthesisArcadeObject>, "_instance", ::GlobalNamespace::SynthesisArcadeObject*>(std::forward<::UnityW<::GlobalNamespace::SynthesisArcadeObject>>(value));
}
inline ::UnityW<::GlobalNamespace::SynthesisArcadeObject> GlobalNamespace::SynthesisArcadeObject::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SynthesisArcadeObject>, "_instance", ::GlobalNamespace::SynthesisArcadeObject*>();
}
inline void GlobalNamespace::SynthesisArcadeObject::setStaticF_udpQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>*, "udpQueue", ::GlobalNamespace::SynthesisArcadeObject*>(std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>* GlobalNamespace::SynthesisArcadeObject::getStaticF_udpQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>*, "udpQueue", ::GlobalNamespace::SynthesisArcadeObject*>();
}
inline void GlobalNamespace::SynthesisArcadeObject::setStaticF_wsclient(::WebSocketSharp::WebSocket*  value)  {
::cordl_internals::setStaticField<::WebSocketSharp::WebSocket*, "wsclient", ::GlobalNamespace::SynthesisArcadeObject*>(std::forward<::WebSocketSharp::WebSocket*>(value));
}
inline ::WebSocketSharp::WebSocket* GlobalNamespace::SynthesisArcadeObject::getStaticF_wsclient()  {
return ::cordl_internals::getStaticField<::WebSocketSharp::WebSocket*, "wsclient", ::GlobalNamespace::SynthesisArcadeObject*>();
}
inline ::UnityW<::GlobalNamespace::SynthesisArcadeObject> GlobalNamespace::SynthesisArcadeObject::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SynthesisArcadeObject>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::SynthesisArcadeObject::ReadCommandLineArgument(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"ReadCommandLineArgument", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline void GlobalNamespace::SynthesisArcadeObject::processLiveCommand(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"processLiveCommand", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::SynthesisArcadeObject::processLiveCommand(::StringW  interactionname, ::StringW  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"processLiveCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionname, args);
}
inline void GlobalNamespace::SynthesisArcadeObject::processUnknownLiveCommand(::StringW  command, ::StringW  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"processUnknownLiveCommand", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command, args);
}
inline void GlobalNamespace::SynthesisArcadeObject::UdpHelloWorld(::StringW  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"UdpHelloWorld", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::SynthesisArcadeObject::OnApplicationPause(bool  pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::SynthesisArcadeObject::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject::ConnectToWebSocket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"ConnectToWebSocket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject::WebsocketBroadcast(::StringW  sendmsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"WebsocketBroadcast", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendmsg);
}
inline bool GlobalNamespace::SynthesisArcadeObject::StartMultiplayerSynchronization(::System::Action_1<::StringW>*  callbackAction, ::StringW  syncType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"StartMultiplayerSynchronization", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callbackAction, syncType);
}
inline bool GlobalNamespace::SynthesisArcadeObject::CancelMultiplayerSynchronization(::StringW  syncType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"CancelMultiplayerSynchronization", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, syncType);
}
inline void GlobalNamespace::SynthesisArcadeObject::Wsclient_OnMessage(::System::Object*  sender, ::WebSocketSharp::MessageEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnMessage", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::WebSocketSharp::MessageEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void GlobalNamespace::SynthesisArcadeObject::Wsclient_OnOpen(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnOpen", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void GlobalNamespace::SynthesisArcadeObject::onWsSend(bool  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"onWsSend", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
inline void GlobalNamespace::SynthesisArcadeObject::Wsclient_OnError(::System::Object*  sender, ::WebSocketSharp::ErrorEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::WebSocketSharp::ErrorEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void GlobalNamespace::SynthesisArcadeObject::Wsclient_OnClose(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"Wsclient_OnClose", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SynthesisArcadeObject::EnableLicensingCheckTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"EnableLicensingCheckTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisArcadeObject::AddToLeaderboard(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"AddToLeaderboard", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline int32_t GlobalNamespace::SynthesisArcadeObject::sessionSecondsLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"sessionSecondsLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisArcadeObject::resetBillingSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"resetBillingSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject::setEngineData(::StringW  _key, ::StringW  _value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"setEngineData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _key, _value);
}
inline void GlobalNamespace::SynthesisArcadeObject::excludeFromDefaultBilling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"excludeFromDefaultBilling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisArcadeObject::startManualPpmTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"startManualPpmTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisArcadeObject::stopManualPpmTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"stopManualPpmTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SynthesisArcadeObject::AndroidConfigFileRead(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"AndroidConfigFileRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, filename);
}
inline bool GlobalNamespace::SynthesisArcadeObject::AndroidConfigFileWrite(::StringW  filename, ::StringW  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {"AndroidConfigFileWrite", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filename, content);
}
inline void GlobalNamespace::SynthesisArcadeObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynthesisArcadeObject* GlobalNamespace::SynthesisArcadeObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisArcadeObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisArcadeObject::SynthesisArcadeObject()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::*)(int32_t)>(&::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b271dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::*)()>(&::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b288a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::*)()>(&::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::MoveNext)> {
  constexpr static std::size_t size = 0xa84;
  constexpr static std::size_t addrs = 0x5b288a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::*)()>(&::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2932c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::*)()>(&::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b29334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::*)()>(&::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2936c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::SynthesisArcadeObject>& GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SynthesisArcadeObject> const& GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SynthesisArcadeObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43* GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43::SynthesisArcadeObject__EnableLicensingCheckTask_d__43()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::*)()>(&::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b25de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0._Start_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5b2867c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*>(),
                        {"<Start>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SynthesisColumns>& GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::__cordl_internal_get_svrColumnsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___svrColumnsManager;
}
constexpr ::UnityW<::GlobalNamespace::SynthesisColumns> const& GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::__cordl_internal_get_svrColumnsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___svrColumnsManager;
}
constexpr void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::__cordl_internal_set_svrColumnsManager(::UnityW<::GlobalNamespace::SynthesisColumns>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___svrColumnsManager = value;
}
inline void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::_Start_b__0(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*>(),
                        {"<Start>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0* GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0::SynthesisArcadeObject___c__DisplayClass33_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::*)()>(&::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b24664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0._processLiveCommand_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::*)(::GlobalNamespace::SynthesisUdpCommand)>(&::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::_processLiveCommand_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b28588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>(),
                        {"<processLiveCommand>b__0", {}, {::i2c::type_of<::GlobalNamespace::SynthesisUdpCommand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0._processLiveCommand_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::*)(::GlobalNamespace::SynthesisUdpCommand)>(&::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::_processLiveCommand_b__1)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b2859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>(),
                        {"<processLiveCommand>b__1", {}, {::i2c::type_of<::GlobalNamespace::SynthesisUdpCommand>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::__cordl_internal_get_interactionname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionname;
}
constexpr ::StringW const& GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::__cordl_internal_get_interactionname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionname;
}
constexpr void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::__cordl_internal_set_interactionname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionname = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::__cordl_internal_get_args()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr ::StringW const& GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::__cordl_internal_get_args() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___args;
}
constexpr void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::__cordl_internal_set_args(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___args = value;
}
inline void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::_processLiveCommand_b__0(::GlobalNamespace::SynthesisUdpCommand  el)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>(),
                        {"<processLiveCommand>b__0", {}, {::i2c::type_of<::GlobalNamespace::SynthesisUdpCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, el);
}
inline void GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::_processLiveCommand_b__1(::GlobalNamespace::SynthesisUdpCommand  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>(),
                        {"<processLiveCommand>b__1", {}, {::i2c::type_of<::GlobalNamespace::SynthesisUdpCommand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0* GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0::SynthesisArcadeObject___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::*)()>(&::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b2829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks.InitCallbackResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::InitCallbackResponse)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b28338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>(),
                        {"InitCallbackResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks.ReceiveCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::*)(::StringW)>(&::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::ReceiveCommands)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b28520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>(),
                        {"ReceiveCommands", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::__cordl_internal_get_TAG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TAG;
}
constexpr ::StringW const& GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::__cordl_internal_get_TAG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TAG;
}
constexpr void GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::__cordl_internal_set_TAG(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TAG = value;
}
inline void GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::InitCallbackResponse(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>(),
                        {"InitCallbackResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline void GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::ReceiveCommands(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>(),
                        {"ReceiveCommands", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks* GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks::SynthesisArcadeObject_SynthesisCallbacks()   {
}
