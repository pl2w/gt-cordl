#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/CurveInteractionCaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_HitDetectionType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_QuerySnapVolumeInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__InteractionCasterBase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__QueryUIDocumentInteraction_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveInteractionCaster)
namespace GlobalNamespace {
struct CurveInteractionCaster_HitDetectionType;
}
namespace GlobalNamespace {
struct CurveInteractionCaster_QuerySnapVolumeInteraction;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class CurveInteractionCaster_RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class ICurveInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class IInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIModelUpdater;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct QueryUIDocumentInteraction;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class CurveInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class CurveInteractionCaster_RaycastHitComparer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "CurveInteractionCaster");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "CurveInteractionCaster/RaycastHitComparer");
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/Curve Interaction Caster", 22)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster.html")]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster::HitDetectionType, UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster::QuerySnapVolumeInteraction, UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.InteractionCasterBase, UnityEngine.XR.Interaction.Toolkit.UI.QueryUIDocumentInteraction
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster
class CORDL_TYPE CurveInteractionCaster : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase {
public:
// Declarations
using HitDetectionType = ::GlobalNamespace::CurveInteractionCaster_HitDetectionType;

using QuerySnapVolumeInteraction = ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction;

using RaycastHitComparer = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer;

/// @brief Field <isDestroyed>k__BackingField, offset 0xa5, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDestroyed_k__BackingField, put=__cordl_internal_set__isDestroyed_k__BackingField)) bool  _isDestroyed_k__BackingField;

 __declspec(property(get=get_castDistance, put=set_castDistance)) float_t  castDistance;

 __declspec(property(get=get_coneCastAngle, put=set_coneCastAngle)) float_t  coneCastAngle;

 __declspec(property(get=get_coneCastAngleRadius)) float_t  coneCastAngleRadius;

 __declspec(property(get=get_hitDetectionType, put=set_hitDetectionType)) ::GlobalNamespace::CurveInteractionCaster_HitDetectionType  hitDetectionType;

 __declspec(property(get=get_isDestroyed, put=set_isDestroyed)) bool  isDestroyed;

 __declspec(property(get=get_lastSamplePoint)) ::UnityEngine::Vector3  lastSamplePoint;

 __declspec(property(get=get_liveConeCastDebugVisuals, put=set_liveConeCastDebugVisuals)) bool  liveConeCastDebugVisuals;

/// @brief Field m_CachedConeCastAngle, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedConeCastAngle, put=__cordl_internal_set_m_CachedConeCastAngle)) float_t  m_CachedConeCastAngle;

/// @brief Field m_CachedConeCastRadius, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedConeCastRadius, put=__cordl_internal_set_m_CachedConeCastRadius)) float_t  m_CachedConeCastRadius;

/// @brief Field m_CastDistance, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CastDistance, put=__cordl_internal_set_m_CastDistance)) float_t  m_CastDistance;

/// @brief Field m_ConeCastAngle, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConeCastAngle, put=__cordl_internal_set_m_ConeCastAngle)) float_t  m_ConeCastAngle;

/// @brief Field m_ConeCastDebugInfo, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConeCastDebugInfo, put=__cordl_internal_set_m_ConeCastDebugInfo)) ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  m_ConeCastDebugInfo;

/// @brief Field m_HitDetectionType, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HitDetectionType, put=__cordl_internal_set_m_HitDetectionType)) ::GlobalNamespace::CurveInteractionCaster_HitDetectionType  m_HitDetectionType;

/// @brief Field m_LiveConeCastDebugVisuals, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LiveConeCastDebugVisuals, put=__cordl_internal_set_m_LiveConeCastDebugVisuals)) bool  m_LiveConeCastDebugVisuals;

/// @brief Field m_LocalPhysicsScene, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_RaycastHitComparer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastHitComparer, put=__cordl_internal_set_m_RaycastHitComparer)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*  m_RaycastHitComparer;

/// @brief Field m_RaycastHits, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastHits, put=__cordl_internal_set_m_RaycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_RaycastHits;

/// @brief Field m_RaycastHitsCount, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastHitsCount, put=__cordl_internal_set_m_RaycastHitsCount)) int32_t  m_RaycastHitsCount;

/// @brief Field m_RaycastMask, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastMask, put=__cordl_internal_set_m_RaycastMask)) ::UnityEngine::LayerMask  m_RaycastMask;

/// @brief Field m_RaycastSnapVolumeInteraction, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastSnapVolumeInteraction, put=__cordl_internal_set_m_RaycastSnapVolumeInteraction)) ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  m_RaycastSnapVolumeInteraction;

/// @brief Field m_RaycastTriggerInteraction, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastTriggerInteraction, put=__cordl_internal_set_m_RaycastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_RaycastTriggerInteraction;

/// @brief Field m_RaycastUIDocumentTriggerInteraction, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastUIDocumentTriggerInteraction, put=__cordl_internal_set_m_RaycastUIDocumentTriggerInteraction)) ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  m_RaycastUIDocumentTriggerInteraction;

/// @brief Field m_SamplePoints, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_SamplePoints, put=__cordl_internal_set_m_SamplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_SamplePoints;

/// @brief Field m_SphereCastRadius, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SphereCastRadius, put=__cordl_internal_set_m_SphereCastRadius)) float_t  m_SphereCastRadius;

/// @brief Field m_TargetNumCurveSegments, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetNumCurveSegments, put=__cordl_internal_set_m_TargetNumCurveSegments)) int32_t  m_TargetNumCurveSegments;

