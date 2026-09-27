#pragma once
// IWYU pragma private; include "Oculus/Interaction/FingerPinchValue.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__FingerPinchValue_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::FingerPinchValue::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.get_Finger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFinger (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::get_Finger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_Finger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.set_Finger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::FingerPinchValue::set_Finger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_Finger", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.get_ChangeRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::get_ChangeRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_ChangeRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.set_ChangeRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)(float_t)>(&::Oculus::Interaction::FingerPinchValue::set_ChangeRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_ChangeRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.get_Curve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_Curve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.set_Curve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::FingerPinchValue::set_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47c9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_Curve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                    {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47ca14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                    {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa47ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                    {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                    {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47cc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.InjectAllFingerPinchValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::FingerPinchValue::InjectAllFingerPinchValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"InjectAllFingerPinchValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::FingerPinchValue::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa47cd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FingerPinchValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FingerPinchValue::*)()>(&::Oculus::Interaction::FingerPinchValue::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa47ce24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__finger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__finger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finger;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__finger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finger = value;
}
constexpr float_t& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__changeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeRate;
}
constexpr float_t const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__changeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeRate;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__changeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changeRate = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curve = value;
}
constexpr float_t& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr float_t const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr bool& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__firstCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstCall;
}
constexpr bool const& Oculus::Interaction::FingerPinchValue::__cordl_internal_get__firstCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstCall;
}
constexpr void Oculus::Interaction::FingerPinchValue::__cordl_internal_set__firstCall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstCall = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::FingerPinchValue::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandFinger Oculus::Interaction::FingerPinchValue::get_Finger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_Finger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFinger>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::set_Finger(::Oculus::Interaction::Input::HandFinger  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_Finger", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::FingerPinchValue::get_ChangeRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_ChangeRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::set_ChangeRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_ChangeRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::FingerPinchValue::get_Curve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"get_Curve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::set_Curve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"set_Curve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::FingerPinchValue::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::FingerPinchValue::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FingerPinchValue::InjectAllFingerPinchValue(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"InjectAllFingerPinchValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::FingerPinchValue::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::FingerPinchValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FingerPinchValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FingerPinchValue* Oculus::Interaction::FingerPinchValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FingerPinchValue*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::FingerPinchValue::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::FingerPinchValue::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FingerPinchValue::FingerPinchValue()   {
}
