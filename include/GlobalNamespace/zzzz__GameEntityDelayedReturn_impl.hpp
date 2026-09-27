#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedReturn.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_Options_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_BeepPhase_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_Options_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::OnEntityInit)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5814c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5815418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)(int64_t, int64_t)>(&::GlobalNamespace::GameEntityDelayedReturn::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58157e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.OnInteractionStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::OnInteractionStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58158dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnInteractionStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.OnInteractionEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::OnInteractionEnded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58158e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnInteractionEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.StartTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::StartTimer)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x58150d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"StartTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.RestartTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::RestartTimer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5815808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"RestartTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.CancelTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::CancelTimer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5815770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"CancelTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.CancelDelayedFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::CancelDelayedFx)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5815830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"CancelDelayedFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)(int32_t)>(&::GlobalNamespace::GameEntityDelayedReturn::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5815904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.IsCurrentlyInteracting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::IsCurrentlyInteracting)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5815034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"IsCurrentlyInteracting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.Disappear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::Disappear)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5815b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"Disappear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.Reappear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::Reappear)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5815bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"Reappear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.ReturnNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::ReturnNow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5815f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"ReturnNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.SetResetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GameEntityDelayedReturn::SetResetTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5815f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"SetResetTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)(::GlobalNamespace::GameEntityDelayedReturn_Options)>(&::GlobalNamespace::GameEntityDelayedReturn::Configure)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5815f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::GameEntityDelayedReturn_Options>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntityDelayedReturn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityDelayedReturn::*)()>(&::GlobalNamespace::GameEntityDelayedReturn::_ctor)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5815fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::GlobalNamespace::GameEntityDelayedReturn_Options& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_m_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_options;
}
constexpr ::GlobalNamespace::GameEntityDelayedReturn_Options const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_m_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_options;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_m_options(::GlobalNamespace::GameEntityDelayedReturn_Options  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_options = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_resetTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_resetTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetTarget;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_resetTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetTarget = value;
}
constexpr bool& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_forceKinematicOnReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceKinematicOnReset;
}
constexpr bool const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_forceKinematicOnReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceKinematicOnReset;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_forceKinematicOnReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceKinematicOnReset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPosition;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_initialPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_initialScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScale = value;
}
constexpr bool& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialIsKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialIsKinematic;
}
constexpr bool const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialIsKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialIsKinematic;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_initialIsKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialIsKinematic = value;
}
constexpr bool& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr int32_t& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__callGenerationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callGenerationId;
}
constexpr int32_t const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__callGenerationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callGenerationId;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set__callGenerationId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callGenerationId = value;
}
constexpr int32_t& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__delayedDisappearAudioIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedDisappearAudioIndex;
}
constexpr int32_t const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__delayedDisappearAudioIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedDisappearAudioIndex;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set__delayedDisappearAudioIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedDisappearAudioIndex = value;
}
constexpr int32_t& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__delayedDisappearPoolIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedDisappearPoolIndex;
}
constexpr int32_t const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__delayedDisappearPoolIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedDisappearPoolIndex;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set__delayedDisappearPoolIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedDisappearPoolIndex = value;
}
constexpr bool& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__timerRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerRunning;
}
constexpr bool const& GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_get__timerRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerRunning;
}
constexpr void GlobalNamespace::GameEntityDelayedReturn::__cordl_internal_set__timerRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timerRunning = value;
}
inline void GlobalNamespace::GameEntityDelayedReturn::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline void GlobalNamespace::GameEntityDelayedReturn::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::OnInteractionStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnInteractionStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::OnInteractionEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"OnInteractionEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::StartTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"StartTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::RestartTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"RestartTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::CancelTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"CancelTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::CancelDelayedFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"CancelDelayedFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::IDelayedExecListener_OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline bool GlobalNamespace::GameEntityDelayedReturn::IsCurrentlyInteracting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"IsCurrentlyInteracting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::Disappear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"Disappear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::Reappear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"Reappear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::ReturnNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"ReturnNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntityDelayedReturn::SetResetTarget(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"SetResetTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::GameEntityDelayedReturn::Configure(::GlobalNamespace::GameEntityDelayedReturn_Options  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::GameEntityDelayedReturn_Options>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void GlobalNamespace::GameEntityDelayedReturn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityDelayedReturn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityDelayedReturn* GlobalNamespace::GameEntityDelayedReturn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityDelayedReturn*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GameEntityDelayedReturn::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GameEntityDelayedReturn::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::GameEntityDelayedReturn::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::GameEntityDelayedReturn::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityDelayedReturn::GameEntityDelayedReturn()   {
}
