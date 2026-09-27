#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetTapTeleporter.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetTapTeleporter_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetTapTeleporterDeployable_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.get_identifierColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::get_identifierColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e51b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_identifierColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.set_identifierColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::UnityEngine::Color)>(&::GlobalNamespace::SIGadgetTapTeleporter::set_identifierColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e51bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_identifierColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.get_useStealthTeleporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::get_useStealthTeleporters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e51c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_useStealthTeleporters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.set_useStealthTeleporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(bool)>(&::GlobalNamespace::SIGadgetTapTeleporter::set_useStealthTeleporters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e51d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_useStealthTeleporters", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.get_isVelocityPreserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::get_isVelocityPreserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e51d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_isVelocityPreserved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.set_isVelocityPreserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(bool)>(&::GlobalNamespace::SIGadgetTapTeleporter::set_isVelocityPreserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e51e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_isVelocityPreserved", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.get_hasInfiniteDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::get_hasInfiniteDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e51e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_hasInfiniteDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.set_hasInfiniteDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(bool)>(&::GlobalNamespace::SIGadgetTapTeleporter::set_hasInfiniteDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e51f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_hasInfiniteDuration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::OnEntityInit)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x58e51f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.HandleOnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SIGadgetTapTeleporter::HandleOnDestroyed)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58e56a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleOnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e57a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.HandleHandAttached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::HandleHandAttached)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58e58a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleHandAttached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.HandleHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::HandleHandDetach)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58e57a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleHandDetach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.HandleOnHandTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTapTeleporter::HandleOnHandTap)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58e59c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleOnHandTap", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.GenerateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::SIGadgetTapTeleporter::*)(int32_t)>(&::GlobalNamespace::SIGadgetTapTeleporter::GenerateColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58e5530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"GenerateColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(float_t)>(&::GlobalNamespace::SIGadgetTapTeleporter::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58e5d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.PlaceTapTeleporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTapTeleporter::PlaceTapTeleporter)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x58e5a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"PlaceTapTeleporter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.CheckValidTeleporterPlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTapTeleporter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTapTeleporter::CheckValidTeleporterPlacement)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58e5d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"CheckValidTeleporterPlacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetTapTeleporter::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58e5f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.ProcessClientToAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetTapTeleporter::ProcessClientToAuthorityRPC)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x58e5fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.ProcessClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetTapTeleporter::ProcessClientToClientRPC)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58e6664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.RemoveTeleporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(int32_t)>(&::GlobalNamespace::SIGadgetTapTeleporter::RemoveTeleporter)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58e62ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"RemoveTeleporter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.PlaceNewTapTeleporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, float_t)>(&::GlobalNamespace::SIGadgetTapTeleporter::PlaceNewTapTeleporter)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x58e63a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"PlaceNewTapTeleporter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.UpdateNewTeleporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::UpdateNewTeleporters)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58e68e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"UpdateNewTeleporters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)(int64_t, int64_t)>(&::GlobalNamespace::SIGadgetTapTeleporter::HandleStateChanged)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x58e6a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.ApplyIdentifierColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::ApplyIdentifierColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58e5620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"ApplyIdentifierColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.UpdateNextSelectionDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::UpdateNextSelectionDisplay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58e5654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"UpdateNextSelectionDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter.CycleSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::CycleSelection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58e5e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"CycleSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTapTeleporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTapTeleporter::*)()>(&::GlobalNamespace::SIGadgetTapTeleporter::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58e6bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonActivatable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_teleportPointPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportPointPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_teleportPointPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportPointPrefab;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_teleportPointPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportPointPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_blockedSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_blockedSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedSFX;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_blockedSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedSFX = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_placementDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementDelay;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_placementDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementDelay;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_placementDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementDelay = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_identifierColorDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifierColorDisplay;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_identifierColorDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifierColorDisplay;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_identifierColorDisplay(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___identifierColorDisplay = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_selectionColorDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionColorDisplay;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_selectionColorDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionColorDisplay;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_selectionColorDisplay(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectionColorDisplay = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_selectionColor1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionColor1;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_selectionColor1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionColor1;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_selectionColor1(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectionColor1 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_selectionColor2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionColor2;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_selectionColor2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionColor2;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_selectionColor2(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectionColor2 = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_portalDefaultDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalDefaultDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_portalDefaultDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalDefaultDuration;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_portalDefaultDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalDefaultDuration = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_placementCheckDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementCheckDistance;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_placementCheckDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementCheckDistance;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_placementCheckDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementCheckDistance = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__identifierColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifierColor_k__BackingField;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__identifierColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifierColor_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set__identifierColor_k__BackingField(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifierColor_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__useStealthTeleporters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useStealthTeleporters_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__useStealthTeleporters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useStealthTeleporters_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set__useStealthTeleporters_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useStealthTeleporters_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__isVelocityPreserved_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVelocityPreserved_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__isVelocityPreserved_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVelocityPreserved_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set__isVelocityPreserved_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVelocityPreserved_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__hasInfiniteDuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInfiniteDuration_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__hasInfiniteDuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInfiniteDuration_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set__hasInfiniteDuration_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasInfiniteDuration_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__selection1Teleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selection1Teleport;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__selection1Teleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selection1Teleport;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set__selection1Teleport(::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selection1Teleport = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__selection2Teleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selection2Teleport;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get__selection2Teleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selection2Teleport;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set__selection2Teleport(::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selection2Teleport = value;
}
constexpr bool& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_isHandTapSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandTapSetup;
}
constexpr bool const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_isHandTapSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHandTapSetup;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_isHandTapSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHandTapSetup = value;
}
constexpr bool& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_isActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_isActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActivated;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_isActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActivated = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_nextPlacementDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPlacementDelay;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_nextPlacementDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPlacementDelay;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_nextPlacementDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPlacementDelay = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_nextSelectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSelectionId;
}
constexpr int32_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_nextSelectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSelectionId;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_nextSelectionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSelectionId = value;
}
constexpr ::GlobalNamespace::SIUpgradeSet& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_instanceUpgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceUpgrades;
}
constexpr ::GlobalNamespace::SIUpgradeSet const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_instanceUpgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceUpgrades;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_instanceUpgrades(::GlobalNamespace::SIUpgradeSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceUpgrades = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_minBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minBrightness;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_minBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minBrightness;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_minBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minBrightness = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_maxBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBrightness;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_maxBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBrightness;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_maxBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxBrightness = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_overlapCheckLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCheckLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_overlapCheckLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCheckLayers;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_overlapCheckLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapCheckLayers = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_nearOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearOffset;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_nearOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearOffset;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_nearOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearOffset = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_farOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___farOffset;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_farOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___farOffset;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_farOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___farOffset = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_overlapCheckRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCheckRadius;
}
constexpr float_t const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_overlapCheckRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCheckRadius;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_overlapCheckRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapCheckRadius = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_overlapCheckResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCheckResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_get_overlapCheckResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapCheckResults;
}
constexpr void GlobalNamespace::SIGadgetTapTeleporter::__cordl_internal_set_overlapCheckResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapCheckResults = value;
}
inline ::UnityEngine::Color GlobalNamespace::SIGadgetTapTeleporter::get_identifierColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_identifierColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::set_identifierColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_identifierColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SIGadgetTapTeleporter::get_useStealthTeleporters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_useStealthTeleporters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::set_useStealthTeleporters(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_useStealthTeleporters", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SIGadgetTapTeleporter::get_isVelocityPreserved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_isVelocityPreserved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::set_isVelocityPreserved(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_isVelocityPreserved", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SIGadgetTapTeleporter::get_hasInfiniteDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"get_hasInfiniteDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::set_hasInfiniteDuration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"set_hasInfiniteDuration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::OnEntityInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::HandleOnDestroyed(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleOnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::HandleHandAttached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleHandAttached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::HandleHandDetach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleHandDetach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::HandleOnHandTap(bool  isLeft, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleOnHandTap", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, position, normal);
}
inline ::UnityEngine::Color GlobalNamespace::SIGadgetTapTeleporter::GenerateColor(int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"GenerateColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, seed);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::PlaceTapTeleporter(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"PlaceTapTeleporter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal);
}
inline bool GlobalNamespace::SIGadgetTapTeleporter::CheckValidTeleporterPlacement(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"CheckValidTeleporterPlacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, direction);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::ProcessClientToAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::ProcessClientToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::RemoveTeleporter(int32_t  selectId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"RemoveTeleporter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectId);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::PlaceNewTapTeleporter(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  selectionId, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"PlaceNewTapTeleporter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, selectionId, duration);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::UpdateNewTeleporters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"UpdateNewTeleporters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::HandleStateChanged(int64_t  oldState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::ApplyIdentifierColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"ApplyIdentifierColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::UpdateNextSelectionDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"UpdateNextSelectionDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::CycleSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {"CycleSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTapTeleporter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTapTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetTapTeleporter* GlobalNamespace::SIGadgetTapTeleporter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetTapTeleporter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetTapTeleporter::SIGadgetTapTeleporter()   {
}