 __declspec(property(get=get_raycastMask, put=set_raycastMask)) ::UnityEngine::LayerMask  raycastMask;

 __declspec(property(get=get_raycastSnapVolumeInteraction, put=set_raycastSnapVolumeInteraction)) ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  raycastSnapVolumeInteraction;

 __declspec(property(get=get_raycastTriggerInteraction, put=set_raycastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  raycastTriggerInteraction;

 __declspec(property(get=get_raycastUIDocumentTriggerInteraction, put=set_raycastUIDocumentTriggerInteraction)) ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  raycastUIDocumentTriggerInteraction;

/// @brief Field s_OptimalHits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OptimalHits, put=setStaticF_s_OptimalHits)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  s_OptimalHits;

/// @brief Field s_SpherecastScratch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SpherecastScratch, put=setStaticF_s_SpherecastScratch)) ::ArrayW<::UnityEngine::RaycastHit>  s_SpherecastScratch;

 __declspec(property(get=get_samplePoints, put=set_samplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  samplePoints;

 __declspec(property(get=get_sphereCastRadius, put=set_sphereCastRadius)) float_t  sphereCastRadius;

 __declspec(property(get=get_targetNumCurveSegments, put=set_targetNumCurveSegments)) int32_t  targetNumCurveSegments;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*() noexcept;

/// @brief Method Awake, addr 0xb48db48, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckCollidersBetweenPoints, addr 0xb48e6ac, size 0x318, virtual true, abstract: false, final false
inline int32_t CheckCollidersBetweenPoints(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager, ::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  origin, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits) ;

/// @brief Method FilterOutNonSnapTriggerColliders, addr 0xb48f63c, size 0x194, virtual false, abstract: false, final false
static inline int32_t FilterOutNonSnapTriggerColliders(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count) ;

/// @brief Method FilterOutSnapTriggerColliders, addr 0xb48f4e0, size 0x15c, virtual false, abstract: false, final false
static inline int32_t FilterOutSnapTriggerColliders(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count) ;

/// @brief Method FilterOutTriggerColliders, addr 0xb48f3d0, size 0x110, virtual false, abstract: false, final false
inline int32_t FilterOutTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  raycastHitCount) ;

/// @brief Method FilteredConecast, addr 0xb48e9c4, size 0xa0c, virtual false, abstract: false, final false
inline int32_t FilteredConecast(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  origin, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method InitializeCaster, addr 0xb48dce8, size 0x110, virtual true, abstract: false, final false
inline bool InitializeCaster() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb48dc64, size 0x7c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb48dc60, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0xb48fa28, size 0x60c, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0xb48dc5c, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TryGetColliderTargets, addr 0xb48ddf8, size 0x13c, virtual true, abstract: false, final false
inline bool TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets) ;

/// @brief Method TryGetColliderTargets, addr 0xb48dfec, size 0x220, virtual true, abstract: false, final true
inline bool TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHits) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIModelUpdater.UpdateUIModel, addr 0xb4902c4, size 0x4, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_UI_IUIModelUpdater_UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  uiModel, bool  isSelectActive, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  scrollDelta) ;

/// @brief Method UpdateInternalData, addr 0xb48e20c, size 0x24, virtual true, abstract: false, final false
inline void UpdateInternalData() ;

/// @brief Method UpdatePhysicscastHits, addr 0xb48e414, size 0x298, virtual true, abstract: false, final false
inline bool UpdatePhysicscastHits(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager) ;

/// @brief Method UpdateSamplePoints, addr 0xb48e29c, size 0xac, virtual true, abstract: false, final false
inline void UpdateSamplePoints() ;

/// @brief Method UpdateSamplePoints, addr 0xb48e36c, size 0xa8, virtual true, abstract: false, final false
inline void UpdateSamplePoints(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  origin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, float_t  totalDistance, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  points) ;

/// @brief Method UpdateUIModel, addr 0xb48f7d0, size 0x258, virtual false, abstract: false, final false
inline bool UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  uiModel, bool  isSelectActive, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  scrollDelta) ;

constexpr bool const& __cordl_internal_get__isDestroyed_k__BackingField() const;

constexpr bool& __cordl_internal_get__isDestroyed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_CachedConeCastAngle() const;

constexpr float_t& __cordl_internal_get_m_CachedConeCastAngle() ;

constexpr float_t const& __cordl_internal_get_m_CachedConeCastRadius() const;

constexpr float_t& __cordl_internal_get_m_CachedConeCastRadius() ;

constexpr float_t const& __cordl_internal_get_m_CastDistance() const;

constexpr float_t& __cordl_internal_get_m_CastDistance() ;

constexpr float_t const& __cordl_internal_get_m_ConeCastAngle() const;

constexpr float_t& __cordl_internal_get_m_ConeCastAngle() ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>* const& __cordl_internal_get_m_ConeCastDebugInfo() const;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*& __cordl_internal_get_m_ConeCastDebugInfo() ;

constexpr ::GlobalNamespace::CurveInteractionCaster_HitDetectionType const& __cordl_internal_get_m_HitDetectionType() const;

constexpr ::GlobalNamespace::CurveInteractionCaster_HitDetectionType& __cordl_internal_get_m_HitDetectionType() ;

constexpr bool const& __cordl_internal_get_m_LiveConeCastDebugVisuals() const;

constexpr bool& __cordl_internal_get_m_LiveConeCastDebugVisuals() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer* const& __cordl_internal_get_m_RaycastHitComparer() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*& __cordl_internal_get_m_RaycastHitComparer() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_RaycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_RaycastHits() ;

constexpr int32_t const& __cordl_internal_get_m_RaycastHitsCount() const;

constexpr int32_t& __cordl_internal_get_m_RaycastHitsCount() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_RaycastMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_RaycastMask() ;

constexpr ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction const& __cordl_internal_get_m_RaycastSnapVolumeInteraction() const;

constexpr ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction& __cordl_internal_get_m_RaycastSnapVolumeInteraction() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_RaycastTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_RaycastTriggerInteraction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction const& __cordl_internal_get_m_RaycastUIDocumentTriggerInteraction() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction& __cordl_internal_get_m_RaycastUIDocumentTriggerInteraction() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_SamplePoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_SamplePoints() ;

constexpr float_t const& __cordl_internal_get_m_SphereCastRadius() const;

constexpr float_t& __cordl_internal_get_m_SphereCastRadius() ;

constexpr int32_t const& __cordl_internal_get_m_TargetNumCurveSegments() const;

constexpr int32_t& __cordl_internal_get_m_TargetNumCurveSegments() ;

constexpr void __cordl_internal_set__isDestroyed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_CachedConeCastAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_CachedConeCastRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_CastDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_ConeCastAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_ConeCastDebugInfo(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  value) ;

constexpr void __cordl_internal_set_m_HitDetectionType(::GlobalNamespace::CurveInteractionCaster_HitDetectionType  value) ;

constexpr void __cordl_internal_set_m_LiveConeCastDebugVisuals(bool  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*  value) ;

constexpr void __cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_RaycastHitsCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_RaycastSnapVolumeInteraction(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  value) ;

constexpr void __cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_m_RaycastUIDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value) ;

