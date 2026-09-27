#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitter.hpp"
#include "GlobalNamespace/zzzz__GRAttributeType_impl.hpp"
#include "GlobalNamespace/zzzz__GameHitFx_impl.hpp"
#include "GlobalNamespace/zzzz__GameHitType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameHitter_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHitType_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameHitter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameHitter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)()>(&::GlobalNamespace::GameHitter::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5834b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)()>(&::GlobalNamespace::GameHitter::OnEntityInit)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5834c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)()>(&::GlobalNamespace::GameHitter::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5834d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)(int64_t, int64_t)>(&::GlobalNamespace::GameHitter::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5834d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GameHitter::OnToolUpgraded)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5834d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.ApplyHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GameHitter::ApplyHit)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x58343e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"ApplyHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.ApplyHitToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)(::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GameHitter::ApplyHitToPlayer)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5834f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"ApplyHitToPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.PlayVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)(float_t, float_t)>(&::GlobalNamespace::GameHitter::PlayVibration)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5834d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.CalcHitAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameHitter::*)(::GlobalNamespace::GameHitType, ::GlobalNamespace::GameHittable*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameHitter::CalcHitAmount)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x583511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"CalcHitAmount", {}, {::i2c::type_of<::GlobalNamespace::GameHitType>(), ::i2c::type_of<::GlobalNamespace::GameHittable*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GameHitter::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5835238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHitter::*)()>(&::GlobalNamespace::GameHitter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5835988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameHitter::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameHitter::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::GlobalNamespace::GameHitType& GlobalNamespace::GameHitter::__cordl_internal_get_hitType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitType;
}
constexpr ::GlobalNamespace::GameHitType const& GlobalNamespace::GameHitter::__cordl_internal_get_hitType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitType;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_hitType(::GlobalNamespace::GameHitType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitType = value;
}
constexpr ::GlobalNamespace::GRAttributeType& GlobalNamespace::GameHitter::__cordl_internal_get_damageAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageAttribute;
}
constexpr ::GlobalNamespace::GRAttributeType const& GlobalNamespace::GameHitter::__cordl_internal_get_damageAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageAttribute;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_damageAttribute(::GlobalNamespace::GRAttributeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageAttribute = value;
}
constexpr ::GlobalNamespace::GRAttributeType& GlobalNamespace::GameHitter::__cordl_internal_get_flashDamageAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDamageAttribute;
}
constexpr ::GlobalNamespace::GRAttributeType const& GlobalNamespace::GameHitter::__cordl_internal_get_flashDamageAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDamageAttribute;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_flashDamageAttribute(::GlobalNamespace::GRAttributeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashDamageAttribute = value;
}
constexpr ::GlobalNamespace::GRAttributeType& GlobalNamespace::GameHitter::__cordl_internal_get_shieldDamageAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamageAttribute;
}
constexpr ::GlobalNamespace::GRAttributeType const& GlobalNamespace::GameHitter::__cordl_internal_get_shieldDamageAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamageAttribute;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_shieldDamageAttribute(::GlobalNamespace::GRAttributeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDamageAttribute = value;
}
constexpr float_t& GlobalNamespace::GameHitter::__cordl_internal_get_minSwingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSwingSpeed;
}
constexpr float_t const& GlobalNamespace::GameHitter::__cordl_internal_get_minSwingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSwingSpeed;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_minSwingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSwingSpeed = value;
}
constexpr ::GlobalNamespace::GameHitFx& GlobalNamespace::GameHitter::__cordl_internal_get_hitFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitFx;
}
constexpr ::GlobalNamespace::GameHitFx const& GlobalNamespace::GameHitter::__cordl_internal_get_hitFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitFx;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_hitFx(::GlobalNamespace::GameHitFx  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitFx = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GameHitter::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GameHitter::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr float_t& GlobalNamespace::GameHitter::__cordl_internal_get_knockbackMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackMultiplier;
}
constexpr float_t const& GlobalNamespace::GameHitter::__cordl_internal_get_knockbackMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackMultiplier;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_knockbackMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackMultiplier = value;
}
constexpr float_t& GlobalNamespace::GameHitter::__cordl_internal_get_maxImpulseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxImpulseSpeed;
}
constexpr float_t const& GlobalNamespace::GameHitter::__cordl_internal_get_maxImpulseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxImpulseSpeed;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_maxImpulseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxImpulseSpeed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>*& GlobalNamespace::GameHitter::__cordl_internal_get_components()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>* const& GlobalNamespace::GameHitter::__cordl_internal_get_components() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_components(::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___components = value;
}
constexpr double_t& GlobalNamespace::GameHitter::__cordl_internal_get_hitCooldownEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldownEnd;
}
constexpr double_t const& GlobalNamespace::GameHitter::__cordl_internal_get_hitCooldownEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldownEnd;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_hitCooldownEnd(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCooldownEnd = value;
}
constexpr bool& GlobalNamespace::GameHitter::__cordl_internal_get_hitOnCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitOnCollision;
}
constexpr bool const& GlobalNamespace::GameHitter::__cordl_internal_get_hitOnCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitOnCollision;
}
constexpr void GlobalNamespace::GameHitter::__cordl_internal_set_hitOnCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitOnCollision = value;
}
inline void GlobalNamespace::GameHitter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHitter::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHitter::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHitter::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GameHitter::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline void GlobalNamespace::GameHitter::ApplyHit(::GlobalNamespace::GameHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"ApplyHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitData);
}
inline void GlobalNamespace::GameHitter::ApplyHitToPlayer(::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"ApplyHitToPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, hitPosition);
}
inline void GlobalNamespace::GameHitter::PlayVibration(float_t  strength, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
inline T GlobalNamespace::GameHitter::GetParentEnemy(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                    {"GetParentEnemy", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, collider);
}
inline int32_t GlobalNamespace::GameHitter::CalcHitAmount(::GlobalNamespace::GameHitType  hitType, ::GlobalNamespace::GameHittable*  hittable, ::GlobalNamespace::GameEntity*  hitByEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"CalcHitAmount", {}, {::i2c::type_of<::GlobalNamespace::GameHitType>(), ::i2c::type_of<::GlobalNamespace::GameHittable*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hitType, hittable, hitByEntity);
}
inline void GlobalNamespace::GameHitter::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GameHitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameHitter* GlobalNamespace::GameHitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameHitter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GameHitter::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GameHitter::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameHitter::GameHitter()   {
}
