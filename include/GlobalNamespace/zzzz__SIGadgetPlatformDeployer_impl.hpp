#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPlatformDeployer.hpp"
#include "GlobalNamespace/zzzz__SIGadgetPlatformDeployer_State_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetPlatformDeployer_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__IEnergyGadget_def.hpp"
#include "GlobalNamespace/zzzz__I_SIDisruptable_def.hpp"
#include "GlobalNamespace/zzzz__SIChargeDisplay_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetPlatformDeployer_State_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::Start)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x58e0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x58e06f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.HandleStopInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::HandleStopInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e0844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"HandleStopInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.get_UsesEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::get_UsesEnergy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e0894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"get_UsesEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::get_IsFull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58e089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"get_IsFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.UpdateRecharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(float_t)>(&::GlobalNamespace::SIGadgetPlatformDeployer::UpdateRecharge)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x58e08ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"UpdateRecharge", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(float_t)>(&::GlobalNamespace::SIGadgetPlatformDeployer::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58e0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(float_t)>(&::GlobalNamespace::SIGadgetPlatformDeployer::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58e159c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.CheckInitInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::CheckInitInputs)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58e0b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CheckInitInputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.CheckReleaseInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::CheckReleaseInputs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58e1218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CheckReleaseInputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.IsChargeAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::IsChargeAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58e0ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"IsChargeAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.SpendCharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::SpendCharge)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58e15e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SpendCharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.IsLeftHandOrSnapSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::SIGadgetPlatformDeployer::IsLeftHandOrSnapSlot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e15fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"IsLeftHandOrSnapSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.TryDeployInstantPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::TryDeployInstantPlatform)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x58e0d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryDeployInstantPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.TryDeployPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::TryDeployPlatform)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x58e1248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryDeployPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.DeployPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::SIGadgetPlatformDeployer::DeployPlatform)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x58e1678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"DeployPlatform", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.ProcessClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetPlatformDeployer::ProcessClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x58e20f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.ProcessAuthorityToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetPlatformDeployer::ProcessAuthorityToClientRPC)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x58e22c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.CreateLocalPlatformInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::SIGadgetPlatformDeployer::CreateLocalPlatformInstance)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x58e1e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CreateLocalPlatformInstance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::GlobalNamespace::SIGadgetPlatformDeployer_State)>(&::GlobalNamespace::SIGadgetPlatformDeployer::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58e11e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetPlatformDeployer_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::GlobalNamespace::SIGadgetPlatformDeployer_State)>(&::GlobalNamespace::SIGadgetPlatformDeployer::SetState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58e084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetPlatformDeployer_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)(int64_t)>(&::GlobalNamespace::SIGadgetPlatformDeployer::CanChangeState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e2484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.SetPreviewVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(bool)>(&::GlobalNamespace::SIGadgetPlatformDeployer::SetPreviewVisibility)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58e2490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SetPreviewVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.UpdatePreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::UpdatePreview)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58e1404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"UpdatePreview", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.TryGetPlatformPosRotScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::SIGadgetPlatformDeployer::TryGetPlatformPosRotScale)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x58e19f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryGetPlatformPosRotScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.TryGetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::by_ref<::GlobalNamespace::GamePlayer*>)>(&::GlobalNamespace::SIGadgetPlatformDeployer::TryGetGamePlayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58e1608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetPlatformDeployer::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58e24d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.Disrupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(float_t)>(&::GlobalNamespace::SIGadgetPlatformDeployer::Disrupt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58e2564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer.HandleBlockedActionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)(bool)>(&::GlobalNamespace::SIGadgetPlatformDeployer::HandleBlockedActionChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58e257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58e25ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployer._CreateLocalPlatformInstance_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployer::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployer::_CreateLocalPlatformInstance_b__53_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58e2648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"<CreateLocalPlatformInstance>b__53_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonActivatable = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_rechargeSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_rechargeSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeSFX;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_rechargeSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeSFX = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_blockedSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_blockedSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedSFX;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_blockedSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedSFX = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_blockedDisplayMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedDisplayMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_blockedDisplayMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedDisplayMesh;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_blockedDisplayMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedDisplayMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_unblockedMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unblockedMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_unblockedMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unblockedMat;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_unblockedMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unblockedMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_blockedMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_blockedMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedMat;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_blockedMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedMat = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_platformPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_platformPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformPrefab;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_platformPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformPrefab = value;
}
constexpr bool& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_isInstancePlace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInstancePlace;
}
constexpr bool const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_isInstancePlace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInstancePlace;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_isInstancePlace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInstancePlace = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_activationHandDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationHandDistance;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_activationHandDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationHandDistance;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_activationHandDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationHandDistance = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_inputSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSensitivity;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_inputSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSensitivity;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_inputSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSensitivity = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_deployMinRequiredHandDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployMinRequiredHandDistance;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_deployMinRequiredHandDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployMinRequiredHandDistance;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_deployMinRequiredHandDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deployMinRequiredHandDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_previewPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewPlatform;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_previewPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewPlatform;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_previewPlatform(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previewPlatform = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_handInset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handInset;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_handInset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handInset;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_handInset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handInset = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_handDepthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handDepthOffset;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_handDepthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handDepthOffset;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_handDepthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handDepthOffset = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_previewMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_previewMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewMesh;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_previewMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previewMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_validPreviewMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validPreviewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_validPreviewMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validPreviewMaterial;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_validPreviewMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validPreviewMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_invalidPreviewMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidPreviewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_invalidPreviewMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidPreviewMaterial;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_invalidPreviewMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invalidPreviewMaterial = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_maxCharges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCharges;
}
constexpr int32_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_maxCharges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCharges;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_maxCharges(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCharges = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeRecoveryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRecoveryTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeRecoveryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRecoveryTime;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_chargeRecoveryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeRecoveryTime = value;
}
constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplay;
}
constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplay;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_chargeDisplay(::UnityW<::GlobalNamespace::SIChargeDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDisplay = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_maxChargesDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargesDefault;
}
constexpr int32_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_maxChargesDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargesDefault;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_maxChargesDefault(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxChargesDefault = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_maxChargesHighCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargesHighCapacity;
}
constexpr int32_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_maxChargesHighCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargesHighCapacity;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_maxChargesHighCapacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxChargesHighCapacity = value;
}
constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeDisplayDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplayDefault;
}
constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeDisplayDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplayDefault;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_chargeDisplayDefault(::UnityW<::GlobalNamespace::SIChargeDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDisplayDefault = value;
}
constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay>& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeDisplayHighCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplayHighCapacity;
}
constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay> const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeDisplayHighCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplayHighCapacity;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_chargeDisplayHighCapacity(::UnityW<::GlobalNamespace::SIChargeDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDisplayHighCapacity = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeRecoveryTimeDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRecoveryTimeDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeRecoveryTimeDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRecoveryTimeDefault;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_chargeRecoveryTimeDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeRecoveryTimeDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeRecoveryTimeFast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRecoveryTimeFast;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_chargeRecoveryTimeFast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRecoveryTimeFast;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_chargeRecoveryTimeFast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeRecoveryTimeFast = value;
}
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_state(::GlobalNamespace::SIGadgetPlatformDeployer_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr bool& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_wasInputPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInputPressed;
}
constexpr bool const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_wasInputPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInputPressed;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_wasInputPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInputPressed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_remainingRechargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingRechargeTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_remainingRechargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingRechargeTime;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_remainingRechargeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingRechargeTime = value;
}
constexpr ::GlobalNamespace::SIUpgradeSet& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_instanceUpgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceUpgrades;
}
constexpr ::GlobalNamespace::SIUpgradeSet const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_instanceUpgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceUpgrades;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_instanceUpgrades(::GlobalNamespace::SIUpgradeSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceUpgrades = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_deployedPlatformCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployedPlatformCount;
}
constexpr int32_t const& GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_get_deployedPlatformCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployedPlatformCount;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployer::__cordl_internal_set_deployedPlatformCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deployedPlatformCount = value;
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::HandleStopInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"HandleStopInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::get_UsesEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"get_UsesEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::UpdateRecharge(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"UpdateRecharge", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::CheckInitInputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CheckInitInputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::CheckReleaseInputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CheckReleaseInputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::IsChargeAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"IsChargeAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::SpendCharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SpendCharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::IsLeftHandOrSnapSlot(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"IsLeftHandOrSnapSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handIndex);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::TryDeployInstantPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryDeployInstantPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::TryDeployPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryDeployPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::DeployPlatform(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"DeployPlatform", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::ProcessClientToAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::ProcessAuthorityToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::CreateLocalPlatformInstance(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CreateLocalPlatformInstance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::SetStateAuthority(::GlobalNamespace::SIGadgetPlatformDeployer_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetPlatformDeployer_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::SetState(::GlobalNamespace::SIGadgetPlatformDeployer_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetPlatformDeployer_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newStateIndex);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::SetPreviewVisibility(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"SetPreviewVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::UpdatePreview()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"UpdatePreview", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::TryGetPlatformPosRotScale(::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryGetPlatformPosRotScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos, rot, scale);
}
inline bool GlobalNamespace::SIGadgetPlatformDeployer::TryGetGamePlayer(::by_ref<::GlobalNamespace::GamePlayer*>  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::Disrupt(float_t  disruptTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disruptTime);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::HandleBlockedActionChanged(bool  isBlocked)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBlocked);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployer::_CreateLocalPlatformInstance_b__53_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployer*>(),
                        {"<CreateLocalPlatformInstance>b__53_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetPlatformDeployer* GlobalNamespace::SIGadgetPlatformDeployer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetPlatformDeployer*>());
}
/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr  GlobalNamespace::SIGadgetPlatformDeployer::operator ::GlobalNamespace::I_SIDisruptable*() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* GlobalNamespace::SIGadgetPlatformDeployer::i___GlobalNamespace__I_SIDisruptable() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IEnergyGadget"
constexpr  GlobalNamespace::SIGadgetPlatformDeployer::operator ::GlobalNamespace::IEnergyGadget*() noexcept {
return static_cast<::GlobalNamespace::IEnergyGadget*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEnergyGadget"
constexpr ::GlobalNamespace::IEnergyGadget* GlobalNamespace::SIGadgetPlatformDeployer::i___GlobalNamespace__IEnergyGadget() noexcept {
return static_cast<::GlobalNamespace::IEnergyGadget*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetPlatformDeployer::SIGadgetPlatformDeployer()   {
}
