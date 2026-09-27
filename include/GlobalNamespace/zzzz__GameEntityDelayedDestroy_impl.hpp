#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedDestroy.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_Options_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_BeepPhase_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_Options_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedDestroy.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedDestroy::*)(::GlobalNamespace::GameEntityDelayedDestroy_Options)>(&::GlobalNamespace::GameEntityDelayedDestroy::Configure)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58141ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::GameEntityDelayedDestroy_Options>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedDestroy.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedDestroy::*)()>(&::GlobalNamespace::GameEntityDelayedDestroy::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5814308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedDestroy.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedDestroy::*)()>(&::GlobalNamespace::GameEntityDelayedDestroy::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58143b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedDestroy.ResetTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedDestroy::*)()>(&::GlobalNamespace::GameEntityDelayedDestroy::ResetTimer)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x58144dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"ResetTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedDestroy.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedDestroy::*)(int32_t)>(&::GlobalNamespace::GameEntityDelayedDestroy::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x58147fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedDestroy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedDestroy::*)()>(&::GlobalNamespace::GameEntityDelayedDestroy::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5814b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get_m_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_options;
}
constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options const& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get_m_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_options;
}
constexpr void GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_set_m_options(::GlobalNamespace::GameEntityDelayedDestroy_Options  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_options = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entity;
}
constexpr void GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_set__entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entity = value;
}
constexpr int32_t& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__callGenerationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callGenerationId;
}
constexpr int32_t const& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__callGenerationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callGenerationId;
}
constexpr void GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_set__callGenerationId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callGenerationId = value;
}
constexpr int32_t& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__delayedExplosionAudioIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedExplosionAudioIndex;
}
constexpr int32_t const& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__delayedExplosionAudioIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedExplosionAudioIndex;
}
constexpr void GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_set__delayedExplosionAudioIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedExplosionAudioIndex = value;
}
constexpr int32_t& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__delayedExplosionPoolIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedExplosionPoolIndex;
}
constexpr int32_t const& GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_get__delayedExplosionPoolIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedExplosionPoolIndex;
}
constexpr void GlobalNamespace::GameEntityDelayedDestroy::__cordl_internal_set__delayedExplosionPoolIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedExplosionPoolIndex = value;
}
inline void GlobalNamespace::GameEntityDelayedDestroy::Configure(::GlobalNamespace::GameEntityDelayedDestroy_Options  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::GameEntityDelayedDestroy_Options>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void GlobalNamespace::GameEntityDelayedDestroy::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedDestroy::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedDestroy::ResetTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"ResetTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedDestroy::IDelayedExecListener_OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GlobalNamespace::GameEntityDelayedDestroy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedDestroy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityDelayedDestroy* GlobalNamespace::GameEntityDelayedDestroy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityDelayedDestroy*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::GameEntityDelayedDestroy::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::GameEntityDelayedDestroy::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityDelayedDestroy::GameEntityDelayedDestroy()   {
}
