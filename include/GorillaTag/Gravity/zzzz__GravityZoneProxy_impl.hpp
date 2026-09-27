#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/GravityZoneProxy.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneProxy_ProxyBehaviour_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneProxy_def.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneProxy_ProxyBehaviour_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::GravityZoneProxy.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::GravityZoneProxy::*)(::UnityEngine::Collider*)>(&::GorillaTag::Gravity::GravityZoneProxy::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d391d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::GravityZoneProxy.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::GravityZoneProxy::*)(::UnityEngine::Collider*)>(&::GorillaTag::Gravity::GravityZoneProxy::OnTriggerExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d392a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::GravityZoneProxy.DoBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::GravityZoneProxy::*)(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour, ::UnityEngine::Collider*)>(&::GorillaTag::Gravity::GravityZoneProxy::DoBehaviour)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d391e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"DoBehaviour", {}, {::i2c::type_of<::GlobalNamespace::GravityZoneProxy_ProxyBehaviour>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::GravityZoneProxy.ApplyBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::GravityZoneProxy::*)(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour, ::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::GravityZoneProxy::ApplyBehaviour)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d392b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"ApplyBehaviour", {}, {::i2c::type_of<::GlobalNamespace::GravityZoneProxy_ProxyBehaviour>(), ::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::GravityZoneProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::GravityZoneProxy::*)()>(&::GorillaTag::Gravity::GravityZoneProxy::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d39384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone>& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone> const& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_set_zone(::UnityW<::GorillaTag::Gravity::BasicGravityZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_OnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_OnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr void GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_set_OnEnter(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnter = value;
}
constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_OnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExit;
}
constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_OnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExit;
}
constexpr void GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_set_OnExit(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnExit = value;
}
constexpr float_t& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GorillaTag::Gravity::GravityZoneProxy::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
inline void GorillaTag::Gravity::GravityZoneProxy::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Gravity::GravityZoneProxy::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Gravity::GravityZoneProxy::DoBehaviour(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  behaviour, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"DoBehaviour", {}, {::i2c::type_of<::GlobalNamespace::GravityZoneProxy_ProxyBehaviour>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, other);
}
inline void GorillaTag::Gravity::GravityZoneProxy::ApplyBehaviour(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  behaviour, ::GorillaTag::Gravity::MonkeGravityController*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {"ApplyBehaviour", {}, {::i2c::type_of<::GlobalNamespace::GravityZoneProxy_ProxyBehaviour>(), ::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, target);
}
inline void GorillaTag::Gravity::GravityZoneProxy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::GravityZoneProxy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::GravityZoneProxy* GorillaTag::Gravity::GravityZoneProxy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::GravityZoneProxy*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::GravityZoneProxy::GravityZoneProxy()   {
}
