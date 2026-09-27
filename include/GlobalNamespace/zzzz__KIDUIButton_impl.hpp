#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIButton.hpp"
#include "GlobalNamespace/zzzz__KIDAudioManager_KIDSoundType_impl.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "GlobalNamespace/zzzz__ControllerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__UXSettings_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_SelectionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.get_InputModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::get_InputModule)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a4775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"get_InputModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::OnEnable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a47808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.PostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::PostUpdate)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5a4794c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"PostUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::LateUpdate)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5a47de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIButton::OnPointerExit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a481dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.ResetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::ResetButton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a481f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"ResetButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::OnDisable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a48258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.FixStuckPressedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::FixStuckPressedState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a48368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"FixStuckPressedState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.DoStateTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::GlobalNamespace::Selectable_SelectionState, bool)>(&::GlobalNamespace::KIDUIButton::DoStateTransition)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a48434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.SetIcons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(bool, bool)>(&::GlobalNamespace::KIDUIButton::SetIcons)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a48540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetIcons", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIButton::OnPointerEnter)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a48614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIButton::OnPointerDown)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a487ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::StringW)>(&::GlobalNamespace::KIDUIButton::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a488fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.SetFont
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::TMPro::TMP_FontAsset*)>(&::GlobalNamespace::KIDUIButton::SetFont)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a48914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetFont", {}, {::i2c::type_of<::TMPro::TMP_FontAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.GetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::GetText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a4892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"GetText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton.SetBorderImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::KIDUIButton::SetBorderImage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a4894c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetBorderImage", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIButton::*)()>(&::GlobalNamespace::KIDUIButton::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a48964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIButton::__cordl_internal_get__borderImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIButton::__cordl_internal_get__borderImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderImage;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__borderImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____borderImage = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::KIDUIButton::__cordl_internal_get__fillImageRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillImageRef;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::KIDUIButton::__cordl_internal_get__fillImageRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillImageRef;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__fillImageRef(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillImageRef = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUIButton::__cordl_internal_get__buttonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUIButton::__cordl_internal_get__buttonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonText;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__buttonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonText = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalBorderColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalBorderColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalBorderColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalBorderColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__normalBorderColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalBorderColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalTextColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__normalTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalTextColor = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalBorderSize;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__normalBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalBorderSize = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedBorderColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedBorderColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedBorderColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedBorderColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__highlightedBorderColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedBorderColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedTextColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__highlightedTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedTextColor = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedBorderSize;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__highlightedBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedBorderSize = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationStrength;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationStrength;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__highlightedVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationDuration;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedVibrationDuration;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__highlightedVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedVibrationDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedBorderColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedBorderColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedBorderColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedBorderColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__pressedBorderColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedBorderColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedTextColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__pressedTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedTextColor = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedBorderSize;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__pressedBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedBorderSize = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedVibrationStrength;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedVibrationStrength;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__pressedVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedVibrationDuration;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__pressedVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedVibrationDuration;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__pressedVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedVibrationDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__selectedBorderColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBorderColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__selectedBorderColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBorderColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__selectedBorderColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedBorderColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__selectedTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__selectedTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedTextColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__selectedTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedTextColor = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__selectedBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__selectedBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBorderSize;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__selectedBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedBorderSize = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__disabledBorderColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledBorderColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__disabledBorderColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledBorderColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__disabledBorderColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledBorderColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIButton::__cordl_internal_get__disabledTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIButton::__cordl_internal_get__disabledTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledTextColor;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__disabledTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledTextColor = value;
}
constexpr float_t& GlobalNamespace::KIDUIButton::__cordl_internal_get__disabledBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIButton::__cordl_internal_get__disabledBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledBorderSize;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__disabledBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledBorderSize = value;
}
constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType& GlobalNamespace::KIDUIButton::__cordl_internal_get_onClickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClickSound;
}
constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType const& GlobalNamespace::KIDUIButton::__cordl_internal_get_onClickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClickSound;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set_onClickSound(::GlobalNamespace::KIDAudioManager_KIDSoundType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClickSound = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUIButton::__cordl_internal_get__normalIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalIcon;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__normalIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalIcon = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUIButton::__cordl_internal_get__highlightedIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedIcon;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__highlightedIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedIcon = value;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings>& GlobalNamespace::KIDUIButton::__cordl_internal_get__cbUXSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings> const& GlobalNamespace::KIDUIButton::__cordl_internal_get__cbUXSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbUXSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour>& GlobalNamespace::KIDUIButton::__cordl_internal_get_controllerBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour> const& GlobalNamespace::KIDUIButton::__cordl_internal_get_controllerBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerBehaviour;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set_controllerBehaviour(::UnityW<::GlobalNamespace::ControllerBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerBehaviour = value;
}
constexpr bool& GlobalNamespace::KIDUIButton::__cordl_internal_get_inside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inside;
}
constexpr bool const& GlobalNamespace::KIDUIButton::__cordl_internal_get_inside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inside;
}
constexpr void GlobalNamespace::KIDUIButton::__cordl_internal_set_inside(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inside = value;
}
inline void GlobalNamespace::KIDUIButton::setStaticF__triggeredThisFrame(bool  value)  {
::cordl_internals::setStaticField<bool, "_triggeredThisFrame", ::GlobalNamespace::KIDUIButton*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUIButton::getStaticF__triggeredThisFrame()  {
return ::cordl_internals::getStaticField<bool, "_triggeredThisFrame", ::GlobalNamespace::KIDUIButton*>();
}
inline void GlobalNamespace::KIDUIButton::setStaticF__canTrigger(bool  value)  {
::cordl_internals::setStaticField<bool, "_canTrigger", ::GlobalNamespace::KIDUIButton*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUIButton::getStaticF__canTrigger()  {
return ::cordl_internals::getStaticField<bool, "_canTrigger", ::GlobalNamespace::KIDUIButton*>();
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> GlobalNamespace::KIDUIButton::get_InputModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"get_InputModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::PostUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"PostUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIButton::ResetButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"ResetButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::FixStuckPressedState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"FixStuckPressedState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void GlobalNamespace::KIDUIButton::SetIcons(bool  normalEnabled, bool  highlightedEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetIcons", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalEnabled, highlightedEnabled);
}
inline void GlobalNamespace::KIDUIButton::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIButton::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIButton*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIButton::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::KIDUIButton::SetFont(::TMPro::TMP_FontAsset*  font)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetFont", {}, {::i2c::type_of<::TMPro::TMP_FontAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, font);
}
inline ::StringW GlobalNamespace::KIDUIButton::GetText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"GetText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIButton::SetBorderImage(::UnityEngine::Sprite*  newImg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {"SetBorderImage", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newImg);
}
inline void GlobalNamespace::KIDUIButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIButton* GlobalNamespace::KIDUIButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIButton*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  GlobalNamespace::KIDUIButton::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::KIDUIButton::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  GlobalNamespace::KIDUIButton::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::KIDUIButton::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  GlobalNamespace::KIDUIButton::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* GlobalNamespace::KIDUIButton::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIButton::KIDUIButton()   {
}
