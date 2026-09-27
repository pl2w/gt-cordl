#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidType_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__BaseGuidedRefTargetMono_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterVolume)
namespace GT_CustomMapSupportRuntime {
struct WaterVolumeProperties;
}
namespace GlobalNamespace {
struct GTPlayer_LiquidType;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct WaterVolume_SurfaceQuery;
}
namespace GorillaLocomotion::Swimming {
class WaterCurrent;
}
namespace GorillaLocomotion::Swimming {
struct WaterOverlappingCollider;
}
namespace GorillaLocomotion::Swimming {
class WaterParameters;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume_WaterVolumeEvent;
}
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetIdSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume_WaterVolumeEvent;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::WaterVolume*);
MARK_REF_T(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::WaterVolume*, "GorillaLocomotion.Swimming", "WaterVolume");
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*, "GorillaLocomotion.Swimming", "WaterVolume/WaterVolumeEvent");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GorillaLocomotion.GTPlayer::LiquidType, GorillaTag.GuidedRefs.BaseGuidedRefTargetMono, UnityEngine.Vector3
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.WaterVolume
class CORDL_TYPE WaterVolume : public ::GorillaTag::GuidedRefs::BaseGuidedRefTargetMono {
public:
// Declarations
using SurfaceQuery = ::GlobalNamespace::WaterVolume_SurfaceQuery;

using WaterVolumeEvent = ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent;

/// @brief Field ColliderEnteredVolume, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColliderEnteredVolume, put=__cordl_internal_set_ColliderEnteredVolume)) ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ColliderEnteredVolume;

/// @brief Field ColliderEnteredWater, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColliderEnteredWater, put=__cordl_internal_set_ColliderEnteredWater)) ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ColliderEnteredWater;

/// @brief Field ColliderExitedVolume, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColliderExitedVolume, put=__cordl_internal_set_ColliderExitedVolume)) ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ColliderExitedVolume;

/// @brief Field ColliderExitedWater, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColliderExitedWater, put=__cordl_internal_set_ColliderExitedWater)) ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ColliderExitedWater;

 __declspec(property(get=get_Current)) ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>  Current;

 __declspec(property(get=get_LiquidType)) ::GlobalNamespace::GTPlayer_LiquidType  LiquidType;

 __declspec(property(get=get_Parameters)) ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  Parameters;

 __declspec(property(get=get_PlayerVRRig)) ::UnityW<::GlobalNamespace::VRRig>  PlayerVRRig;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _guidedRefTargetId, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__guidedRefTargetId, put=__cordl_internal_set__guidedRefTargetId)) ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  _guidedRefTargetId;

/// @brief Field _guidedRefTargetObject, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__guidedRefTargetObject, put=__cordl_internal_set__guidedRefTargetObject)) ::UnityW<::UnityEngine::Object>  _guidedRefTargetObject;

/// @brief Field debugDrawSurfaceCast, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawSurfaceCast, put=__cordl_internal_set_debugDrawSurfaceCast)) bool  debugDrawSurfaceCast;

/// @brief Field isMonkeblock, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMonkeblock, put=__cordl_internal_set_isMonkeblock)) bool  isMonkeblock;

/// @brief Field isStationary, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStationary, put=__cordl_internal_set_isStationary)) bool  isStationary;

/// @brief Field liquidType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidType, put=__cordl_internal_set_liquidType)) ::GlobalNamespace::GTPlayer_LiquidType  liquidType;

/// @brief Field meshTrianglesDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meshTrianglesDict, put=setStaticF_meshTrianglesDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  meshTrianglesDict;

/// @brief Field meshVertsDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meshVertsDict, put=setStaticF_meshVertsDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>*  meshVertsDict;

/// @brief Field persistentColliders, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_persistentColliders, put=__cordl_internal_set_persistentColliders)) ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>*  persistentColliders;

/// @brief Field playerVRRig, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerVRRig, put=__cordl_internal_set_playerVRRig)) ::UnityW<::GlobalNamespace::VRRig>  playerVRRig;

