#pragma once
// IWYU pragma private; include "Oculus/Voice/ObjectVoiceExperience.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Voice/zzzz__ObjectVoiceExperience_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Oculus/Voice/zzzz__AppVoiceExperience_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)()>(&::Oculus::Voice::ObjectVoiceExperience::OnEnable)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0xb9485f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)()>(&::Oculus::Voice::ObjectVoiceExperience::OnDisable)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0xb948cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleAudioInputStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleAudioInputStateChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleAudioInputStateChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleUploadProgressChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleUploadProgressChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleUploadProgressChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleDownloadProgressChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleDownloadProgressChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9493c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleDownloadProgressChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleStopListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleStopListening)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleStopListening", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleStartListening)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleStartListening", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleStateChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9494e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleStateChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::StringW)>(&::Oculus::Voice::ObjectVoiceExperience::HandleFullTranscription)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleFullTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandlePartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::StringW)>(&::Oculus::Voice::ObjectVoiceExperience::HandlePartialTranscription)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9495a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandlePartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleAudioDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleAudioDeactivation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleAudioDeactivation", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleAudioActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleAudioActivation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleAudioActivation", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleSuccess)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9496c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleSuccess", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleSend)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleSend", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleInit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb949788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleInit", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleFailed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9497e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleFailed", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb949848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleComplete", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.HandleCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::Voice::ObjectVoiceExperience::HandleCancel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb9498d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleCancel", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)()>(&::Oculus::Voice::ObjectVoiceExperience::Activate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb94996c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)()>(&::Oculus::Voice::ObjectVoiceExperience::Deactivate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb949a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::ObjectVoiceExperience._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::ObjectVoiceExperience::*)()>(&::Oculus::Voice::ObjectVoiceExperience::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb949ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Events::VoiceEvents*& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__voiceEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceEvents;
}
constexpr ::Meta::WitAi::Events::VoiceEvents* const& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__voiceEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceEvents;
}
constexpr void Oculus::Voice::ObjectVoiceExperience::__cordl_internal_set__voiceEvents(::Meta::WitAi::Events::VoiceEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceEvents = value;
}
constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience>& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__voice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice;
}
constexpr ::UnityW<::Oculus::Voice::AppVoiceExperience> const& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__voice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice;
}
constexpr void Oculus::Voice::ObjectVoiceExperience::__cordl_internal_set__voice(::UnityW<::Oculus::Voice::AppVoiceExperience>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voice = value;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__activation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activation;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__activation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activation;
}
constexpr void Oculus::Voice::ObjectVoiceExperience::__cordl_internal_set__activation(::Meta::WitAi::Requests::VoiceServiceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activation = value;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvents*& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvents* const& Oculus::Voice::ObjectVoiceExperience::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Oculus::Voice::ObjectVoiceExperience::__cordl_internal_set__events(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void Oculus::Voice::ObjectVoiceExperience::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::ObjectVoiceExperience::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleAudioInputStateChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleAudioInputStateChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleUploadProgressChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleUploadProgressChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleDownloadProgressChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleDownloadProgressChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleStopListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleStopListening", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleStartListening(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleStartListening", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleStateChange(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleStateChange", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleFullTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleFullTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandlePartialTranscription(::StringW  transcription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandlePartialTranscription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleAudioDeactivation(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleAudioDeactivation", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleAudioActivation(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleAudioActivation", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleSuccess(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleSuccess", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleSend(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleSend", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleInit(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleInit", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleFailed(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleFailed", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleComplete", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::HandleCancel(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"HandleCancel", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::Voice::ObjectVoiceExperience::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::ObjectVoiceExperience::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::ObjectVoiceExperience::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::ObjectVoiceExperience*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::ObjectVoiceExperience* Oculus::Voice::ObjectVoiceExperience::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::ObjectVoiceExperience*>());
}
// Ctor Parameters []
constexpr ::Oculus::Voice::ObjectVoiceExperience::ObjectVoiceExperience()   {
}
