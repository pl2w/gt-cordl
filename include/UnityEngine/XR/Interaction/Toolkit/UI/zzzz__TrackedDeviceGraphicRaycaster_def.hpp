#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceGraphicRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceGraphicRaycaster)
namespace GlobalNamespace {
struct TrackedDeviceGraphicRaycaster_RaycastHitData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IMultiPokeStateDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IPokeStateDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceGraphicRaycaster_RaycastHitComparer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceGraphicRaycaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceGraphicRaycaster_RaycastHitComparer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceGraphicRaycaster");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceGraphicRaycaster/RaycastHitComparer");
// [AddComponentMenu("Event/Tracked Device Graphic Raycaster", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster.html")]
// Dependencies UnityEngine.EventSystems.BaseRaycaster, UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.PhysicsScene2D, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.RaycastHit2D, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster
class CORDL_TYPE TrackedDeviceGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using RaycastHitData = ::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData;

using RaycastHitComparer = ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer;

/// @brief Field <pokeStateDataDictionary>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__pokeStateDataDictionary_k__BackingField, put=__cordl_internal_set__pokeStateDataDictionary_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*  _pokeStateDataDictionary_k__BackingField;

 __declspec(property(get=get_blockingMask, put=set_blockingMask)) ::UnityEngine::LayerMask  blockingMask;

 __declspec(property(get=get_canvas)) ::UnityW<::UnityEngine::Canvas>  canvas;

 __declspec(property(get=get_checkFor2DOcclusion, put=set_checkFor2DOcclusion)) bool  checkFor2DOcclusion;

 __declspec(property(get=get_checkFor3DOcclusion, put=set_checkFor3DOcclusion)) bool  checkFor3DOcclusion;

 __declspec(property(get=get_eventCamera)) ::UnityW<::UnityEngine::Camera>  eventCamera;

 __declspec(property(get=get_ignoreReversedGraphics, put=set_ignoreReversedGraphics)) bool  ignoreReversedGraphics;

/// @brief Field m_BindingsGroup, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsGroup, put=__cordl_internal_set_m_BindingsGroup)) ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  m_BindingsGroup;

/// @brief Field m_BlockingMask, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BlockingMask, put=__cordl_internal_set_m_BlockingMask)) ::UnityEngine::LayerMask  m_BlockingMask;

/// @brief Field m_Canvas, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Canvas, put=__cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas>  m_Canvas;

/// @brief Field m_CheckFor2DOcclusion, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CheckFor2DOcclusion, put=__cordl_internal_set_m_CheckFor2DOcclusion)) bool  m_CheckFor2DOcclusion;

/// @brief Field m_CheckFor3DOcclusion, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CheckFor3DOcclusion, put=__cordl_internal_set_m_CheckFor3DOcclusion)) bool  m_CheckFor3DOcclusion;

/// @brief Field m_HasWarnedEventCameraNull, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasWarnedEventCameraNull, put=__cordl_internal_set_m_HasWarnedEventCameraNull)) bool  m_HasWarnedEventCameraNull;

/// @brief Field m_IgnoreReversedGraphics, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreReversedGraphics, put=__cordl_internal_set_m_IgnoreReversedGraphics)) bool  m_IgnoreReversedGraphics;

/// @brief Field m_LocalPhysicsScene, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_LocalPhysicsScene2D, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene2D, put=__cordl_internal_set_m_LocalPhysicsScene2D)) ::UnityEngine::PhysicsScene2D  m_LocalPhysicsScene2D;

/// @brief Field m_OcclusionHits2D, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OcclusionHits2D, put=__cordl_internal_set_m_OcclusionHits2D)) ::ArrayW<::UnityEngine::RaycastHit2D>  m_OcclusionHits2D;

/// @brief Field m_OcclusionHits3D, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OcclusionHits3D, put=__cordl_internal_set_m_OcclusionHits3D)) ::ArrayW<::UnityEngine::RaycastHit>  m_OcclusionHits3D;

