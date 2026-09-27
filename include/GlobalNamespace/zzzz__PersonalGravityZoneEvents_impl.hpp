#pragma once
// IWYU pragma private; include "GlobalNamespace/PersonalGravityZoneEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PersonalGravityZoneEvents_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PersonalGravityZoneEvents.SetLocalPlayerGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersonalGravityZoneEvents::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PersonalGravityZoneEvents::SetLocalPlayerGravityDirection)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5abbcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersonalGravityZoneEvents*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersonalGravityZoneEvents.SetLocalPlayerGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersonalGravityZoneEvents::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PersonalGravityZoneEvents::SetLocalPlayerGravityDirection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5abbd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersonalGravityZoneEvents*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersonalGravityZoneEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersonalGravityZoneEvents::*)()>(&::GlobalNamespace::PersonalGravityZoneEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abbe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersonalGravityZoneEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PersonalGravityZoneEvents::SetLocalPlayerGravityDirection(::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersonalGravityZoneEvents*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void GlobalNamespace::PersonalGravityZoneEvents::SetLocalPlayerGravityDirection(::UnityEngine::Transform*  referenceDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersonalGravityZoneEvents*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, referenceDir);
}
inline void GlobalNamespace::PersonalGravityZoneEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersonalGravityZoneEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PersonalGravityZoneEvents* GlobalNamespace::PersonalGravityZoneEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PersonalGravityZoneEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PersonalGravityZoneEvents::PersonalGravityZoneEvents()   {
}
