#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentPlatformGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverFieldInfo_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentPlatformGenerator)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
struct ScienceExperimentPlatformGenerator_BubbleData;
}
namespace GlobalNamespace {
struct ScienceExperimentPlatformGenerator_BubbleSpawnDebug;
}
namespace GorillaTag::GuidedRefs {
struct GuidedRefTryResolveInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefReceiverMono;
}
namespace GorillaTag {
class ScienceExperimentManager;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag {
class ScienceExperimentPlatformGenerator;
}
// Write type traits
MARK_REF_T(::GorillaTag::ScienceExperimentPlatformGenerator*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ScienceExperimentPlatformGenerator*, "GorillaTag", "ScienceExperimentPlatformGenerator");
// Dependencies GorillaTag.GuidedRefs.GuidedRefReceiverFieldInfo, Photon.Pun.MonoBehaviourPun, UnityEngine.Vector2
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ScienceExperimentPlatformGenerator
class CORDL_TYPE ScienceExperimentPlatformGenerator : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using BubbleData = ::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData;

using BubbleSpawnDebug = ::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug;

 __declspec(property(get=GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount, put=GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount)) int32_t  GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount;

 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefsWaitingToResolveCount>k__BackingField, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField, put=__cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField)) int32_t  _GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field activeBubbles, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeBubbles, put=__cordl_internal_set_activeBubbles)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  activeBubbles;

/// @brief Field bubbleCountMultiplier, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_bubbleCountMultiplier, put=__cordl_internal_set_bubbleCountMultiplier)) float_t  bubbleCountMultiplier;

/// @brief Field bubblePopAnticipationTime, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_bubblePopAnticipationTime, put=__cordl_internal_set_bubblePopAnticipationTime)) float_t  bubblePopAnticipationTime;

/// @brief Field bubblePopWobbleAmplitude, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_bubblePopWobbleAmplitude, put=__cordl_internal_set_bubblePopWobbleAmplitude)) float_t  bubblePopWobbleAmplitude;

/// @brief Field bubblePopWobbleFrequency, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bubblePopWobbleFrequency, put=__cordl_internal_set_bubblePopWobbleFrequency)) float_t  bubblePopWobbleFrequency;

/// @brief Field bubbleSpawnDebug, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubbleSpawnDebug, put=__cordl_internal_set_bubbleSpawnDebug)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*  bubbleSpawnDebug;

/// @brief Field lifetimeRange, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_lifetimeRange, put=__cordl_internal_set_lifetimeRange)) ::UnityEngine::Vector2  lifetimeRange;

/// @brief Field liquidSurfacePlane, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidSurfacePlane, put=__cordl_internal_set_liquidSurfacePlane)) ::UnityW<::UnityEngine::Transform>  liquidSurfacePlane;

/// @brief Field liquidSurfacePlane_gRef, offset 0xd8, size 0x20 
 __declspec(property(get=__cordl_internal_get_liquidSurfacePlane_gRef, put=__cordl_internal_set_liquidSurfacePlane_gRef)) ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  liquidSurfacePlane_gRef;

/// @brief Field maxBubbleCount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBubbleCount, put=__cordl_internal_set_maxBubbleCount)) int32_t  maxBubbleCount;

/// @brief Field rockCountVsLavaProgress, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockCountVsLavaProgress, put=__cordl_internal_set_rockCountVsLavaProgress)) ::UnityEngine::AnimationCurve*  rockCountVsLavaProgress;

/// @brief Field rockLifetimeMultiplierVsLavaProgress, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockLifetimeMultiplierVsLavaProgress, put=__cordl_internal_set_rockLifetimeMultiplierVsLavaProgress)) ::UnityEngine::AnimationCurve*  rockLifetimeMultiplierVsLavaProgress;

/// @brief Field rockMaxSizeMultiplierVsLavaProgress, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockMaxSizeMultiplierVsLavaProgress, put=__cordl_internal_set_rockMaxSizeMultiplierVsLavaProgress)) ::UnityEngine::AnimationCurve*  rockMaxSizeMultiplierVsLavaProgress;

/// @brief Field rockSizeVsLifetime, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockSizeVsLifetime, put=__cordl_internal_set_rockSizeVsLifetime)) ::UnityEngine::AnimationCurve*  rockSizeVsLifetime;

/// @brief Field scaleFactor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleFactor, put=__cordl_internal_set_scaleFactor)) float_t  scaleFactor;

/// @brief Field scienceExperimentManager, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_scienceExperimentManager, put=__cordl_internal_set_scienceExperimentManager)) ::UnityW<::GorillaTag::ScienceExperimentManager>  scienceExperimentManager;