/// @brief Field sharedColliderRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sharedColliderRegistry, put=setStaticF_sharedColliderRegistry)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  sharedColliderRegistry;

/// @brief Field sharedMeshTris, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMeshTris, put=__cordl_internal_set_sharedMeshTris)) ::ArrayW<int32_t>  sharedMeshTris;

/// @brief Field sharedMeshVerts, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMeshVerts, put=__cordl_internal_set_sharedMeshVerts)) ::ArrayW<::UnityEngine::Vector3>  sharedMeshVerts;

/// @brief Field splashRPCSendTimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_splashRPCSendTimes, put=setStaticF_splashRPCSendTimes)) ::ArrayW<float_t>  splashRPCSendTimes;

/// @brief Field surfaceColliders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceColliders, put=__cordl_internal_set_surfaceColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  surfaceColliders;

/// @brief Field surfacePlane, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfacePlane, put=__cordl_internal_set_surfacePlane)) ::UnityW<::UnityEngine::Transform>  surfacePlane;

/// @brief Field triggerCollider, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerCollider, put=__cordl_internal_set_triggerCollider)) ::UnityW<::UnityEngine::Collider>  triggerCollider;

/// @brief Field volumeColliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumeColliders, put=__cordl_internal_set_volumeColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  volumeColliders;

/// @brief Field volumeMaxHeight, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_volumeMaxHeight, put=__cordl_internal_set_volumeMaxHeight)) float_t  volumeMaxHeight;

/// @brief Field volumeMinHeight, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_volumeMinHeight, put=__cordl_internal_set_volumeMinHeight)) float_t  volumeMinHeight;

/// @brief Field waterCurrent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterCurrent, put=__cordl_internal_set_waterCurrent)) ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>  waterCurrent;

/// @brief Field waterParams, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterParams, put=__cordl_internal_set_waterParams)) ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  waterParams;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5ce5d38, size 0x1c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanPlayerSwim, addr 0x5ce79a0, size 0x11c, virtual true, abstract: false, final false
inline bool CanPlayerSwim() ;

/// @brief Method CheckColliderAgainstWater, addr 0x5ce6760, size 0x3bc, virtual false, abstract: false, final false
inline void CheckColliderAgainstWater(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime) ;

/// @brief Method CheckColliderInVolume, addr 0x5ce5bf0, size 0x148, virtual false, abstract: false, final false
inline bool CheckColliderInVolume(::UnityEngine::Collider*  collider, ::by_ref<bool>  inWater, ::by_ref<bool>  surfaceDetected) ;

/// @brief Method ColliderInWaterUpdate, addr 0x5ce7400, size 0x24c, virtual false, abstract: false, final false
inline void ColliderInWaterUpdate(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime) ;

/// @brief Method ColliderOutOfWaterUpdate, addr 0x5ce7318, size 0xe8, virtual false, abstract: false, final false
inline void ColliderOutOfWaterUpdate(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime) ;

/// @brief Method DebugDrawMeshColliderHitTriangle, addr 0x5ce5534, size 0x4f4, virtual false, abstract: false, final false
inline void DebugDrawMeshColliderHitTriangle(::UnityEngine::RaycastHit  hit) ;

/// @brief Method GetColliderVelocity, addr 0x5ce771c, size 0x284, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetColliderVelocity(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider) ;

/// @brief Method GetSurfaceQueryForPoint, addr 0x5cdf874, size 0xb24, virtual false, abstract: false, final false
inline bool GetSurfaceQueryForPoint(::UnityEngine::Vector3  point, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>  result, bool  debugDraw) ;

/// @brief Method HasOwnershipOfCollider, addr 0x5ce7238, size 0xe0, virtual false, abstract: false, final false
inline bool HasOwnershipOfCollider(::UnityEngine::Collider*  collider) ;

/// @brief Method HitOutsideSurfaceOfMesh, addr 0x5ce4f48, size 0x5ec, virtual false, abstract: false, final false
inline bool HitOutsideSurfaceOfMesh(::UnityEngine::Vector3  castDir, ::UnityEngine::MeshCollider*  meshCollider, ::UnityEngine::RaycastHit  hit) ;

