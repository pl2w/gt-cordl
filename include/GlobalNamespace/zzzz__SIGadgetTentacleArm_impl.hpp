#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetTentacleArm.hpp"
#include "GlobalNamespace/zzzz__GTRendererMatSlot_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetTentacleArm_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__IEnergyGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetTentacleArm_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TakeMyHand_HandLink_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.get_isAnchored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::get_isAnchored)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e79a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_isAnchored", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.set_isAnchored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(bool)>(&::GlobalNamespace::SIGadgetTentacleArm::set_isAnchored)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e79ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"set_isAnchored", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.get_isHoldingHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::get_isHoldingHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e79b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_isHoldingHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.set_isHoldingHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(bool)>(&::GlobalNamespace::SIGadgetTentacleArm::set_isHoldingHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e79bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"set_isHoldingHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::Awake)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x58e79c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58e7f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58e8410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::OnGrabbed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58e8504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::OnSnapped)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58e8584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnSnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::OnReleased)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58e8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnUnsnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::OnUnsnapped)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58e8b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnUnsnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::CheckInput)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58e8b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.GetIdealClawPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SIGadgetTentacleArm::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::SIGadgetTentacleArm::GetIdealClawPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58e8ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GetIdealClawPosition", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(float_t)>(&::GlobalNamespace::SIGadgetTentacleArm::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x1adc;
  constexpr static std::size_t addrs = 0x58e8c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.UpdateFuelGauge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::UpdateFuelGauge)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58ea75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateFuelGauge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(float_t)>(&::GlobalNamespace::SIGadgetTentacleArm::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x58eacbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetTentacleArm::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58eb3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.GetStateLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::GetStateLong)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58eaae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GetStateLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.SetClawAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTentacleArm::SetClawAnchor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x58ea858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"SetClawAnchor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.ClearClawAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::ClearClawAnchor)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x58e863c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"ClearClawAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTentacleArm::OnKnockback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58eb614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.SetGravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::SetGravityOverride)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58eb518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"SetGravityOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.RemoveGravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::RemoveGravityOverride)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58e8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"RemoveGravityOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.GravityOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::SIGadgetTentacleArm::GravityOverrideFunction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58eb62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnEntityStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(int64_t, int64_t)>(&::GlobalNamespace::SIGadgetTentacleArm::OnEntityStateChanged)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58eb630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::OnEntityInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58eb878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.GetPlaneIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTentacleArm::GetPlaneIntersection)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x58eb884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GetPlaneIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.SplineSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetTentacleArm::SplineSample)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58ebb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"SplineSample", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.UpdateTentacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(::UnityEngine::Material*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SIGadgetTentacleArm::UpdateTentacle)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x58ebc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateTentacle", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::CallBack)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x58e8018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"CallBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.UpdateTentacleHoldingHandPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(::GlobalNamespace::TakeMyHand_HandLink*)>(&::GlobalNamespace::SIGadgetTentacleArm::UpdateTentacleHoldingHandPos)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x58ec1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateTentacleHoldingHandPos", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.get_UsesEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::get_UsesEnergy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ec350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_UsesEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::get_IsFull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58ec358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_IsFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm.UpdateRecharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)(float_t)>(&::GlobalNamespace::SIGadgetTentacleArm::UpdateRecharge)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58ec36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateRecharge", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm::*)()>(&::GlobalNamespace::SIGadgetTentacleArm::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x58ec3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_claw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___claw;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_claw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___claw;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_claw(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___claw = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawHoldingVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawHoldingVisual;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawHoldingVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawHoldingVisual;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawHoldingVisual(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawHoldingVisual = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawReleasedVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawReleasedVisual;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawReleasedVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawReleasedVisual;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawReleasedVisual(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawReleasedVisual = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_worldCollisionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldCollisionLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_worldCollisionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldCollisionLayers;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_worldCollisionLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldCollisionLayers = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_marker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_marker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marker;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_marker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___marker = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_maxTentacleLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTentacleLength;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_maxTentacleLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTentacleLength;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_maxTentacleLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTentacleLength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleForwardAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleForwardAdjustment;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleForwardAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleForwardAdjustment;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleForwardAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleForwardAdjustment = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleRenderer;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleAnchor;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleAnchor = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleRenderer2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleRenderer2;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleRenderer2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleRenderer2;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleRenderer2(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleRenderer2 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleAnchor2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleAnchor2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleAnchor2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleAnchor2;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleAnchor2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleAnchor2 = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_attachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_attachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSound;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_attachSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_detachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_detachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachSound;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_detachSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detachSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_attachFailSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachFailSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_attachFailSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachFailSound;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_attachFailSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachFailSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_detachFailSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachFailSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_detachFailSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachFailSound;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_detachFailSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detachFailSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lowFuelSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowFuelSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lowFuelSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowFuelSound;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_lowFuelSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowFuelSound = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticStrengthOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrengthOnGrab;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticStrengthOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrengthOnGrab;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hapticStrengthOnGrab(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrengthOnGrab = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticDurationOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDurationOnGrab;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticDurationOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDurationOnGrab;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hapticDurationOnGrab(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDurationOnGrab = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticStrengthOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrengthOnRelease;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticStrengthOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrengthOnRelease;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hapticStrengthOnRelease(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrengthOnRelease = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticDurationOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDurationOnRelease;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hapticDurationOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDurationOnRelease;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hapticDurationOnRelease(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDurationOnRelease = value;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonActivatable = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_ClawMaxBlendSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClawMaxBlendSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_ClawMaxBlendSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClawMaxBlendSpeed;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_ClawMaxBlendSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClawMaxBlendSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_ClawMaxRotBlendSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClawMaxRotBlendSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_ClawMaxRotBlendSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClawMaxRotBlendSpeed;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_ClawMaxRotBlendSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClawMaxRotBlendSpeed = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__gaugeMatPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gaugeMatPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__gaugeMatPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gaugeMatPropBlock;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__gaugeMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gaugeMatPropBlock = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_m_gaugeMatSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gaugeMatSlots;
}
constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_m_gaugeMatSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gaugeMatSlots;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_m_gaugeMatSlots(::ArrayW<::GlobalNamespace::GTRendererMatSlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gaugeMatSlots = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_fuelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelSize;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_fuelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelSize;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_fuelSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fuelSize = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_currentFuel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFuel;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_currentFuel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFuel;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_currentFuel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFuel = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelPerSecond_Holding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelPerSecond_Holding;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelPerSecond_Holding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelPerSecond_Holding;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_FuelPerSecond_Holding(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FuelPerSecond_Holding = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_Wall_Multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_Wall_Multiplier;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_Wall_Multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_Wall_Multiplier;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_FuelCost_Wall_Multiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FuelCost_Wall_Multiplier = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_Slippery_Multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_Slippery_Multiplier;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_Slippery_Multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_Slippery_Multiplier;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_FuelCost_Slippery_Multiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FuelCost_Slippery_Multiplier = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelPerSecond_Recharging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelPerSecond_Recharging;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelPerSecond_Recharging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelPerSecond_Recharging;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_FuelPerSecond_Recharging(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FuelPerSecond_Recharging = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_Grab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_Grab;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_Grab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_Grab;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_FuelCost_Grab(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FuelCost_Grab = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_JumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_JumpSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_FuelCost_JumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FuelCost_JumpSpeed;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_FuelCost_JumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FuelCost_JumpSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_MaxTentacleJumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTentacleJumpSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_MaxTentacleJumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTentacleJumpSpeed;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_MaxTentacleJumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxTentacleJumpSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_LengthFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthFactor;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_LengthFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthFactor;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_LengthFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthFactor = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_MaxGrabAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGrabAngle;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_MaxGrabAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxGrabAngle;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_MaxGrabAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxGrabAngle = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_WallAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WallAngle;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_WallAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WallAngle;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_WallAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WallAngle = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_canHoldSlipperyWalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canHoldSlipperyWalls;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_canHoldSlipperyWalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canHoldSlipperyWalls;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_canHoldSlipperyWalls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canHoldSlipperyWalls = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasTentacle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTentacle2;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasTentacle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTentacle2;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hasTentacle2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasTentacle2 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleMat;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleMat2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleMat2;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleMat2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleMat2;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleMat2(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleMat2 = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleStartDir_HASH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleStartDir_HASH;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleStartDir_HASH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleStartDir_HASH;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleStartDir_HASH(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleStartDir_HASH = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleEnd_HASH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleEnd_HASH;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleEnd_HASH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleEnd_HASH;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleEnd_HASH(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleEnd_HASH = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleEndDir_HASH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleEndDir_HASH;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleEndDir_HASH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleEndDir_HASH;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleEndDir_HASH(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleEndDir_HASH = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleRingOrigin_HASH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleRingOrigin_HASH;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_tentacleRingOrigin_HASH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tentacleRingOrigin_HASH;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_tentacleRingOrigin_HASH(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tentacleRingOrigin_HASH = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_isLeftHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHanded;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_isLeftHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHanded;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_isLeftHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHanded = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_knownSafePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knownSafePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_knownSafePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knownSafePosition;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_knownSafePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knownSafePosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawHoldAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawHoldAdjustment;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawHoldAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawHoldAdjustment;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawHoldAdjustment(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawHoldAdjustment = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawAnchorPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawAnchorPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawAnchorPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawAnchorPosition;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawAnchorPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawAnchorPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lastRequestedPlayerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedPlayerPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lastRequestedPlayerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedPlayerPosition;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_lastRequestedPlayerPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRequestedPlayerPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawAnchorRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawAnchorRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawAnchorRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawAnchorRotation;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawAnchorRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawAnchorRotation = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_isGripBroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGripBroken;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_isGripBroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGripBroken;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_isGripBroken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGripBroken = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasGravityOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasGravityOverride;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasGravityOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasGravityOverride;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hasGravityOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasGravityOverride = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_isLowFuel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLowFuel;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_isLowFuel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLowFuel;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_isLowFuel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLowFuel = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasFailedToGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFailedToGrab;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasFailedToGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFailedToGrab;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hasFailedToGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasFailedToGrab = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__fps_holding_base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fps_holding_base;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__fps_holding_base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fps_holding_base;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__fps_holding_base(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fps_holding_base = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__fps_recharging_base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fps_recharging_base;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__fps_recharging_base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fps_recharging_base;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__fps_recharging_base(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fps_recharging_base = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__grabCost_base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabCost_base;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__grabCost_base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabCost_base;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__grabCost_base(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabCost_base = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__jumpCost_base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpCost_base;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__jumpCost_base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpCost_base;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__jumpCost_base(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpCost_base = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__jumpSpeed_base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpSpeed_base;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__jumpSpeed_base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpSpeed_base;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__jumpSpeed_base(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpSpeed_base = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__grabAngle_base()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabAngle_base;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__grabAngle_base() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabAngle_base;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__grabAngle_base(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabAngle_base = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__min_grab_dot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min_grab_dot;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__min_grab_dot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min_grab_dot;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__min_grab_dot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____min_grab_dot = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__wall_angle_dot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wall_angle_dot;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__wall_angle_dot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wall_angle_dot;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__wall_angle_dot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wall_angle_dot = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__current_grab_fps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_grab_fps;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__current_grab_fps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current_grab_fps;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__current_grab_fps(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current_grab_fps = value;
}
constexpr float_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__lowFuelThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowFuelThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__lowFuelThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowFuelThreshold;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__lowFuelThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lowFuelThreshold = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__isAnchored_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAnchored_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__isAnchored_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAnchored_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__isAnchored_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAnchored_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__isHoldingHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoldingHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get__isHoldingHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHoldingHand_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set__isHoldingHand_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHoldingHand_k__BackingField = value;
}
constexpr ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_heldPlayerCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldPlayerCallback;
}
constexpr ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback* const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_heldPlayerCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldPlayerCallback;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_heldPlayerCallback(::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldPlayerCallback = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasRigCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRigCallback;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_hasRigCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasRigCallback;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_hasRigCallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasRigCallback = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_rigForCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigForCallback;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_rigForCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigForCallback;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_rigForCallback(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigForCallback = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawVisualPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawVisualPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawVisualPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawVisualPos;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawVisualPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawVisualPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawVisualRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawVisualRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_clawVisualRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clawVisualRot;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_clawVisualRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clawVisualRot = value;
}
constexpr bool& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_wasGrabPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasGrabPressed;
}
constexpr bool const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_wasGrabPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasGrabPressed;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_wasGrabPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasGrabPressed = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lastCallbackFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCallbackFrame;
}
constexpr int32_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lastCallbackFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCallbackFrame;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_lastCallbackFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCallbackFrame = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lastHeldCallbackFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldCallbackFrame;
}
constexpr int32_t const& GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_get_lastHeldCallbackFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldCallbackFrame;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm::__cordl_internal_set_lastHeldCallbackFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeldCallbackFrame = value;
}
inline bool GlobalNamespace::SIGadgetTentacleArm::get_isAnchored()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_isAnchored", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::set_isAnchored(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"set_isAnchored", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SIGadgetTentacleArm::get_isHoldingHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_isHoldingHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::set_isHoldingHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"set_isHoldingHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIGadgetTentacleArm::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnSnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnSnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnUnsnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnUnsnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetTentacleArm::CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SIGadgetTentacleArm::GetIdealClawPosition(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GetIdealClawPosition", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, rig);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetTentacleArm::UpdateFuelGauge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateFuelGauge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetTentacleArm::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline int64_t GlobalNamespace::SIGadgetTentacleArm::GetStateLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GetStateLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::SetClawAnchor(::UnityEngine::Vector3  clawPosition, ::UnityEngine::Quaternion  clawRotation, ::UnityEngine::Vector3  adjustment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"SetClawAnchor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clawPosition, clawRotation, adjustment);
}
inline void GlobalNamespace::SIGadgetTentacleArm::ClearClawAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"ClearClawAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnKnockback(::UnityEngine::Vector3  knockbackVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knockbackVector);
}
inline void GlobalNamespace::SIGadgetTentacleArm::SetGravityOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"SetGravityOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::RemoveGravityOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"RemoveGravityOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnEntityStateChanged(int64_t  oldState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::SIGadgetTentacleArm::OnEntityInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SIGadgetTentacleArm::GetPlaneIntersection(::UnityEngine::Vector3  p1Pos, ::UnityEngine::Vector3  p1Norm, ::UnityEngine::Vector3  p2Pos, ::UnityEngine::Vector3  p2Norm, ::UnityEngine::Vector3  refPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"GetPlaneIntersection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p1Pos, p1Norm, p2Pos, p2Norm, refPoint);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SIGadgetTentacleArm::SplineSample(float_t  theta, ::UnityEngine::Vector3  startDir, ::UnityEngine::Vector3  endPos, ::UnityEngine::Vector3  endDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"SplineSample", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, theta, startDir, endPos, endDir);
}
inline void GlobalNamespace::SIGadgetTentacleArm::UpdateTentacle(::UnityEngine::Material*  material, ::UnityEngine::Transform*  tentacle, ::UnityEngine::Transform*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateTentacle", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, tentacle, anchor);
}
inline void GlobalNamespace::SIGadgetTentacleArm::CallBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"CallBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::UpdateTentacleHoldingHandPos(::GlobalNamespace::TakeMyHand_HandLink*  heldHandLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateTentacleHoldingHandPos", {}, {::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heldHandLink);
}
inline bool GlobalNamespace::SIGadgetTentacleArm::get_UsesEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_UsesEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetTentacleArm::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm::UpdateRecharge(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {"UpdateRecharge", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetTentacleArm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetTentacleArm* GlobalNamespace::SIGadgetTentacleArm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetTentacleArm*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GlobalNamespace::SIGadgetTentacleArm::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::SIGadgetTentacleArm::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IEnergyGadget"
constexpr  GlobalNamespace::SIGadgetTentacleArm::operator ::GlobalNamespace::IEnergyGadget*() noexcept {
return static_cast<::GlobalNamespace::IEnergyGadget*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEnergyGadget"
constexpr ::GlobalNamespace::IEnergyGadget* GlobalNamespace::SIGadgetTentacleArm::i___GlobalNamespace__IEnergyGadget() noexcept {
return static_cast<::GlobalNamespace::IEnergyGadget*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetTentacleArm::SIGadgetTentacleArm()   {
}
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::*)(::GlobalNamespace::SIGadgetTentacleArm*)>(&::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59d49d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetTentacleArm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::TakeMyHand_HandLink*)>(&::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::Register)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59d4a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::*)()>(&::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::Unregister)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59d4a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {"Unregister", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback.CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::*)()>(&::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::CallBack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59d4ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {"CallBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetTentacleArm>& GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetTentacleArm> const& GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_set_parent(::UnityW<::GlobalNamespace::SIGadgetTentacleArm>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_get_heldRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_get_heldRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldRig;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_set_heldRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldRig = value;
}
constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>& GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_get_heldHandLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldHandLink;
}
constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink> const& GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_get_heldHandLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldHandLink;
}
constexpr void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::__cordl_internal_set_heldHandLink(::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldHandLink = value;
}
inline void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::_ctor(::GlobalNamespace::SIGadgetTentacleArm*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetTentacleArm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::Register(::GlobalNamespace::VRRig*  heldPlayer, ::GlobalNamespace::TakeMyHand_HandLink*  heldHandLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::TakeMyHand_HandLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heldPlayer, heldHandLink);
}
inline void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::Unregister()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {"Unregister", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::CallBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(),
                        {"CallBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback* GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::New_ctor(::GlobalNamespace::SIGadgetTentacleArm*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback*>(parent));
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetTentacleArm_HeldPlayerCallback::SIGadgetTentacleArm_HeldPlayerCallback()   {
}