/// @brief Field sizeRange, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizeRange, put=__cordl_internal_set_sizeRange)) ::UnityEngine::Vector2  sizeRange;

/// @brief Field spawnRadiusMultiplierVsLavaProgress, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnRadiusMultiplierVsLavaProgress, put=__cordl_internal_set_spawnRadiusMultiplierVsLavaProgress)) ::UnityEngine::AnimationCurve*  spawnRadiusMultiplierVsLavaProgress;

/// @brief Field spawnedPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedPrefab, put=__cordl_internal_set_spawnedPrefab)) ::UnityW<::UnityEngine::GameObject>  spawnedPrefab;

/// @brief Field surfaceRadiusSpawnRange, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceRadiusSpawnRange, put=__cordl_internal_set_surfaceRadiusSpawnRange)) ::UnityEngine::Vector2  surfaceRadiusSpawnRange;

/// @brief Field trailBubbleBoundaryRadiusVsProgress, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailBubbleBoundaryRadiusVsProgress, put=__cordl_internal_set_trailBubbleBoundaryRadiusVsProgress)) ::UnityEngine::AnimationCurve*  trailBubbleBoundaryRadiusVsProgress;

/// @brief Field trailBubbleLifetimeMultiplier, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailBubbleLifetimeMultiplier, put=__cordl_internal_set_trailBubbleLifetimeMultiplier)) float_t  trailBubbleLifetimeMultiplier;

/// @brief Field trailBubbleLifetimeVsProgress, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailBubbleLifetimeVsProgress, put=__cordl_internal_set_trailBubbleLifetimeVsProgress)) ::UnityEngine::AnimationCurve*  trailBubbleLifetimeVsProgress;

/// @brief Field trailBubbleSize, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailBubbleSize, put=__cordl_internal_set_trailBubbleSize)) float_t  trailBubbleSize;

/// @brief Field trailCountMultiplier, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailCountMultiplier, put=__cordl_internal_set_trailCountMultiplier)) float_t  trailCountMultiplier;

/// @brief Field trailCountVsProgress, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailCountVsProgress, put=__cordl_internal_set_trailCountVsProgress)) ::UnityEngine::AnimationCurve*  trailCountVsProgress;

/// @brief Field trailDistanceBetweenSpawns, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailDistanceBetweenSpawns, put=__cordl_internal_set_trailDistanceBetweenSpawns)) float_t  trailDistanceBetweenSpawns;

/// @brief Field trailEdgeAvoidanceSpawnsMinMax, offset 0xbc, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailEdgeAvoidanceSpawnsMinMax, put=__cordl_internal_set_trailEdgeAvoidanceSpawnsMinMax)) ::UnityEngine::Vector2  trailEdgeAvoidanceSpawnsMinMax;

/// @brief Field trailHeads, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailHeads, put=__cordl_internal_set_trailHeads)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  trailHeads;

/// @brief Field trailMaxTurnAngle, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailMaxTurnAngle, put=__cordl_internal_set_trailMaxTurnAngle)) float_t  trailMaxTurnAngle;

/// @brief Field trailSpawnRateMultiplier, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_trailSpawnRateMultiplier, put=__cordl_internal_set_trailSpawnRateMultiplier)) float_t  trailSpawnRateMultiplier;

/// @brief Field trailSpawnRateVsProgress, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailSpawnRateVsProgress, put=__cordl_internal_set_trailSpawnRateVsProgress)) ::UnityEngine::AnimationCurve*  trailSpawnRateVsProgress;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*() noexcept;

/// @brief Method Awake, addr 0x5d3206c, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSpawnPositionWithClearance, addr 0x5d33cf8, size 0x2f4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetSpawnPositionWithClearance(::UnityEngine::Vector2  inputPosition, float_t  inputSize, float_t  maxDistance, ::UnityEngine::Vector3  lavaSurfaceOrigin) ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform, addr 0x5d348b8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID, addr 0x5d348c0, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize, addr 0x5d342e0, size 0xb0, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference, addr 0x5d343a0, size 0xb0, virtual true, abstract: false, final true
inline bool GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target) ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved, addr 0x5d34450, size 0x88, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed, addr 0x5d344d8, size 0x6c, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed(int32_t  fieldId) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount, addr 0x5d34390, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount, addr 0x5d34398, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount(int32_t  value) ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5d322a0, size 0xb4, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5d32290, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5d32298, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

static inline ::GorillaTag::ScienceExperimentPlatformGenerator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d32224, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d32134, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveExpiredBubbles, addr 0x5d32b90, size 0x148, virtual false, abstract: false, final false
inline void RemoveExpiredBubbles(double_t  currentTime) ;

