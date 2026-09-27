#pragma once
// IWYU pragma private; include "Fusion/HitboxManager.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "Fusion/zzzz__HitboxManager_def.hpp"
#include "Fusion/LagCompensation/zzzz__BoxOverlapQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__PositionRotationQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__PreProcessingDelegate_def.hpp"
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastAllQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__SphereOverlapQuery_def.hpp"
#include "Fusion/Statistics/zzzz__LagCompensationStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__LagCompensationStatisticsSnapshot_def.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
#include "Fusion/zzzz__IAfterTick_def.hpp"
#include "Fusion/zzzz__IBeforeSimulation_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__ISpawned_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/zzzz__LagCompensationSettings_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::HitboxManager.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::Fusion::PlayerRef, ::by_ref<::Fusion::LagCompensatedHit>, int32_t, ::Fusion::HitOptions, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::Raycast)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5f9203c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensatedHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::System::Nullable_1<int32_t>, ::System::Nullable_1<float_t>, ::by_ref<::Fusion::LagCompensatedHit>, int32_t, ::Fusion::HitOptions, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::Raycast)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5f92504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensatedHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::Fusion::PlayerRef, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, bool, ::Fusion::HitOptions, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::RaycastAll)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f9270c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::System::Nullable_1<int32_t>, ::System::Nullable_1<float_t>, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, bool, ::Fusion::HitOptions, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::RaycastAll)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f92864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.OverlapSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, float_t, ::Fusion::PlayerRef, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, ::Fusion::HitOptions, bool, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::OverlapSphere)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f929cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.OverlapSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, float_t, int32_t, ::System::Nullable_1<int32_t>, ::System::Nullable_1<float_t>, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, ::Fusion::HitOptions, bool, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::OverlapSphere)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f92af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.OverlapBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Fusion::PlayerRef, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, ::Fusion::HitOptions, bool, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::OverlapBox)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f92c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.OverlapBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::System::Nullable_1<int32_t>, ::System::Nullable_1<float_t>, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, int32_t, ::Fusion::HitOptions, bool, ::UnityEngine::QueryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*)>(&::Fusion::HitboxManager::OverlapBox)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f92d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.PositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(::Fusion::Hitbox*, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, bool, ::System::Nullable_1<int32_t>, ::System::Nullable_1<float_t>)>(&::Fusion::HitboxManager::PositionRotation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f92ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"PositionRotation", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.PositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(::Fusion::Hitbox*, ::Fusion::PlayerRef, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, bool)>(&::Fusion::HitboxManager::PositionRotation)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f93084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"PositionRotation", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.GetClosestHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensatedHit (*)(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*)>(&::Fusion::HitboxManager::GetClosestHit)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f931c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetClosestHit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxManager::*)(::Fusion::LagCompensation::RaycastQuery*, ::by_ref<::Fusion::LagCompensatedHit>)>(&::Fusion::HitboxManager::Raycast)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f93318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::Fusion::LagCompensation::RaycastQuery*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensatedHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::Fusion::LagCompensation::RaycastAllQuery*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, bool)>(&::Fusion::HitboxManager::RaycastAll)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f9343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::Fusion::LagCompensation::RaycastAllQuery*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.OverlapSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::Fusion::LagCompensation::SphereOverlapQuery*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, bool)>(&::Fusion::HitboxManager::OverlapSphere)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f934c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.OverlapBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::Fusion::LagCompensation::BoxOverlapQuery*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, bool)>(&::Fusion::HitboxManager::OverlapBox)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f9354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapBox", {}, {::i2c::type_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.GetPlayerTickAndAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(::Fusion::PlayerRef, ::by_ref<::System::Nullable_1<int32_t>>, ::by_ref<::System::Nullable_1<int32_t>>, ::by_ref<::System::Nullable_1<float_t>>)>(&::Fusion::HitboxManager::GetPlayerTickAndAlpha)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f935d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetPlayerTickAndAlpha", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.GetStatisticsSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::LagCompensationStatisticsSnapshot* (::Fusion::HitboxManager::*)()>(&::Fusion::HitboxManager::GetStatisticsSnapshot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f937a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetStatisticsSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.QueryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxManager::*)(::Fusion::LagCompensation::Query*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, bool)>(&::Fusion::HitboxManager::QueryInternal)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5f9223c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"QueryInternal", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.PositionRotationInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Fusion::HitboxManager::PositionRotationInternal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f92fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"PositionRotationInternal", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)()>(&::Fusion::HitboxManager::Init)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f93890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.InitQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)()>(&::Fusion::HitboxManager::InitQueries)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5f93c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"InitQueries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*)>(&::Fusion::HitboxManager::Init)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f93b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Init", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.GetObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>* (::Fusion::HitboxManager::*)(::Fusion::NetworkRunner*)>(&::Fusion::HitboxManager::GetObjects)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5f9393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetObjects", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.RegisterHitboxSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(int32_t, int32_t)>(&::Fusion::HitboxManager::RegisterHitboxSnapshot)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5f93f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RegisterHitboxSnapshot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.AdvanceAndRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(int32_t, int32_t)>(&::Fusion::HitboxManager::AdvanceAndRegister)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5f9418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"AdvanceAndRegister", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxManager::*)(::Fusion::HitboxRoot*)>(&::Fusion::HitboxManager::Remove)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f94614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Fusion_IAfterTick_AfterTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)()>(&::Fusion::HitboxManager::Fusion_IAfterTick_AfterTick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9462c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Fusion.IAfterTick.AfterTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Fusion_IBeforeSimulation_BeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)(int32_t)>(&::Fusion::HitboxManager::Fusion_IBeforeSimulation_BeforeSimulation)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f94688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Fusion.IBeforeSimulation.BeforeSimulation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager.Fusion_ISpawned_Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)()>(&::Fusion::HitboxManager::Fusion_ISpawned_Spawned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f94794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Fusion.ISpawned.Spawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxManager::*)()>(&::Fusion::HitboxManager::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f94798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::HitboxManager::__cordl_internal_get_BVHDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BVHDepth;
}
constexpr int32_t const& Fusion::HitboxManager::__cordl_internal_get_BVHDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BVHDepth;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set_BVHDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BVHDepth = value;
}
constexpr int32_t& Fusion::HitboxManager::__cordl_internal_get_BVHNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BVHNodes;
}
constexpr int32_t const& Fusion::HitboxManager::__cordl_internal_get_BVHNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BVHNodes;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set_BVHNodes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BVHNodes = value;
}
constexpr int32_t& Fusion::HitboxManager::__cordl_internal_get_TotalHitboxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalHitboxes;
}
constexpr int32_t const& Fusion::HitboxManager::__cordl_internal_get_TotalHitboxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalHitboxes;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set_TotalHitboxes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalHitboxes = value;
}
constexpr ::Fusion::LagCompensation::LagCompensationDraw*& Fusion::HitboxManager::__cordl_internal_get_DrawInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawInfo;
}
constexpr ::Fusion::LagCompensation::LagCompensationDraw* const& Fusion::HitboxManager::__cordl_internal_get_DrawInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawInfo;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set_DrawInfo(::Fusion::LagCompensation::LagCompensationDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*& Fusion::HitboxManager::__cordl_internal_get__raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHits;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>* const& Fusion::HitboxManager::__cordl_internal_get__raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHits;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__raycastHits(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHits = value;
}
constexpr ::Fusion::LagCompensation::RaycastQuery*& Fusion::HitboxManager::__cordl_internal_get__raycastQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastQuery;
}
constexpr ::Fusion::LagCompensation::RaycastQuery* const& Fusion::HitboxManager::__cordl_internal_get__raycastQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastQuery;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__raycastQuery(::Fusion::LagCompensation::RaycastQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastQuery = value;
}
constexpr ::Fusion::LagCompensation::RaycastAllQuery*& Fusion::HitboxManager::__cordl_internal_get__raycastAllQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastAllQuery;
}
constexpr ::Fusion::LagCompensation::RaycastAllQuery* const& Fusion::HitboxManager::__cordl_internal_get__raycastAllQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastAllQuery;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__raycastAllQuery(::Fusion::LagCompensation::RaycastAllQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastAllQuery = value;
}
constexpr ::Fusion::LagCompensation::SphereOverlapQuery*& Fusion::HitboxManager::__cordl_internal_get__sphereOverlapQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereOverlapQuery;
}
constexpr ::Fusion::LagCompensation::SphereOverlapQuery* const& Fusion::HitboxManager::__cordl_internal_get__sphereOverlapQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereOverlapQuery;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__sphereOverlapQuery(::Fusion::LagCompensation::SphereOverlapQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sphereOverlapQuery = value;
}
constexpr ::Fusion::LagCompensation::BoxOverlapQuery*& Fusion::HitboxManager::__cordl_internal_get__boxOverlapQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxOverlapQuery;
}
constexpr ::Fusion::LagCompensation::BoxOverlapQuery* const& Fusion::HitboxManager::__cordl_internal_get__boxOverlapQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxOverlapQuery;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__boxOverlapQuery(::Fusion::LagCompensation::BoxOverlapQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boxOverlapQuery = value;
}
constexpr ::Fusion::LagCompensationSettings*& Fusion::HitboxManager::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Fusion::LagCompensationSettings* const& Fusion::HitboxManager::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__settings(::Fusion::LagCompensationSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::Fusion::LagCompensation::HitboxBuffer*& Fusion::HitboxManager::__cordl_internal_get__hitboxBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitboxBuffer;
}
constexpr ::Fusion::LagCompensation::HitboxBuffer* const& Fusion::HitboxManager::__cordl_internal_get__hitboxBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitboxBuffer;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__hitboxBuffer(::Fusion::LagCompensation::HitboxBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitboxBuffer = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*& Fusion::HitboxManager::__cordl_internal_get__lagCompensatedHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lagCompensatedHits;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>* const& Fusion::HitboxManager::__cordl_internal_get__lagCompensatedHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lagCompensatedHits;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__lagCompensatedHits(::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lagCompensatedHits = value;
}
constexpr ::Fusion::Statistics::LagCompensationStatisticsManager*& Fusion::HitboxManager::__cordl_internal_get__lagCompStatManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lagCompStatManager;
}
constexpr ::Fusion::Statistics::LagCompensationStatisticsManager* const& Fusion::HitboxManager::__cordl_internal_get__lagCompStatManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lagCompStatManager;
}
constexpr void Fusion::HitboxManager::__cordl_internal_set__lagCompStatManager(::Fusion::Statistics::LagCompensationStatisticsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lagCompStatManager = value;
}
inline bool Fusion::HitboxManager::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, ::Fusion::PlayerRef  player, ::by_ref<::Fusion::LagCompensatedHit>  hit, int32_t  layerMask, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensatedHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, direction, length, player, hit, layerMask, options, queryTriggerInteraction, preProcessRoots);
}
inline bool Fusion::HitboxManager::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::by_ref<::Fusion::LagCompensatedHit>  hit, int32_t  layerMask, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensatedHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, direction, length, tick, tickTo, alpha, hit, layerMask, options, queryTriggerInteraction, preProcessRoots);
}
inline int32_t Fusion::HitboxManager::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, ::Fusion::PlayerRef  player, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, bool  clearHits, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, origin, direction, length, player, hits, layerMask, clearHits, options, queryTriggerInteraction, preProcessRoots);
}
inline int32_t Fusion::HitboxManager::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, bool  clearHits, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, origin, direction, length, tick, tickTo, alpha, hits, layerMask, clearHits, options, queryTriggerInteraction, preProcessRoots);
}
inline int32_t Fusion::HitboxManager::OverlapSphere(::UnityEngine::Vector3  origin, float_t  radius, ::Fusion::PlayerRef  player, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, origin, radius, player, hits, layerMask, options, clearHits, queryTriggerInteraction, preProcessRoots);
}
inline int32_t Fusion::HitboxManager::OverlapSphere(::UnityEngine::Vector3  origin, float_t  radius, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, origin, radius, tick, tickTo, alpha, hits, layerMask, options, clearHits, queryTriggerInteraction, preProcessRoots);
}
inline int32_t Fusion::HitboxManager::OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents, ::UnityEngine::Quaternion  orientation, ::Fusion::PlayerRef  player, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, center, extents, orientation, player, hits, layerMask, options, clearHits, queryTriggerInteraction, preProcessRoots);
}
inline int32_t Fusion::HitboxManager::OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents, ::UnityEngine::Quaternion  orientation, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::HitOptions>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::Fusion::LagCompensation::PreProcessingDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, center, extents, orientation, tick, tickTo, alpha, hits, layerMask, options, clearHits, queryTriggerInteraction, preProcessRoots);
}
inline void Fusion::HitboxManager::PositionRotation(::Fusion::Hitbox*  hitbox, int32_t  tick, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, bool  subtickAccuracy, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"PositionRotation", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitbox, tick, position, rotation, subtickAccuracy, tickTo, alpha);
}
inline void Fusion::HitboxManager::PositionRotation(::Fusion::Hitbox*  hitbox, ::Fusion::PlayerRef  player, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, bool  subTickAccuracy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"PositionRotation", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitbox, player, position, rotation, subTickAccuracy);
}
inline ::Fusion::LagCompensatedHit Fusion::HitboxManager::GetClosestHit(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetClosestHit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensatedHit>(nullptr, ___internal_method, hits);
}
inline bool Fusion::HitboxManager::Raycast(::Fusion::LagCompensation::RaycastQuery*  query, ::by_ref<::Fusion::LagCompensatedHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Raycast", {}, {::i2c::type_of<::Fusion::LagCompensation::RaycastQuery*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensatedHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, query, hit);
}
inline int32_t Fusion::HitboxManager::RaycastAll(::Fusion::LagCompensation::RaycastAllQuery*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::Fusion::LagCompensation::RaycastAllQuery*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, query, hits, clearHits);
}
inline int32_t Fusion::HitboxManager::OverlapSphere(::Fusion::LagCompensation::SphereOverlapQuery*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, query, hits, clearHits);
}
inline int32_t Fusion::HitboxManager::OverlapBox(::Fusion::LagCompensation::BoxOverlapQuery*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"OverlapBox", {}, {::i2c::type_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, query, hits, clearHits);
}
inline void Fusion::HitboxManager::GetPlayerTickAndAlpha(::Fusion::PlayerRef  player, ::by_ref<::System::Nullable_1<int32_t>>  tickFrom, ::by_ref<::System::Nullable_1<int32_t>>  tickTo, ::by_ref<::System::Nullable_1<float_t>>  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetPlayerTickAndAlpha", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, tickFrom, tickTo, alpha);
}
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* Fusion::HitboxManager::GetStatisticsSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetStatisticsSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(this, ___internal_method);
}
inline int32_t Fusion::HitboxManager::QueryInternal(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"QueryInternal", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, query, hits, clearHits);
}
inline void Fusion::HitboxManager::PositionRotationInternal(::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>  param, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"PositionRotationInternal", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param, position, rotation);
}
inline void Fusion::HitboxManager::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxManager::InitQueries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"InitQueries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxManager::Init(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Init", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialObjects);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>* Fusion::HitboxManager::GetObjects(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"GetObjects", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(this, ___internal_method, runner);
}
inline void Fusion::HitboxManager::RegisterHitboxSnapshot(int32_t  tick, int32_t  dataTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"RegisterHitboxSnapshot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, dataTick);
}
inline void Fusion::HitboxManager::AdvanceAndRegister(int32_t  tick, int32_t  dataTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"AdvanceAndRegister", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, dataTick);
}
inline bool Fusion::HitboxManager::Remove(::Fusion::HitboxRoot*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root);
}
inline void Fusion::HitboxManager::Fusion_IAfterTick_AfterTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Fusion.IAfterTick.AfterTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxManager::Fusion_IBeforeSimulation_BeforeSimulation(int32_t  forwardTickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Fusion.IBeforeSimulation.BeforeSimulation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forwardTickCount);
}
inline void Fusion::HitboxManager::Fusion_ISpawned_Spawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {"Fusion.ISpawned.Spawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HitboxManager* Fusion::HitboxManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HitboxManager*>());
}
/// @brief Convert operator to "::Fusion::IAfterTick"
constexpr  Fusion::HitboxManager::operator ::Fusion::IAfterTick*() noexcept {
return static_cast<::Fusion::IAfterTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IAfterTick"
constexpr ::Fusion::IAfterTick* Fusion::HitboxManager::i___Fusion__IAfterTick() noexcept {
return static_cast<::Fusion::IAfterTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::HitboxManager::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::HitboxManager::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IBeforeSimulation"
constexpr  Fusion::HitboxManager::operator ::Fusion::IBeforeSimulation*() noexcept {
return static_cast<::Fusion::IBeforeSimulation*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IBeforeSimulation"
constexpr ::Fusion::IBeforeSimulation* Fusion::HitboxManager::i___Fusion__IBeforeSimulation() noexcept {
return static_cast<::Fusion::IBeforeSimulation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::ISpawned"
constexpr  Fusion::HitboxManager::operator ::Fusion::ISpawned*() noexcept {
return static_cast<::Fusion::ISpawned*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ISpawned"
constexpr ::Fusion::ISpawned* Fusion::HitboxManager::i___Fusion__ISpawned() noexcept {
return static_cast<::Fusion::ISpawned*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::HitboxManager::HitboxManager()   {
}
