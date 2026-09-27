#pragma once
// IWYU pragma private; include "Oculus/Interaction/DPadUnityEventWrapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "Oculus/Interaction/zzzz__DPadUnityEventWrapper_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis2D_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_Axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis2D* (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_Axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_Axis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.set_Axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::DPadUnityEventWrapper::set_Axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"set_Axis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_PositiveDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_PositiveDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_PositiveDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.set_PositiveDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)(float_t)>(&::Oculus::Interaction::DPadUnityEventWrapper::set_PositiveDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"set_PositiveDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_NegativeDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_NegativeDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_NegativeDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.set_NegativeDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)(float_t)>(&::Oculus::Interaction::DPadUnityEventWrapper::set_NegativeDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"set_NegativeDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_WhenPressLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_WhenPressRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_WhenPressUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.get_WhenPressDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa411e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa411ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa411ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa411ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::Update)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa411f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                    {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.AxisToDPadDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::Oculus::Interaction::DPadUnityEventWrapper::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::DPadUnityEventWrapper::AxisToDPadDirection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa41205c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"AxisToDPadDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.InjectAllDPadUnityEventWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::DPadUnityEventWrapper::InjectAllDPadUnityEventWrapper)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa41210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"InjectAllDPadUnityEventWrapper", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper.InjectAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::DPadUnityEventWrapper::InjectAxis)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa412110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"InjectAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DPadUnityEventWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DPadUnityEventWrapper::*)()>(&::Oculus::Interaction::DPadUnityEventWrapper::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4121dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr ::Oculus::Interaction::Input::IAxis2D*& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__Axis_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IAxis2D* const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__Axis_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis_k__BackingField;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__Axis_k__BackingField(::Oculus::Interaction::Input::IAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Axis_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__positiveDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveDeadZone;
}
constexpr float_t const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__positiveDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveDeadZone;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__positiveDeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positiveDeadZone = value;
}
constexpr float_t& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__negativeDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeDeadZone;
}
constexpr float_t const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__negativeDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeDeadZone;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__negativeDeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____negativeDeadZone = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressLeft;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressLeft;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__whenPressLeft(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenPressLeft = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressRight;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressRight;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__whenPressRight(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenPressRight = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressUp;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressUp;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__whenPressUp(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenPressUp = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressDown;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__whenPressDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenPressDown;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__whenPressDown(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenPressDown = value;
}
constexpr bool& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityEngine::Vector2Int& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__lastDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDirection;
}
constexpr ::UnityEngine::Vector2Int const& Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_get__lastDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDirection;
}
constexpr void Oculus::Interaction::DPadUnityEventWrapper::__cordl_internal_set__lastDirection(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDirection = value;
}
inline ::Oculus::Interaction::Input::IAxis2D* Oculus::Interaction::DPadUnityEventWrapper::get_Axis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_Axis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis2D*>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::set_Axis(::Oculus::Interaction::Input::IAxis2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"set_Axis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::DPadUnityEventWrapper::get_PositiveDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_PositiveDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::set_PositiveDeadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"set_PositiveDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::DPadUnityEventWrapper::get_NegativeDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_NegativeDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::set_NegativeDeadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"set_NegativeDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Oculus::Interaction::DPadUnityEventWrapper::get_WhenPressDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"get_WhenPressDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Oculus::Interaction::DPadUnityEventWrapper::AxisToDPadDirection(::UnityEngine::Vector2  axisValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"AxisToDPadDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, axisValue);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::InjectAllDPadUnityEventWrapper(::Oculus::Interaction::Input::IAxis2D*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"InjectAllDPadUnityEventWrapper", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::InjectAxis(::Oculus::Interaction::Input::IAxis2D*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {"InjectAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis);
}
inline void Oculus::Interaction::DPadUnityEventWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DPadUnityEventWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DPadUnityEventWrapper* Oculus::Interaction::DPadUnityEventWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DPadUnityEventWrapper*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DPadUnityEventWrapper::DPadUnityEventWrapper()   {
}