static inline ::GorillaLocomotion::Swimming::WaterVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ce6068, size 0x278, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ce5ffc, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5ce7abc, size 0x6e8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5ce81a4, size 0x26c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnWaterSurfaceEnter, addr 0x5ce6cd4, size 0x298, virtual false, abstract: false, final false
inline void OnWaterSurfaceEnter(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider) ;

/// @brief Method OnWaterSurfaceExit, addr 0x5ce6f6c, size 0x2cc, virtual false, abstract: false, final false
inline void OnWaterSurfaceExit(::by_ref<::GorillaLocomotion::Swimming::WaterOverlappingCollider>  persistentCollider, float_t  currentTime) ;

/// @brief Method RaycastWater, addr 0x5ce5a28, size 0x1c8, virtual false, abstract: false, final false
inline bool RaycastWater(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hit, float_t  distance, int32_t  layerMask) ;

/// @brief Method RefreshColliders, addr 0x5ce5d54, size 0x2a8, virtual false, abstract: false, final false
inline void RefreshColliders() ;

/// @brief Method RemoveCollidersOutsideVolume, addr 0x5ce62e0, size 0x288, virtual false, abstract: false, final false
inline void RemoveCollidersOutsideVolume(float_t  currentTime) ;

/// @brief Method SetPropertiesFromPlaceholder, addr 0x5ce8410, size 0xe8, virtual false, abstract: false, final false
inline void SetPropertiesFromPlaceholder(::GT_CustomMapSupportRuntime::WaterVolumeProperties  properties, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  waterVolumeColliders, ::GorillaLocomotion::Swimming::WaterParameters*  parameters) ;

/// @brief Method Tick, addr 0x5ce6568, size 0x1f8, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryRegisterOwnershipOfCollider, addr 0x5ce6b1c, size 0x1b8, virtual false, abstract: false, final false
inline void TryRegisterOwnershipOfCollider(::UnityEngine::Collider*  collider, bool  isInWater, bool  isSurfaceDetected) ;

/// @brief Method UnregisterOwnershipOfCollider, addr 0x5ce764c, size 0xd0, virtual false, abstract: false, final false
inline void UnregisterOwnershipOfCollider(::UnityEngine::Collider*  collider) ;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& __cordl_internal_get_ColliderEnteredVolume() const;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& __cordl_internal_get_ColliderEnteredVolume() ;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& __cordl_internal_get_ColliderEnteredWater() const;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& __cordl_internal_get_ColliderEnteredWater() ;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& __cordl_internal_get_ColliderExitedVolume() const;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& __cordl_internal_get_ColliderExitedVolume() ;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* const& __cordl_internal_get_ColliderExitedWater() const;

constexpr ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*& __cordl_internal_get_ColliderExitedWater() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO> const& __cordl_internal_get__guidedRefTargetId() const;

constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>& __cordl_internal_get__guidedRefTargetId() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__guidedRefTargetObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__guidedRefTargetObject() ;

constexpr bool const& __cordl_internal_get_debugDrawSurfaceCast() const;

constexpr bool& __cordl_internal_get_debugDrawSurfaceCast() ;

constexpr bool const& __cordl_internal_get_isMonkeblock() const;

constexpr bool& __cordl_internal_get_isMonkeblock() ;

constexpr bool const& __cordl_internal_get_isStationary() const;

constexpr bool& __cordl_internal_get_isStationary() ;

constexpr ::GlobalNamespace::GTPlayer_LiquidType const& __cordl_internal_get_liquidType() const;

constexpr ::GlobalNamespace::GTPlayer_LiquidType& __cordl_internal_get_liquidType() ;

constexpr ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>* const& __cordl_internal_get_persistentColliders() const;

constexpr ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>*& __cordl_internal_get_persistentColliders() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_playerVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_playerVRRig() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_sharedMeshTris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_sharedMeshTris() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_sharedMeshVerts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_sharedMeshVerts() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& __cordl_internal_get_surfaceColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& __cordl_internal_get_surfaceColliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_surfacePlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_surfacePlane() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_triggerCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_triggerCollider() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_volumeColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_volumeColliders() ;

