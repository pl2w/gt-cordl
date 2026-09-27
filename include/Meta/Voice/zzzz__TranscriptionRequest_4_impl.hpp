#pragma once
// IWYU pragma private; include "Meta/Voice/TranscriptionRequest_4.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_impl.hpp"
#include "Meta/Voice/zzzz__VoiceRequest_4_impl.hpp"
#include "Meta/Voice/zzzz__TranscriptionRequest_4_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceAudioInputState& Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__AudioInputState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioInputState_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceAudioInputState const& Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__AudioInputState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioInputState_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__AudioInputState_k__BackingField(::Meta::Voice::VoiceAudioInputState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioInputState_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::Voice::VoiceAudioInputState Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_AudioInputState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_AudioInputState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::VoiceAudioInputState>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::set_AudioInputState(::Meta::Voice::VoiceAudioInputState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"set_AudioInputState", {}, {::i2c::type_of<::Meta::Voice::VoiceAudioInputState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_IsAudioInputActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_IsAudioInputActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_IsListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_IsListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_CanActivateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_CanActivateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::_ctor(TOptions  newOptions, TEvents  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {".ctor", {}, {::i2c::type_of<TOptions>(), ::i2c::type_of<TEvents>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOptions, newEvents);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::SetAudioInputState(::Meta::Voice::VoiceAudioInputState  newAudioInputState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAudioInputState);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnCanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::Log(::StringW  log, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log, logLevel);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::StringW Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_Transcription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_Transcription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::ApplyTranscription(::StringW  transcription, bool  full)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription, full);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnPartialTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnFullTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::StringW Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::ActivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnAudioActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleAudioActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnStartListening()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::DeactivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnAudioDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleAudioDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HasSentAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnStopListening()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::Send()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::Cancel(::StringW  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::_OnPartialTranscription_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"<OnPartialTranscription>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::_OnFullTranscription_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"<OnFullTranscription>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>* Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::New_ctor(TOptions  newOptions, TEvents  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(newOptions, newEvents));
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>::TranscriptionRequest_4()   {
}
