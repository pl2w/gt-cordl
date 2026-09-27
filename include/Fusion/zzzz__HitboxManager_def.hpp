#pragma once
// IWYU pragma private; include "Fusion/HitboxManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxManager)
namespace Fusion::LagCompensation {
class BoxOverlapQuery;
}
namespace Fusion::LagCompensation {
class HitboxBuffer;
}
namespace Fusion::LagCompensation {
struct HitboxHit;
}
namespace Fusion::LagCompensation {
class LagCompensationDraw;
}
namespace Fusion::LagCompensation {
struct PositionRotationQueryParams;
}
namespace Fusion::LagCompensation {
class PreProcessingDelegate;
}
namespace Fusion::LagCompensation {
class Query;
}
namespace Fusion::LagCompensation {
class RaycastAllQuery;
}
namespace Fusion::LagCompensation {
class RaycastQuery;
}
namespace Fusion::LagCompensation {
class SphereOverlapQuery;
}
namespace Fusion::Statistics {
class LagCompensationStatisticsManager;
}
namespace Fusion::Statistics {
class LagCompensationStatisticsSnapshot;
}
namespace Fusion {
struct HitOptions;
}
namespace Fusion {
class HitboxRoot;
}
namespace Fusion {
class Hitbox;
}
namespace Fusion {
class IAfterTick;
}
namespace Fusion {
class IBeforeSimulation;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class ISpawned;
}
namespace Fusion {
struct LagCompensatedHit;
}
namespace Fusion {
class LagCompensationSettings;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class HitboxManager;
}
// Write type traits
MARK_REF_T(::Fusion::HitboxManager*);
DEFINE_IL2CPP_CLASS(::Fusion::HitboxManager*, "Fusion", "HitboxManager");
// [DisallowMultipleComponent]
// [AddComponentMenu("Fusion/Lag Compensation/Hitbox Manager")]
// [DefaultExecutionOrder(2000)]
// Dependencies Fusion.SimulationBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HitboxManager
class CORDL_TYPE HitboxManager : public ::Fusion::SimulationBehaviour {
public:
// Declarations
/// @brief Field BVHDepth, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_BVHDepth, put=__cordl_internal_set_BVHDepth)) int32_t  BVHDepth;

/// @brief Field BVHNodes, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_BVHNodes, put=__cordl_internal_set_BVHNodes)) int32_t  BVHNodes;

/// @brief Field DrawInfo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_DrawInfo, put=__cordl_internal_set_DrawInfo)) ::Fusion::LagCompensation::LagCompensationDraw*  DrawInfo;

/// @brief Field TotalHitboxes, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalHitboxes, put=__cordl_internal_set_TotalHitboxes)) int32_t  TotalHitboxes;

/// @brief Field _boxOverlapQuery, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__boxOverlapQuery, put=__cordl_internal_set__boxOverlapQuery)) ::Fusion::LagCompensation::BoxOverlapQuery*  _boxOverlapQuery;

/// @brief Field _hitboxBuffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitboxBuffer, put=__cordl_internal_set__hitboxBuffer)) ::Fusion::LagCompensation::HitboxBuffer*  _hitboxBuffer;

/// @brief Field _lagCompStatManager, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lagCompStatManager, put=__cordl_internal_set__lagCompStatManager)) ::Fusion::Statistics::LagCompensationStatisticsManager*  _lagCompStatManager;

/// @brief Field _lagCompensatedHits, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__lagCompensatedHits, put=__cordl_internal_set__lagCompensatedHits)) ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  _lagCompensatedHits;

/// @brief Field _raycastAllQuery, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastAllQuery, put=__cordl_internal_set__raycastAllQuery)) ::Fusion::LagCompensation::RaycastAllQuery*  _raycastAllQuery;

/// @brief Field _raycastHits, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastHits, put=__cordl_internal_set__raycastHits)) ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  _raycastHits;

/// @brief Field _raycastQuery, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastQuery, put=__cordl_internal_set__raycastQuery)) ::Fusion::LagCompensation::RaycastQuery*  _raycastQuery;

/// @brief Field _settings, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Fusion::LagCompensationSettings*  _settings;

/// @brief Field _sphereOverlapQuery, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__sphereOverlapQuery, put=__cordl_internal_set__sphereOverlapQuery)) ::Fusion::LagCompensation::SphereOverlapQuery*  _sphereOverlapQuery;

/// @brief Convert operator to "::Fusion::IAfterTick"
constexpr operator  ::Fusion::IAfterTick*() noexcept;

/// @brief Convert operator to "::Fusion::IBeforeSimulation"
constexpr operator  ::Fusion::IBeforeSimulation*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Fusion::ISpawned"
constexpr operator  ::Fusion::ISpawned*() noexcept;

/// @brief Method AdvanceAndRegister, addr 0x5f9418c, size 0x3b4, virtual false, abstract: false, final false
inline void AdvanceAndRegister(int32_t  tick, int32_t  dataTick) ;

/// @brief Method Fusion.IAfterTick.AfterTick, addr 0x5f9462c, size 0x5c, virtual true, abstract: false, final true
inline void Fusion_IAfterTick_AfterTick() ;

/// @brief Method Fusion.IBeforeSimulation.BeforeSimulation, addr 0x5f94688, size 0x10c, virtual true, abstract: false, final true
inline void Fusion_IBeforeSimulation_BeforeSimulation(int32_t  forwardTickCount) ;

/// @brief Method Fusion.ISpawned.Spawned, addr 0x5f94794, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ISpawned_Spawned() ;

/// @brief Method GetClosestHit, addr 0x5f931c8, size 0x150, virtual false, abstract: false, final false
static inline ::Fusion::LagCompensatedHit GetClosestHit(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits) ;

/// @brief Method GetObjects, addr 0x5f9393c, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>* GetObjects(::Fusion::NetworkRunner*  runner) ;

/// @brief Method GetPlayerTickAndAlpha, addr 0x5f935d4, size 0x1d0, virtual false, abstract: false, final false
inline void GetPlayerTickAndAlpha(::Fusion::PlayerRef  player, ::by_ref<::System::Nullable_1<int32_t>>  tickFrom, ::by_ref<::System::Nullable_1<int32_t>>  tickTo, ::by_ref<::System::Nullable_1<float_t>>  alpha) ;

/// @brief Method GetStatisticsSnapshot, addr 0x5f937a4, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* GetStatisticsSnapshot() ;

/// @brief Method Init, addr 0x5f93890, size 0xac, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Init, addr 0x5f93b34, size 0x14c, virtual false, abstract: false, final false
inline void Init(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects) ;

/// @brief Method InitQueries, addr 0x5f93c80, size 0x288, virtual false, abstract: false, final false
inline void InitQueries() ;

static inline ::Fusion::HitboxManager* New_ctor() ;

/// @brief Method OverlapBox, addr 0x5f92c0c, size 0x160, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents, ::UnityEngine::Quaternion  orientation, ::Fusion::PlayerRef  player, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method OverlapBox, addr 0x5f92d6c, size 0x17c, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents, ::UnityEngine::Quaternion  orientation, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method OverlapBox, addr 0x5f9354c, size 0x88, virtual false, abstract: false, final false
inline int32_t OverlapBox(::Fusion::LagCompensation::BoxOverlapQuery*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits) ;

/// @brief Method OverlapSphere, addr 0x5f929cc, size 0x128, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::UnityEngine::Vector3  origin, float_t  radius, ::Fusion::PlayerRef  player, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method OverlapSphere, addr 0x5f92af4, size 0x118, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::UnityEngine::Vector3  origin, float_t  radius, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, ::Fusion::HitOptions  options, bool  clearHits, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method OverlapSphere, addr 0x5f934c4, size 0x88, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::Fusion::LagCompensation::SphereOverlapQuery*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits) ;

/// @brief Method PositionRotation, addr 0x5f93084, size 0x144, virtual false, abstract: false, final false
inline void PositionRotation(::Fusion::Hitbox*  hitbox, ::Fusion::PlayerRef  player, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, bool  subTickAccuracy) ;

/// @brief Method PositionRotation, addr 0x5f92ee8, size 0xcc, virtual false, abstract: false, final false
inline void PositionRotation(::Fusion::Hitbox*  hitbox, int32_t  tick, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, bool  subtickAccuracy, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha) ;

/// @brief Method PositionRotationInternal, addr 0x5f92fb4, size 0xd0, virtual false, abstract: false, final false
inline void PositionRotationInternal(::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>  param, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method QueryInternal, addr 0x5f9223c, size 0x2c8, virtual false, abstract: false, final false
inline int32_t QueryInternal(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits) ;

/// @brief Method Raycast, addr 0x5f9203c, size 0x200, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, ::Fusion::PlayerRef  player, ::by_ref<::Fusion::LagCompensatedHit>  hit, int32_t  layerMask, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method Raycast, addr 0x5f92504, size 0x208, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::by_ref<::Fusion::LagCompensatedHit>  hit, int32_t  layerMask, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method Raycast, addr 0x5f93318, size 0x124, virtual false, abstract: false, final false
inline bool Raycast(::Fusion::LagCompensation::RaycastQuery*  query, ::by_ref<::Fusion::LagCompensatedHit>  hit) ;

/// @brief Method RaycastAll, addr 0x5f9270c, size 0x158, virtual false, abstract: false, final false
inline int32_t RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, ::Fusion::PlayerRef  player, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, bool  clearHits, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method RaycastAll, addr 0x5f92864, size 0x168, virtual false, abstract: false, final false
inline int32_t RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, int32_t  tick, ::System::Nullable_1<int32_t>  tickTo, ::System::Nullable_1<float_t>  alpha, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  layerMask, bool  clearHits, ::Fusion::HitOptions  options, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::Fusion::LagCompensation::PreProcessingDelegate*  preProcessRoots) ;

/// @brief Method RaycastAll, addr 0x5f9343c, size 0x88, virtual false, abstract: false, final false
inline int32_t RaycastAll(::Fusion::LagCompensation::RaycastAllQuery*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, bool  clearHits) ;

/// @brief Method RegisterHitboxSnapshot, addr 0x5f93f14, size 0x278, virtual false, abstract: false, final false
inline void RegisterHitboxSnapshot(int32_t  tick, int32_t  dataTick) ;

/// @brief Method Remove, addr 0x5f94614, size 0x18, virtual false, abstract: false, final false
inline bool Remove(::Fusion::HitboxRoot*  root) ;

constexpr int32_t const& __cordl_internal_get_BVHDepth() const;

constexpr int32_t& __cordl_internal_get_BVHDepth() ;

constexpr int32_t const& __cordl_internal_get_BVHNodes() const;

constexpr int32_t& __cordl_internal_get_BVHNodes() ;

constexpr ::Fusion::LagCompensation::LagCompensationDraw* const& __cordl_internal_get_DrawInfo() const;

constexpr ::Fusion::LagCompensation::LagCompensationDraw*& __cordl_internal_get_DrawInfo() ;

constexpr int32_t const& __cordl_internal_get_TotalHitboxes() const;

constexpr int32_t& __cordl_internal_get_TotalHitboxes() ;

constexpr ::Fusion::LagCompensation::BoxOverlapQuery* const& __cordl_internal_get__boxOverlapQuery() const;

constexpr ::Fusion::LagCompensation::BoxOverlapQuery*& __cordl_internal_get__boxOverlapQuery() ;

constexpr ::Fusion::LagCompensation::HitboxBuffer* const& __cordl_internal_get__hitboxBuffer() const;

constexpr ::Fusion::LagCompensation::HitboxBuffer*& __cordl_internal_get__hitboxBuffer() ;

constexpr ::Fusion::Statistics::LagCompensationStatisticsManager* const& __cordl_internal_get__lagCompStatManager() const;

constexpr ::Fusion::Statistics::LagCompensationStatisticsManager*& __cordl_internal_get__lagCompStatManager() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>* const& __cordl_internal_get__lagCompensatedHits() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*& __cordl_internal_get__lagCompensatedHits() ;

constexpr ::Fusion::LagCompensation::RaycastAllQuery* const& __cordl_internal_get__raycastAllQuery() const;

constexpr ::Fusion::LagCompensation::RaycastAllQuery*& __cordl_internal_get__raycastAllQuery() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>* const& __cordl_internal_get__raycastHits() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*& __cordl_internal_get__raycastHits() ;

constexpr ::Fusion::LagCompensation::RaycastQuery* const& __cordl_internal_get__raycastQuery() const;

constexpr ::Fusion::LagCompensation::RaycastQuery*& __cordl_internal_get__raycastQuery() ;

constexpr ::Fusion::LagCompensationSettings* const& __cordl_internal_get__settings() const;

constexpr ::Fusion::LagCompensationSettings*& __cordl_internal_get__settings() ;

constexpr ::Fusion::LagCompensation::SphereOverlapQuery* const& __cordl_internal_get__sphereOverlapQuery() const;

constexpr ::Fusion::LagCompensation::SphereOverlapQuery*& __cordl_internal_get__sphereOverlapQuery() ;

constexpr void __cordl_internal_set_BVHDepth(int32_t  value) ;

constexpr void __cordl_internal_set_BVHNodes(int32_t  value) ;

constexpr void __cordl_internal_set_DrawInfo(::Fusion::LagCompensation::LagCompensationDraw*  value) ;

constexpr void __cordl_internal_set_TotalHitboxes(int32_t  value) ;

constexpr void __cordl_internal_set__boxOverlapQuery(::Fusion::LagCompensation::BoxOverlapQuery*  value) ;

constexpr void __cordl_internal_set__hitboxBuffer(::Fusion::LagCompensation::HitboxBuffer*  value) ;

constexpr void __cordl_internal_set__lagCompStatManager(::Fusion::Statistics::LagCompensationStatisticsManager*  value) ;

constexpr void __cordl_internal_set__lagCompensatedHits(::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  value) ;

constexpr void __cordl_internal_set__raycastAllQuery(::Fusion::LagCompensation::RaycastAllQuery*  value) ;

constexpr void __cordl_internal_set__raycastHits(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  value) ;

constexpr void __cordl_internal_set__raycastQuery(::Fusion::LagCompensation::RaycastQuery*  value) ;

constexpr void __cordl_internal_set__settings(::Fusion::LagCompensationSettings*  value) ;

constexpr void __cordl_internal_set__sphereOverlapQuery(::Fusion::LagCompensation::SphereOverlapQuery*  value) ;

/// @brief Method .ctor, addr 0x5f94798, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::IAfterTick"
constexpr ::Fusion::IAfterTick* i___Fusion__IAfterTick() noexcept;

/// @brief Convert to "::Fusion::IBeforeSimulation"
constexpr ::Fusion::IBeforeSimulation* i___Fusion__IBeforeSimulation() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Fusion::ISpawned"
constexpr ::Fusion::ISpawned* i___Fusion__ISpawned() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxManager(HitboxManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxManager(HitboxManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18959};

/// [ReadOnly]
/// [InlineHelp]
/// @brief Field BVHDepth, offset: 0x48, size: 0x4, def value: None
 int32_t  ___BVHDepth;

/// [ReadOnly]
/// [InlineHelp]
/// @brief Field BVHNodes, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___BVHNodes;

/// [ReadOnly]
/// [InlineHelp]
/// @brief Field TotalHitboxes, offset: 0x50, size: 0x4, def value: None
 int32_t  ___TotalHitboxes;

/// [ReadOnly]
/// [InlineHelp]
/// @brief Field DrawInfo, offset: 0x58, size: 0x8, def value: None
 ::Fusion::LagCompensation::LagCompensationDraw*  ___DrawInfo;

/// @brief Field _raycastHits, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  ____raycastHits;

/// @brief Field _raycastQuery, offset: 0x68, size: 0x8, def value: None
 ::Fusion::LagCompensation::RaycastQuery*  ____raycastQuery;

/// @brief Field _raycastAllQuery, offset: 0x70, size: 0x8, def value: None
 ::Fusion::LagCompensation::RaycastAllQuery*  ____raycastAllQuery;

/// @brief Field _sphereOverlapQuery, offset: 0x78, size: 0x8, def value: None
 ::Fusion::LagCompensation::SphereOverlapQuery*  ____sphereOverlapQuery;

/// @brief Field _boxOverlapQuery, offset: 0x80, size: 0x8, def value: None
 ::Fusion::LagCompensation::BoxOverlapQuery*  ____boxOverlapQuery;

/// @brief Field _settings, offset: 0x88, size: 0x8, def value: None
 ::Fusion::LagCompensationSettings*  ____settings;

/// @brief Field _hitboxBuffer, offset: 0x90, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxBuffer*  ____hitboxBuffer;

/// @brief Field _lagCompensatedHits, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  ____lagCompensatedHits;

/// @brief Field _lagCompStatManager, offset: 0xa0, size: 0x8, def value: None
 ::Fusion::Statistics::LagCompensationStatisticsManager*  ____lagCompStatManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::HitboxManager, ___BVHDepth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ___BVHNodes) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ___TotalHitboxes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ___DrawInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____raycastHits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____raycastQuery) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____raycastAllQuery) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____sphereOverlapQuery) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____boxOverlapQuery) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____settings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____hitboxBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____lagCompensatedHits) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxManager, ____lagCompStatManager) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Fusion::HitboxManager) == 0xa8, "Size mismatch!");

} // namespace end def Fusion
