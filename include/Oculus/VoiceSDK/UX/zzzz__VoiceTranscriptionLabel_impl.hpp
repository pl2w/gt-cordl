#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/UX/VoiceTranscriptionLabel.hpp"
#include "Meta/WitAi/zzzz__VoiceService_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/VoiceSDK/UX/zzzz__VoiceTranscriptionLabel_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.get_Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Text> (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)()>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::get_Label)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb943200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"get_Label", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)()>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb9432b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)()>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnEnable)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb943348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)()>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnDisable)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb943630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.OnStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)()>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnStartListening)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb943918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnStartListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.OnTranscriptionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)(::StringW)>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnTranscriptionChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb943aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnTranscriptionChange", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)(::StringW, ::StringW)>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb943ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb943b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnComplete", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)(::StringW, ::UnityEngine::Color)>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::SetText)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb943928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::*)()>(&::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb943c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__label(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__voiceServices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceServices;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>> const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__voiceServices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceServices;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__voiceServices(::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceServices = value;
}
constexpr ::UnityEngine::Color& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__transcriptionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transcriptionColor;
}
constexpr ::UnityEngine::Color const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__transcriptionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transcriptionColor;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__transcriptionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transcriptionColor = value;
}
constexpr ::UnityEngine::Color& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__promptColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promptColor;
}
constexpr ::UnityEngine::Color const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__promptColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promptColor;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__promptColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____promptColor = value;
}
constexpr ::StringW& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__promptDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promptDefault;
}
constexpr ::StringW const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__promptDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promptDefault;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__promptDefault(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____promptDefault = value;
}
constexpr ::StringW& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__promptListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promptListening;
}
constexpr ::StringW const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__promptListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promptListening;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__promptListening(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____promptListening = value;
}
constexpr ::UnityEngine::Color& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__errorColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorColor;
}
constexpr ::UnityEngine::Color const& Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_get__errorColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorColor;
}
constexpr void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::__cordl_internal_set__errorColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorColor = value;
}
inline ::UnityW<::UnityEngine::UI::Text> Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::get_Label()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"get_Label", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Text>>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnStartListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnStartListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnTranscriptionChange(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnTranscriptionChange", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnError(::StringW  status, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, error);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::OnComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"OnComplete", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::SetText(::StringW  newText, ::UnityEngine::Color  newColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText, newColor);
}
inline void Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel* Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*>());
}
// Ctor Parameters []
constexpr ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel::VoiceTranscriptionLabel()   {
}
