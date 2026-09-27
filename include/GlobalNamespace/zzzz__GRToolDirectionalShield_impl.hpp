#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolDirectionalShield.hpp"
#include "GlobalNamespace/zzzz__GRToolDirectionalShield_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolDirectionalShield_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRShieldCollider_def.hpp"
#include "GlobalNamespace/zzzz__GRToolDirectionalShield_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__GameHitter_def.hpp"
#include "GlobalNamespace/zzzz__IGameHitter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::Awake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58bc92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolDirectionalShield::OnToolUpgraded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58bca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bcb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.IsHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::IsHeldLocal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58bcd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::IsHeld)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58bcdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"IsHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.BlockHittable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::GameHittable*, ::GlobalNamespace::GRShieldCollider*)>(&::GlobalNamespace::GRToolDirectionalShield::BlockHittable)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x58b3a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"BlockHittable", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GameHittable*>(), ::i2c::type_of<::GlobalNamespace::GRShieldCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.OnEnemyBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRToolDirectionalShield::OnEnemyBlocked)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58b3844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnEnemyBlocked", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.PlayBlockEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRToolDirectionalShield::PlayBlockEffects)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x58bcdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"PlayBlockEffects", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.OnSuccessfulHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRToolDirectionalShield::OnSuccessfulHit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bcf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnSuccessfulHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58bcf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(float_t)>(&::GlobalNamespace::GRToolDirectionalShield::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58bcfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(float_t)>(&::GlobalNamespace::GRToolDirectionalShield::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58bd03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::GlobalNamespace::GRToolDirectionalShield_State)>(&::GlobalNamespace::GRToolDirectionalShield::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bd16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolDirectionalShield_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)(::GlobalNamespace::GRToolDirectionalShield_State)>(&::GlobalNamespace::GRToolDirectionalShield::SetState)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58bcb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolDirectionalShield_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::IsButtonHeld)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58bd064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolDirectionalShield._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolDirectionalShield::*)()>(&::GlobalNamespace::GRToolDirectionalShield::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58bd1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldAnimators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldAnimators;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>* const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldAnimators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldAnimators;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_shieldAnimators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldAnimators = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openCollidersParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openCollidersParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openCollidersParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openCollidersParent;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_openCollidersParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openCollidersParent = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHitter>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_hitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitter;
}
constexpr ::UnityW<::GlobalNamespace::GameHitter> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_hitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitter;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_hitter(::UnityW<::GlobalNamespace::GameHitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitter = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openAudio;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_openAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openVolume;
}
constexpr float_t const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openVolume;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_openVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_closeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_closeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeAudio;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_closeAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_closeVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeVolume;
}
constexpr float_t const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_closeVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeVolume;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_closeVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_deflectAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflectAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_deflectAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflectAudio;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_deflectAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deflectAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade1DeflectAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1DeflectAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade1DeflectAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1DeflectAudio;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_upgrade1DeflectAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1DeflectAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade2DeflectAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2DeflectAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade2DeflectAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2DeflectAudio;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_upgrade2DeflectAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2DeflectAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade3DeflectAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3DeflectAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade3DeflectAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3DeflectAudio;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_upgrade3DeflectAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3DeflectAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_deflectVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflectVolume;
}
constexpr float_t const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_deflectVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deflectVolume;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_deflectVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deflectVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldDeflectVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDeflectVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldDeflectVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDeflectVFX;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_shieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDeflectVFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade1ShieldDeflectVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1ShieldDeflectVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade1ShieldDeflectVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1ShieldDeflectVFX;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_upgrade1ShieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1ShieldDeflectVFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade2ShieldDeflectVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2ShieldDeflectVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade2ShieldDeflectVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2ShieldDeflectVFX;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_upgrade2ShieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2ShieldDeflectVFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade3ShieldDeflectVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3ShieldDeflectVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_upgrade3ShieldDeflectVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3ShieldDeflectVFX;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_upgrade3ShieldDeflectVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3ShieldDeflectVFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldDeflectImpactPointVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDeflectImpactPointVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldDeflectImpactPointVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDeflectImpactPointVFX;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_shieldDeflectImpactPointVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDeflectImpactPointVFX = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldArcCenterReferencePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldArcCenterReferencePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldArcCenterReferencePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldArcCenterReferencePoint;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_shieldArcCenterReferencePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldArcCenterReferencePoint = value;
}
constexpr float_t& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldArcCenterRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldArcCenterRadius;
}
constexpr float_t const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_shieldArcCenterRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldArcCenterRadius;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_shieldArcCenterRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldArcCenterRadius = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_openHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openHaptic;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_openHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openHaptic = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_closeHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_closeHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeHaptic;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_closeHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeHaptic = value;
}
constexpr bool& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_reflectsProjectiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectsProjectiles;
}
constexpr bool const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_reflectsProjectiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectsProjectiles;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_reflectsProjectiles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectsProjectiles = value;
}
constexpr ::GlobalNamespace::GRToolDirectionalShield_State& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolDirectionalShield_State const& GlobalNamespace::GRToolDirectionalShield::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolDirectionalShield::__cordl_internal_set_state(::GlobalNamespace::GRToolDirectionalShield_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::GRToolDirectionalShield::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolDirectionalShield::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline void GlobalNamespace::GRToolDirectionalShield::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolDirectionalShield::IsHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolDirectionalShield::IsHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"IsHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolDirectionalShield::BlockHittable(::UnityEngine::Vector3  enemyPosition, ::UnityEngine::Vector3  enemyAttackDirection, ::GlobalNamespace::GameHittable*  hittable, ::GlobalNamespace::GRShieldCollider*  shieldCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"BlockHittable", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GameHittable*>(), ::i2c::type_of<::GlobalNamespace::GRShieldCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enemyPosition, enemyAttackDirection, hittable, shieldCollider);
}
inline void GlobalNamespace::GRToolDirectionalShield::OnEnemyBlocked(::UnityEngine::Vector3  enemyPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnEnemyBlocked", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enemyPosition);
}
inline void GlobalNamespace::GRToolDirectionalShield::PlayBlockEffects(::UnityEngine::Vector3  enemyPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"PlayBlockEffects", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enemyPosition);
}
inline void GlobalNamespace::GRToolDirectionalShield::OnSuccessfulHit(::GlobalNamespace::GameHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnSuccessfulHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitData);
}
inline void GlobalNamespace::GRToolDirectionalShield::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolDirectionalShield::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolDirectionalShield::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolDirectionalShield::SetStateAuthority(::GlobalNamespace::GRToolDirectionalShield_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolDirectionalShield_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolDirectionalShield::SetState(::GlobalNamespace::GRToolDirectionalShield_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolDirectionalShield_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::GRToolDirectionalShield::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolDirectionalShield::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolDirectionalShield*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolDirectionalShield* GlobalNamespace::GRToolDirectionalShield::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolDirectionalShield*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameHitter"
constexpr  GlobalNamespace::GRToolDirectionalShield::operator ::GlobalNamespace::IGameHitter*() noexcept {
return static_cast<::GlobalNamespace::IGameHitter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHitter"
constexpr ::GlobalNamespace::IGameHitter* GlobalNamespace::GRToolDirectionalShield::i___GlobalNamespace__IGameHitter() noexcept {
return static_cast<::GlobalNamespace::IGameHitter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolDirectionalShield::GRToolDirectionalShield()   {
}
