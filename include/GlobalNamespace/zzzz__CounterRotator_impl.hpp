#pragma once
// IWYU pragma private; include "GlobalNamespace/CounterRotator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CounterRotator_def.hpp"
#include "GorillaTag/Gravity/zzzz__ChangingBasicGravityZone_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CounterRotator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CounterRotator::*)()>(&::GlobalNamespace::CounterRotator::Start)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x566dbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CounterRotator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CounterRotator.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CounterRotator::*)()>(&::GlobalNamespace::CounterRotator::LateUpdate)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x566dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CounterRotator*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CounterRotator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CounterRotator::*)()>(&::GlobalNamespace::CounterRotator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CounterRotator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CounterRotator::__cordl_internal_get_stabilizedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stabilizedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CounterRotator::__cordl_internal_get_stabilizedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stabilizedObject;
}
constexpr void GlobalNamespace::CounterRotator::__cordl_internal_set_stabilizedObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stabilizedObject = value;
}
constexpr ::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone>& GlobalNamespace::CounterRotator::__cordl_internal_get_gravityCompensator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCompensator;
}
constexpr ::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone> const& GlobalNamespace::CounterRotator::__cordl_internal_get_gravityCompensator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCompensator;
}
constexpr void GlobalNamespace::CounterRotator::__cordl_internal_set_gravityCompensator(::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityCompensator = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CounterRotator::__cordl_internal_get_startingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CounterRotator::__cordl_internal_get_startingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPosition;
}
constexpr void GlobalNamespace::CounterRotator::__cordl_internal_set_startingPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::CounterRotator::__cordl_internal_get_startingRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::CounterRotator::__cordl_internal_get_startingRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingRotation;
}
constexpr void GlobalNamespace::CounterRotator::__cordl_internal_set_startingRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingRotation = value;
}
inline void GlobalNamespace::CounterRotator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CounterRotator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CounterRotator::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CounterRotator*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CounterRotator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CounterRotator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CounterRotator* GlobalNamespace::CounterRotator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CounterRotator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CounterRotator::CounterRotator()   {
}
