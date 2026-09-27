#pragma once
// IWYU pragma private; include "Meta/WitAi/Speech/VoiceSpeechEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Speech/zzzz__VoiceSpeechEvents_def.hpp"
#include "Meta/WitAi/Speech/zzzz__VoiceAudioEvent_def.hpp"
#include "Meta/WitAi/Speech/zzzz__VoiceTextEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Speech::VoiceSpeechEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Speech::VoiceSpeechEvents::*)()>(&::Meta::WitAi::Speech::VoiceSpeechEvents::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9e3f6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Speech::VoiceSpeechEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Speech::VoiceTextEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnTextPlaybackStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTextPlaybackStart;
}
constexpr ::Meta::WitAi::Speech::VoiceTextEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnTextPlaybackStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTextPlaybackStart;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnTextPlaybackStart(::Meta::WitAi::Speech::VoiceTextEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTextPlaybackStart = value;
}
constexpr ::Meta::WitAi::Speech::VoiceTextEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnTextPlaybackCancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTextPlaybackCancelled;
}
constexpr ::Meta::WitAi::Speech::VoiceTextEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnTextPlaybackCancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTextPlaybackCancelled;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnTextPlaybackCancelled(::Meta::WitAi::Speech::VoiceTextEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTextPlaybackCancelled = value;
}
constexpr ::Meta::WitAi::Speech::VoiceTextEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnTextPlaybackFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTextPlaybackFinished;
}
constexpr ::Meta::WitAi::Speech::VoiceTextEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnTextPlaybackFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTextPlaybackFinished;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnTextPlaybackFinished(::Meta::WitAi::Speech::VoiceTextEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTextPlaybackFinished = value;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackReady;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackReady;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnAudioClipPlaybackReady(::Meta::WitAi::Speech::VoiceAudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioClipPlaybackReady = value;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackStart;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackStart;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnAudioClipPlaybackStart(::Meta::WitAi::Speech::VoiceAudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioClipPlaybackStart = value;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackCancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackCancelled;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackCancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackCancelled;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnAudioClipPlaybackCancelled(::Meta::WitAi::Speech::VoiceAudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioClipPlaybackCancelled = value;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackFinished;
}
constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_get_OnAudioClipPlaybackFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAudioClipPlaybackFinished;
}
constexpr void Meta::WitAi::Speech::VoiceSpeechEvents::__cordl_internal_set_OnAudioClipPlaybackFinished(::Meta::WitAi::Speech::VoiceAudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAudioClipPlaybackFinished = value;
}
inline void Meta::WitAi::Speech::VoiceSpeechEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Speech::VoiceSpeechEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Speech::VoiceSpeechEvents* Meta::WitAi::Speech::VoiceSpeechEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Speech::VoiceSpeechEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Speech::VoiceSpeechEvents::VoiceSpeechEvents()   {
}
