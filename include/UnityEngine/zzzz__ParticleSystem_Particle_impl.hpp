#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_Particle.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_lifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(float_t)>(&::GlobalNamespace::ParticleSystem_Particle::set_lifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb6695b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_lifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ParticleSystem_Particle::*)()>(&::GlobalNamespace::ParticleSystem_Particle::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb67072c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleSystem_Particle::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb6695a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleSystem_Particle::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb6695ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_remainingLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(float_t)>(&::GlobalNamespace::ParticleSystem_Particle::set_remainingLifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb670724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_remainingLifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_startLifetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(float_t)>(&::GlobalNamespace::ParticleSystem_Particle::set_startLifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb6695c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_startLifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_startColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(::UnityEngine::Color32)>(&::GlobalNamespace::ParticleSystem_Particle::set_startColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb669644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.get_randomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::ParticleSystem_Particle::*)()>(&::GlobalNamespace::ParticleSystem_Particle::get_randomSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb670738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"get_randomSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_randomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(uint32_t)>(&::GlobalNamespace::ParticleSystem_Particle::set_randomSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_randomSeed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_startSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(float_t)>(&::GlobalNamespace::ParticleSystem_Particle::set_startSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb6695c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_startSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_rotation3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleSystem_Particle::set_rotation3D)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb6695d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_rotation3D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Particle.set_angularVelocity3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ParticleSystem_Particle::set_angularVelocity3D)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb66960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_angularVelocity3D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_Particle::set_lifetime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_lifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ParticleSystem_Particle::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_remainingLifetime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_remainingLifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_startLifetime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_startLifetime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_startColor(::UnityEngine::Color32  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::ParticleSystem_Particle::get_randomSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"get_randomSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_randomSeed(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_randomSeed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_startSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_startSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_rotation3D(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_rotation3D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_Particle::set_angularVelocity3D(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Particle>(),
                        {"set_angularVelocity3D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartSize", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_Particle::ParticleSystem_Particle(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AnimatedVelocity, ::UnityEngine::Vector3  m_InitialVelocity, ::UnityEngine::Vector3  m_AxisOfRotation, ::UnityEngine::Vector3  m_Rotation, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_StartSize, ::UnityEngine::Color32  m_StartColor, uint32_t  m_RandomSeed, uint32_t  m_ParentRandomSeed, float_t  m_Lifetime, float_t  m_StartLifetime, int32_t  m_MeshIndex, float_t  m_EmitAccumulator0, float_t  m_EmitAccumulator1, uint32_t  m_Flags) noexcept  {
this->m_Position = m_Position;
this->m_Velocity = m_Velocity;
this->m_AnimatedVelocity = m_AnimatedVelocity;
this->m_InitialVelocity = m_InitialVelocity;
this->m_AxisOfRotation = m_AxisOfRotation;
this->m_Rotation = m_Rotation;
this->m_AngularVelocity = m_AngularVelocity;
this->m_StartSize = m_StartSize;
this->m_StartColor = m_StartColor;
this->m_RandomSeed = m_RandomSeed;
this->m_ParentRandomSeed = m_ParentRandomSeed;
this->m_Lifetime = m_Lifetime;
this->m_StartLifetime = m_StartLifetime;
this->m_MeshIndex = m_MeshIndex;
this->m_EmitAccumulator0 = m_EmitAccumulator0;
this->m_EmitAccumulator1 = m_EmitAccumulator1;
this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_Particle::ParticleSystem_Particle()   {
}
