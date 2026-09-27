#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolLantern.hpp"
#include "GlobalNamespace/zzzz__GRToolLantern_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolLantern_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRToolLantern_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "GlobalNamespace/zzzz__IGRSummoningEntity_def.hpp"
#include "GlobalNamespace/zzzz__MeshAndMaterials_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::Awake)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x58be0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58be3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::OnDestroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58be448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnToolUpgraded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolLantern::OnToolUpgraded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58be378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::OnGrabbed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58be510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::OnReleased)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58be514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.EnableXRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::EnableXRay)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58be5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"EnableXRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.DisableXRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::DisableXRay)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58be484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"DisableXRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58be640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(float_t)>(&::GlobalNamespace::GRToolLantern::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x58be718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.TryConsumeEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::TryConsumeEnergy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58bed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"TryConsumeEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(float_t)>(&::GlobalNamespace::GRToolLantern::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58beb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(::GlobalNamespace::GRToolLantern_State)>(&::GlobalNamespace::GRToolLantern::SetState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58bec7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolLantern_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.TurnOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::TurnOn)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58bee8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"TurnOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.EnableLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(bool)>(&::GlobalNamespace::GRToolLantern::EnableLights)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58beb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"EnableLights", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.TurnOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::TurnOff)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58be40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"TurnOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::IsHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58beb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"IsHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.IsHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::IsHeldLocal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58be6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.WasLastHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::WasLastHeldLocal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58be538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"WasLastHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.IsButtonHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::IsButtonHeld)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58bece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(int64_t, int64_t)>(&::GlobalNamespace::GRToolLantern::OnStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolLantern::*)(int64_t)>(&::GlobalNamespace::GRToolLantern::CanChangeState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58bee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.AddTrackedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRToolLantern::AddTrackedEntity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58bef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"AddTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.RemoveTrackedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRToolLantern::RemoveTrackedEntity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58befa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"RemoveTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnSummonedEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRToolLantern::OnSummonedEntityInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bf04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnSummonedEntityInit", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern.OnSummonedEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRToolLantern::OnSummonedEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bf050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnSummonedEntityDestroy", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolLantern._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolLantern::*)()>(&::GlobalNamespace::GRToolLantern::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58bf054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolLantern::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolLantern::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLight>& GlobalNamespace::GRToolLantern::__cordl_internal_get_gameLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLight;
}
constexpr ::UnityW<::GlobalNamespace::GameLight> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_gameLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLight;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_gameLight(::UnityW<::GlobalNamespace::GameLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameLight = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GRToolLantern::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr float_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_timeOnPerEnergyUseDurationSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOnPerEnergyUseDurationSeconds;
}
constexpr float_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_timeOnPerEnergyUseDurationSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOnPerEnergyUseDurationSeconds;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_timeOnPerEnergyUseDurationSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOnPerEnergyUseDurationSeconds = value;
}
constexpr int32_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_minEnergyPerUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minEnergyPerUse;
}
constexpr int32_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_minEnergyPerUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minEnergyPerUse;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_minEnergyPerUse(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minEnergyPerUse = value;
}
constexpr float_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_turnOnSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_turnOnSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnSoundVolume;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_turnOnSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOnSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolLantern::__cordl_internal_get_turnOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_turnOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnSound;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_turnOnSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOnSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolLantern::__cordl_internal_get_upgrade1TurnOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1TurnOnSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_upgrade1TurnOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade1TurnOnSound;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_upgrade1TurnOnSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade1TurnOnSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolLantern::__cordl_internal_get_upgrade2TurnOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2TurnOnSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_upgrade2TurnOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade2TurnOnSound;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_upgrade2TurnOnSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade2TurnOnSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRToolLantern::__cordl_internal_get_upgrade3TurnOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3TurnOnSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_upgrade3TurnOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgrade3TurnOnSound;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_upgrade3TurnOnSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgrade3TurnOnSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolLantern::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*& GlobalNamespace::GRToolLantern::__cordl_internal_get_meshAndMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshAndMaterials;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>* const& GlobalNamespace::GRToolLantern::__cordl_internal_get_meshAndMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshAndMaterials;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_meshAndMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshAndMaterials = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GRToolLantern::__cordl_internal_get_onHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GRToolLantern::__cordl_internal_get_onHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHaptic;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_onHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHaptic = value;
}
constexpr float_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_timeOnSpentEnergy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOnSpentEnergy;
}
constexpr float_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_timeOnSpentEnergy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOnSpentEnergy;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_timeOnSpentEnergy(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOnSpentEnergy = value;
}
constexpr float_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_timeLastTurnedOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastTurnedOn;
}
constexpr float_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_timeLastTurnedOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastTurnedOn;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_timeLastTurnedOn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastTurnedOn = value;
}
constexpr float_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_minOnDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minOnDuration;
}
constexpr float_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_minOnDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minOnDuration;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_minOnDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minOnDuration = value;
}
constexpr ::GlobalNamespace::GRToolLantern_State& GlobalNamespace::GRToolLantern::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRToolLantern_State const& GlobalNamespace::GRToolLantern::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_state(::GlobalNamespace::GRToolLantern_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GRToolLantern::__cordl_internal_get_trackedEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedEntities;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GRToolLantern::__cordl_internal_get_trackedEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedEntities;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_trackedEntities(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedEntities = value;
}
constexpr double_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_lastFlareDropTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFlareDropTime;
}
constexpr double_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_lastFlareDropTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFlareDropTime;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_lastFlareDropTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFlareDropTime = value;
}
constexpr double_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_minFlareDropInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minFlareDropInterval;
}
constexpr double_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_minFlareDropInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minFlareDropInterval;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_minFlareDropInterval(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minFlareDropInterval = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolLantern::__cordl_internal_get_lanternFlarePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lanternFlarePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolLantern::__cordl_internal_get_lanternFlarePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lanternFlarePrefab;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_lanternFlarePrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lanternFlarePrefab = value;
}
constexpr int32_t& GlobalNamespace::GRToolLantern::__cordl_internal_get_maxSpawnedFlares()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpawnedFlares;
}
constexpr int32_t const& GlobalNamespace::GRToolLantern::__cordl_internal_get_maxSpawnedFlares() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpawnedFlares;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_maxSpawnedFlares(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpawnedFlares = value;
}
constexpr bool& GlobalNamespace::GRToolLantern::__cordl_internal_get_providingXRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___providingXRay;
}
constexpr bool const& GlobalNamespace::GRToolLantern::__cordl_internal_get_providingXRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___providingXRay;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_providingXRay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___providingXRay = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolLantern::__cordl_internal_get_flareSpawnoffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flareSpawnoffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolLantern::__cordl_internal_get_flareSpawnoffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flareSpawnoffset;
}
constexpr void GlobalNamespace::GRToolLantern::__cordl_internal_set_flareSpawnoffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flareSpawnoffset = value;
}
inline void GlobalNamespace::GRToolLantern::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnToolUpgraded(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnToolUpgraded", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline void GlobalNamespace::GRToolLantern::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::EnableXRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"EnableXRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::DisableXRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"DisableXRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolLantern::TryConsumeEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"TryConsumeEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRToolLantern::SetState(::GlobalNamespace::GRToolLantern_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRToolLantern_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolLantern::TurnOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"TurnOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::EnableLights(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"EnableLights", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::GRToolLantern::TurnOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"TurnOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolLantern::IsHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"IsHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolLantern::IsHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolLantern::WasLastHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"WasLastHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolLantern::IsButtonHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"IsButtonHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolLantern::OnStateChanged(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline bool GlobalNamespace::GRToolLantern::CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newStateIndex);
}
inline void GlobalNamespace::GRToolLantern::AddTrackedEntity(::GlobalNamespace::GameEntity*  entityToTrack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"AddTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityToTrack);
}
inline void GlobalNamespace::GRToolLantern::RemoveTrackedEntity(::GlobalNamespace::GameEntity*  entityToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"RemoveTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityToRemove);
}
inline void GlobalNamespace::GRToolLantern::OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnSummonedEntityInit", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GRToolLantern::OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {"OnSummonedEntityDestroy", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GRToolLantern::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolLantern*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolLantern* GlobalNamespace::GRToolLantern::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolLantern*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGRSummoningEntity"
constexpr  GlobalNamespace::GRToolLantern::operator ::GlobalNamespace::IGRSummoningEntity*() noexcept {
return static_cast<::GlobalNamespace::IGRSummoningEntity*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGRSummoningEntity"
constexpr ::GlobalNamespace::IGRSummoningEntity* GlobalNamespace::GRToolLantern::i___GlobalNamespace__IGRSummoningEntity() noexcept {
return static_cast<::GlobalNamespace::IGRSummoningEntity*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolLantern::GRToolLantern()   {
}
