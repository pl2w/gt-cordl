#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadget.hpp"
#include "GlobalNamespace/zzzz__GameEntity_impl.hpp"
#include "GlobalNamespace/zzzz__SIExclusionType_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_UpgradeVisual_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameActivatable_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameStateProvider_def.hpp"
#include "GlobalNamespace/zzzz__IGameStateReceiver_def.hpp"
#include "GlobalNamespace/zzzz__IPrefabRequirements_def.hpp"
#include "GlobalNamespace/zzzz__SIExclusionType_def.hpp"
#include "GlobalNamespace/zzzz__SIExclusionZone_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_UpgradeVisual_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadget.get_PageId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SITechTreePageId (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::get_PageId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58dc260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"get_PageId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.set_PageId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SITechTreePageId)>(&::GlobalNamespace::SIGadget::set_PageId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58dc268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"set_PageId", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.get_RequiredPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::get_RequiredPrefabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58dc270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"get_RequiredPrefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58dc278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(float_t)>(&::GlobalNamespace::SIGadget::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dc338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(float_t)>(&::GlobalNamespace::SIGadget::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d6070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.IsEquippedLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::IsEquippedLocal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58dc3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.GetJoystickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::GetJoystickInput)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58dc414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"GetJoystickInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ShouldProcessInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::ShouldProcessInput)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58dc4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"ShouldProcessInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SleepAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::SleepAfterDelay)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58dc33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SleepAfterDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.FilterUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SIUpgradeSet (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadget::FilterUpgradeNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58dc5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadget::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dc5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.RefreshUpgradeVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadget::RefreshUpgradeVisuals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58dc5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::OnEnable)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x58dc7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::OnDisable)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x58dcaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.GrabInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::GrabInitialization)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58dcf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"GrabInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ReleaseInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::ReleaseInitialization)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58dd084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"ReleaseInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.FindAttachedHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadget::*)(::by_ref<bool>)>(&::GlobalNamespace::SIGadget::FindAttachedHand)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"FindAttachedHand", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.GetAttachedPlayerRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::GetAttachedPlayerRig)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58d847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"GetAttachedPlayerRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::OnEntityInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dd218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dd21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int64_t, int64_t)>(&::GlobalNamespace::SIGadget::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58dd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ProcessClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadget::ProcessClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dd3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ProcessAuthorityToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadget::ProcessAuthorityToClientRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dd3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ProcessClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadget::ProcessClientToClientRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dd3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SendClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int32_t)>(&::GlobalNamespace::SIGadget::SendClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58dd3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SendClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadget::SendClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58dd5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SendAuthorityToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int32_t)>(&::GlobalNamespace::SIGadget::SendAuthorityToClientRPC)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58dd7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SendAuthorityToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadget::SendAuthorityToClientRPC)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58dd964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SendClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int32_t)>(&::GlobalNamespace::SIGadget::SendClientToClientRPC)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58ddb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToClientRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.SendClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadget::SendClientToClientRPC)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58ddd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.ApplyExclusionZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SIExclusionZone*)>(&::GlobalNamespace::SIGadget::ApplyExclusionZone)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58ddf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"ApplyExclusionZone", {}, {::i2c::type_of<::GlobalNamespace::SIExclusionZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.LeaveExclusionZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SIExclusionZone*)>(&::GlobalNamespace::SIGadget::LeaveExclusionZone)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58de034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"LeaveExclusionZone", {}, {::i2c::type_of<::GlobalNamespace::SIExclusionZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.LeaveAllExclusionZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::LeaveAllExclusionZones)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x58dcd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"LeaveAllExclusionZones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.RecalcExclusionFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::RecalcExclusionFlags)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58de0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"RecalcExclusionFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.IsBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::IsBlocked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58de188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IsBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.IsBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::SIExclusionType)>(&::GlobalNamespace::SIGadget::IsBlocked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58d61e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IsBlocked", {}, {::i2c::type_of<::GlobalNamespace::SIExclusionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.HandleBlockedActionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(bool)>(&::GlobalNamespace::SIGadget::HandleBlockedActionChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58de194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.IGameStateProvider_GameStateReceiverRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::IGameStateReceiver*)>(&::GlobalNamespace::SIGadget::IGameStateProvider_GameStateReceiverRegister)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58de198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IGameStateProvider.GameStateReceiverRegister", {}, {::i2c::type_of<::GlobalNamespace::IGameStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget.IGameStateProvider_GameStateReceiverUnregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)(::GlobalNamespace::IGameStateReceiver*)>(&::GlobalNamespace::SIGadget::IGameStateProvider_GameStateReceiverUnregister)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58de244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IGameStateProvider.GameStateReceiverUnregister", {}, {::i2c::type_of<::GlobalNamespace::IGameStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadget::*)()>(&::GlobalNamespace::SIGadget::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58d64a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::SIGadget::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::SIGadget::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>& GlobalNamespace::SIGadget::__cordl_internal_get_additionalRequiredPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalRequiredPrefabs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>> const& GlobalNamespace::SIGadget::__cordl_internal_get_additionalRequiredPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalRequiredPrefabs;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_additionalRequiredPrefabs(::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additionalRequiredPrefabs = value;
}
constexpr float_t& GlobalNamespace::SIGadget::__cordl_internal_get_sleepTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepTime;
}
constexpr float_t const& GlobalNamespace::SIGadget::__cordl_internal_get_sleepTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepTime;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_sleepTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepTime = value;
}
constexpr bool& GlobalNamespace::SIGadget::__cordl_internal_get_shouldSleep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldSleep;
}
constexpr bool const& GlobalNamespace::SIGadget::__cordl_internal_get_shouldSleep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldSleep;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_shouldSleep(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldSleep = value;
}
constexpr bool& GlobalNamespace::SIGadget::__cordl_internal_get_isSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSleeping;
}
constexpr bool const& GlobalNamespace::SIGadget::__cordl_internal_get_isSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSleeping;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_isSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSleeping = value;
}
constexpr float_t& GlobalNamespace::SIGadget::__cordl_internal_get_timeReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeReleased;
}
constexpr float_t const& GlobalNamespace::SIGadget::__cordl_internal_get_timeReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeReleased;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_timeReleased(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeReleased = value;
}
constexpr bool& GlobalNamespace::SIGadget::__cordl_internal_get_activatedLocally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr bool const& GlobalNamespace::SIGadget::__cordl_internal_get_activatedLocally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedLocally;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_activatedLocally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedLocally = value;
}
constexpr ::GlobalNamespace::SITechTreePageId& GlobalNamespace::SIGadget::__cordl_internal_get_pageId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageId;
}
constexpr ::GlobalNamespace::SITechTreePageId const& GlobalNamespace::SIGadget::__cordl_internal_get_pageId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageId;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_pageId(::GlobalNamespace::SITechTreePageId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageId = value;
}
constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeSet>*& GlobalNamespace::SIGadget::__cordl_internal_get_OnPostRefreshVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPostRefreshVisuals;
}
constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeSet>* const& GlobalNamespace::SIGadget::__cordl_internal_get_OnPostRefreshVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPostRefreshVisuals;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_OnPostRefreshVisuals(::System::Action_1<::GlobalNamespace::SIUpgradeSet>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPostRefreshVisuals = value;
}
constexpr bool& GlobalNamespace::SIGadget::__cordl_internal_get_didApplyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didApplyId;
}
constexpr bool const& GlobalNamespace::SIGadget::__cordl_internal_get_didApplyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didApplyId;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_didApplyId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didApplyId = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual>& GlobalNamespace::SIGadget::__cordl_internal_get_UpgradeBasedVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeBasedVisuals;
}
constexpr ::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual> const& GlobalNamespace::SIGadget::__cordl_internal_get_UpgradeBasedVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeBasedVisuals;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_UpgradeBasedVisuals(::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeBasedVisuals = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>*& GlobalNamespace::SIGadget::__cordl_internal_get_appliedExclusionZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedExclusionZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>* const& GlobalNamespace::SIGadget::__cordl_internal_get_appliedExclusionZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedExclusionZones;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set_appliedExclusionZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appliedExclusionZones = value;
}
constexpr ::GlobalNamespace::SIExclusionType& GlobalNamespace::SIGadget::__cordl_internal_get__activeExclusionFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeExclusionFlags;
}
constexpr ::GlobalNamespace::SIExclusionType const& GlobalNamespace::SIGadget::__cordl_internal_get__activeExclusionFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeExclusionFlags;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set__activeExclusionFlags(::GlobalNamespace::SIExclusionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeExclusionFlags = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>*& GlobalNamespace::SIGadget::__cordl_internal_get__gameStateReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameStateReceivers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>* const& GlobalNamespace::SIGadget::__cordl_internal_get__gameStateReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameStateReceivers;
}
constexpr void GlobalNamespace::SIGadget::__cordl_internal_set__gameStateReceivers(::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameStateReceivers = value;
}
inline void GlobalNamespace::SIGadget::setStaticF_uniqueId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "uniqueId", ::GlobalNamespace::SIGadget*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SIGadget::getStaticF_uniqueId()  {
return ::cordl_internals::getStaticField<int32_t, "uniqueId", ::GlobalNamespace::SIGadget*>();
}
inline ::GlobalNamespace::SITechTreePageId GlobalNamespace::SIGadget::get_PageId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"get_PageId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SITechTreePageId>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::set_PageId(::GlobalNamespace::SITechTreePageId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"set_PageId", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::SIGadget::get_RequiredPrefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"get_RequiredPrefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadget::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::SIGadget::IsEquippedLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::SIGadget::GetJoystickInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"GetJoystickInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadget::ShouldProcessInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"ShouldProcessInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::SleepAfterDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SleepAfterDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIUpgradeSet GlobalNamespace::SIGadget::FilterUpgradeNodes(::GlobalNamespace::SIUpgradeSet  upgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SIUpgradeSet>(this, ___internal_method, upgrades);
}
inline void GlobalNamespace::SIGadget::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadget::RefreshUpgradeVisuals(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadget::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::GrabInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"GrabInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::ReleaseInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"ReleaseInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadget::FindAttachedHand(::by_ref<bool>  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"FindAttachedHand", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isLeft);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::SIGadget::GetAttachedPlayerRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"GetAttachedPlayerRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::OnEntityInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::OnEntityDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline void GlobalNamespace::SIGadget::ProcessClientToAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadget::ProcessAuthorityToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadget::ProcessClientToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadget::SendClientToAuthorityRPC(int32_t  rpcID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcID);
}
inline void GlobalNamespace::SIGadget::SendClientToAuthorityRPC(int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToAuthorityRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcID, data);
}
inline void GlobalNamespace::SIGadget::SendAuthorityToClientRPC(int32_t  rpcID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcID);
}
inline void GlobalNamespace::SIGadget::SendAuthorityToClientRPC(int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendAuthorityToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcID, data);
}
inline void GlobalNamespace::SIGadget::SendClientToClientRPC(int32_t  rpcID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToClientRPC", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcID);
}
inline void GlobalNamespace::SIGadget::SendClientToClientRPC(int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"SendClientToClientRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcID, data);
}
inline void GlobalNamespace::SIGadget::ApplyExclusionZone(::GlobalNamespace::SIExclusionZone*  exclusionZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"ApplyExclusionZone", {}, {::i2c::type_of<::GlobalNamespace::SIExclusionZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exclusionZone);
}
inline void GlobalNamespace::SIGadget::LeaveExclusionZone(::GlobalNamespace::SIExclusionZone*  exclusionZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"LeaveExclusionZone", {}, {::i2c::type_of<::GlobalNamespace::SIExclusionZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exclusionZone);
}
inline void GlobalNamespace::SIGadget::LeaveAllExclusionZones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"LeaveAllExclusionZones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadget::RecalcExclusionFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"RecalcExclusionFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadget::IsBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IsBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadget::IsBlocked(::GlobalNamespace::SIExclusionType  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IsBlocked", {}, {::i2c::type_of<::GlobalNamespace::SIExclusionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flag);
}
inline void GlobalNamespace::SIGadget::HandleBlockedActionChanged(bool  isBlocked)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadget*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBlocked);
}
inline void GlobalNamespace::SIGadget::IGameStateProvider_GameStateReceiverRegister(::GlobalNamespace::IGameStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IGameStateProvider.GameStateReceiverRegister", {}, {::i2c::type_of<::GlobalNamespace::IGameStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::SIGadget::IGameStateProvider_GameStateReceiverUnregister(::GlobalNamespace::IGameStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {"IGameStateProvider.GameStateReceiverUnregister", {}, {::i2c::type_of<::GlobalNamespace::IGameStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::SIGadget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadget* GlobalNamespace::SIGadget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadget*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::SIGadget::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::SIGadget::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPrefabRequirements"
constexpr  GlobalNamespace::SIGadget::operator ::GlobalNamespace::IPrefabRequirements*() noexcept {
return static_cast<::GlobalNamespace::IPrefabRequirements*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPrefabRequirements"
constexpr ::GlobalNamespace::IPrefabRequirements* GlobalNamespace::SIGadget::i___GlobalNamespace__IPrefabRequirements() noexcept {
return static_cast<::GlobalNamespace::IPrefabRequirements*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameActivatable"
constexpr  GlobalNamespace::SIGadget::operator ::GlobalNamespace::IGameActivatable*() noexcept {
return static_cast<::GlobalNamespace::IGameActivatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameActivatable"
constexpr ::GlobalNamespace::IGameActivatable* GlobalNamespace::SIGadget::i___GlobalNamespace__IGameActivatable() noexcept {
return static_cast<::GlobalNamespace::IGameActivatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameStateProvider"
constexpr  GlobalNamespace::SIGadget::operator ::GlobalNamespace::IGameStateProvider*() noexcept {
return static_cast<::GlobalNamespace::IGameStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameStateProvider"
constexpr ::GlobalNamespace::IGameStateProvider* GlobalNamespace::SIGadget::i___GlobalNamespace__IGameStateProvider() noexcept {
return static_cast<::GlobalNamespace::IGameStateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadget::SIGadget()   {
}
