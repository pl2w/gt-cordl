#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtScreenButton.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtScreenButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessor_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)()>(&::Liv::Lck::GorillaTag::GtScreenButton::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d2bbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtScreenButton::*)()>(&::Liv::Lck::GorillaTag::GtScreenButton::get_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2bbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.set_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)(bool)>(&::Liv::Lck::GorillaTag::GtScreenButton::set_IsActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d2bbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"set_IsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.OnTapStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)()>(&::Liv::Lck::GorillaTag::GtScreenButton::OnTapStarted)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d2bc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"OnTapStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.OnTapEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)()>(&::Liv::Lck::GorillaTag::GtScreenButton::OnTapEnded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d2bc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"OnTapEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.DisableForDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)(float_t)>(&::Liv::Lck::GorillaTag::GtScreenButton::DisableForDuration)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d2bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"DisableForDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton.ReEnableButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)()>(&::Liv::Lck::GorillaTag::GtScreenButton::ReEnableButton)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d2bd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"ReEnableButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtScreenButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtScreenButton::*)()>(&::Liv::Lck::GorillaTag::GtScreenButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColor;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeColor = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__iconRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__iconRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__iconRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iconRenderer = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__triggerProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerProcessor;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__triggerProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerProcessor;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__triggerProcessor(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerProcessor = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get_onTapStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapStarted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get_onTapStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapStarted;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set_onTapStarted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTapStarted = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get_onTapEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapEnded;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get_onTapEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTapEnded;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set_onTapEnded(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTapEnded = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__currentDefaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDefaultColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__currentDefaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDefaultColor;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__currentDefaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDefaultColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__currentActiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentActiveColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__currentActiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentActiveColor;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__currentActiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentActiveColor = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Liv::Lck::GorillaTag::GtScreenButton::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
inline void Liv::Lck::GorillaTag::GtScreenButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GtScreenButton::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtScreenButton::set_IsActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"set_IsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtScreenButton::OnTapStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"OnTapStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtScreenButton::OnTapEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"OnTapEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtScreenButton::DisableForDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"DisableForDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void Liv::Lck::GorillaTag::GtScreenButton::ReEnableButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {"ReEnableButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtScreenButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtScreenButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtScreenButton* Liv::Lck::GorillaTag::GtScreenButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtScreenButton*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtScreenButton::GtScreenButton()   {
}
