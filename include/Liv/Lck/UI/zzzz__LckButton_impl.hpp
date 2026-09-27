#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckButton_def.hpp"
#include "Liv/Lck/UI/zzzz__LckButtonColors_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
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
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)()>(&::Liv::Lck::UI::LckButton::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d4dd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.SetLabelText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::StringW)>(&::Liv::Lck::UI::LckButton::SetLabelText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d4dd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"SetLabelText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.SetIsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(bool)>(&::Liv::Lck::UI::LckButton::SetIsDisabled)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d4ddb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"SetIsDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckButton::OnPointerEnter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d4deec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckButton::OnPointerDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d4df38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckButton::OnPointerUp)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d4dfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::UI::LckButton::OnPointerExit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d4e0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::Collider*)>(&::Liv::Lck::UI::LckButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d4e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::Collider*)>(&::Liv::Lck::UI::LckButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d4e3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(bool)>(&::Liv::Lck::UI::LckButton::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d4e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.IsValidTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckButton::*)(::UnityEngine::Vector3)>(&::Liv::Lck::UI::LckButton::IsValidTap)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9d4e268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)()>(&::Liv::Lck::UI::LckButton::OnValidate)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x9d4e53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton.SetMeshColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)(::UnityEngine::Color)>(&::Liv::Lck::UI::LckButton::SetMeshColor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4deb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"SetMeshColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButton::*)()>(&::Liv::Lck::UI::LckButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4e838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::UI::LckButton::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Liv::Lck::UI::LckButton::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& Liv::Lck::UI::LckButton::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& Liv::Lck::UI::LckButton::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colors = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Liv::Lck::UI::LckButton::__cordl_internal_get__labelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Liv::Lck::UI::LckButton::__cordl_internal_get__labelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelText;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____labelText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Liv::Lck::UI::LckButton::__cordl_internal_get__iconImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Liv::Lck::UI::LckButton::__cordl_internal_get__iconImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconImage;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iconImage = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Liv::Lck::UI::LckButton::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Liv::Lck::UI::LckButton::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Liv::Lck::UI::LckButton::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Liv::Lck::UI::LckButton::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__visuals(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Liv::Lck::UI::LckButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Liv::Lck::UI::LckButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::UI::LckButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::UI::LckButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::UI::LckButton::__cordl_internal_get__clickedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::UI::LckButton::__cordl_internal_get__clickedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickedObject = value;
}
constexpr bool& Liv::Lck::UI::LckButton::__cordl_internal_get__hasCollided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCollided;
}
constexpr bool const& Liv::Lck::UI::LckButton::__cordl_internal_get__hasCollided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCollided;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__hasCollided(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasCollided = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Liv::Lck::UI::LckButton::__cordl_internal_get__propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Liv::Lck::UI::LckButton::__cordl_internal_get__propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyBlock = value;
}
constexpr int32_t& Liv::Lck::UI::LckButton::__cordl_internal_get__colorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorId;
}
constexpr int32_t const& Liv::Lck::UI::LckButton::__cordl_internal_get__colorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorId;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__colorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorId = value;
}
constexpr bool& Liv::Lck::UI::LckButton::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& Liv::Lck::UI::LckButton::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void Liv::Lck::UI::LckButton::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
inline void Liv::Lck::UI::LckButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckButton::SetLabelText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"SetLabelText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Liv::Lck::UI::LckButton::SetIsDisabled(bool  isDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"SetIsDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDisabled);
}
inline void Liv::Lck::UI::LckButton::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckButton::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckButton::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckButton::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::UI::LckButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Liv::Lck::UI::LckButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Liv::Lck::UI::LckButton::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline bool Liv::Lck::UI::LckButton::IsValidTap(::UnityEngine::Vector3  tapPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tapPosition);
}
inline void Liv::Lck::UI::LckButton::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckButton::SetMeshColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {"SetMeshColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Liv::Lck::UI::LckButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckButton* Liv::Lck::UI::LckButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckButton*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Liv::Lck::UI::LckButton::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Liv::Lck::UI::LckButton::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Liv::Lck::UI::LckButton::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Liv::Lck::UI::LckButton::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Liv::Lck::UI::LckButton::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Liv::Lck::UI::LckButton::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Liv::Lck::UI::LckButton::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Liv::Lck::UI::LckButton::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Liv::Lck::UI::LckButton::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Liv::Lck::UI::LckButton::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckButton::LckButton()   {
}
