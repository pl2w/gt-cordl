#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/UX/TTSSpeakerInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/UX/zzzz__TTSSpeakerInput_def.hpp"
#include "Meta/WitAi/TTS/UX/zzzz__TTSSpeakerInput_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::OnEnable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9e4ff38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.StopClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::StopClick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e50194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"StopClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.PauseClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::PauseClick)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e501b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"PauseClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.SpeakClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::SpeakClick)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9e50208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"SpeakClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.SpeakAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)(::StringW, bool)>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::SpeakAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e504dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.FormatText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)(::StringW)>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::FormatText)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e503f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"FormatText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::OnDisable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e50600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::Update)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9e506e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.RefreshStopButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::RefreshStopButton)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e50080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"RefreshStopButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput.RefreshPauseButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::RefreshPauseButton)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e500e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"RefreshPauseButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e508c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaker;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaker;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__speaker(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speaker = value;
}
constexpr ::UnityW<::UnityEngine::UI::InputField>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__input(::UnityW<::UnityEngine::UI::InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____input = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__stopButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__stopButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopButton;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__stopButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__pauseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__pauseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseButton;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__pauseButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pauseButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__speakButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speakButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__speakButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speakButton;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__speakButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speakButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__queueButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__queueButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueButton;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__queueButton(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queueButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__asyncToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__asyncToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncToggle;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__asyncToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncToggle = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__asyncClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__asyncClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncClip;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__asyncClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncClip = value;
}
constexpr ::StringW& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__dateId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateId;
}
constexpr ::StringW const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__dateId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateId;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__dateId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateId = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__queuedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedText;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__queuedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedText;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__queuedText(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queuedText = value;
}
constexpr ::StringW& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__voice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice;
}
constexpr ::StringW const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__voice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voice;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__voice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voice = value;
}
constexpr bool& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__loading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loading;
}
constexpr bool const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__loading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loading;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__loading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loading = value;
}
constexpr bool& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__speaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaking;
}
constexpr bool const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__speaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaking;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__speaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speaking = value;
}
constexpr bool& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__paused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paused;
}
constexpr bool const& Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_get__paused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paused;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput::__cordl_internal_set__paused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paused = value;
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::StopClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"StopClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::PauseClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"PauseClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::SpeakClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"SpeakClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::TTS::UX::TTSSpeakerInput::SpeakAsync(::StringW  phrase, bool  queued)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"SpeakAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, phrase, queued);
}
inline ::StringW Meta::WitAi::TTS::UX::TTSSpeakerInput::FormatText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"FormatText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, text);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::RefreshStopButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"RefreshStopButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::RefreshPauseButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {"RefreshPauseButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::UX::TTSSpeakerInput* Meta::WitAi::TTS::UX::TTSSpeakerInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::UX::TTSSpeakerInput*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::UX::TTSSpeakerInput::TTSSpeakerInput()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::*)(int32_t)>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e505d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e5091c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9e50920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e50c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e50c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::*)()>(&::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e50ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr bool& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get_queued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queued;
}
constexpr bool const& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get_queued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queued;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_set_queued(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queued = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput>& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput> const& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get_phrase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phrase;
}
constexpr ::StringW const& Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_get_phrase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phrase;
}
constexpr void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::__cordl_internal_set_phrase(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___phrase = value;
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18* Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18::TTSSpeakerInput__SpeakAsync_d__18()   {
}
