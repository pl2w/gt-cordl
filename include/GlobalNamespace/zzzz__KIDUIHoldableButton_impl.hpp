#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIHoldableButton.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIHoldableButton_def.hpp"
#include "GlobalNamespace/zzzz__ControllerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIHoldableButton_def.hpp"
#include "GlobalNamespace/zzzz__UXSettings_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.get_onHoldComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::get_onHoldComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a49aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"get_onHoldComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.set_onHoldComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*)>(&::GlobalNamespace::KIDUIHoldableButton::set_onHoldComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a49ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"set_onHoldComplete", {}, {::i2c::type_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.get_HoldPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::get_HoldPercentage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a49ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"get_HoldPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a49ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a49bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIHoldableButton::OnPointerDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a49ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIHoldableButton::OnPointerUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a49d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.ToggleHoldingButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(bool)>(&::GlobalNamespace::KIDUIHoldableButton::ToggleHoldingButton)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a49cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"ToggleHoldingButton", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.ManageButtonInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(bool)>(&::GlobalNamespace::KIDUIHoldableButton::ManageButtonInteraction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a49bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"ManageButtonInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.HoldComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::HoldComplete)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a49d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"HoldComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.ResetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::ResetButton)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a49e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"ResetButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a49ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.PostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::PostUpdate)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x5a49fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"PostUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::LateUpdate)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5a4a498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIHoldableButton::OnPointerEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a4a88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIHoldableButton::OnPointerExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4a898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a4a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton::*)()>(&::GlobalNamespace::KIDUIHoldableButton::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a4a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__button(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr float_t& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__holdDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdDuration;
}
constexpr float_t const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__holdDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdDuration;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__holdDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holdDuration = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__holdProgressFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdProgressFill;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__holdProgressFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdProgressFill;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__holdProgressFill(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holdProgressFill = value;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings>& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__cbUXSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings> const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__cbUXSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbUXSettings = value;
}
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_m_OnHoldComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnHoldComplete;
}
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_m_OnHoldComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnHoldComplete;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set_m_OnHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnHoldComplete = value;
}
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_m_OnHoldStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnHoldStart;
}
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent* const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_m_OnHoldStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnHoldStart;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set_m_OnHoldStart(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnHoldStart = value;
}
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_m_OnHoldRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnHoldRelease;
}
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent* const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_m_OnHoldRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnHoldRelease;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set_m_OnHoldRelease(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnHoldRelease = value;
}
constexpr bool& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__isHoldingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoldingButton;
}
constexpr bool const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__isHoldingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoldingButton;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__isHoldingButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHoldingButton = value;
}
constexpr float_t& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__elapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime;
}
constexpr float_t const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__elapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__elapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsedTime = value;
}
constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour>& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_controllerBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour> const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_controllerBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerBehaviour;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set_controllerBehaviour(::UnityW<::GlobalNamespace::ControllerBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerBehaviour = value;
}
constexpr bool& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_inside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inside;
}
constexpr bool const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get_inside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inside;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set_inside(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inside = value;
}
constexpr bool& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__isHoldingMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoldingMouse;
}
constexpr bool const& GlobalNamespace::KIDUIHoldableButton::__cordl_internal_get__isHoldingMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoldingMouse;
}
constexpr void GlobalNamespace::KIDUIHoldableButton::__cordl_internal_set__isHoldingMouse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHoldingMouse = value;
}
inline void GlobalNamespace::KIDUIHoldableButton::setStaticF__triggeredThisFrame(bool  value)  {
::cordl_internals::setStaticField<bool, "_triggeredThisFrame", ::GlobalNamespace::KIDUIHoldableButton*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUIHoldableButton::getStaticF__triggeredThisFrame()  {
return ::cordl_internals::getStaticField<bool, "_triggeredThisFrame", ::GlobalNamespace::KIDUIHoldableButton*>();
}
inline void GlobalNamespace::KIDUIHoldableButton::setStaticF__canTrigger(bool  value)  {
::cordl_internals::setStaticField<bool, "_canTrigger", ::GlobalNamespace::KIDUIHoldableButton*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUIHoldableButton::getStaticF__canTrigger()  {
return ::cordl_internals::getStaticField<bool, "_canTrigger", ::GlobalNamespace::KIDUIHoldableButton*>();
}
inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* GlobalNamespace::KIDUIHoldableButton::get_onHoldComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"get_onHoldComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::set_onHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"set_onHoldComplete", {}, {::i2c::type_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::KIDUIHoldableButton::get_HoldPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"get_HoldPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIHoldableButton::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIHoldableButton::ToggleHoldingButton(bool  isPointerDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"ToggleHoldingButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPointerDown);
}
inline void GlobalNamespace::KIDUIHoldableButton::ManageButtonInteraction(bool  isPointerUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"ManageButtonInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPointerUp);
}
inline void GlobalNamespace::KIDUIHoldableButton::HoldComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"HoldComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::ResetButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"ResetButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::PostUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"PostUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIHoldableButton::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIHoldableButton::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIHoldableButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIHoldableButton* GlobalNamespace::KIDUIHoldableButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIHoldableButton*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  GlobalNamespace::KIDUIHoldableButton::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* GlobalNamespace::KIDUIHoldableButton::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  GlobalNamespace::KIDUIHoldableButton::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::KIDUIHoldableButton::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  GlobalNamespace::KIDUIHoldableButton::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* GlobalNamespace::KIDUIHoldableButton::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  GlobalNamespace::KIDUIHoldableButton::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::KIDUIHoldableButton::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  GlobalNamespace::KIDUIHoldableButton::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* GlobalNamespace::KIDUIHoldableButton::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIHoldableButton::KIDUIHoldableButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent::*)()>(&::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent* GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent::KIDUIHoldableButton_ButtonHoldReleaseEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent::*)()>(&::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4ab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent* GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent::KIDUIHoldableButton_ButtonHoldStartEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent::*)()>(&::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent::KIDUIHoldableButton_ButtonHoldCompleteEvent()   {
}
