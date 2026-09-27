#pragma once
// IWYU pragma private; include "GlobalNamespace/VelocityBasedActivator.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VelocityBasedActivator_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VelocityBasedActivator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityBasedActivator::*)()>(&::GlobalNamespace::VelocityBasedActivator::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b3fd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityBasedActivator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityBasedActivator::*)()>(&::GlobalNamespace::VelocityBasedActivator::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b3fdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityBasedActivator.activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityBasedActivator::*)(bool)>(&::GlobalNamespace::VelocityBasedActivator::activate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b3fe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"activate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityBasedActivator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityBasedActivator::*)()>(&::GlobalNamespace::VelocityBasedActivator::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b3feec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityBasedActivator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityBasedActivator::*)()>(&::GlobalNamespace::VelocityBasedActivator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b3ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_activationTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTargets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_activationTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTargets;
}
constexpr void GlobalNamespace::VelocityBasedActivator::__cordl_internal_set_activationTargets(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationTargets = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::VelocityBasedActivator::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr float_t& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_k()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
constexpr float_t const& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_k() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
constexpr void GlobalNamespace::VelocityBasedActivator::__cordl_internal_set_k(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k = value;
}
constexpr bool& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::VelocityBasedActivator::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr float_t& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_decay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decay;
}
constexpr float_t const& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_decay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decay;
}
constexpr void GlobalNamespace::VelocityBasedActivator::__cordl_internal_set_decay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decay = value;
}
constexpr float_t& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr float_t const& GlobalNamespace::VelocityBasedActivator::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr void GlobalNamespace::VelocityBasedActivator::__cordl_internal_set_threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
inline void GlobalNamespace::VelocityBasedActivator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityBasedActivator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityBasedActivator::activate(bool  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"activate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void GlobalNamespace::VelocityBasedActivator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VelocityBasedActivator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityBasedActivator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VelocityBasedActivator* GlobalNamespace::VelocityBasedActivator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VelocityBasedActivator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VelocityBasedActivator::VelocityBasedActivator()   {
}
