#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolRevive.hpp"
#include "GlobalNamespace/zzzz__GRToolRevive_State_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolRevive_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GRToolRevive_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c6614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c661c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c6668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58c666c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)(float_t)>(&::GlobalNamespace::GRToolRevive::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58c66c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)(float_t)>(&::GlobalNamespace::GRToolRevive::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58c674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)(::GlobalNamespace::GRToolRevive_State)>(&::GlobalNamespace::GRToolRevive::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58c6850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolRevive_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)(::GlobalNamespace::GRToolRevive_State)>(&::GlobalNamespace::GRToolRevive::SetState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58c6888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolRevive_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.StartRevive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::StartRevive)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x58c68e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"StartRevive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.StopRevive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::StopRevive)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58c6634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"StopRevive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::IsButtonHeld)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58c6774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolRevive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolRevive::*)()>(&::GlobalNamespace::GRToolRevive::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58c6c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolRevive::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolRevive::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolRevive::__cordl_internal_get_shootFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_shootFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFrom;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_shootFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootFrom = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRToolRevive::__cordl_internal_get_playerLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRToolRevive::__cordl_internal_get_playerLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLayerMask;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_playerLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLayerMask = value;
}
constexpr float_t& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveDistance;
}
constexpr float_t const& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveDistance;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_reviveDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveFx;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveFx;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_reviveFx(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveFx = value;
}
constexpr float_t& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSoundVolume;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_reviveSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSound;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_reviveSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveSound = value;
}
constexpr float_t& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveDuration;
}
constexpr float_t const& GlobalNamespace::GRToolRevive::__cordl_internal_get_reviveDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveDuration;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_reviveDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolRevive::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolRevive::__cordl_internal_get_onHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolRevive::__cordl_internal_get_onHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHaptic;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_onHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHaptic = value;
}
constexpr ::GlobalNamespace::GRToolRevive_State& GlobalNamespace::GRToolRevive::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolRevive_State const& GlobalNamespace::GRToolRevive::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_state(::GlobalNamespace::GRToolRevive_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRToolRevive::__cordl_internal_get_stateTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr float_t const& GlobalNamespace::GRToolRevive::__cordl_internal_get_stateTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_stateTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateTimeRemaining = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::GRToolRevive::__cordl_internal_get_tempHitResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitResults;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::GRToolRevive::__cordl_internal_get_tempHitResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitResults;
}
constexpr void GlobalNamespace::GRToolRevive::__cordl_internal_set_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempHitResults = value;
}
inline void GlobalNamespace::GRToolRevive::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolRevive::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolRevive::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolRevive::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolRevive::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolRevive::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolRevive::SetStateAuthority(::GlobalNamespace::GRToolRevive_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolRevive_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolRevive::SetState(::GlobalNamespace::GRToolRevive_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolRevive_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolRevive::StartRevive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"StartRevive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolRevive::StopRevive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"StopRevive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolRevive::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolRevive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolRevive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolRevive* GlobalNamespace::GRToolRevive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolRevive*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolRevive::GRToolRevive()   {
}
