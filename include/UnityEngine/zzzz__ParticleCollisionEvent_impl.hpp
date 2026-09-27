#pragma once
// IWYU pragma private; include "UnityEngine/ParticleCollisionEvent.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ParticleCollisionEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleCollisionEvent.get_intersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleCollisionEvent::*)()>(&::UnityEngine::ParticleCollisionEvent::get_intersection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb677084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleCollisionEvent>(),
                        {"get_intersection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleCollisionEvent.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleCollisionEvent::*)()>(&::UnityEngine::ParticleCollisionEvent::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb677090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleCollisionEvent>(),
                        {"get_normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::ParticleCollisionEvent::get_intersection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleCollisionEvent>(),
                        {"get_intersection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleCollisionEvent::get_normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ParticleCollisionEvent>(),
                        {"get_normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Intersection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ColliderInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ParticleCollisionEvent::ParticleCollisionEvent(::UnityEngine::Vector3  m_Intersection, ::UnityEngine::Vector3  m_Normal, ::UnityEngine::Vector3  m_Velocity, int32_t  m_ColliderInstanceID) noexcept  {
this->m_Intersection = m_Intersection;
this->m_Normal = m_Normal;
this->m_Velocity = m_Velocity;
this->m_ColliderInstanceID = m_ColliderInstanceID;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleCollisionEvent::ParticleCollisionEvent()   {
}