constexpr void __cordl_internal_set_m_SamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_SphereCastRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_TargetNumCurveSegments(int32_t  value) ;

/// @brief Method .ctor, addr 0xb490034, size 0x128, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* getStaticF_s_OptimalHits() ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_s_SpherecastScratch() ;

/// @brief Method get_castDistance, addr 0xb48d9e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_castDistance() ;

/// @brief Method get_coneCastAngle, addr 0xb48da1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_coneCastAngle() ;

/// @brief Method get_coneCastAngleRadius, addr 0xb48da2c, size 0xfc, virtual false, abstract: false, final false
inline float_t get_coneCastAngleRadius() ;

/// @brief Method get_hitDetectionType, addr 0xb48d9d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CurveInteractionCaster_HitDetectionType get_hitDetectionType() ;

/// [CompilerGenerated]
/// @brief Method get_isDestroyed, addr 0xb48db38, size 0x8, virtual false, abstract: false, final false
inline bool get_isDestroyed() ;

/// @brief Method get_lastSamplePoint, addr 0xb48d910, size 0x58, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_lastSamplePoint() ;

/// @brief Method get_liveConeCastDebugVisuals, addr 0xb48db28, size 0x8, virtual false, abstract: false, final false
inline bool get_liveConeCastDebugVisuals() ;

