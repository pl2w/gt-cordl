#pragma once
// IWYU pragma private; include "GlobalNamespace/Voxel_Pickaxe.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_impl.hpp"
#include "GlobalNamespace/zzzz__Voxel_Pickaxe_InteractionPoint_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Voxel_Pickaxe_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__Voxel_Pickaxe_InteractionPoint_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.get_Held
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::get_Held)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfb560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"get_Held", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.set_Held
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)(bool)>(&::GlobalNamespace::Voxel_Pickaxe::set_Held)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfb568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"set_Held", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dfb570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5dfb608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::OnEnable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5dfb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::OnDisable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5dfbab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::FixedUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dfbc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.StartGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::StartGrabbing)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5dfc06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"StartGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.StopGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::StopGrabbing)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5dfc1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"StopGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.ResetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::ResetVelocity)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dfba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"ResetVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.UpdateInteractionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)(::by_ref<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>)>(&::GlobalNamespace::Voxel_Pickaxe::UpdateInteractionPoint)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5dfbcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"UpdateInteractionPoint", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)(::UnityEngine::Audio::AudioResource*, ::UnityEngine::Vector3)>(&::GlobalNamespace::Voxel_Pickaxe::Play)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5dfc250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Audio::AudioResource*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::OnEntityInit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dfc34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5dfc3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)(int64_t, int64_t)>(&::GlobalNamespace::Voxel_Pickaxe::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dfc50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5dfc510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Voxel_Pickaxe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Voxel_Pickaxe::*)()>(&::GlobalNamespace::Voxel_Pickaxe::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5dfc644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VoxelAction& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_mine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mine;
}
constexpr ::GlobalNamespace::VoxelAction const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_mine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mine;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_mine(::GlobalNamespace::VoxelAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mine = value;
}
constexpr ::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint> const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_points(::ArrayW<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioResource>& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_goodHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodHit;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioResource> const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_goodHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodHit;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_goodHit(::UnityW<::UnityEngine::Audio::AudioResource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodHit = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioResource>& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_badHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badHit;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioResource> const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_badHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badHit;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_badHit(::UnityW<::UnityEngine::Audio::AudioResource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badHit = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
constexpr float_t& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_hitCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr float_t const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_hitCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_hitCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCooldown = value;
}
constexpr float_t& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_minHitSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitSpeed;
}
constexpr float_t const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_minHitSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitSpeed;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_minHitSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHitSpeed = value;
}
constexpr float_t& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_minMineSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minMineSpeed;
}
constexpr float_t const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_minMineSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minMineSpeed;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_minMineSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minMineSpeed = value;
}
constexpr float_t& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_alignThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignThreshold;
}
constexpr float_t const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get_alignThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignThreshold;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set_alignThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameEntity;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set__gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameEntity = value;
}
constexpr int32_t& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr int32_t const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set__layerMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerMask = value;
}
constexpr float_t& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__nextHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextHitTime;
}
constexpr float_t const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__nextHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextHitTime;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set__nextHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextHitTime = value;
}
constexpr bool& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocal;
}
constexpr bool const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocal;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set__isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLocal = value;
}
constexpr bool& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__Held_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Held_k__BackingField;
}
constexpr bool const& GlobalNamespace::Voxel_Pickaxe::__cordl_internal_get__Held_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Held_k__BackingField;
}
constexpr void GlobalNamespace::Voxel_Pickaxe::__cordl_internal_set__Held_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Held_k__BackingField = value;
}
inline bool GlobalNamespace::Voxel_Pickaxe::get_Held()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"get_Held", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::set_Held(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"set_Held", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Voxel_Pickaxe::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::StartGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"StartGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::StopGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"StopGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::ResetVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"ResetVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::UpdateInteractionPoint(::by_ref<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"UpdateInteractionPoint", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Voxel_Pickaxe_InteractionPoint>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline void GlobalNamespace::Voxel_Pickaxe::Play(::UnityEngine::Audio::AudioResource*  resource, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Audio::AudioResource*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, position);
}
inline void GlobalNamespace::Voxel_Pickaxe::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline void GlobalNamespace::Voxel_Pickaxe::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Voxel_Pickaxe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Voxel_Pickaxe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Voxel_Pickaxe* GlobalNamespace::Voxel_Pickaxe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Voxel_Pickaxe*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::Voxel_Pickaxe::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::Voxel_Pickaxe::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Voxel_Pickaxe::Voxel_Pickaxe()   {
}
