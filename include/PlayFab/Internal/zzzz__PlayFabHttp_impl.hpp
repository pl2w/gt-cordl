#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabHttp.hpp"
#include "PlayFab/Internal/zzzz__SingletonMonoBehaviour_1_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Internal/zzzz__PlayFabHttp_def.hpp"
#include "PlayFab/Internal/zzzz__ApiProcessingEventArgs_def.hpp"
#include "PlayFab/Internal/zzzz__ApiProcessingEventType_def.hpp"
#include "PlayFab/Internal/zzzz__AuthType_def.hpp"
#include "PlayFab/Internal/zzzz__CallRequestContainer_def.hpp"
#include "PlayFab/Internal/zzzz__PlayFabHttp_def.hpp"
#include "PlayFab/Public/zzzz__IPlayFabLogger_def.hpp"
#include "PlayFab/Public/zzzz__IScreenTimeTracker_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "PlayFab/zzzz__ISerializerPlugin_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.add_ApiProcessingEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*)>(&::PlayFab::Internal::PlayFabHttp::add_ApiProcessingEventHandler)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa844270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"add_ApiProcessingEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.remove_ApiProcessingEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*)>(&::PlayFab::Internal::PlayFabHttp::remove_ApiProcessingEventHandler)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa844364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"remove_ApiProcessingEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.add_ApiProcessingErrorEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*)>(&::PlayFab::Internal::PlayFabHttp::add_ApiProcessingErrorEventHandler)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa844458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"add_ApiProcessingErrorEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.remove_ApiProcessingErrorEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*)>(&::PlayFab::Internal::PlayFabHttp::remove_ApiProcessingErrorEventHandler)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa844534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"remove_ApiProcessingErrorEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.GetPendingMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::PlayFab::Internal::PlayFabHttp::GetPendingMessages)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa844610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"GetPendingMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.InitializeHttp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::Internal::PlayFabHttp::InitializeHttp)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa844778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InitializeHttp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.InitializeLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Public::IPlayFabLogger*)>(&::PlayFab::Internal::PlayFabHttp::InitializeLogger)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa84497c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InitializeLogger", {}, {::i2c::type_of<::PlayFab::Public::IPlayFabLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.InitializeScreenTimeTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&::PlayFab::Internal::PlayFabHttp::InitializeScreenTimeTracker)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa843b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InitializeScreenTimeTracker", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.SendScreenTimeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(float_t)>(&::PlayFab::Internal::PlayFabHttp::SendScreenTimeEvents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa844a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SendScreenTimeEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.SimpleGetCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabHttp::SimpleGetCall)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa844afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SimpleGetCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.SimplePutCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabHttp::SimplePutCall)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa844c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SimplePutCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.SimplePostCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabHttp::SimplePostCall)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa844d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SimplePostCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.OnPlayFabApiResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)(::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabHttp::OnPlayFabApiResult)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa844ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnPlayFabApiResult", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)()>(&::PlayFab::Internal::PlayFabHttp::OnEnable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa845180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)()>(&::PlayFab::Internal::PlayFabHttp::OnDisable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa845350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)()>(&::PlayFab::Internal::PlayFabHttp::OnDestroy)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xa845524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)(bool)>(&::PlayFab::Internal::PlayFabHttp::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa845828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)()>(&::PlayFab::Internal::PlayFabHttp::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa845958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)()>(&::PlayFab::Internal::PlayFabHttp::Update)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xa845a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.GeneratePlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::PlayFabError* (*)(::StringW, ::StringW, ::System::Object*)>(&::PlayFab::Internal::PlayFabHttp::GeneratePlayFabError)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0xa845e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"GeneratePlayFabError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.SendErrorEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*)>(&::PlayFab::Internal::PlayFabHttp::SendErrorEvent)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa8464c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SendErrorEvent", {}, {::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.SendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::SharedModels::PlayFabResultCommon*, ::PlayFab::Internal::ApiProcessingEventType)>(&::PlayFab::Internal::PlayFabHttp::SendEvent)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa84660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SendEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabResultCommon*>(), ::i2c::type_of<::PlayFab::Internal::ApiProcessingEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.ClearAllEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::Internal::PlayFabHttp::ClearAllEvents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa8467dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"ClearAllEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.InjectInUnityThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)(::System::Collections::IEnumerator*)>(&::PlayFab::Internal::PlayFabHttp::InjectInUnityThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa84684c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InjectInUnityThread", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp.InjectInUnityThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)(::System::Action*)>(&::PlayFab::Internal::PlayFabHttp::InjectInUnityThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa8468a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InjectInUnityThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp::*)()>(&::PlayFab::Internal::PlayFabHttp::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa8468fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*& PlayFab::Internal::PlayFabHttp::__cordl_internal_get__injectedCoroutines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____injectedCoroutines;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>* const& PlayFab::Internal::PlayFabHttp::__cordl_internal_get__injectedCoroutines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____injectedCoroutines;
}
constexpr void PlayFab::Internal::PlayFabHttp::__cordl_internal_set__injectedCoroutines(::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____injectedCoroutines = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& PlayFab::Internal::PlayFabHttp::__cordl_internal_get__injectedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____injectedAction;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& PlayFab::Internal::PlayFabHttp::__cordl_internal_get__injectedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____injectedAction;
}
constexpr void PlayFab::Internal::PlayFabHttp::__cordl_internal_set__injectedAction(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____injectedAction = value;
}
inline void PlayFab::Internal::PlayFabHttp::setStaticF__apiCallQueue(::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*, "_apiCallQueue", ::PlayFab::Internal::PlayFabHttp*>(std::forward<::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*>(value));
}
inline ::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>* PlayFab::Internal::PlayFabHttp::getStaticF__apiCallQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::PlayFab::Internal::CallRequestContainer*>*, "_apiCallQueue", ::PlayFab::Internal::PlayFabHttp*>();
}
inline void PlayFab::Internal::PlayFabHttp::setStaticF_ApiProcessingEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  value)  {
::cordl_internals::setStaticField<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*, "ApiProcessingEventHandler", ::PlayFab::Internal::PlayFabHttp*>(std::forward<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*>(value));
}
inline ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>* PlayFab::Internal::PlayFabHttp::getStaticF_ApiProcessingEventHandler()  {
return ::cordl_internals::getStaticField<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*, "ApiProcessingEventHandler", ::PlayFab::Internal::PlayFabHttp*>();
}
inline void PlayFab::Internal::PlayFabHttp::setStaticF_ApiProcessingErrorEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  value)  {
::cordl_internals::setStaticField<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*, "ApiProcessingErrorEventHandler", ::PlayFab::Internal::PlayFabHttp*>(std::forward<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(value));
}
inline ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent* PlayFab::Internal::PlayFabHttp::getStaticF_ApiProcessingErrorEventHandler()  {
return ::cordl_internals::getStaticField<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*, "ApiProcessingErrorEventHandler", ::PlayFab::Internal::PlayFabHttp*>();
}
inline void PlayFab::Internal::PlayFabHttp::setStaticF_GlobalHeaderInjection(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "GlobalHeaderInjection", ::PlayFab::Internal::PlayFabHttp*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* PlayFab::Internal::PlayFabHttp::getStaticF_GlobalHeaderInjection()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "GlobalHeaderInjection", ::PlayFab::Internal::PlayFabHttp*>();
}
inline void PlayFab::Internal::PlayFabHttp::setStaticF__logger(::PlayFab::Public::IPlayFabLogger*  value)  {
::cordl_internals::setStaticField<::PlayFab::Public::IPlayFabLogger*, "_logger", ::PlayFab::Internal::PlayFabHttp*>(std::forward<::PlayFab::Public::IPlayFabLogger*>(value));
}
inline ::PlayFab::Public::IPlayFabLogger* PlayFab::Internal::PlayFabHttp::getStaticF__logger()  {
return ::cordl_internals::getStaticField<::PlayFab::Public::IPlayFabLogger*, "_logger", ::PlayFab::Internal::PlayFabHttp*>();
}
inline void PlayFab::Internal::PlayFabHttp::setStaticF_screenTimeTracker(::PlayFab::Public::IScreenTimeTracker*  value)  {
::cordl_internals::setStaticField<::PlayFab::Public::IScreenTimeTracker*, "screenTimeTracker", ::PlayFab::Internal::PlayFabHttp*>(std::forward<::PlayFab::Public::IScreenTimeTracker*>(value));
}
inline ::PlayFab::Public::IScreenTimeTracker* PlayFab::Internal::PlayFabHttp::getStaticF_screenTimeTracker()  {
return ::cordl_internals::getStaticField<::PlayFab::Public::IScreenTimeTracker*, "screenTimeTracker", ::PlayFab::Internal::PlayFabHttp*>();
}
inline void PlayFab::Internal::PlayFabHttp::add_ApiProcessingEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"add_ApiProcessingEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayFab::Internal::PlayFabHttp::remove_ApiProcessingEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"remove_ApiProcessingEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<::PlayFab::Internal::ApiProcessingEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayFab::Internal::PlayFabHttp::add_ApiProcessingErrorEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"add_ApiProcessingErrorEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayFab::Internal::PlayFabHttp::remove_ApiProcessingErrorEventHandler(::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"remove_ApiProcessingErrorEventHandler", {}, {::i2c::type_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t PlayFab::Internal::PlayFabHttp::GetPendingMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"GetPendingMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::InitializeHttp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InitializeHttp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::InitializeLogger(::PlayFab::Public::IPlayFabLogger*  setLogger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InitializeLogger", {}, {::i2c::type_of<::PlayFab::Public::IPlayFabLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, setLogger);
}
inline void PlayFab::Internal::PlayFabHttp::InitializeScreenTimeTracker(::StringW  entityId, ::StringW  entityType, ::StringW  playFabUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InitializeScreenTimeTracker", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entityId, entityType, playFabUserId);
}
inline ::System::Collections::IEnumerator* PlayFab::Internal::PlayFabHttp::SendScreenTimeEvents(float_t  secondsBetweenBatches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SendScreenTimeEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, secondsBetweenBatches);
}
inline void PlayFab::Internal::PlayFabHttp::SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SimpleGetCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullUrl, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabHttp::SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SimplePutCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabHttp::SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SimplePostCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
template<typename TResult>
requires(::cordl_internals::type_constraint<TResult, ::PlayFab::SharedModels::PlayFabResultCommon*>)
inline void PlayFab::Internal::PlayFabHttp::MakeApiCall(::StringW  apiEndpoint, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::Internal::AuthType  authType, ::System::Action_1<TResult>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders, ::PlayFab::PlayFabAuthenticationContext*  authenticationContext, ::PlayFab::PlayFabApiSettings*  apiSettings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                    {"MakeApiCall", {::i2c::class_of<TResult>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::Internal::AuthType>(), ::i2c::type_of<::System::Action_1<TResult>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, apiEndpoint, request, authType, resultCallback, errorCallback, customData, extraHeaders, authenticationContext, apiSettings, instanceApi);
}
template<typename TResult>
requires(::cordl_internals::type_constraint<TResult, ::PlayFab::SharedModels::PlayFabResultCommon*>)
inline void PlayFab::Internal::PlayFabHttp::MakeApiCallWithFullUri(::StringW  fullUri, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::Internal::AuthType  authType, ::System::Action_1<TResult>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders, ::PlayFab::PlayFabAuthenticationContext*  authenticationContext, ::PlayFab::PlayFabApiSettings*  apiSettings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                    {"MakeApiCallWithFullUri", {::i2c::class_of<TResult>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::Internal::AuthType>(), ::i2c::type_of<::System::Action_1<TResult>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullUri, request, authType, resultCallback, errorCallback, customData, extraHeaders, authenticationContext, apiSettings, instanceApi);
}
template<typename TResult>
requires(::cordl_internals::type_constraint<TResult, ::PlayFab::SharedModels::PlayFabResultCommon*>)
inline void PlayFab::Internal::PlayFabHttp::_MakeApiCall(::StringW  apiEndpoint, ::StringW  fullUrl, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::Internal::AuthType  authType, ::System::Action_1<TResult>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders, bool  allowQueueing, ::PlayFab::PlayFabAuthenticationContext*  authenticationContext, ::PlayFab::PlayFabApiSettings*  apiSettings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                    {"_MakeApiCall", {::i2c::class_of<TResult>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::Internal::AuthType>(), ::i2c::type_of<::System::Action_1<TResult>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::SharedModels::IPlayFabInstanceApi*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, apiEndpoint, fullUrl, request, authType, resultCallback, errorCallback, customData, extraHeaders, allowQueueing, authenticationContext, apiSettings, instanceApi);
}
inline void PlayFab::Internal::PlayFabHttp::OnPlayFabApiResult(::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnPlayFabApiResult", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqContainer);
}
inline void PlayFab::Internal::PlayFabHttp::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::OnApplicationFocus(bool  isFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFocused);
}
inline void PlayFab::Internal::PlayFabHttp::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::PlayFabError* PlayFab::Internal::PlayFabHttp::GeneratePlayFabError(::StringW  apiEndpoint, ::StringW  json, ::System::Object*  customData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"GeneratePlayFabError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::PlayFabError*>(nullptr, ___internal_method, apiEndpoint, json, customData);
}
inline void PlayFab::Internal::PlayFabHttp::SendErrorEvent(::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SendErrorEvent", {}, {::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, error);
}
inline void PlayFab::Internal::PlayFabHttp::SendEvent(::StringW  apiEndpoint, ::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::SharedModels::PlayFabResultCommon*  result, ::PlayFab::Internal::ApiProcessingEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"SendEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabRequestCommon*>(), ::i2c::type_of<::PlayFab::SharedModels::PlayFabResultCommon*>(), ::i2c::type_of<::PlayFab::Internal::ApiProcessingEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, apiEndpoint, request, result, eventType);
}
inline void PlayFab::Internal::PlayFabHttp::ClearAllEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"ClearAllEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp::InjectInUnityThread(::System::Collections::IEnumerator*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InjectInUnityThread", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void PlayFab::Internal::PlayFabHttp::InjectInUnityThread(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {"InjectInUnityThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void PlayFab::Internal::PlayFabHttp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabHttp* PlayFab::Internal::PlayFabHttp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabHttp*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabHttp::PlayFabHttp()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::*)(int32_t)>(&::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa844ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::*)()>(&::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa846c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::*)()>(&::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa846c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::*)()>(&::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa846dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::*)()>(&::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa846e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::*)()>(&::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa846e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get_secondsBetweenBatches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsBetweenBatches;
}
constexpr float_t const& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get_secondsBetweenBatches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsBetweenBatches;
}
constexpr void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_set_secondsBetweenBatches(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsBetweenBatches = value;
}
constexpr ::UnityEngine::WaitForSeconds*& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get__delay_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay_5__2;
}
constexpr ::UnityEngine::WaitForSeconds* const& PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_get__delay_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay_5__2;
}
constexpr void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::__cordl_internal_set__delay_5__2(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delay_5__2 = value;
}
inline void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17* PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__17::PlayFabHttp__SendScreenTimeEvents_d__17()   {
}
template<typename TResult>
constexpr ::PlayFab::Internal::CallRequestContainer*& PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_get_reqContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
template<typename TResult>
constexpr ::PlayFab::Internal::CallRequestContainer* const& PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_get_reqContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
template<typename TResult>
constexpr void PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reqContainer = value;
}
template<typename TResult>
constexpr ::PlayFab::ISerializerPlugin*& PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
template<typename TResult>
constexpr ::PlayFab::ISerializerPlugin* const& PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
template<typename TResult>
constexpr void PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_set_serializer(::PlayFab::ISerializerPlugin*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
template<typename TResult>
constexpr ::System::Action_1<TResult>*& PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_get_resultCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultCallback;
}
template<typename TResult>
constexpr ::System::Action_1<TResult>* const& PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_get_resultCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultCallback;
}
template<typename TResult>
constexpr void PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__cordl_internal_set_resultCallback(::System::Action_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultCallback = value;
}
template<typename TResult>
inline void PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__MakeApiCall_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>*>(),
                        {"<_MakeApiCall>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::__MakeApiCall_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>*>(),
                        {"<_MakeApiCall>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>* PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::PlayFab::Internal::PlayFabHttp___c__DisplayClass23_0_1<TResult>::PlayFabHttp___c__DisplayClass23_0_1()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::*)(::System::Object*, ::System::IntPtr)>(&::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa846b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*)>(&::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa846c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(),
                    {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::*)(::PlayFab::SharedModels::PlayFabRequestCommon*, ::PlayFab::PlayFabError*, ::System::AsyncCallback*, ::System::Object*)>(&::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa846c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(),
                    {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::*)(::System::IAsyncResult*)>(&::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa846c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(),
                    {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::Invoke(::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::PlayFabError*  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, error);
}
inline ::System::IAsyncResult* PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::BeginInvoke(::PlayFab::SharedModels::PlayFabRequestCommon*  request, ::PlayFab::PlayFabError*  error, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, request, error, callback, object);
}
inline void PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent* PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent::PlayFabHttp_ApiProcessErrorEvent()   {
}
template<typename TEventArgs>
inline void PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TEventArgs>
inline void PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>::Invoke(TEventArgs  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template<typename TEventArgs>
inline ::System::IAsyncResult* PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>::BeginInvoke(TEventArgs  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, e, callback, object);
}
template<typename TEventArgs>
inline void PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TEventArgs>
inline ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>* PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>*>(object, method));
}
// Ctor Parameters []
template<typename TEventArgs>
constexpr ::PlayFab::Internal::PlayFabHttp_ApiProcessingEvent_1<TEventArgs>::PlayFabHttp_ApiProcessingEvent_1()   {
}
