#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerEvents.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerClipEvents_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerEvents_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerClipDataEvent_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents.get_OnPlaybackQueueBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::get_OnPlaybackQueueBegin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(),
                        {"get_OnPlaybackQueueBegin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents.get_OnPlaybackQueueComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::get_OnPlaybackQueueComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e5be08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(),
                        {"get_OnPlaybackQueueComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e5be10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get__onPlaybackQueueBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPlaybackQueueBegin;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get__onPlaybackQueueBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPlaybackQueueBegin;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set__onPlaybackQueueBegin(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPlaybackQueueBegin = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get__onPlaybackQueueComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPlaybackQueueComplete;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get__onPlaybackQueueComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPlaybackQueueComplete;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set__onPlaybackQueueComplete(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPlaybackQueueComplete = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataQueued;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataQueued;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataQueued(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataQueued = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadBegin;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadBegin;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipLoadBegin = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadBegin;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadBegin;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataLoadBegin = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadAbort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadAbort;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadAbort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadAbort;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipLoadAbort = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadAbort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadAbort;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadAbort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadAbort;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataLoadAbort = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadFailed;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadFailed;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipLoadFailed = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadFailed;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadFailed;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataLoadFailed = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadSuccess;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipLoadSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipLoadSuccess;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipLoadSuccess = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadSuccess;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataLoadSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataLoadSuccess;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataLoadSuccess = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackReady;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackReady;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataPlaybackReady = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnStartSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartSpeaking;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnStartSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartSpeaking;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnStartSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartSpeaking = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackStart;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackStart;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataPlaybackStart(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataPlaybackStart = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnCancelledSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCancelledSpeaking;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnCancelledSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCancelledSpeaking;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnCancelledSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCancelledSpeaking = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackCancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackCancelled;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackCancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackCancelled;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataPlaybackCancelled = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnFinishedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFinishedSpeaking;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnFinishedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFinishedSpeaking;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnFinishedSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFinishedSpeaking = value;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackFinished;
}
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_get_OnClipDataPlaybackFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClipDataPlaybackFinished;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::__cordl_internal_set_OnClipDataPlaybackFinished(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClipDataPlaybackFinished = value;
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::get_OnPlaybackQueueBegin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(),
                        {"get_OnPlaybackQueueBegin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::get_OnPlaybackQueueComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(),
                        {"get_OnPlaybackQueueComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents::TTSSpeakerEvents()   {
}
