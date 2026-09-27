#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButton.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_ButtonMode_impl.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_ButtonMode_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITouchscreenButton::*)()>(&::GlobalNamespace::SITouchscreenButton::get_IsReady)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5af659c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.get_IsToggledOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITouchscreenButton::*)()>(&::GlobalNamespace::SITouchscreenButton::get_IsToggledOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"get_IsToggledOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)()>(&::GlobalNamespace::SITouchscreenButton::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5af6658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)()>(&::GlobalNamespace::SITouchscreenButton::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5af6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SITouchscreenButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5af675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)()>(&::GlobalNamespace::SITouchscreenButton::PressButton)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5af6918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"PressButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.SetToggleState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)(bool, bool)>(&::GlobalNamespace::SITouchscreenButton::SetToggleState)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5af6b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"SetToggleState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)(bool)>(&::GlobalNamespace::SITouchscreenButton::Click)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af6c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButton::*)()>(&::GlobalNamespace::SITouchscreenButton::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5af6c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonMode;
}
constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonMode;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set_buttonMode(::GlobalNamespace::SITouchscreenButton_ButtonMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonMode = value;
}
constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set_buttonType(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonType = value;
}
constexpr int32_t& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr int32_t const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set_data(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__pressSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__pressSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressSound;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set__pressSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressSound = value;
}
constexpr float_t& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__pressSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressSoundVolume;
}
constexpr float_t const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__pressSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressSoundVolume;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set__pressSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressSoundVolume = value;
}
constexpr bool& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__isToggledOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isToggledOn;
}
constexpr bool const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__isToggledOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isToggledOn;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set__isToggledOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isToggledOn = value;
}
constexpr bool& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__startToggledOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startToggledOn;
}
constexpr bool const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__startToggledOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startToggledOn;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set__startToggledOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startToggledOn = value;
}
constexpr ::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>*& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressed;
}
constexpr ::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>* const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressed;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set_buttonPressed(::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPressed = value;
}
constexpr ::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>*& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonToggled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonToggled;
}
constexpr ::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>* const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_buttonToggled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonToggled;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set_buttonToggled(::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonToggled = value;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__screenRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenRegion;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__screenRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenRegion;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set__screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenRegion = value;
}
constexpr float_t& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__enableTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableTime;
}
constexpr float_t const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get__enableTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableTime;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set__enableTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableTime = value;
}
constexpr bool& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_isUsable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUsable;
}
constexpr bool const& GlobalNamespace::SITouchscreenButton::__cordl_internal_get_isUsable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUsable;
}
constexpr void GlobalNamespace::SITouchscreenButton::__cordl_internal_set_isUsable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isUsable = value;
}
inline bool GlobalNamespace::SITouchscreenButton::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SITouchscreenButton::get_IsToggledOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"get_IsToggledOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButton::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SITouchscreenButton::PressButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"PressButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButton::SetToggleState(bool  state, bool  invokeEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"SetToggleState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, invokeEvent);
}
inline void GlobalNamespace::SITouchscreenButton::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::SITouchscreenButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SITouchscreenButton* GlobalNamespace::SITouchscreenButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITouchscreenButton*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::SITouchscreenButton::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::SITouchscreenButton::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITouchscreenButton::SITouchscreenButton()   {
}
