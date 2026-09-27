#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsOverrideCosmetic.hpp"
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_HandEffectType_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_HandEffectType_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsOverrideCosmetic::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)(bool)>(&::GlobalNamespace::HandEffectsOverrideCosmetic::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::HandEffectsOverrideCosmetic::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::HandEffectsOverrideCosmetic::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::HandEffectsOverrideCosmetic::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56bd7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56bd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56bd8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_handEffectType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handEffectType;
}
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_handEffectType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handEffectType;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set_handEffectType(::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handEffectType = value;
}
constexpr bool& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_firstPerson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPerson;
}
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride* const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_firstPerson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPerson;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set_firstPerson(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPerson = value;
}
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_thirdPerson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPerson;
}
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride* const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get_thirdPerson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPerson;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set_thirdPerson(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thirdPerson = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rig = value;
}
constexpr bool& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::HandEffectsOverrideCosmetic::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::HandEffectsOverrideCosmetic::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandEffectsOverrideCosmetic* GlobalNamespace::HandEffectsOverrideCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandEffectsOverrideCosmetic*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::HandEffectsOverrideCosmetic::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::HandEffectsOverrideCosmetic::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic::HandEffectsOverrideCosmetic()   {
}
//  Writing Method size for method: ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::*)()>(&::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56bd924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_effectVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_effectVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectVFX;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_set_effectVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectVFX = value;
}
constexpr bool& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_playHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playHaptics;
}
constexpr bool const& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_playHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playHaptics;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_set_playHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playHaptics = value;
}
constexpr float_t& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr bool& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_parentEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentEffect;
}
constexpr bool const& GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_get_parentEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentEffect;
}
constexpr void GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::__cordl_internal_set_parentEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentEffect = value;
}
inline void GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride* GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride::HandEffectsOverrideCosmetic_EffectsOverride()   {
}
