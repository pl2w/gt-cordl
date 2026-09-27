#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkVector3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkVector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkVector3.get_CurrentSyncTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NetworkVector3::*)()>(&::GlobalNamespace::NetworkVector3::get_CurrentSyncTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b0af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"get_CurrentSyncTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkVector3.SetNewSyncTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkVector3::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::NetworkVector3::SetNewSyncTarget)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b0af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"SetNewSyncTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkVector3.GetPredictedFuture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NetworkVector3::*)()>(&::GlobalNamespace::NetworkVector3::GetPredictedFuture)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b0b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"GetPredictedFuture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkVector3.ClearPredictedMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkVector3::*)()>(&::GlobalNamespace::NetworkVector3::ClearPredictedMotion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0b214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"ClearPredictedMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkVector3.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkVector3::*)()>(&::GlobalNamespace::NetworkVector3::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b0b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkVector3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkVector3::*)()>(&::GlobalNamespace::NetworkVector3::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b0b2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::NetworkVector3::__cordl_internal_get_lastSetNetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSetNetTime;
}
constexpr double_t const& GlobalNamespace::NetworkVector3::__cordl_internal_get_lastSetNetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSetNetTime;
}
constexpr void GlobalNamespace::NetworkVector3::__cordl_internal_set_lastSetNetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSetNetTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NetworkVector3::__cordl_internal_get__currentSyncTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSyncTarget;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NetworkVector3::__cordl_internal_get__currentSyncTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSyncTarget;
}
constexpr void GlobalNamespace::NetworkVector3::__cordl_internal_set__currentSyncTarget(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSyncTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NetworkVector3::__cordl_internal_get_distanceTraveled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceTraveled;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NetworkVector3::__cordl_internal_get_distanceTraveled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceTraveled;
}
constexpr void GlobalNamespace::NetworkVector3::__cordl_internal_set_distanceTraveled(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceTraveled = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::NetworkVector3::get_CurrentSyncTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"get_CurrentSyncTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkVector3::SetNewSyncTarget(::UnityEngine::Vector3  newTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"SetNewSyncTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTarget);
}
inline ::UnityEngine::Vector3 GlobalNamespace::NetworkVector3::GetPredictedFuture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"GetPredictedFuture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkVector3::ClearPredictedMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"ClearPredictedMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkVector3::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkVector3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkVector3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkVector3* GlobalNamespace::NetworkVector3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkVector3*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkVector3::NetworkVector3()   {
}
