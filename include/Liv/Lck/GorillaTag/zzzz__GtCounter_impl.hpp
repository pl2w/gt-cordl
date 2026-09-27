#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCounter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCounter_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtUiSettings_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtCounter::set_Value)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d226e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"set_Value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d22944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d2294c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d22a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.SetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::SetUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d22950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"SetUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.Increase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::Increase)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d22a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"Increase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.Decrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::Decrease)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d22adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"Decrease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.TapEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::TapEnded)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d22bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"TapEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter.UpdateCounter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtCounter::UpdateCounter)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9d2275c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"UpdateCounter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCounter::*)()>(&::Liv::Lck::GorillaTag::GtCounter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d22c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__step()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____step;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__step() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____step;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__step(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____step = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__minValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minValue = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__maxValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxValue = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__showOffInsteadOfZero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showOffInsteadOfZero;
}
constexpr bool const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__showOffInsteadOfZero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showOffInsteadOfZero;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__showOffInsteadOfZero(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showOffInsteadOfZero = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__showMaxInsteadOfNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showMaxInsteadOfNumber;
}
constexpr bool const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__showMaxInsteadOfNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showMaxInsteadOfNumber;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__showMaxInsteadOfNumber(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showMaxInsteadOfNumber = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__valueLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__valueLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueLabel;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__valueLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueLabel = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__decrementButtonRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decrementButtonRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__decrementButtonRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decrementButtonRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__decrementButtonRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decrementButtonRenderer = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__incrementButtonRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incrementButtonRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__incrementButtonRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incrementButtonRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__incrementButtonRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____incrementButtonRenderer = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__minusRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minusRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__minusRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minusRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__minusRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minusRenderer = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__plusRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plusRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__plusRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plusRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__plusRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____plusRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__visualsTrans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__visualsTrans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualsTrans = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get_onValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onValueChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Liv::Lck::GorillaTag::GtCounter::__cordl_internal_get_onValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onValueChanged;
}
constexpr void Liv::Lck::GorillaTag::GtCounter::__cordl_internal_set_onValueChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onValueChanged = value;
}
inline void Liv::Lck::GorillaTag::GtCounter::set_Value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"set_Value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Liv::Lck::GorillaTag::GtCounter::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::SetUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"SetUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::Increase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"Increase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::Decrease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"Decrease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::TapEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"TapEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCounter::UpdateCounter(int32_t  num)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {"UpdateCounter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, num);
}
inline void Liv::Lck::GorillaTag::GtCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCounter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtCounter* Liv::Lck::GorillaTag::GtCounter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtCounter*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtCounter::GtCounter()   {
}