constexpr float_t const& __cordl_internal_get_volumeMaxHeight() const;

constexpr float_t& __cordl_internal_get_volumeMaxHeight() ;

constexpr float_t const& __cordl_internal_get_volumeMinHeight() const;

constexpr float_t& __cordl_internal_get_volumeMinHeight() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent> const& __cordl_internal_get_waterCurrent() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>& __cordl_internal_get_waterCurrent() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& __cordl_internal_get_waterParams() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& __cordl_internal_get_waterParams() ;

constexpr void __cordl_internal_set_ColliderEnteredVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

constexpr void __cordl_internal_set_ColliderEnteredWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

constexpr void __cordl_internal_set_ColliderExitedVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

constexpr void __cordl_internal_set_ColliderExitedWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__guidedRefTargetId(::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  value) ;

constexpr void __cordl_internal_set__guidedRefTargetObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_debugDrawSurfaceCast(bool  value) ;

constexpr void __cordl_internal_set_isMonkeblock(bool  value) ;

constexpr void __cordl_internal_set_isStationary(bool  value) ;

constexpr void __cordl_internal_set_liquidType(::GlobalNamespace::GTPlayer_LiquidType  value) ;

constexpr void __cordl_internal_set_persistentColliders(::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>*  value) ;

constexpr void __cordl_internal_set_playerVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_sharedMeshTris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_sharedMeshVerts(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_surfaceColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value) ;

constexpr void __cordl_internal_set_surfacePlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_volumeColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_volumeMaxHeight(float_t  value) ;

constexpr void __cordl_internal_set_volumeMinHeight(float_t  value) ;

constexpr void __cordl_internal_set_waterCurrent(::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>  value) ;

constexpr void __cordl_internal_set_waterParams(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value) ;

/// @brief Method .ctor, addr 0x5ce84f8, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ColliderEnteredVolume, addr 0x5ce493c, size 0x9c, virtual false, abstract: false, final false
inline void add_ColliderEnteredVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ColliderEnteredWater, addr 0x5ce4bac, size 0x9c, virtual false, abstract: false, final false
inline void add_ColliderEnteredWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ColliderExitedVolume, addr 0x5ce4a74, size 0x9c, virtual false, abstract: false, final false
inline void add_ColliderExitedVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ColliderExitedWater, addr 0x5ce4ce4, size 0x9c, virtual false, abstract: false, final false
inline void add_ColliderExitedWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>* getStaticF_meshTrianglesDict() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>* getStaticF_meshVertsDict() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* getStaticF_sharedColliderRegistry() ;

static inline ::ArrayW<float_t> getStaticF_splashRPCSendTimes() ;

/// @brief Method get_Current, addr 0x5ce4e24, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent> get_Current() ;

/// @brief Method get_LiquidType, addr 0x5ce4e1c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTPlayer_LiquidType get_LiquidType() ;

/// @brief Method get_Parameters, addr 0x5ce4e2c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> get_Parameters() ;

/// @brief Method get_PlayerVRRig, addr 0x5ce4e34, size 0x114, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_PlayerVRRig() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5ce492c, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_ColliderEnteredVolume, addr 0x5ce49d8, size 0x9c, virtual false, abstract: false, final false
inline void remove_ColliderEnteredVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ColliderEnteredWater, addr 0x5ce4c48, size 0x9c, virtual false, abstract: false, final false
inline void remove_ColliderEnteredWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ColliderExitedVolume, addr 0x5ce4b10, size 0x9c, virtual false, abstract: false, final false
inline void remove_ColliderExitedVolume(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ColliderExitedWater, addr 0x5ce4d80, size 0x9c, virtual false, abstract: false, final false
inline void remove_ColliderExitedWater(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  value) ;

static inline void setStaticF_meshTrianglesDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  value) ;

static inline void setStaticF_meshVertsDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<::UnityEngine::Vector3>>*  value) ;

static inline void setStaticF_sharedColliderRegistry(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value) ;