/// @brief Method SpawnNewBubbles, addr 0x5d32cd8, size 0x100, virtual false, abstract: false, final false
inline void SpawnNewBubbles(double_t  currentTime) ;

/// @brief Method SpawnRockAuthority, addr 0x5d33134, size 0x3f0, virtual false, abstract: false, final false
inline void SpawnRockAuthority(double_t  currentTime, float_t  lavaProgress) ;

/// @brief Method SpawnSodaBubbleLocal, addr 0x5d33980, size 0x378, virtual false, abstract: false, final false
inline void SpawnSodaBubbleLocal(::UnityEngine::Vector2  surfacePosLocal, float_t  spawnSize, float_t  lifetime, double_t  spawnTime, bool  addAsTrail, ::UnityEngine::Vector3  direction) ;

/// [PunRPC]
/// @brief Method SpawnSodaBubbleRPC, addr 0x5d33fec, size 0x2f4, virtual false, abstract: false, final false
inline void SpawnSodaBubbleRPC(::UnityEngine::Vector2  surfacePosLocal, float_t  spawnSize, float_t  lifetime, double_t  spawnTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SpawnTrailAuthority, addr 0x5d33524, size 0x45c, virtual false, abstract: false, final false
inline void SpawnTrailAuthority(double_t  currentTime, float_t  lavaProgress) ;

/// @brief Method UpdateActiveBubbles, addr 0x5d32dd8, size 0x35c, virtual false, abstract: false, final false
inline void UpdateActiveBubbles(double_t  currentTime) ;

/// @brief Method UpdateTrails, addr 0x5d32354, size 0x83c, virtual false, abstract: false, final false
inline void UpdateTrails(double_t  currentTime) ;

constexpr int32_t const& __cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>* const& __cordl_internal_get_activeBubbles() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*& __cordl_internal_get_activeBubbles() ;

constexpr float_t const& __cordl_internal_get_bubbleCountMultiplier() const;

constexpr float_t& __cordl_internal_get_bubbleCountMultiplier() ;

constexpr float_t const& __cordl_internal_get_bubblePopAnticipationTime() const;

constexpr float_t& __cordl_internal_get_bubblePopAnticipationTime() ;

constexpr float_t const& __cordl_internal_get_bubblePopWobbleAmplitude() const;

constexpr float_t& __cordl_internal_get_bubblePopWobbleAmplitude() ;

constexpr float_t const& __cordl_internal_get_bubblePopWobbleFrequency() const;

constexpr float_t& __cordl_internal_get_bubblePopWobbleFrequency() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>* const& __cordl_internal_get_bubbleSpawnDebug() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*& __cordl_internal_get_bubbleSpawnDebug() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_lifetimeRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_lifetimeRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_liquidSurfacePlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_liquidSurfacePlane() ;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo const& __cordl_internal_get_liquidSurfacePlane_gRef() const;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo& __cordl_internal_get_liquidSurfacePlane_gRef() ;

constexpr int32_t const& __cordl_internal_get_maxBubbleCount() const;

constexpr int32_t& __cordl_internal_get_maxBubbleCount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rockCountVsLavaProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rockCountVsLavaProgress() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rockLifetimeMultiplierVsLavaProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rockLifetimeMultiplierVsLavaProgress() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rockMaxSizeMultiplierVsLavaProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rockMaxSizeMultiplierVsLavaProgress() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_rockSizeVsLifetime() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rockSizeVsLifetime() ;

constexpr float_t const& __cordl_internal_get_scaleFactor() const;

constexpr float_t& __cordl_internal_get_scaleFactor() ;

constexpr ::UnityW<::GorillaTag::ScienceExperimentManager> const& __cordl_internal_get_scienceExperimentManager() const;

constexpr ::UnityW<::GorillaTag::ScienceExperimentManager>& __cordl_internal_get_scienceExperimentManager() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_sizeRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_sizeRange() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_spawnRadiusMultiplierVsLavaProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_spawnRadiusMultiplierVsLavaProgress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spawnedPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spawnedPrefab() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_surfaceRadiusSpawnRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_surfaceRadiusSpawnRange() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_trailBubbleBoundaryRadiusVsProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_trailBubbleBoundaryRadiusVsProgress() ;

constexpr float_t const& __cordl_internal_get_trailBubbleLifetimeMultiplier() const;

constexpr float_t& __cordl_internal_get_trailBubbleLifetimeMultiplier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_trailBubbleLifetimeVsProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_trailBubbleLifetimeVsProgress() ;

constexpr float_t const& __cordl_internal_get_trailBubbleSize() const;

constexpr float_t& __cordl_internal_get_trailBubbleSize() ;

constexpr float_t const& __cordl_internal_get_trailCountMultiplier() const;

constexpr float_t& __cordl_internal_get_trailCountMultiplier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_trailCountVsProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_trailCountVsProgress() ;

constexpr float_t const& __cordl_internal_get_trailDistanceBetweenSpawns() const;

constexpr float_t& __cordl_internal_get_trailDistanceBetweenSpawns() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_trailEdgeAvoidanceSpawnsMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_trailEdgeAvoidanceSpawnsMinMax() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>* const& __cordl_internal_get_trailHeads() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*& __cordl_internal_get_trailHeads() ;

constexpr float_t const& __cordl_internal_get_trailMaxTurnAngle() const;

constexpr float_t& __cordl_internal_get_trailMaxTurnAngle() ;

constexpr float_t const& __cordl_internal_get_trailSpawnRateMultiplier() const;

constexpr float_t& __cordl_internal_get_trailSpawnRateMultiplier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_trailSpawnRateVsProgress() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_trailSpawnRateVsProgress() ;

constexpr void __cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeBubbles(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  value) ;

constexpr void __cordl_internal_set_bubbleCountMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_bubblePopAnticipationTime(float_t  value) ;

constexpr void __cordl_internal_set_bubblePopWobbleAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_bubblePopWobbleFrequency(float_t  value) ;

constexpr void __cordl_internal_set_bubbleSpawnDebug(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*  value) ;

constexpr void __cordl_internal_set_lifetimeRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_liquidSurfacePlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_liquidSurfacePlane_gRef(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  value) ;

constexpr void __cordl_internal_set_maxBubbleCount(int32_t  value) ;

constexpr void __cordl_internal_set_rockCountVsLavaProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rockLifetimeMultiplierVsLavaProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rockMaxSizeMultiplierVsLavaProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rockSizeVsLifetime(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_scaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_scienceExperimentManager(::UnityW<::GorillaTag::ScienceExperimentManager>  value) ;

constexpr void __cordl_internal_set_sizeRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_spawnRadiusMultiplierVsLavaProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_spawnedPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_surfaceRadiusSpawnRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_trailBubbleBoundaryRadiusVsProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_trailBubbleLifetimeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_trailBubbleLifetimeVsProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_trailBubbleSize(float_t  value) ;

constexpr void __cordl_internal_set_trailCountMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_trailCountVsProgress(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_trailDistanceBetweenSpawns(float_t  value) ;

constexpr void __cordl_internal_set_trailEdgeAvoidanceSpawnsMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_trailHeads(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  value) ;

constexpr void __cordl_internal_set_trailMaxTurnAngle(float_t  value) ;

constexpr void __cordl_internal_set_trailSpawnRateMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_trailSpawnRateVsProgress(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5d34544, size 0x334, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* i___GorillaTag__GuidedRefs__IGuidedRefReceiverMono() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentPlatformGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentPlatformGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScienceExperimentPlatformGenerator(ScienceExperimentPlatformGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentPlatformGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScienceExperimentPlatformGenerator(ScienceExperimentPlatformGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4646};

/// [SerializeField]
/// @brief Field spawnedPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spawnedPrefab;

/// [SerializeField]
/// @brief Field scaleFactor, offset: 0x30, size: 0x4, def value: None
 float_t  ___scaleFactor;

/// [Header("Random Bubbles")]
/// [SerializeField]
/// @brief Field surfaceRadiusSpawnRange, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___surfaceRadiusSpawnRange;

/// [SerializeField]
/// @brief Field lifetimeRange, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___lifetimeRange;

/// [SerializeField]
/// @brief Field sizeRange, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___sizeRange;

/// [SerializeField]
/// @brief Field rockCountVsLavaProgress, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rockCountVsLavaProgress;

/// [SerializeField]
/// [FormerlySerializedAs("rockCountMultiplier")]
/// @brief Field bubbleCountMultiplier, offset: 0x58, size: 0x4, def value: None
 float_t  ___bubbleCountMultiplier;

/// [SerializeField]
/// @brief Field maxBubbleCount, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___maxBubbleCount;

/// [SerializeField]
/// @brief Field rockLifetimeMultiplierVsLavaProgress, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rockLifetimeMultiplierVsLavaProgress;

/// [SerializeField]
/// @brief Field rockMaxSizeMultiplierVsLavaProgress, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rockMaxSizeMultiplierVsLavaProgress;

/// [SerializeField]
/// @brief Field spawnRadiusMultiplierVsLavaProgress, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___spawnRadiusMultiplierVsLavaProgress;

/// [SerializeField]
/// @brief Field rockSizeVsLifetime, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___rockSizeVsLifetime;

/// [Header("Bubble Trails")]
/// [SerializeField]
/// @brief Field trailSpawnRateVsProgress, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___trailSpawnRateVsProgress;

/// [SerializeField]
/// @brief Field trailSpawnRateMultiplier, offset: 0x88, size: 0x4, def value: None
 float_t  ___trailSpawnRateMultiplier;

/// [SerializeField]
/// @brief Field trailBubbleLifetimeVsProgress, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___trailBubbleLifetimeVsProgress;

/// [SerializeField]
/// @brief Field trailBubbleBoundaryRadiusVsProgress, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___trailBubbleBoundaryRadiusVsProgress;

/// [SerializeField]
/// @brief Field trailBubbleLifetimeMultiplier, offset: 0xa0, size: 0x4, def value: None
 float_t  ___trailBubbleLifetimeMultiplier;

/// [SerializeField]
/// @brief Field trailDistanceBetweenSpawns, offset: 0xa4, size: 0x4, def value: None
 float_t  ___trailDistanceBetweenSpawns;

/// [SerializeField]
/// @brief Field trailMaxTurnAngle, offset: 0xa8, size: 0x4, def value: None
 float_t  ___trailMaxTurnAngle;

/// [SerializeField]
/// @brief Field trailBubbleSize, offset: 0xac, size: 0x4, def value: None
 float_t  ___trailBubbleSize;

/// [SerializeField]
/// @brief Field trailCountVsProgress, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___trailCountVsProgress;

/// [SerializeField]
/// @brief Field trailCountMultiplier, offset: 0xb8, size: 0x4, def value: None
 float_t  ___trailCountMultiplier;

/// [SerializeField]
/// @brief Field trailEdgeAvoidanceSpawnsMinMax, offset: 0xbc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___trailEdgeAvoidanceSpawnsMinMax;

/// [Header("Feedback Effects")]
/// [SerializeField]
/// @brief Field bubblePopAnticipationTime, offset: 0xc4, size: 0x4, def value: None
 float_t  ___bubblePopAnticipationTime;

/// [SerializeField]
/// @brief Field bubblePopWobbleFrequency, offset: 0xc8, size: 0x4, def value: None
 float_t  ___bubblePopWobbleFrequency;

/// [SerializeField]
/// @brief Field bubblePopWobbleAmplitude, offset: 0xcc, size: 0x4, def value: None
 float_t  ___bubblePopWobbleAmplitude;

/// [SerializeField]
/// @brief Field liquidSurfacePlane, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___liquidSurfacePlane;

/// [SerializeField]
/// @brief Field liquidSurfacePlane_gRef, offset: 0xd8, size: 0x20, def value: None
 ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  ___liquidSurfacePlane_gRef;

/// @brief Field activeBubbles, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  ___activeBubbles;

/// @brief Field trailHeads, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData>*  ___trailHeads;

/// @brief Field bubbleSpawnDebug, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*  ___bubbleSpawnDebug;

/// @brief Field scienceExperimentManager, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GorillaTag::ScienceExperimentManager>  ___scienceExperimentManager;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x118, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefsWaitingToResolveCount>k__BackingField, offset: 0x11c, size: 0x4, def value: None
 int32_t  ____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___spawnedPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___scaleFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___surfaceRadiusSpawnRange) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___lifetimeRange) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___sizeRange) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___rockCountVsLavaProgress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___bubbleCountMultiplier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___maxBubbleCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___rockLifetimeMultiplierVsLavaProgress) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___rockMaxSizeMultiplierVsLavaProgress) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___spawnRadiusMultiplierVsLavaProgress) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___rockSizeVsLifetime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailSpawnRateVsProgress) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailSpawnRateMultiplier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailBubbleLifetimeVsProgress) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailBubbleBoundaryRadiusVsProgress) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailBubbleLifetimeMultiplier) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailDistanceBetweenSpawns) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailMaxTurnAngle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailBubbleSize) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailCountVsProgress) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailCountMultiplier) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailEdgeAvoidanceSpawnsMinMax) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___bubblePopAnticipationTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___bubblePopWobbleFrequency) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___bubblePopWobbleAmplitude) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___liquidSurfacePlane) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___liquidSurfacePlane_gRef) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___activeBubbles) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___trailHeads) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___bubbleSpawnDebug) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ___scienceExperimentManager) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentPlatformGenerator, ____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField) == 0x11c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ScienceExperimentPlatformGenerator) == 0x120, "Size mismatch!");

} // namespace end def GorillaTag
