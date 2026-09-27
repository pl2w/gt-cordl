#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolClub.hpp"
#include "GlobalNamespace/zzzz__GRAttributeType_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolClub_State_impl.hpp"
#include "GlobalNamespace/zzzz__GameHitFx_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolClub_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRToolClub_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHitter_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameHitter_def.hpp"
#include "GlobalNamespace/zzzz__MeshAndMaterials_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58ba788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ba7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::OnEntityInit)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58bab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bac3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(int64_t, int64_t)>(&::GlobalNamespace::GRToolClub::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bac40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolClub::OnToolUpgraded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bac38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.EnableImpactVFXForCurrentUpgradeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::EnableImpactVFXForCurrentUpgradeLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58bac44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"EnableImpactVFXForCurrentUpgradeLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::Tick)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58bacd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                    {::i2c::class_of<::GlobalNamespace::GRToolClub*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(float_t)>(&::GlobalNamespace::GRToolClub::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58bad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(float_t)>(&::GlobalNamespace::GRToolClub::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58badd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(float_t)>(&::GlobalNamespace::GRToolClub::OnUpdateShared)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58badfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnUpdateShared", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.SetExtendedAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(float_t)>(&::GlobalNamespace::GRToolClub::SetExtendedAmount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ba808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"SetExtendedAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(::GlobalNamespace::GRToolClub_State)>(&::GlobalNamespace::GRToolClub::SetState)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x58ba858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolClub_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::IsButtonHeld)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58baeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.OnSuccessfulHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRToolClub::OnSuccessfulHit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58baf88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnSuccessfulHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GRToolClub::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x58bafac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolClub._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolClub::*)()>(&::GlobalNamespace::GRToolClub::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58bb0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolClub::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolClub::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHitter>& GlobalNamespace::GRToolClub::__cordl_internal_get_gameHitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameHitter;
}
constexpr ::UnityW<::GlobalNamespace::GameHitter> const& GlobalNamespace::GRToolClub::__cordl_internal_get_gameHitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameHitter;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_gameHitter(::UnityW<::GlobalNamespace::GameHitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameHitter = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolClub::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolClub::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GRToolClub::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GRToolClub::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolClub::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolClub::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolClub::__cordl_internal_get_humAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___humAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolClub::__cordl_internal_get_humAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___humAudioSource;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_humAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___humAudioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& GlobalNamespace::GRToolClub::__cordl_internal_get_humParticleEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___humParticleEffects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& GlobalNamespace::GRToolClub::__cordl_internal_get_humParticleEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___humParticleEffects;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_humParticleEffects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___humParticleEffects = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRToolClub::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRToolClub::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolClub::__cordl_internal_get_extendAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolClub::__cordl_internal_get_extendAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendAudio;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_extendAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_extendVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendVolume;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_extendVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendVolume;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_extendVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolClub::__cordl_internal_get_retractAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolClub::__cordl_internal_get_retractAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractAudio;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_retractAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractAudio = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_retractVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractVolume;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_retractVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractVolume;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_retractVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractVolume = value;
}
constexpr ::GlobalNamespace::GameHitFx& GlobalNamespace::GRToolClub::__cordl_internal_get_noPowerFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noPowerFx;
}
constexpr ::GlobalNamespace::GameHitFx const& GlobalNamespace::GRToolClub::__cordl_internal_get_noPowerFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noPowerFx;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_noPowerFx(::GlobalNamespace::GameHitFx  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noPowerFx = value;
}
constexpr ::GlobalNamespace::GameHitFx& GlobalNamespace::GRToolClub::__cordl_internal_get_poweredImpactFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poweredImpactFx;
}
constexpr ::GlobalNamespace::GameHitFx const& GlobalNamespace::GRToolClub::__cordl_internal_get_poweredImpactFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poweredImpactFx;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_poweredImpactFx(::GlobalNamespace::GameHitFx  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poweredImpactFx = value;
}
constexpr ::GlobalNamespace::GameHitFx& GlobalNamespace::GRToolClub::__cordl_internal_get_upgrade1ImpactVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1ImpactVFX;
}
constexpr ::GlobalNamespace::GameHitFx const& GlobalNamespace::GRToolClub::__cordl_internal_get_upgrade1ImpactVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1ImpactVFX;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_upgrade1ImpactVFX(::GlobalNamespace::GameHitFx  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1ImpactVFX = value;
}
constexpr ::GlobalNamespace::GameHitFx& GlobalNamespace::GRToolClub::__cordl_internal_get_upgrade2ImpactVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2ImpactVFX;
}
constexpr ::GlobalNamespace::GameHitFx const& GlobalNamespace::GRToolClub::__cordl_internal_get_upgrade2ImpactVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2ImpactVFX;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_upgrade2ImpactVFX(::GlobalNamespace::GameHitFx  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2ImpactVFX = value;
}
constexpr ::GlobalNamespace::GameHitFx& GlobalNamespace::GRToolClub::__cordl_internal_get_upgrade3ImpactVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3ImpactVFX;
}
constexpr ::GlobalNamespace::GameHitFx const& GlobalNamespace::GRToolClub::__cordl_internal_get_upgrade3ImpactVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3ImpactVFX;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_upgrade3ImpactVFX(::GlobalNamespace::GameHitFx  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3ImpactVFX = value;
}
constexpr ::GlobalNamespace::GRAttributeType& GlobalNamespace::GRToolClub::__cordl_internal_get_noPowerAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noPowerAttribute;
}
constexpr ::GlobalNamespace::GRAttributeType const& GlobalNamespace::GRToolClub::__cordl_internal_get_noPowerAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noPowerAttribute;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_noPowerAttribute(::GlobalNamespace::GRAttributeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noPowerAttribute = value;
}
constexpr ::GlobalNamespace::GRAttributeType& GlobalNamespace::GRToolClub::__cordl_internal_get_poweredAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poweredAttribute;
}
constexpr ::GlobalNamespace::GRAttributeType const& GlobalNamespace::GRToolClub::__cordl_internal_get_poweredAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poweredAttribute;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_poweredAttribute(::GlobalNamespace::GRAttributeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poweredAttribute = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_minHitSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitSpeed;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_minHitSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitSpeed;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_minHitSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHitSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolClub::__cordl_internal_get_dullLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dullLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolClub::__cordl_internal_get_dullLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dullLight;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_dullLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dullLight = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*& GlobalNamespace::GRToolClub::__cordl_internal_get_meshAndMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshAndMaterials;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>* const& GlobalNamespace::GRToolClub::__cordl_internal_get_meshAndMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshAndMaterials;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_meshAndMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshAndMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolClub::__cordl_internal_get_retractableSection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractableSection;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolClub::__cordl_internal_get_retractableSection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractableSection;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_retractableSection(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractableSection = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GRToolClub::__cordl_internal_get_idleCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GRToolClub::__cordl_internal_get_idleCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleCollider;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_idleCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleCollider = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GRToolClub::__cordl_internal_get_extendedCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GRToolClub::__cordl_internal_get_extendedCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedCollider;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_extendedCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedCollider = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_retractableSectionMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractableSectionMin;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_retractableSectionMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractableSectionMin;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_retractableSectionMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractableSectionMin = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_retractableSectionMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractableSectionMax;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_retractableSectionMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractableSectionMax;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_retractableSectionMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractableSectionMax = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_extensionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensionTime;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_extensionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensionTime;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_extensionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extensionTime = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolClub::__cordl_internal_get_openHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolClub::__cordl_internal_get_openHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openHaptic;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_openHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openHaptic = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolClub::__cordl_internal_get_closeHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolClub::__cordl_internal_get_closeHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeHaptic;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_closeHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeHaptic = value;
}
constexpr float_t& GlobalNamespace::GRToolClub::__cordl_internal_get_extendedAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedAmount;
}
constexpr float_t const& GlobalNamespace::GRToolClub::__cordl_internal_get_extendedAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedAmount;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_extendedAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedAmount = value;
}
constexpr ::GlobalNamespace::GRToolClub_State& GlobalNamespace::GRToolClub::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolClub_State const& GlobalNamespace::GRToolClub::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolClub::__cordl_internal_set_state(::GlobalNamespace::GRToolClub_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::GRToolClub::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRToolClub::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline void GlobalNamespace::GRToolClub::EnableImpactVFXForCurrentUpgradeLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"EnableImpactVFXForCurrentUpgradeLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRToolClub*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolClub::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolClub::OnUpdateShared(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnUpdateShared", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolClub::SetExtendedAmount(float_t  newExtendedAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"SetExtendedAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newExtendedAmount);
}
inline void GlobalNamespace::GRToolClub::SetState(::GlobalNamespace::GRToolClub_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolClub_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::GRToolClub::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolClub::OnSuccessfulHit(::GlobalNamespace::GameHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"OnSuccessfulHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitData);
}
inline void GlobalNamespace::GRToolClub::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GRToolClub::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolClub*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolClub* GlobalNamespace::GRToolClub::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolClub*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameHitter"
constexpr  GlobalNamespace::GRToolClub::operator ::GlobalNamespace::IGameHitter*() noexcept {
return static_cast<::GlobalNamespace::IGameHitter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHitter"
constexpr ::GlobalNamespace::IGameHitter* GlobalNamespace::GRToolClub::i___GlobalNamespace__IGameHitter() noexcept {
return static_cast<::GlobalNamespace::IGameHitter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GRToolClub::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GRToolClub::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRToolClub::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRToolClub::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolClub::GRToolClub()   {
}
