#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtButton.hpp"
#include "Liv/Lck/GorillaTag/zzzz__ButtonInitializeType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtUiSettings_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::Awake)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d212f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d21400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.SetDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)(bool)>(&::Liv::Lck::GorillaTag::GtButton::SetDisabled)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9d21410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.TapStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::TapStarted)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d2156c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"TapStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.TapEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::TapEnded)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d216ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"TapEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.TapEndedNoAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::TapEndedNoAudio)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d21714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"TapEndedNoAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.SetLabelText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)(::StringW)>(&::Liv::Lck::GorillaTag::GtButton::SetLabelText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d21758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"SetLabelText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.InitSetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::InitSetUp)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d2130c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"InitSetUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton.FlipVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::FlipVisuals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d21660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"FlipVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtButton::*)()>(&::Liv::Lck::GorillaTag::GtButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d21778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__doFlipping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doFlipping;
}
constexpr bool const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__doFlipping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doFlipping;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__doFlipping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doFlipping = value;
}
constexpr ::Liv::Lck::GorillaTag::ButtonInitializeType& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__initializeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializeType;
}
constexpr ::Liv::Lck::GorillaTag::ButtonInitializeType const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__initializeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializeType;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__initializeType(::Liv::Lck::GorillaTag::ButtonInitializeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializeType = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__bodyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__bodyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__visualsTrans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__visualsTrans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualsTrans = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__iconImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconImage;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__iconImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconImage;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__iconImage(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iconImage = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get_onTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTap;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get_onTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTap;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set_onTap(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTap = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__defaultLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__defaultLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLocalPosition;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultLocalPosition = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__isFlipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFlipped;
}
constexpr bool const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__isFlipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFlipped;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__isFlipped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFlipped = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& Liv::Lck::GorillaTag::GtButton::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void Liv::Lck::GorillaTag::GtButton::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
inline void Liv::Lck::GorillaTag::GtButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::SetDisabled(bool  isDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDisabled);
}
inline void Liv::Lck::GorillaTag::GtButton::TapStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"TapStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::TapEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"TapEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::TapEndedNoAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"TapEndedNoAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::SetLabelText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"SetLabelText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Liv::Lck::GorillaTag::GtButton::InitSetUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"InitSetUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::FlipVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {"FlipVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtButton* Liv::Lck::GorillaTag::GtButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtButton*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtButton::GtButton()   {
}
