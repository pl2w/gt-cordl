#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolCollector.hpp"
#include "GlobalNamespace/zzzz__GRToolCollector_State_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolCollector_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectible_def.hpp"
#include "GlobalNamespace/zzzz__GRCurrencyDepositor_def.hpp"
#include "GlobalNamespace/zzzz__GRToolCollector_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58bb1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58bb1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::OnEntityInit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58bb274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bb414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(int64_t, int64_t)>(&::GlobalNamespace::GRToolCollector::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bb418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolCollector::OnToolUpgraded)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58bb350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.IsHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::IsHeldLocal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58bb41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(float_t)>(&::GlobalNamespace::GRToolCollector::OnUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58bb494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58bb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(float_t)>(&::GlobalNamespace::GRToolCollector::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x58bb4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(float_t)>(&::GlobalNamespace::GRToolCollector::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58bb6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::GlobalNamespace::GRToolCollector_State)>(&::GlobalNamespace::GRToolCollector::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bb834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolCollector_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::GlobalNamespace::GRToolCollector_State)>(&::GlobalNamespace::GRToolCollector::SetState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58bb1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolCollector_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.StartVacuum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::StartVacuum)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58bb86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"StartVacuum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.StopVacuum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::StopVacuum)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58bc210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"StopVacuum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.TryCollect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::TryCollect)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x58bb980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"TryCollect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.PerformCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::GlobalNamespace::GRCollectible*)>(&::GlobalNamespace::GRToolCollector::PerformCollection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58bc36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PerformCollection", {}, {::i2c::type_of<::GlobalNamespace::GRCollectible*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.PlayChargeEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolCollector::PlayChargeEffect)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x58bc3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PlayChargeEffect", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.PlayChargeEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::GlobalNamespace::GRCurrencyDepositor*)>(&::GlobalNamespace::GRToolCollector::PlayChargeEffect)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58bc624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PlayChargeEffect", {}, {::i2c::type_of<::GlobalNamespace::GRCurrencyDepositor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::IsButtonHeld)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58bb760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.PlayVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(float_t, float_t)>(&::GlobalNamespace::GRToolCollector::PlayVibration)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58bc254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GRToolCollector::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58bc748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolCollector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolCollector::*)()>(&::GlobalNamespace::GRToolCollector::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58bc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolCollector::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolCollector::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRToolCollector::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr int32_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_energyDepositPerUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___energyDepositPerUse;
}
constexpr int32_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_energyDepositPerUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___energyDepositPerUse;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_energyDepositPerUse(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___energyDepositPerUse = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolCollector::__cordl_internal_get_shootFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_shootFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shootFrom;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_shootFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shootFrom = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectibleLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectibleLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleLayerMask;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_collectibleLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumParticleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumParticleEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumParticleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumParticleEffect;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_vacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vacuumParticleEffect = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade1VacuumParticleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1VacuumParticleEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade1VacuumParticleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1VacuumParticleEffect;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_upgrade1VacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1VacuumParticleEffect = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade2VacuumParticleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2VacuumParticleEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade2VacuumParticleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2VacuumParticleEffect;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_upgrade2VacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2VacuumParticleEffect = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade3VacuumParticleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3VacuumParticleEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade3VacuumParticleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3VacuumParticleEffect;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_upgrade3VacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3VacuumParticleEffect = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRToolCollector::__cordl_internal_get_passiveChargeParticleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passiveChargeParticleEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_passiveChargeParticleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passiveChargeParticleEffect;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_passiveChargeParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passiveChargeParticleEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumAudioSource;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_vacuumAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vacuumAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumSound;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_vacuumSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vacuumSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade1vacuumSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1vacuumSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade1vacuumSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1vacuumSound;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_upgrade1vacuumSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1vacuumSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade2vacuumSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2vacuumSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade2vacuumSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2vacuumSound;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_upgrade2vacuumSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2vacuumSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade3vacuumSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3vacuumSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_upgrade3vacuumSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3vacuumSound;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_upgrade3vacuumSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3vacuumSound = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_vacuumSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumSoundVolume;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_vacuumSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vacuumSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectAudioSource;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_collectAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectSound;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_collectSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectSound = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectSoundVolume;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_collectSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolCollector::__cordl_internal_get_chargeBeamSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeBeamSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_chargeBeamSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeBeamSound;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_chargeBeamSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeBeamSound = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_chargeBeamVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeBeamVolume;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_chargeBeamVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeBeamVolume;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_chargeBeamVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeBeamVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::LightningDispatcher>& GlobalNamespace::GRToolCollector::__cordl_internal_get_lightningDispatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningDispatcher;
}
constexpr ::UnityW<::GlobalNamespace::LightningDispatcher> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_lightningDispatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningDispatcher;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_lightningDispatcher(::UnityW<::GlobalNamespace::LightningDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningDispatcher = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_chargeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDuration;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_chargeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDuration;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_chargeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectDuration;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectDuration;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_collectDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectDuration = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_cooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_cooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_cooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownDuration = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolCollector::__cordl_internal_get_collectHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectHaptic;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_collectHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectHaptic = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GRToolCollector::__cordl_internal_get_grManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_grManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grManager = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_rechargeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeRate;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_rechargeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeRate;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_rechargeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeRate = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_rechargeInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeInterval;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_rechargeInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeInterval;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_rechargeInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeInterval = value;
}
constexpr double_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_lastRechargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRechargeTime;
}
constexpr double_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_lastRechargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRechargeTime;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_lastRechargeTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRechargeTime = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_level3ChargeRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level3ChargeRadius;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_level3ChargeRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level3ChargeRadius;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_level3ChargeRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___level3ChargeRadius = value;
}
constexpr ::GlobalNamespace::GRToolCollector_State& GlobalNamespace::GRToolCollector::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolCollector_State const& GlobalNamespace::GRToolCollector::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_state(::GlobalNamespace::GRToolCollector_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRToolCollector::__cordl_internal_get_stateTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr float_t const& GlobalNamespace::GRToolCollector::__cordl_internal_get_stateTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateTimeRemaining;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_stateTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateTimeRemaining = value;
}
constexpr bool& GlobalNamespace::GRToolCollector::__cordl_internal_get_activatedLocally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr bool const& GlobalNamespace::GRToolCollector::__cordl_internal_get_activatedLocally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_activatedLocally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedLocally = value;
}
constexpr bool& GlobalNamespace::GRToolCollector::__cordl_internal_get_waitingForButtonRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForButtonRelease;
}
constexpr bool const& GlobalNamespace::GRToolCollector::__cordl_internal_get_waitingForButtonRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForButtonRelease;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_waitingForButtonRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForButtonRelease = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::GRToolCollector::__cordl_internal_get_tempHitResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitResults;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::GRToolCollector::__cordl_internal_get_tempHitResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempHitResults;
}
constexpr void GlobalNamespace::GRToolCollector::__cordl_internal_set_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempHitResults = value;
}
inline void GlobalNamespace::GRToolCollector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRToolCollector::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline bool GlobalNamespace::GRToolCollector::IsHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolCollector::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolCollector::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolCollector::SetStateAuthority(::GlobalNamespace::GRToolCollector_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRToolCollector_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolCollector::SetState(::GlobalNamespace::GRToolCollector_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolCollector_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolCollector::StartVacuum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"StartVacuum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::StopVacuum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"StopVacuum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::TryCollect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"TryCollect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::PerformCollection(::GlobalNamespace::GRCollectible*  collectible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PerformCollection", {}, {::i2c::type_of<::GlobalNamespace::GRCollectible*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectible);
}
inline void GlobalNamespace::GRToolCollector::PlayChargeEffect(::GlobalNamespace::GRTool*  targetTool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PlayChargeEffect", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTool);
}
inline void GlobalNamespace::GRToolCollector::PlayChargeEffect(::GlobalNamespace::GRCurrencyDepositor*  targetDepositor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PlayChargeEffect", {}, {::i2c::type_of<::GlobalNamespace::GRCurrencyDepositor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetDepositor);
}
inline bool GlobalNamespace::GRToolCollector::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolCollector::PlayVibration(float_t  strength, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"PlayVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline void GlobalNamespace::GRToolCollector::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GRToolCollector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolCollector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolCollector* GlobalNamespace::GRToolCollector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolCollector*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GRToolCollector::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GRToolCollector::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRToolCollector::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRToolCollector::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolCollector::GRToolCollector()   {
}
