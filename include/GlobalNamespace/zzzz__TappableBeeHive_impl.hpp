#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableBeeHive.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__TappableBeeHive_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableBeeHive.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableBeeHive::*)()>(&::GlobalNamespace::TappableBeeHive::Awake)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x598ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableBeeHive.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableBeeHive::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableBeeHive::OnTapLocal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x598d04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                    {::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableBeeHive.OnSlingshotHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableBeeHive::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::TappableBeeHive::OnSlingshotHit)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x598d21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                        {"OnSlingshotHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableBeeHive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableBeeHive::*)()>(&::GlobalNamespace::TappableBeeHive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598d3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableBeeHive::__cordl_internal_get_swarmEmergeFromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swarmEmergeFromPoint;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableBeeHive::__cordl_internal_get_swarmEmergeFromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swarmEmergeFromPoint;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set_swarmEmergeFromPoint(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swarmEmergeFromPoint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableBeeHive::__cordl_internal_get_swarmEmergeToPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swarmEmergeToPoint;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableBeeHive::__cordl_internal_get_swarmEmergeToPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swarmEmergeToPoint;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set_swarmEmergeToPoint(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swarmEmergeToPoint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableBeeHive::__cordl_internal_get_honeycombSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___honeycombSurface;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableBeeHive::__cordl_internal_get_honeycombSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___honeycombSurface;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set_honeycombSurface(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___honeycombSurface = value;
}
constexpr float_t& GlobalNamespace::TappableBeeHive::__cordl_internal_get_honeycombDisableDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___honeycombDisableDuration;
}
constexpr float_t const& GlobalNamespace::TappableBeeHive::__cordl_internal_get_honeycombDisableDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___honeycombDisableDuration;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set_honeycombDisableDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___honeycombDisableDuration = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::TappableBeeHive::__cordl_internal_get__timeSinceLastTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceLastTap;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::TappableBeeHive::__cordl_internal_get__timeSinceLastTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceLastTap;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set__timeSinceLastTap(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceLastTap = value;
}
constexpr float_t& GlobalNamespace::TappableBeeHive::__cordl_internal_get_reenableHoneycombAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenableHoneycombAtTimestamp;
}
constexpr float_t const& GlobalNamespace::TappableBeeHive::__cordl_internal_get_reenableHoneycombAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenableHoneycombAtTimestamp;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set_reenableHoneycombAtTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reenableHoneycombAtTimestamp = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::TappableBeeHive::__cordl_internal_get_reenableHoneycombCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenableHoneycombCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::TappableBeeHive::__cordl_internal_get_reenableHoneycombCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenableHoneycombCoroutine;
}
constexpr void GlobalNamespace::TappableBeeHive::__cordl_internal_set_reenableHoneycombCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reenableHoneycombCoroutine = value;
}
inline void GlobalNamespace::TappableBeeHive::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableBeeHive::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GlobalNamespace::TappableBeeHive::OnSlingshotHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                        {"OnSlingshotHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::TappableBeeHive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableBeeHive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TappableBeeHive* GlobalNamespace::TappableBeeHive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableBeeHive*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableBeeHive::TappableBeeHive()   {
}