/// @brief Field m_PokeLogic, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeLogic, put=__cordl_internal_set_m_PokeLogic)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  m_PokeLogic;

/// @brief Field m_RaycastResultsCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastResultsCache, put=__cordl_internal_set_m_RaycastResultsCache)) ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  m_RaycastResultsCache;

/// @brief Field m_RaycastTriggerInteraction, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastTriggerInteraction, put=__cordl_internal_set_m_RaycastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_RaycastTriggerInteraction;

 __declspec(property(get=get_pokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  pokeStateData;

 __declspec(property(get=get_pokeStateDataDictionary)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*  pokeStateDataDictionary;

 __declspec(property(get=get_raycastTriggerInteraction, put=set_raycastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  raycastTriggerInteraction;

/// @brief Field s_Corners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Corners, put=setStaticF_s_Corners)) ::ArrayW<::UnityEngine::Vector3>  s_Corners;

/// @brief Field s_InteractorHitData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractorHitData, put=setStaticF_s_InteractorHitData)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  s_InteractorHitData;

/// @brief Field s_InteractorRaycasters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractorRaycasters, put=setStaticF_s_InteractorRaycasters)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*  s_InteractorRaycasters;

/// @brief Field s_PokeHoverRaycasters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PokeHoverRaycasters, put=setStaticF_s_PokeHoverRaycasters)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*  s_PokeHoverRaycasters;

/// @brief Field s_RaycastHitComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RaycastHitComparer, put=setStaticF_s_RaycastHitComparer)) ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*  s_RaycastHitComparer;

/// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SortedGraphics, put=setStaticF_s_SortedGraphics)) ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  s_SortedGraphics;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*() noexcept;

/// @brief Method Awake, addr 0xb435a54, size 0x134, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EndPokeInteraction, addr 0xb43529c, size 0x1f4, virtual false, abstract: false, final false
inline void EndPokeInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor) ;

/// @brief Method FindClosestHit, addr 0xb435970, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit FindClosestHit(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  count) ;

/// @brief Method GetPokeStateDataForTarget, addr 0xb435774, size 0x124, virtual true, abstract: false, final true
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* GetPokeStateDataForTarget(::UnityEngine::Transform*  target) ;

/// @brief Method GetRectTransformPlane, addr 0xb437d68, size 0x1f4, virtual false, abstract: false, final false
static inline ::UnityEngine::Plane GetRectTransformPlane(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  raycastPadding, ::ArrayW<::UnityEngine::Vector3>  fourCornersArray) ;

/// @brief Method GetRectTransformWorldCorners, addr 0xb438254, size 0x194, virtual false, abstract: false, final false
static inline void GetRectTransformWorldCorners(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  offset, ::ArrayW<::UnityEngine::Vector3>  fourCornersArray) ;

/// @brief Method IsPokeInteractingWithUI, addr 0xb4350f0, size 0x1ac, virtual false, abstract: false, final false
static inline bool IsPokeInteractingWithUI(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor) ;

/// @brief Method IsPokeSelectingWithUI, addr 0xb435898, size 0xd8, virtual false, abstract: false, final false
static inline bool IsPokeSelectingWithUI(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4362a4, size 0xc0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb435d7c, size 0x528, virtual true, abstract: false, final false
inline void OnDisable() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnDrawGizmosSelected, addr 0xb4383e8, size 0x4, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method PerformRaycast, addr 0xb4367fc, size 0x358, virtual false, abstract: false, final false
inline bool PerformRaycast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  currentEventCamera, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList, ::by_ref<float_t>  existingHitLength) ;

/// @brief Method PerformRaycasts, addr 0xb434970, size 0x780, virtual false, abstract: false, final false
inline void PerformRaycasts(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method PerformSpherecast, addr 0xb436394, size 0x3b8, virtual false, abstract: false, final false
inline bool PerformSpherecast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  currentEventCamera, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method ProcessSortedHitsResults, addr 0xb437008, size 0x4b0, virtual false, abstract: false, final false
inline bool ProcessSortedHitsResults(::UnityEngine::Ray  ray, float_t  hitDistance, bool  hitSomething, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  raycastHitDatums, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method RayIntersectsRectTransform, addr 0xb437f5c, size 0x2f8, virtual false, abstract: false, final false
static inline bool RayIntersectsRectTransform(::UnityEngine::Ray  ray, ::UnityEngine::Plane  plane, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<float_t>  distance) ;

/// @brief Method RayIntersectsRectTransform, addr 0xb437c8c, size 0xdc, virtual false, abstract: false, final false
static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  raycastPadding, ::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<float_t>  distance) ;

/// @brief Method Raycast, addr 0xb4348d4, size 0x9c, virtual true, abstract: false, final false
inline void Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method SetupPoke, addr 0xb435b88, size 0x1f4, virtual false, abstract: false, final false
inline void SetupPoke() ;

/// @brief Method ShouldTestGraphic, addr 0xb437978, size 0xa0, virtual false, abstract: false, final false
static inline bool ShouldTestGraphic(::UnityEngine::UI::Graphic*  graphic, ::UnityEngine::LayerMask  layerMask) ;

/// @brief Method SortedRaycastGraphics, addr 0xb4374b8, size 0x4c0, virtual false, abstract: false, final false
static inline void SortedRaycastGraphics(::UnityEngine::Canvas*  canvas, ::UnityEngine::Ray  ray, float_t  maxDistance, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  eventCamera, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  results) ;

/// @brief Method SortedSpherecastGraphics, addr 0xb436b54, size 0x4b4, virtual false, abstract: false, final false
static inline void SortedSpherecastGraphics(::UnityEngine::Canvas*  canvas, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  eventCamera, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  results) ;

/// @brief Method SphereIntersectsRectTransform, addr 0xb437a18, size 0x210, virtual false, abstract: false, final false
static inline bool SphereIntersectsRectTransform(::UnityEngine::RectTransform*  transform, ::UnityEngine::Vector4  raycastPadding, ::UnityEngine::Vector3  from, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<float_t>  distance) ;

/// @brief Method TryGetPokeStateDataForInteractor, addr 0xb435490, size 0x2c4, virtual false, abstract: false, final false
static inline bool TryGetPokeStateDataForInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>  data) ;

/// [CompilerGenerated]
/// @brief Method <SetupPoke>b__57_0, addr 0xb43879c, size 0x2e8, virtual false, abstract: false, final false
inline void _SetupPoke_b__57_0(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData  data) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>* const& __cordl_internal_get__pokeStateDataDictionary_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*& __cordl_internal_get__pokeStateDataDictionary_k__BackingField() ;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& __cordl_internal_get_m_BindingsGroup() const;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_BlockingMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_BlockingMask() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas() ;

constexpr bool const& __cordl_internal_get_m_CheckFor2DOcclusion() const;

constexpr bool& __cordl_internal_get_m_CheckFor2DOcclusion() ;

constexpr bool const& __cordl_internal_get_m_CheckFor3DOcclusion() const;

constexpr bool& __cordl_internal_get_m_CheckFor3DOcclusion() ;

constexpr bool const& __cordl_internal_get_m_HasWarnedEventCameraNull() const;

constexpr bool& __cordl_internal_get_m_HasWarnedEventCameraNull() ;

constexpr bool const& __cordl_internal_get_m_IgnoreReversedGraphics() const;

constexpr bool& __cordl_internal_get_m_IgnoreReversedGraphics() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr ::UnityEngine::PhysicsScene2D const& __cordl_internal_get_m_LocalPhysicsScene2D() const;

constexpr ::UnityEngine::PhysicsScene2D& __cordl_internal_get_m_LocalPhysicsScene2D() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& __cordl_internal_get_m_OcclusionHits2D() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& __cordl_internal_get_m_OcclusionHits2D() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_OcclusionHits3D() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_OcclusionHits3D() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* const& __cordl_internal_get_m_PokeLogic() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& __cordl_internal_get_m_PokeLogic() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* const& __cordl_internal_get_m_RaycastResultsCache() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*& __cordl_internal_get_m_RaycastResultsCache() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_RaycastTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_RaycastTriggerInteraction() ;

constexpr void __cordl_internal_set__pokeStateDataDictionary_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*  value) ;

constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value) ;

constexpr void __cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set_m_CheckFor2DOcclusion(bool  value) ;

constexpr void __cordl_internal_set_m_CheckFor3DOcclusion(bool  value) ;

constexpr void __cordl_internal_set_m_HasWarnedEventCameraNull(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreReversedGraphics(bool  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene2D(::UnityEngine::PhysicsScene2D  value) ;

constexpr void __cordl_internal_set_m_OcclusionHits2D(::ArrayW<::UnityEngine::RaycastHit2D>  value) ;

constexpr void __cordl_internal_set_m_OcclusionHits3D(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  value) ;

constexpr void __cordl_internal_set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  value) ;

constexpr void __cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

/// @brief Method .ctor, addr 0xb4383ec, size 0x194, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_s_Corners() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* getStaticF_s_InteractorHitData() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>* getStaticF_s_InteractorRaycasters() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>* getStaticF_s_PokeHoverRaycasters() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer* getStaticF_s_RaycastHitComparer() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* getStaticF_s_SortedGraphics() ;

/// @brief Method get_blockingMask, addr 0xb434748, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_blockingMask() ;

/// @brief Method get_canvas, addr 0xb434840, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get_canvas() ;

/// @brief Method get_checkFor2DOcclusion, addr 0xb434728, size 0x8, virtual false, abstract: false, final false
inline bool get_checkFor2DOcclusion() ;

/// @brief Method get_checkFor3DOcclusion, addr 0xb434738, size 0x8, virtual false, abstract: false, final false
inline bool get_checkFor3DOcclusion() ;

/// @brief Method get_eventCamera, addr 0xb434768, size 0xd8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_eventCamera() ;

/// @brief Method get_ignoreReversedGraphics, addr 0xb434718, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreReversedGraphics() ;

/// @brief Method get_pokeStateData, addr 0xb435754, size 0x18, virtual true, abstract: false, final true
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData() ;

/// [CompilerGenerated]
/// @brief Method get_pokeStateDataDictionary, addr 0xb43576c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>* get_pokeStateDataDictionary() ;

/// @brief Method get_raycastTriggerInteraction, addr 0xb434758, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_raycastTriggerInteraction() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IMultiPokeStateDataProvider* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IMultiPokeStateDataProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IPokeStateDataProvider() noexcept;

static inline void setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF_s_InteractorHitData(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  value) ;

static inline void setStaticF_s_InteractorRaycasters(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*  value) ;

static inline void setStaticF_s_PokeHoverRaycasters(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*  value) ;

static inline void setStaticF_s_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer*  value) ;

static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  value) ;

/// @brief Method set_blockingMask, addr 0xb434750, size 0x8, virtual false, abstract: false, final false
inline void set_blockingMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_checkFor2DOcclusion, addr 0xb434730, size 0x8, virtual false, abstract: false, final false
inline void set_checkFor2DOcclusion(bool  value) ;

/// @brief Method set_checkFor3DOcclusion, addr 0xb434740, size 0x8, virtual false, abstract: false, final false
inline void set_checkFor3DOcclusion(bool  value) ;

/// @brief Method set_ignoreReversedGraphics, addr 0xb434720, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreReversedGraphics(bool  value) ;

/// @brief Method set_raycastTriggerInteraction, addr 0xb434760, size 0x8, virtual false, abstract: false, final false
inline void set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceGraphicRaycaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceGraphicRaycaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedDeviceGraphicRaycaster(TrackedDeviceGraphicRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceGraphicRaycaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedDeviceGraphicRaycaster(TrackedDeviceGraphicRaycaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11296};

/// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxRaycastHits{static_cast<int32_t>(0xa)};

/// [SerializeField]
/// [Tooltip("Whether Graphics facing away from the ray caster are checked for ray casts. Enable this to ignore backfacing Graphics.")]
/// @brief Field m_IgnoreReversedGraphics, offset: 0x28, size: 0x1, def value: None
 bool  ___m_IgnoreReversedGraphics;

/// [SerializeField]
/// [Tooltip("Whether or not 2D occlusion is checked when performing ray casts. Enable to make Graphics be blocked by 2D objects that exist in front of it.")]
/// @brief Field m_CheckFor2DOcclusion, offset: 0x29, size: 0x1, def value: None
 bool  ___m_CheckFor2DOcclusion;

/// [SerializeField]
/// [Tooltip("Whether or not 3D occlusion is checked when performing ray casts. Enable to make Graphics be blocked by 3D objects that exist in front of it.")]
/// @brief Field m_CheckFor3DOcclusion, offset: 0x2a, size: 0x1, def value: None
 bool  ___m_CheckFor3DOcclusion;

/// [SerializeField]
/// [Tooltip("The layers of objects that are checked to determine if they block Graphic ray casts when checking for 2D or 3D occlusion.")]
/// @brief Field m_BlockingMask, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_BlockingMask;

/// [SerializeField]
/// [Tooltip("Specifies whether the ray cast should hit Triggers when checking for 3D occlusion. Use Global refers to the Queries Hit Triggers setting in Physics Project Settings.")]
/// @brief Field m_RaycastTriggerInteraction, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_RaycastTriggerInteraction;

/// @brief Field m_Canvas, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ___m_Canvas;

/// @brief Field m_HasWarnedEventCameraNull, offset: 0x40, size: 0x1, def value: None
 bool  ___m_HasWarnedEventCameraNull;

/// @brief Field m_OcclusionHits3D, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_OcclusionHits3D;

/// @brief Field m_OcclusionHits2D, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit2D>  ___m_OcclusionHits2D;

/// @brief Field m_RaycastResultsCache, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*  ___m_RaycastResultsCache;

/// @brief Field m_PokeLogic, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*  ___m_PokeLogic;

/// [CompilerGenerated]
/// @brief Field <pokeStateDataDictionary>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>*  ____pokeStateDataDictionary_k__BackingField;

/// @brief Field m_BindingsGroup, offset: 0x70, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  ___m_BindingsGroup;

/// @brief Field m_LocalPhysicsScene, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_LocalPhysicsScene2D, offset: 0x80, size: 0x4, def value: None
 ::UnityEngine::PhysicsScene2D  ___m_LocalPhysicsScene2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_IgnoreReversedGraphics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_CheckFor2DOcclusion) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_CheckFor3DOcclusion) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_BlockingMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_RaycastTriggerInteraction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_Canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_HasWarnedEventCameraNull) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_OcclusionHits3D) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_OcclusionHits2D) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_RaycastResultsCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_PokeLogic) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ____pokeStateDataDictionary_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_BindingsGroup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_LocalPhysicsScene) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_LocalPhysicsScene2D) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitComparer
class CORDL_TYPE TrackedDeviceGraphicRaycaster_RaycastHitComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>*() noexcept;

/// @brief Method Compare, addr 0xb43674c, size 0xb0, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData  a, ::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData  b) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb438794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__TrackedDeviceGraphicRaycaster_RaycastHitData_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceGraphicRaycaster_RaycastHitComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceGraphicRaycaster_RaycastHitComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedDeviceGraphicRaycaster_RaycastHitComparer(TrackedDeviceGraphicRaycaster_RaycastHitComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceGraphicRaycaster_RaycastHitComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedDeviceGraphicRaycaster_RaycastHitComparer(TrackedDeviceGraphicRaycaster_RaycastHitComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster_RaycastHitComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
