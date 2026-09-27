#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKListenerBinding.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKListenerBinding_def.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceService_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__IVCBindingEvents_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKListenerBinding_StoppedListeningReason_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.get_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceEvents* (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_VoiceEvents)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb94c5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"get_VoiceEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.get_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_TelemetryEvents)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb94d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"get_TelemetryEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::Meta::WitAi::IVoiceService*, ::Oculus::Voice::Bindings::Android::IVCBindingEvents*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb94c544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IVoiceService*>(), ::i2c::type_of<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.GetRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::GetRequest)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb94d5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"GetRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb94d82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStartListening", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94d858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStartListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int32_t, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb94d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStoppedListening", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int32_t)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94d978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStoppedListening", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onRequestCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb94d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCreated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onRequestCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94da0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94da14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialTranscription", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94dac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94dac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onFullTranscription", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94db74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onFullTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onPartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94db7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onPartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94dc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onAborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb94dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onAborted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onAborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94dcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onAborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb94dccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94dd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94dd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94de28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(float_t, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb94de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicLevelChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(float_t)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94deac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicLevelChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onMicDataSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb94deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicDataSent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onMicDataSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94dedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicDataSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onMinimumWakeThresholdHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb94dee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMinimumWakeThresholdHit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onMinimumWakeThresholdHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94df0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMinimumWakeThresholdHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onRequestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCompleted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onRequestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94df14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onServiceNotAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onServiceNotAvailable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb94df18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onServiceNotAvailable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.onAudioDurationTrackerFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int64_t, double_t)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAudioDurationTrackerFinished)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb94e054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onAudioDurationTrackerFinished", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding.NativeTimestampToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(int64_t)>(&::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::NativeTimestampToDateTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb94e13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"NativeTimestampToDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::IVoiceService*& Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::__cordl_internal_get__voiceService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceService;
}
constexpr ::Meta::WitAi::IVoiceService* const& Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::__cordl_internal_get__voiceService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceService;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::__cordl_internal_set__voiceService(::Meta::WitAi::IVoiceService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceService = value;
}
constexpr ::Oculus::Voice::Bindings::Android::IVCBindingEvents*& Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::__cordl_internal_get__bindingEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindingEvents;
}
constexpr ::Oculus::Voice::Bindings::Android::IVCBindingEvents* const& Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::__cordl_internal_get__bindingEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindingEvents;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::__cordl_internal_set__bindingEvents(::Oculus::Voice::Bindings::Android::IVCBindingEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bindingEvents = value;
}
inline ::Meta::WitAi::Events::VoiceEvents* Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_VoiceEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"get_VoiceEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceEvents*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::TelemetryEvents* Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_TelemetryEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"get_TelemetryEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::TelemetryEvents*>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::_ctor(::Meta::WitAi::IVoiceService*  voiceService, ::Oculus::Voice::Bindings::Android::IVCBindingEvents*  bindingEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IVoiceService*>(), ::i2c::type_of<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceService, bindingEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::GetRequest(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"GetRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStartListening", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStartListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening(int32_t  reason, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStoppedListening", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening(int32_t  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onStoppedListening", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCreated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription(::StringW  transcription, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialTranscription", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription(::StringW  transcription, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onFullTranscription", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onFullTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse(::StringW  responseJson, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseJson, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialResponse(::StringW  responseJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onPartialResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseJson);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onAborted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onAborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError(::StringW  error, ::StringW  message, ::StringW  errorBody, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message, errorBody, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError(::StringW  error, ::StringW  message, ::StringW  errorBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message, errorBody);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse(::StringW  responseJson, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseJson, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse(::StringW  responseJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseJson);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged(float_t  level, ::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicLevelChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged(float_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicLevelChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicDataSent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMicDataSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMinimumWakeThresholdHit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onMinimumWakeThresholdHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCompleted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onRequestCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onServiceNotAvailable(::StringW  error, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onServiceNotAvailable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onAudioDurationTrackerFinished(int64_t  timestamp, double_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"onAudioDurationTrackerFinished", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp, duration);
}
inline ::System::DateTime Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::NativeTimestampToDateTime(int64_t  javaTimestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(),
                        {"NativeTimestampToDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, javaTimestamp);
}
inline ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding* Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::New_ctor(::Meta::WitAi::IVoiceService*  voiceService, ::Oculus::Voice::Bindings::Android::IVCBindingEvents*  bindingEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>(voiceService, bindingEvents));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::VoiceSDKListenerBinding()   {
}