/// @brief Method get_raycastMask, addr 0xb48d968, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_raycastMask() ;

/// @brief Method get_raycastSnapVolumeInteraction, addr 0xb48d988, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction get_raycastSnapVolumeInteraction() ;

/// @brief Method get_raycastTriggerInteraction, addr 0xb48d978, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_raycastTriggerInteraction() ;

/// @brief Method get_raycastUIDocumentTriggerInteraction, addr 0xb48d998, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction get_raycastUIDocumentTriggerInteraction() ;

/// @brief Method get_samplePoints, addr 0xb48d8fc, size 0xc, virtual true, abstract: false, final true
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_samplePoints() ;

/// @brief Method get_sphereCastRadius, addr 0xb48d9f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_sphereCastRadius() ;

/// @brief Method get_targetNumCurveSegments, addr 0xb48d9a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_targetNumCurveSegments() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__ICurveInteractionCaster() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__IInteractionCaster() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIModelUpdater() noexcept;

static inline void setStaticF_s_OptimalHits(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

static inline void setStaticF_s_SpherecastScratch(::ArrayW<::UnityEngine::RaycastHit>  value) ;

/// @brief Method set_castDistance, addr 0xb48d9e8, size 0x8, virtual false, abstract: false, final false
inline void set_castDistance(float_t  value) ;

/// @brief Method set_coneCastAngle, addr 0xb48da24, size 0x8, virtual false, abstract: false, final false
inline void set_coneCastAngle(float_t  value) ;

/// @brief Method set_hitDetectionType, addr 0xb48d9d8, size 0x8, virtual false, abstract: false, final false
inline void set_hitDetectionType(::GlobalNamespace::CurveInteractionCaster_HitDetectionType  value) ;

/// [CompilerGenerated]
/// @brief Method set_isDestroyed, addr 0xb48db40, size 0x8, virtual false, abstract: false, final false
inline void set_isDestroyed(bool  value) ;

/// @brief Method set_liveConeCastDebugVisuals, addr 0xb48db30, size 0x8, virtual false, abstract: false, final false
inline void set_liveConeCastDebugVisuals(bool  value) ;

/// @brief Method set_raycastMask, addr 0xb48d970, size 0x8, virtual false, abstract: false, final false
inline void set_raycastMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_raycastSnapVolumeInteraction, addr 0xb48d990, size 0x8, virtual false, abstract: false, final false
inline void set_raycastSnapVolumeInteraction(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  value) ;

/// @brief Method set_raycastTriggerInteraction, addr 0xb48d980, size 0x8, virtual false, abstract: false, final false
inline void set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

/// @brief Method set_raycastUIDocumentTriggerInteraction, addr 0xb48d9a0, size 0x8, virtual false, abstract: false, final false
inline void set_raycastUIDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value) ;

/// @brief Method set_samplePoints, addr 0xb48d908, size 0x8, virtual false, abstract: false, final false
inline void set_samplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

/// @brief Method set_sphereCastRadius, addr 0xb48d9f8, size 0x24, virtual false, abstract: false, final false
inline void set_sphereCastRadius(float_t  value) ;

