#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraShakeDispatcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CameraShakeDispatcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraShakeDispatcher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShakeDispatcher::*)()>(&::GlobalNamespace::CameraShakeDispatcher::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55ec73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShakeDispatcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShakeDispatcher::*)()>(&::GlobalNamespace::CameraShakeDispatcher::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55ec7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShakeDispatcher.Shake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShakeDispatcher::*)()>(&::GlobalNamespace::CameraShakeDispatcher::Shake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55ec7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"Shake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShakeDispatcher.ShakeInProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShakeDispatcher::*)(float_t)>(&::GlobalNamespace::CameraShakeDispatcher::ShakeInProximity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55ec768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"ShakeInProximity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShakeDispatcher.Halt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShakeDispatcher::*)()>(&::GlobalNamespace::CameraShakeDispatcher::Halt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55ec7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"Halt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShakeDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShakeDispatcher::*)()>(&::GlobalNamespace::CameraShakeDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55ec9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_magnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr float_t const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_magnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_magnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnitude = value;
}
constexpr float_t& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr bool& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_rollOffOverDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollOffOverDuration;
}
constexpr bool const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_rollOffOverDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollOffOverDuration;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_rollOffOverDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollOffOverDuration = value;
}
constexpr bool& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_shakeOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeOnEnable;
}
constexpr bool const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_shakeOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeOnEnable;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_shakeOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeOnEnable = value;
}
constexpr bool& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_haltOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haltOnDisable;
}
constexpr bool const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_haltOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haltOnDisable;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_haltOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___haltOnDisable = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_freqRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freqRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_freqRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freqRange;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_freqRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freqRange = value;
}
constexpr float_t& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::CameraShakeDispatcher::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::CameraShakeDispatcher::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
inline void GlobalNamespace::CameraShakeDispatcher::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShakeDispatcher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShakeDispatcher::Shake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"Shake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShakeDispatcher::ShakeInProximity(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"ShakeInProximity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::CameraShakeDispatcher::Halt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {"Halt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShakeDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShakeDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CameraShakeDispatcher* GlobalNamespace::CameraShakeDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CameraShakeDispatcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraShakeDispatcher::CameraShakeDispatcher()   {
}
