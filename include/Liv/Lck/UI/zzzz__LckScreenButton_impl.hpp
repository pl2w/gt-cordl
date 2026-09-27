#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckScreenButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckScreenButton_def.hpp"
#include "Liv/Lck/UI/zzzz__LckButtonColors_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckScreenButton::OnPointerEnter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d51054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckScreenButton::OnPointerDown)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d51164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckScreenButton::OnPointerUp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d511d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckScreenButton::OnPointerExit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d512ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::Collider*)>(&::Liv::Lck::UI::LckScreenButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9d512d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::Collider*)>(&::Liv::Lck::UI::LckScreenButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9d51578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.IsValidTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::Vector3)>(&::Liv::Lck::UI::LckScreenButton::IsValidTap)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9d513fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.DisableForDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(float_t)>(&::Liv::Lck::UI::LckScreenButton::DisableForDuration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d5164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"DisableForDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.ReEnableButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)()>(&::Liv::Lck::UI::LckScreenButton::ReEnableButton)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d516ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"ReEnableButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.SetIconColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)(::UnityEngine::Color)>(&::Liv::Lck::UI::LckScreenButton::SetIconColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d510a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"SetIconColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.SetDefaultButtonColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)()>(&::Liv::Lck::UI::LckScreenButton::SetDefaultButtonColors)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d51290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"SetDefaultButtonColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)()>(&::Liv::Lck::UI::LckScreenButton::OnValidate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d51724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckScreenButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckScreenButton::*)()>(&::Liv::Lck::UI::LckScreenButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d517bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colors = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____icon;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____icon = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr bool& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
constexpr bool& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__hasCollided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCollided;
}
constexpr bool const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__hasCollided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCollided;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__hasCollided(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasCollided = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__clickedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::UI::LckScreenButton::__cordl_internal_get__clickedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr void Liv::Lck::UI::LckScreenButton::__cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickedObject = value;
}
inline void Liv::Lck::UI::LckScreenButton::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckScreenButton::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckScreenButton::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckScreenButton::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckScreenButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Liv::Lck::UI::LckScreenButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool Liv::Lck::UI::LckScreenButton::IsValidTap(::UnityEngine::Vector3  tapPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tapPosition);
}
inline void Liv::Lck::UI::LckScreenButton::DisableForDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"DisableForDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void Liv::Lck::UI::LckScreenButton::ReEnableButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"ReEnableButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckScreenButton::SetIconColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"SetIconColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Liv::Lck::UI::LckScreenButton::SetDefaultButtonColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"SetDefaultButtonColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckScreenButton::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckScreenButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckScreenButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckScreenButton* Liv::Lck::UI::LckScreenButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckScreenButton*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Liv::Lck::UI::LckScreenButton::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Liv::Lck::UI::LckScreenButton::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Liv::Lck::UI::LckScreenButton::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Liv::Lck::UI::LckScreenButton::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Liv::Lck::UI::LckScreenButton::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Liv::Lck::UI::LckScreenButton::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Liv::Lck::UI::LckScreenButton::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Liv::Lck::UI::LckScreenButton::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Liv::Lck::UI::LckScreenButton::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Liv::Lck::UI::LckScreenButton::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckScreenButton::LckScreenButton()   {
}