/// @brief Method set_targetNumCurveSegments, addr 0xb48d9b0, size 0x20, virtual false, abstract: false, final false
inline void set_targetNumCurveSegments(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveInteractionCaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveInteractionCaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveInteractionCaster(CurveInteractionCaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveInteractionCaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveInteractionCaster(CurveInteractionCaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11501};

/// @brief Field k_MaxNumCurveSegments offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxNumCurveSegments{static_cast<int32_t>(0x64)};

/// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxRaycastHits{static_cast<int32_t>(0xa)};

/// @brief Field k_MinNumCurveSegments offset 0xffffffff size 0x4
static constexpr int32_t  k_MinNumCurveSegments{static_cast<int32_t>(0x1)};

/// @brief Field m_SamplePoints, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_SamplePoints;

/// [SerializeField]
/// @brief Field m_RaycastMask, offset: 0x78, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_RaycastMask;

/// [SerializeField]
/// @brief Field m_RaycastTriggerInteraction, offset: 0x7c, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_RaycastTriggerInteraction;

/// [SerializeField]
/// @brief Field m_RaycastSnapVolumeInteraction, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  ___m_RaycastSnapVolumeInteraction;

/// [SerializeField]
/// @brief Field m_RaycastUIDocumentTriggerInteraction, offset: 0x84, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  ___m_RaycastUIDocumentTriggerInteraction;

/// [SerializeField]
/// [Range(1, 100)]
/// @brief Field m_TargetNumCurveSegments, offset: 0x88, size: 0x4, def value: None
 int32_t  ___m_TargetNumCurveSegments;

/// [SerializeField]
/// @brief Field m_HitDetectionType, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::CurveInteractionCaster_HitDetectionType  ___m_HitDetectionType;

/// [SerializeField]
/// @brief Field m_CastDistance, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_CastDistance;

/// [SerializeField]
/// [Range(0.01, 0.25)]
/// @brief Field m_SphereCastRadius, offset: 0x94, size: 0x4, def value: None
 float_t  ___m_SphereCastRadius;

/// [SerializeField]
/// @brief Field m_ConeCastAngle, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_ConeCastAngle;

/// @brief Field m_CachedConeCastAngle, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_CachedConeCastAngle;

/// @brief Field m_CachedConeCastRadius, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_CachedConeCastRadius;

/// [SerializeField]
/// @brief Field m_LiveConeCastDebugVisuals, offset: 0xa4, size: 0x1, def value: None
 bool  ___m_LiveConeCastDebugVisuals;

/// [CompilerGenerated]
/// @brief Field <isDestroyed>k__BackingField, offset: 0xa5, size: 0x1, def value: None
 bool  ____isDestroyed_k__BackingField;

/// @brief Field m_LocalPhysicsScene, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_RaycastHitsCount, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___m_RaycastHitsCount;

/// @brief Field m_RaycastHits, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_RaycastHits;

/// @brief Field m_RaycastHitComparer, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*  ___m_RaycastHitComparer;

/// @brief Field m_ConeCastDebugInfo, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  ___m_ConeCastDebugInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_SamplePoints) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastTriggerInteraction) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastSnapVolumeInteraction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastUIDocumentTriggerInteraction) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_TargetNumCurveSegments) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_HitDetectionType) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_CastDistance) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_SphereCastRadius) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_ConeCastAngle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_CachedConeCastAngle) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_CachedConeCastRadius) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_LiveConeCastDebugVisuals) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ____isDestroyed_k__BackingField) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_LocalPhysicsScene) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastHitsCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastHits) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_RaycastHitComparer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster, ___m_ConeCastDebugInfo) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Casters
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster/RaycastHitComparer
class CORDL_TYPE CurveInteractionCaster_RaycastHitComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

/// @brief Method Compare, addr 0xb4902c8, size 0x44, virtual true, abstract: false, final true
inline int32_t Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb49015c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveInteractionCaster_RaycastHitComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveInteractionCaster_RaycastHitComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveInteractionCaster_RaycastHitComparer(CurveInteractionCaster_RaycastHitComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveInteractionCaster_RaycastHitComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveInteractionCaster_RaycastHitComparer(CurveInteractionCaster_RaycastHitComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Casters
