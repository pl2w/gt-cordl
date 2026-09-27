#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseSource_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineImpulseSource::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaee5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineImpulseSource::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaee5568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulseAtPositionWithVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseAtPositionWithVelocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaee5678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseAtPositionWithVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulseWithVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseWithVelocity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaee568c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseWithVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulseWithForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)(float_t)>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseWithForce)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaee56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseWithForce", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaee5758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulseAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseAt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaee5764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaee5778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulse", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource.GenerateImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)(float_t)>(&::Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaee577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulse", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseSource::*)()>(&::Unity::Cinemachine::CinemachineImpulseSource::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaee5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition*& Unity::Cinemachine::CinemachineImpulseSource::__cordl_internal_get_ImpulseDefinition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseDefinition;
}
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition* const& Unity::Cinemachine::CinemachineImpulseSource::__cordl_internal_get_ImpulseDefinition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseDefinition;
}
constexpr void Unity::Cinemachine::CinemachineImpulseSource::__cordl_internal_set_ImpulseDefinition(::Unity::Cinemachine::CinemachineImpulseDefinition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpulseDefinition = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineImpulseSource::__cordl_internal_get_DefaultVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultVelocity;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineImpulseSource::__cordl_internal_get_DefaultVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultVelocity;
}
constexpr void Unity::Cinemachine::CinemachineImpulseSource::__cordl_internal_set_DefaultVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultVelocity = value;
}
inline void Unity::Cinemachine::CinemachineImpulseSource::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseAtPositionWithVelocity(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseAtPositionWithVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseWithVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseWithVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseWithForce(float_t  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseWithForce", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulseAt(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulseAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulse(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulse", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::GenerateImpulse(float_t  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {"GenerateImpulse", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Unity::Cinemachine::CinemachineImpulseSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseSource* Unity::Cinemachine::CinemachineImpulseSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseSource*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseSource::CinemachineImpulseSource()   {
}
