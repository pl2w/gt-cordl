#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCVehicle.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_State_impl.hpp"
#include "GorillaTag/zzzz__BoneOffset_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_State_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.get_HasLocalAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::get_HasLocalAuthority)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"get_HasLocalAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.WakeUpRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(::GorillaTag::Cosmetics::RCCosmeticNetworkSync*)>(&::GorillaTag::Cosmetics::RCVehicle::WakeUpRemote)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d6cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.StartConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(::GorillaTag::Cosmetics::RCRemoteHoldable*, ::GorillaTag::Cosmetics::RCCosmeticNetworkSync*)>(&::GorillaTag::Cosmetics::RCVehicle::StartConnection)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d6ccc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.EndConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::EndConnection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d6cddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.ResetToSpawnPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::ResetToSpawnPosition)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5d6ce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.AuthorityBeginDocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::AuthorityBeginDocked)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d65370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.AuthorityBeginMobilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::AuthorityBeginMobilization)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d69cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.AuthorityBeginCrash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::AuthorityBeginCrash)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d6d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.SetDisabledState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::SetDisabledState)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d6d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d654c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d6d1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6d1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(bool)>(&::GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6d1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6d1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d6d1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d6d4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6553c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.ApplyRemoteControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(::GlobalNamespace::RCRemoteHoldable_RCInput)>(&::GorillaTag::Cosmetics::RCVehicle::ApplyRemoteControlInput)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d6c804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"ApplyRemoteControlInput", {}, {::i2c::type_of<::GlobalNamespace::RCRemoteHoldable_RCInput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d6d4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(float_t)>(&::GorillaTag::Cosmetics::RCVehicle::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5d65670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.RemoteUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(float_t)>(&::GorillaTag::Cosmetics::RCVehicle::RemoteUpdate)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5d659a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(float_t)>(&::GorillaTag::Cosmetics::RCVehicle::SharedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d661bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.AuthorityApplyImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)(::UnityEngine::Vector3, bool)>(&::GorillaTag::Cosmetics::RCVehicle::AuthorityApplyImpact)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d6d528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.NormalizeAngle180
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::RCVehicle::*)(float_t)>(&::GorillaTag::Cosmetics::RCVehicle::NormalizeAngle180)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d6ad18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"NormalizeAngle180", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle.AddScaledGravityCompensationForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rigidbody*, float_t, float_t)>(&::GorillaTag::Cosmetics::RCVehicle::AddScaledGravityCompensationForce)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d6680c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"AddScaledGravityCompensationForce", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCVehicle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCVehicle::*)()>(&::GorillaTag::Cosmetics::RCVehicle::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d66d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_leftDockParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftDockParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_leftDockParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftDockParent;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_leftDockParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftDockParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_rightDockParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightDockParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_rightDockParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightDockParent;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_rightDockParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightDockParent = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_maxRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRange;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_maxRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRange;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_maxRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRange = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_maxDisconnectionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDisconnectionTime;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_maxDisconnectionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDisconnectionTime;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_maxDisconnectionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDisconnectionTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_crashRespawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashRespawnDelay;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_crashRespawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashRespawnDelay;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_crashRespawnDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crashRespawnDelay = value;
}
constexpr bool& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_crashOnHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashOnHit;
}
constexpr bool const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_crashOnHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashOnHit;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_crashOnHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crashOnHit = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_crashOnHitSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashOnHitSpeedThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_crashOnHitSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crashOnHitSpeedThreshold;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_crashOnHitSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crashOnHitSpeedThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_hitVelocityTransfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitVelocityTransfer;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_hitVelocityTransfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitVelocityTransfer;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_hitVelocityTransfer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitVelocityTransfer = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_projectileVelocityTransfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileVelocityTransfer;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_projectileVelocityTransfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileVelocityTransfer;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_projectileVelocityTransfer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileVelocityTransfer = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_hitMaxHitSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitMaxHitSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_hitMaxHitSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitMaxHitSpeed;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_hitMaxHitSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitMaxHitSpeed = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_joystickDeadzone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickDeadzone;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_joystickDeadzone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickDeadzone;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_joystickDeadzone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickDeadzone = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_OnHitImpact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitImpact;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_OnHitImpact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitImpact;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_OnHitImpact(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitImpact = value;
}
constexpr ::GlobalNamespace::RCVehicle_State& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_localState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localState;
}
constexpr ::GlobalNamespace::RCVehicle_State const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_localState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localState;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_localState(::GlobalNamespace::RCVehicle_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localState = value;
}
constexpr ::GlobalNamespace::RCVehicle_State& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_localStatePrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localStatePrev;
}
constexpr ::GlobalNamespace::RCVehicle_State const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_localStatePrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localStatePrev;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_localStatePrev(::GlobalNamespace::RCVehicle_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localStatePrev = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_stateStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_connectedRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedRemote;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable> const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_connectedRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedRemote;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_connectedRemote(::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedRemote = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_networkSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSync;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync> const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_networkSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSync;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_networkSync(::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSync = value;
}
constexpr bool& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_hasNetworkSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasNetworkSync;
}
constexpr bool const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_hasNetworkSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasNetworkSync;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_hasNetworkSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasNetworkSync = value;
}
constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_activeInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeInput;
}
constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_activeInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeInput;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_activeInput(::GlobalNamespace::RCRemoteHoldable_RCInput  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeInput = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr bool& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_waitingForTriggerRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForTriggerRelease;
}
constexpr bool const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_waitingForTriggerRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForTriggerRelease;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_waitingForTriggerRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForTriggerRelease = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_disconnectionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectionTime;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_disconnectionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectionTime;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_disconnectionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectionTime = value;
}
constexpr bool& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_useLeftDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLeftDock;
}
constexpr bool const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_useLeftDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLeftDock;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_useLeftDock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useLeftDock = value;
}
constexpr ::GorillaTag::BoneOffset& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_dockLeftOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockLeftOffset;
}
constexpr ::GorillaTag::BoneOffset const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_dockLeftOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockLeftOffset;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_dockLeftOffset(::GorillaTag::BoneOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockLeftOffset = value;
}
constexpr ::GorillaTag::BoneOffset& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_dockRightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockRightOffset;
}
constexpr ::GorillaTag::BoneOffset const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_dockRightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockRightOffset;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_dockRightOffset(::GorillaTag::BoneOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockRightOffset = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_networkSyncFollowRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncFollowRateExp;
}
constexpr float_t const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get_networkSyncFollowRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncFollowRateExp;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set_networkSyncFollowRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSyncFollowRateExp = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get__vrRigBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRigBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get__vrRigBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRigBones;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set__vrRigBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrRigBones = value;
}
constexpr bool& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::RCVehicle::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::RCVehicle::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::RCVehicle::get_HasLocalAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"get_HasLocalAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::WakeUpRemote(::GorillaTag::Cosmetics::RCCosmeticNetworkSync*  sync)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sync);
}
inline void GorillaTag::Cosmetics::RCVehicle::StartConnection(::GorillaTag::Cosmetics::RCRemoteHoldable*  remote, ::GorillaTag::Cosmetics::RCCosmeticNetworkSync*  sync)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remote, sync);
}
inline void GorillaTag::Cosmetics::RCVehicle::EndConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::ResetToSpawnPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::AuthorityBeginDocked()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::AuthorityBeginMobilization()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::AuthorityBeginCrash()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::SetDisabledState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::RCVehicle::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::ApplyRemoteControlInput(::GlobalNamespace::RCRemoteHoldable_RCInput  rcInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"ApplyRemoteControlInput", {}, {::i2c::type_of<::GlobalNamespace::RCRemoteHoldable_RCInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rcInput);
}
inline void GorillaTag::Cosmetics::RCVehicle::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCVehicle::AuthorityUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GorillaTag::Cosmetics::RCVehicle::RemoteUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GorillaTag::Cosmetics::RCVehicle::SharedUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GorillaTag::Cosmetics::RCVehicle::AuthorityApplyImpact(::UnityEngine::Vector3  hitVelocity, bool  isProjectile)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitVelocity, isProjectile);
}
inline float_t GorillaTag::Cosmetics::RCVehicle::NormalizeAngle180(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"NormalizeAngle180", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, angle);
}
inline void GorillaTag::Cosmetics::RCVehicle::AddScaledGravityCompensationForce(::UnityEngine::Rigidbody*  rb, float_t  scaleFactor, float_t  gravityCompensation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {"AddScaledGravityCompensationForce", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rb, scaleFactor, gravityCompensation);
}
inline void GorillaTag::Cosmetics::RCVehicle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCVehicle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::RCVehicle* GorillaTag::Cosmetics::RCVehicle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::RCVehicle*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::RCVehicle::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::RCVehicle::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::RCVehicle::RCVehicle()   {
}
