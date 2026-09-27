#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/WristAngleActiveState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__WristAngleActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.get_MinAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::get_MinAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_MinAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.set_MinAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(float_t)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::set_MinAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_MinAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.get_MaxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::get_MaxAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_MaxAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.set_MaxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(float_t)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::set_MaxAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_MaxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(bool)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4d7458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4d74dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.CalculateAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::CalculateAngle)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0xa4d7518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"CalculateAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.InjectAllWristAngleActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::InjectAllWristAngleActiveState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d7ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"InjectAllWristAngleActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::InjectHand)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4d7ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState.InjectShoulder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::InjectShoulder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"InjectShoulder", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::WristAngleActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::WristAngleActiveState::*)()>(&::Oculus::Interaction::Locomotion::WristAngleActiveState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4d7bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__shoulder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulder;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__shoulder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulder;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__shoulder(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shoulder = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__minAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__minAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minAngle;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__minAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minAngle = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__maxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__maxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAngle;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__maxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAngle = value;
}
constexpr bool& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__currentAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__currentAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAngle;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__currentAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentAngle = value;
}
constexpr bool& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::WristAngleActiveState::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Locomotion::WristAngleActiveState::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::WristAngleActiveState::get_MinAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_MinAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::set_MinAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_MinAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::WristAngleActiveState::get_MaxAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_MaxAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::set_MaxAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_MaxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::WristAngleActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::WristAngleActiveState::CalculateAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"CalculateAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::InjectAllWristAngleActiveState(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Transform*  shoulder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"InjectAllWristAngleActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, shoulder);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::InjectShoulder(::UnityEngine::Transform*  shoulder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {"InjectShoulder", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shoulder);
}
inline void Oculus::Interaction::Locomotion::WristAngleActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::WristAngleActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::WristAngleActiveState* Oculus::Interaction::Locomotion::WristAngleActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::WristAngleActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Locomotion::WristAngleActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Locomotion::WristAngleActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::WristAngleActiveState::WristAngleActiveState()   {
}
