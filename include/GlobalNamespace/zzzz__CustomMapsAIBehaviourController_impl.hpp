#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsAIBehaviourController.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AgentBehaviours_impl.hpp"
#include "UnityEngine/zzzz__Animator_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAIBehaviourController_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AgentBehaviours_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__NavAgentType_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAIBehaviourController_CustomMapsAIBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.set_TargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::CustomMapsAIBehaviourController::set_TargetPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c34dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"set_TargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.get_TargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::get_TargetPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c34e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"get_TargetPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59c34ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59c3634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::CustomMapsAIBehaviourController::SetTarget)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59c3458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"SetTarget", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.ClearTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::ClearTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59c2008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"ClearTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59c36c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59c3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.InitAnimators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::InitAnimators)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59c3a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"InitAnimators", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.UpdateAnimators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::UpdateAnimators)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59c38d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"UpdateAnimators", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.PlayAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::StringW, float_t)>(&::GlobalNamespace::CustomMapsAIBehaviourController::PlayAnimation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59c2710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"PlayAnimation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.IsAnimationPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::StringW)>(&::GlobalNamespace::CustomMapsAIBehaviourController::IsAnimationPlaying)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59c1d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsAnimationPlaying", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.SetupBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::GT_CustomMapSupportRuntime::AIAgent*)>(&::GlobalNamespace::CustomMapsAIBehaviourController::SetupBehaviours)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x59c3b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"SetupBehaviours", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.StopMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::StopMoving)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59c20bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"StopMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.RequestDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CustomMapsAIBehaviourController::RequestDestination)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59c3188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"RequestDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnThink)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x59c36dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnThink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnNetworkBehaviourStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(uint8_t)>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnNetworkBehaviourStateChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59c3d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnNetworkBehaviourStateChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnEntityInit)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x59c3e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.SetupNewEnemy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::GT_CustomMapSupportRuntime::AIAgent*)>(&::GlobalNamespace::CustomMapsAIBehaviourController::SetupNewEnemy)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x59c4168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"SetupNewEnemy", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.GetNavAgentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::GT_CustomMapSupportRuntime::NavAgentType)>(&::GlobalNamespace::CustomMapsAIBehaviourController::GetNavAgentType)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x59c4420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"GetNavAgentType", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::NavAgentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c4574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)(int64_t, int64_t)>(&::GlobalNamespace::CustomMapsAIBehaviourController::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c4578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.FindBestTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GlobalNamespace::CustomMapsAIBehaviourController::FindBestTarget)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x59c28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"FindBestTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.IsTargetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::UnityEngine::Vector3, ::GlobalNamespace::GRPlayer*, float_t)>(&::GlobalNamespace::CustomMapsAIBehaviourController::IsTargetVisible)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x59c17a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsTargetVisible", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.IsTargetInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::UnityEngine::Vector3, ::GlobalNamespace::GRPlayer*, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::CustomMapsAIBehaviourController::IsTargetInRange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59c1b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsTargetInRange", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController.IsTargetable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAIBehaviourController::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::CustomMapsAIBehaviourController::IsTargetable)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x59c1e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsTargetable", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAIBehaviourController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAIBehaviourController::*)()>(&::GlobalNamespace::CustomMapsAIBehaviourController::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x59c457c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_animators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_animators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animators;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animators = value;
}
constexpr int16_t& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_luaAgentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___luaAgentID;
}
constexpr int16_t const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_luaAgentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___luaAgentID;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_luaAgentID(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___luaAgentID = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_tempRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_tempRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRigs;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRigs = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_visibilityLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_visibilityLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityLayerMask;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_visibilityLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibilityLayerMask = value;
}
constexpr bool& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_allowTargetingTaggedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowTargetingTaggedPlayers;
}
constexpr bool const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_allowTargetingTaggedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowTargetingTaggedPlayers;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_allowTargetingTaggedPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowTargetingTaggedPlayers = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get__TargetPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetPlayer_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get__TargetPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetPlayer_k__BackingField;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set__TargetPlayer_k__BackingField(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetPlayer_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>*& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_behaviourDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviourDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>* const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_behaviourDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviourDict;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_behaviourDict(::System::Collections::Generic::Dictionary_2<::GT_CustomMapSupportRuntime::AgentBehaviours,::GlobalNamespace::CustomMapsBehaviourBase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviourDict = value;
}
constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_usedBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>* const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_usedBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedBehaviours;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_usedBehaviours(::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedBehaviours = value;
}
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_currentBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBehaviour;
}
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_currentBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBehaviour;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_currentBehaviour(::GT_CustomMapSupportRuntime::AgentBehaviours  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBehaviour = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_currentBehaviourIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBehaviourIndex;
}
constexpr int32_t const& GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_get_currentBehaviourIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBehaviourIndex;
}
constexpr void GlobalNamespace::CustomMapsAIBehaviourController::__cordl_internal_set_currentBehaviourIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBehaviourIndex = value;
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::setStaticF_movementSpeedParamIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "movementSpeedParamIndex", ::GlobalNamespace::CustomMapsAIBehaviourController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapsAIBehaviourController::getStaticF_movementSpeedParamIndex()  {
return ::cordl_internals::getStaticField<int32_t, "movementSpeedParamIndex", ::GlobalNamespace::CustomMapsAIBehaviourController*>();
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::setStaticF_visibilityHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "visibilityHits", ::GlobalNamespace::CustomMapsAIBehaviourController*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> GlobalNamespace::CustomMapsAIBehaviourController::getStaticF_visibilityHits()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "visibilityHits", ::GlobalNamespace::CustomMapsAIBehaviourController*>();
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::set_TargetPlayer(::GlobalNamespace::GRPlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"set_TargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::CustomMapsAIBehaviourController::get_TargetPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"get_TargetPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::SetTarget(::GlobalNamespace::GRPlayer*  newTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"SetTarget", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTarget);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::ClearTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"ClearTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::InitAnimators()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"InitAnimators", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::UpdateAnimators()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"UpdateAnimators", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::PlayAnimation(::StringW  stateName, float_t  blendTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"PlayAnimation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, blendTime);
}
inline bool GlobalNamespace::CustomMapsAIBehaviourController::IsAnimationPlaying(::StringW  stateName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsAnimationPlaying", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stateName);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::SetupBehaviours(::GT_CustomMapSupportRuntime::AIAgent*  aiAgent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"SetupBehaviours", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aiAgent);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::StopMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"StopMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::RequestDestination(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"RequestDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnThink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnThink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnNetworkBehaviourStateChanged(uint8_t  newstate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnNetworkBehaviourStateChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newstate);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::SetupNewEnemy(::GT_CustomMapSupportRuntime::AIAgent*  newEnemy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"SetupNewEnemy", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEnemy);
}
inline int32_t GlobalNamespace::CustomMapsAIBehaviourController::GetNavAgentType(::GT_CustomMapSupportRuntime::NavAgentType  navType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"GetNavAgentType", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::NavAgentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, navType);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::CustomMapsAIBehaviourController::FindBestTarget(::UnityEngine::Vector3  sourcePos, float_t  maxRange, float_t  maxRangeSq, float_t  minDotVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"FindBestTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(this, ___internal_method, sourcePos, maxRange, maxRangeSq, minDotVal);
}
inline bool GlobalNamespace::CustomMapsAIBehaviourController::IsTargetVisible(::UnityEngine::Vector3  startPos, ::GlobalNamespace::GRPlayer*  target, float_t  maxDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsTargetVisible", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startPos, target, maxDist);
}
inline bool GlobalNamespace::CustomMapsAIBehaviourController::IsTargetInRange(::UnityEngine::Vector3  startPos, ::GlobalNamespace::GRPlayer*  target, float_t  maxRangeSq, ::by_ref<::UnityEngine::Vector3>  toTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsTargetInRange", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startPos, target, maxRangeSq, toTarget);
}
inline bool GlobalNamespace::CustomMapsAIBehaviourController::IsTargetable(::GlobalNamespace::GRPlayer*  potentialTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {"IsTargetable", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, potentialTarget);
}
inline void GlobalNamespace::CustomMapsAIBehaviourController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsAIBehaviourController* GlobalNamespace::CustomMapsAIBehaviourController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsAIBehaviourController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::CustomMapsAIBehaviourController::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::CustomMapsAIBehaviourController::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsAIBehaviourController::CustomMapsAIBehaviourController()   {
}
