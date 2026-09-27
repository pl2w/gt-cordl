#pragma once
// IWYU pragma private; include "GlobalNamespace/ComputePenetration.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ComputePenetration_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ComputePenetration.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComputePenetration::*)()>(&::GlobalNamespace::ComputePenetration::Compute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a1a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {"Compute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComputePenetration.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComputePenetration::*)()>(&::GlobalNamespace::ComputePenetration::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5a1a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComputePenetration.DrawCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComputePenetration::*)(::UnityEngine::Collider*, ::UnityEngine::Color)>(&::GlobalNamespace::ComputePenetration::DrawCollider)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5a1a5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {"DrawCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComputePenetration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComputePenetration::*)()>(&::GlobalNamespace::ComputePenetration::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a1aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::ComputePenetration::__cordl_internal_get_colliderA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderA;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::ComputePenetration::__cordl_internal_get_colliderA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderA;
}
constexpr void GlobalNamespace::ComputePenetration::__cordl_internal_set_colliderA(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderA = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::ComputePenetration::__cordl_internal_get_colliderB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderB;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::ComputePenetration::__cordl_internal_get_colliderB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderB;
}
constexpr void GlobalNamespace::ComputePenetration::__cordl_internal_set_colliderB(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderB = value;
}
constexpr bool& GlobalNamespace::ComputePenetration::__cordl_internal_get_overlapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapped;
}
constexpr bool const& GlobalNamespace::ComputePenetration::__cordl_internal_get_overlapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapped;
}
constexpr void GlobalNamespace::ComputePenetration::__cordl_internal_set_overlapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapped = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ComputePenetration::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ComputePenetration::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::ComputePenetration::__cordl_internal_set_direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr float_t& GlobalNamespace::ComputePenetration::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& GlobalNamespace::ComputePenetration::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void GlobalNamespace::ComputePenetration::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::ComputePenetration::__cordl_internal_get_lastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdate;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::ComputePenetration::__cordl_internal_get_lastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdate;
}
constexpr void GlobalNamespace::ComputePenetration::__cordl_internal_set_lastUpdate(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdate = value;
}
inline void GlobalNamespace::ComputePenetration::Compute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {"Compute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComputePenetration::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComputePenetration::DrawCollider(::UnityEngine::Collider*  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {"DrawCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, color);
}
inline void GlobalNamespace::ComputePenetration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComputePenetration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ComputePenetration* GlobalNamespace::ComputePenetration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ComputePenetration*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComputePenetration::ComputePenetration()   {
}