static inline void setStaticF_splashRPCSendTimes(::ArrayW<float_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5ce4934, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterVolume(WaterVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterVolume(WaterVolume const& ) = delete;

/// @brief Field WaterSplashRPC offset 0xffffffff size 0x8
static constexpr ::ConstString  WaterSplashRPC{u"RPC_PlaySplashEffect"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4522};

/// [SerializeField]
/// @brief Field surfacePlane, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___surfacePlane;

/// [SerializeField]
/// @brief Field surfaceColliders, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  ___surfaceColliders;

/// [SerializeField]
/// @brief Field volumeColliders, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___volumeColliders;

/// [SerializeField]
/// @brief Field liquidType, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::GTPlayer_LiquidType  ___liquidType;

/// [SerializeField]
/// @brief Field waterCurrent, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>  ___waterCurrent;

/// [SerializeField]
/// @brief Field waterParams, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  ___waterParams;

/// [SerializeField]
/// [Tooltip("The water volume be placed in the scene (not spawned) and not moved for this to be true")]
/// @brief Field isStationary, offset: 0x68, size: 0x1, def value: None
 bool  ___isStationary;

/// [SerializeField]
/// [Tooltip("Check scale of monke entering")]
/// @brief Field isMonkeblock, offset: 0x69, size: 0x1, def value: None
 bool  ___isMonkeblock;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x6a, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field sharedMeshTris, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___sharedMeshTris;

/// @brief Field sharedMeshVerts, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___sharedMeshVerts;

/// [CompilerGenerated]
/// @brief Field ColliderEnteredVolume, offset: 0x80, size: 0x8, def value: None
 ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ___ColliderEnteredVolume;

/// [CompilerGenerated]
/// @brief Field ColliderExitedVolume, offset: 0x88, size: 0x8, def value: None
 ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ___ColliderExitedVolume;

/// [CompilerGenerated]
/// @brief Field ColliderEnteredWater, offset: 0x90, size: 0x8, def value: None
 ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ___ColliderEnteredWater;

/// [CompilerGenerated]
/// @brief Field ColliderExitedWater, offset: 0x98, size: 0x8, def value: None
 ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent*  ___ColliderExitedWater;

/// @brief Field playerVRRig, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___playerVRRig;

/// @brief Field volumeMaxHeight, offset: 0xa8, size: 0x4, def value: None
 float_t  ___volumeMaxHeight;

/// @brief Field volumeMinHeight, offset: 0xac, size: 0x4, def value: None
 float_t  ___volumeMinHeight;

/// @brief Field debugDrawSurfaceCast, offset: 0xb0, size: 0x1, def value: None
 bool  ___debugDrawSurfaceCast;

/// @brief Field triggerCollider, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___triggerCollider;

/// @brief Field persistentColliders, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::WaterOverlappingCollider>*  ___persistentColliders;

/// @brief Field _guidedRefTargetId, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>  ____guidedRefTargetId;

/// @brief Field _guidedRefTargetObject, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____guidedRefTargetObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___surfacePlane) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___surfaceColliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___volumeColliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___liquidType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___waterCurrent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___waterParams) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___isStationary) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___isMonkeblock) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ____TickRunning_k__BackingField) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___sharedMeshTris) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___sharedMeshVerts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___ColliderEnteredVolume) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___ColliderExitedVolume) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___ColliderEnteredWater) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___ColliderExitedWater) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___playerVRRig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___volumeMaxHeight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___volumeMinHeight) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___debugDrawSurfaceCast) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___triggerCollider) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ___persistentColliders) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ____guidedRefTargetId) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterVolume, ____guidedRefTargetObject) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::WaterVolume) == 0xd8, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
// Dependencies System.MulticastDelegate
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.WaterVolume/WaterVolumeEvent
class CORDL_TYPE WaterVolume_WaterVolumeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5ce8bc0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5ce8be8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5ce8bac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider) ;

static inline ::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5ce8aa0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterVolume_WaterVolumeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterVolume_WaterVolumeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterVolume_WaterVolumeEvent(WaterVolume_WaterVolumeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterVolume_WaterVolumeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterVolume_WaterVolumeEvent(WaterVolume_WaterVolumeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4521};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaLocomotion::Swimming::WaterVolume_WaterVolumeEvent) == 0x80, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
