#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcingProjectileLauncher.hpp"
#include "GlobalNamespace/zzzz__ElfLauncher_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__ArcingProjectileLauncher_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcingProjectileLauncher.ShootShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcingProjectileLauncher::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::ArcingProjectileLauncher::ShootShared)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x5646f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcingProjectileLauncher*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcingProjectileLauncher*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcingProjectileLauncher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcingProjectileLauncher::*)()>(&::GlobalNamespace::ArcingProjectileLauncher::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56476b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcingProjectileLauncher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::ArcingProjectileLauncher::__cordl_internal_get_fireAngleLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireAngleLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ArcingProjectileLauncher::__cordl_internal_get_fireAngleLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireAngleLimits;
}
constexpr void GlobalNamespace::ArcingProjectileLauncher::__cordl_internal_set_fireAngleLimits(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireAngleLimits = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ArcingProjectileLauncher::__cordl_internal_get_angleVelocityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleVelocityMultiplier;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ArcingProjectileLauncher::__cordl_internal_get_angleVelocityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleVelocityMultiplier;
}
constexpr void GlobalNamespace::ArcingProjectileLauncher::__cordl_internal_set_angleVelocityMultiplier(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleVelocityMultiplier = value;
}
inline void GlobalNamespace::ArcingProjectileLauncher::ShootShared(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcingProjectileLauncher*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, direction);
}
inline void GlobalNamespace::ArcingProjectileLauncher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcingProjectileLauncher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcingProjectileLauncher* GlobalNamespace::ArcingProjectileLauncher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcingProjectileLauncher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcingProjectileLauncher::ArcingProjectileLauncher()   {
}
