#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentPlatformGenerator.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverFieldInfo_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentPlatformGenerator_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTryResolveInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefMonoBehaviour_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentPlatformGenerator_BubbleData_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentPlatformGenerator_BubbleSpawnDebug_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d3206c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d32134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d32224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d32290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(bool)>(&::GorillaTag::ScienceExperimentPlatformGenerator::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d32298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d322a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.RemoveExpiredBubbles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(double_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::RemoveExpiredBubbles)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5d32b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"RemoveExpiredBubbles", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.SpawnNewBubbles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(double_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::SpawnNewBubbles)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d32cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnNewBubbles", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.UpdateActiveBubbles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(double_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::UpdateActiveBubbles)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5d32dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"UpdateActiveBubbles", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.UpdateTrails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(double_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::UpdateTrails)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x5d32354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"UpdateTrails", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.SpawnRockAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(double_t, float_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::SpawnRockAuthority)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5d33134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnRockAuthority", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.SpawnTrailAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(double_t, float_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::SpawnTrailAuthority)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5d33524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnTrailAuthority", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.SpawnSodaBubbleLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(::UnityEngine::Vector2, float_t, float_t, double_t, bool, ::UnityEngine::Vector3)>(&::GorillaTag::ScienceExperimentPlatformGenerator::SpawnSodaBubbleLocal)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5d33980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnSodaBubbleLocal", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.SpawnSodaBubbleRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(::UnityEngine::Vector2, float_t, float_t, double_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentPlatformGenerator::SpawnSodaBubbleRPC)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5d33fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnSodaBubbleRPC", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GetSpawnPositionWithClearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GorillaTag::ScienceExperimentPlatformGenerator::*)(::UnityEngine::Vector2, float_t, float_t, ::UnityEngine::Vector3)>(&::GorillaTag::ScienceExperimentPlatformGenerator::GetSpawnPositionWithClearance)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5d33cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GetSpawnPositionWithClearance", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d342e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d34390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(int32_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d34398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentPlatformGenerator::*)(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo)>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d343a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d34450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)(int32_t)>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d344d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::_ctor)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5d34544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d348b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentPlatformGenerator.GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::ScienceExperimentPlatformGenerator::*)()>(&::GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d348c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_spawnedPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_spawnedPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedPrefab;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_spawnedPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedPrefab = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_scaleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFactor;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_scaleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleFactor;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_scaleFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleFactor = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_surfaceRadiusSpawnRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceRadiusSpawnRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_surfaceRadiusSpawnRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceRadiusSpawnRange;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_surfaceRadiusSpawnRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceRadiusSpawnRange = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_lifetimeRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetimeRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_lifetimeRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetimeRange;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_lifetimeRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifetimeRange = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_sizeRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_sizeRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeRange;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_sizeRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeRange = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockCountVsLavaProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockCountVsLavaProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockCountVsLavaProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockCountVsLavaProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_rockCountVsLavaProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rockCountVsLavaProgress = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubbleCountMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleCountMultiplier;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubbleCountMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleCountMultiplier;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_bubbleCountMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubbleCountMultiplier = value;
}
constexpr int32_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_maxBubbleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBubbleCount;
}
constexpr int32_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_maxBubbleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBubbleCount;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_maxBubbleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxBubbleCount = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockLifetimeMultiplierVsLavaProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockLifetimeMultiplierVsLavaProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockLifetimeMultiplierVsLavaProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockLifetimeMultiplierVsLavaProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_rockLifetimeMultiplierVsLavaProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rockLifetimeMultiplierVsLavaProgress = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockMaxSizeMultiplierVsLavaProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockMaxSizeMultiplierVsLavaProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockMaxSizeMultiplierVsLavaProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockMaxSizeMultiplierVsLavaProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_rockMaxSizeMultiplierVsLavaProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rockMaxSizeMultiplierVsLavaProgress = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_spawnRadiusMultiplierVsLavaProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRadiusMultiplierVsLavaProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_spawnRadiusMultiplierVsLavaProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRadiusMultiplierVsLavaProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_spawnRadiusMultiplierVsLavaProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRadiusMultiplierVsLavaProgress = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockSizeVsLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockSizeVsLifetime;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_rockSizeVsLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockSizeVsLifetime;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_rockSizeVsLifetime(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rockSizeVsLifetime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailSpawnRateVsProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailSpawnRateVsProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailSpawnRateVsProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailSpawnRateVsProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailSpawnRateVsProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailSpawnRateVsProgress = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailSpawnRateMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailSpawnRateMultiplier;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailSpawnRateMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailSpawnRateMultiplier;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailSpawnRateMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailSpawnRateMultiplier = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleLifetimeVsProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleLifetimeVsProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleLifetimeVsProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleLifetimeVsProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailBubbleLifetimeVsProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailBubbleLifetimeVsProgress = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleBoundaryRadiusVsProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleBoundaryRadiusVsProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleBoundaryRadiusVsProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleBoundaryRadiusVsProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailBubbleBoundaryRadiusVsProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailBubbleBoundaryRadiusVsProgress = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleLifetimeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleLifetimeMultiplier;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleLifetimeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleLifetimeMultiplier;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailBubbleLifetimeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailBubbleLifetimeMultiplier = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailDistanceBetweenSpawns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailDistanceBetweenSpawns;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailDistanceBetweenSpawns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailDistanceBetweenSpawns;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailDistanceBetweenSpawns(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailDistanceBetweenSpawns = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailMaxTurnAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailMaxTurnAngle;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailMaxTurnAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailMaxTurnAngle;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailMaxTurnAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailMaxTurnAngle = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleSize;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailBubbleSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailBubbleSize;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailBubbleSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailBubbleSize = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailCountVsProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailCountVsProgress;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailCountVsProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailCountVsProgress;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailCountVsProgress(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailCountVsProgress = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailCountMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailCountMultiplier;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailCountMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailCountMultiplier;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailCountMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailCountMultiplier = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailEdgeAvoidanceSpawnsMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailEdgeAvoidanceSpawnsMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailEdgeAvoidanceSpawnsMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailEdgeAvoidanceSpawnsMinMax;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailEdgeAvoidanceSpawnsMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailEdgeAvoidanceSpawnsMinMax = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubblePopAnticipationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblePopAnticipationTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubblePopAnticipationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblePopAnticipationTime;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_bubblePopAnticipationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubblePopAnticipationTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubblePopWobbleFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblePopWobbleFrequency;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubblePopWobbleFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblePopWobbleFrequency;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_bubblePopWobbleFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubblePopWobbleFrequency = value;
}
constexpr float_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubblePopWobbleAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblePopWobbleAmplitude;
}
constexpr float_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubblePopWobbleAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblePopWobbleAmplitude;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_bubblePopWobbleAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubblePopWobbleAmplitude = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_liquidSurfacePlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidSurfacePlane;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_liquidSurfacePlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidSurfacePlane;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_liquidSurfacePlane(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidSurfacePlane = value;
}
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_liquidSurfacePlane_gRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidSurfacePlane_gRef;
}
constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_liquidSurfacePlane_gRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidSurfacePlane_gRef;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_liquidSurfacePlane_gRef(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidSurfacePlane_gRef = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_activeBubbles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeBubbles;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_activeBubbles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeBubbles;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_activeBubbles(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeBubbles = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailHeads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailHeads;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_trailHeads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailHeads;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_trailHeads(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailHeads = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubbleSpawnDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleSpawnDebug;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>* const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_bubbleSpawnDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleSpawnDebug;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_bubbleSpawnDebug(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubbleSpawnDebug = value;
}
constexpr ::UnityW<::GorillaTag::ScienceExperimentManager>& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_scienceExperimentManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scienceExperimentManager;
}
constexpr ::UnityW<::GorillaTag::ScienceExperimentManager> const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get_scienceExperimentManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scienceExperimentManager;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set_scienceExperimentManager(::UnityW<::GorillaTag::ScienceExperimentManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scienceExperimentManager = value;
}
constexpr bool& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
constexpr int32_t& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;
}
constexpr int32_t const& GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;
}
constexpr void GorillaTag::ScienceExperimentPlatformGenerator::__cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField = value;
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::ScienceExperimentPlatformGenerator::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::RemoveExpiredBubbles(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"RemoveExpiredBubbles", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::SpawnNewBubbles(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnNewBubbles", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::UpdateActiveBubbles(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"UpdateActiveBubbles", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::UpdateTrails(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"UpdateTrails", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::SpawnRockAuthority(double_t  currentTime, float_t  lavaProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnRockAuthority", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, lavaProgress);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::SpawnTrailAuthority(double_t  currentTime, float_t  lavaProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnTrailAuthority", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, lavaProgress);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::SpawnSodaBubbleLocal(::UnityEngine::Vector2  surfacePosLocal, float_t  spawnSize, float_t  lifetime, double_t  spawnTime, bool  addAsTrail, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnSodaBubbleLocal", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePosLocal, spawnSize, lifetime, spawnTime, addAsTrail, direction);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::SpawnSodaBubbleRPC(::UnityEngine::Vector2  surfacePosLocal, float_t  spawnSize, float_t  lifetime, double_t  spawnTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"SpawnSodaBubbleRPC", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePosLocal, spawnSize, lifetime, spawnTime, info);
}
inline ::UnityEngine::Vector2 GorillaTag::ScienceExperimentPlatformGenerator::GetSpawnPositionWithClearance(::UnityEngine::Vector2  inputPosition, float_t  inputSize, float_t  maxDistance, ::UnityEngine::Vector3  lavaSurfaceOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GetSpawnPositionWithClearance", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, inputPosition, inputSize, maxDistance, lavaSurfaceOrigin);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed(int32_t  fieldId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldId);
}
inline void GorillaTag::ScienceExperimentPlatformGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline int32_t GorillaTag::ScienceExperimentPlatformGenerator::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentPlatformGenerator*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GorillaTag::ScienceExperimentPlatformGenerator* GorillaTag::ScienceExperimentPlatformGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ScienceExperimentPlatformGenerator*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GorillaTag::ScienceExperimentPlatformGenerator::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GorillaTag::ScienceExperimentPlatformGenerator::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr  GorillaTag::ScienceExperimentPlatformGenerator::operator ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* GorillaTag::ScienceExperimentPlatformGenerator::i___GorillaTag__GuidedRefs__IGuidedRefReceiverMono() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr  GorillaTag::ScienceExperimentPlatformGenerator::operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* GorillaTag::ScienceExperimentPlatformGenerator::i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GorillaTag::ScienceExperimentPlatformGenerator::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GorillaTag::ScienceExperimentPlatformGenerator::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::ScienceExperimentPlatformGenerator::ScienceExperimentPlatformGenerator()   {
}
