#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRSocketInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__SocketScaleMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSocketInteractor)
namespace GlobalNamespace {
struct XRBaseInteractable_MovementType;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace GlobalNamespace {
struct XRSocketInteractor_ShaderPropertyLookup;
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
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::XR::CoreUtils::Collections {
template<typename T>
class HashSetList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct SocketScaleMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TriggerContactMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRSocketInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRSocketInteractor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__67");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/XR Socket Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor.html")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.SocketScaleMode, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor
class CORDL_TYPE XRSocketInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor {
public:
// Declarations
using ShaderPropertyLookup = ::GlobalNamespace::XRSocketInteractor_ShaderPropertyLookup;

using _UpdateCollidersAfterOnTriggerStay_d__67 = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67;

/// @brief Field <unsortedValidTargets>k__BackingField, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__unsortedValidTargets_k__BackingField, put=__cordl_internal_set__unsortedValidTargets_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  _unsortedValidTargets_k__BackingField;

 __declspec(property(get=get_ejectExistingSocketsWhenSnapping)) bool  ejectExistingSocketsWhenSnapping;

 __declspec(property(get=get_fixedScale, put=set_fixedScale)) ::UnityEngine::Vector3  fixedScale;

 __declspec(property(get=get_hoverSocketSnapping, put=set_hoverSocketSnapping)) bool  hoverSocketSnapping;

 __declspec(property(get=get_interactableCantHoverMeshMaterial, put=set_interactableCantHoverMeshMaterial)) ::UnityW<::UnityEngine::Material>  interactableCantHoverMeshMaterial;

 __declspec(property(get=get_interactableHoverMeshMaterial, put=set_interactableHoverMeshMaterial)) ::UnityW<::UnityEngine::Material>  interactableHoverMeshMaterial;

 __declspec(property(get=get_interactableHoverScale, put=set_interactableHoverScale)) float_t  interactableHoverScale;

 __declspec(property(get=get_isHoverActive)) bool  isHoverActive;

 __declspec(property(get=get_isHoverRecycleAllowed)) bool  isHoverRecycleAllowed;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

/// @brief Field m_FixedScale, offset 0x174, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_FixedScale, put=__cordl_internal_set_m_FixedScale)) ::UnityEngine::Vector3  m_FixedScale;

/// @brief Field m_HoverSocketSnapping, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HoverSocketSnapping, put=__cordl_internal_set_m_HoverSocketSnapping)) bool  m_HoverSocketSnapping;

/// @brief Field m_InteractableCantHoverMeshMaterial, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableCantHoverMeshMaterial, put=__cordl_internal_set_m_InteractableCantHoverMeshMaterial)) ::UnityW<::UnityEngine::Material>  m_InteractableCantHoverMeshMaterial;

/// @brief Field m_InteractableHoverMeshMaterial, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableHoverMeshMaterial, put=__cordl_internal_set_m_InteractableHoverMeshMaterial)) ::UnityW<::UnityEngine::Material>  m_InteractableHoverMeshMaterial;

/// @brief Field m_InteractableHoverScale, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InteractableHoverScale, put=__cordl_internal_set_m_InteractableHoverScale)) float_t  m_InteractableHoverScale;

/// @brief Field m_InteractablesWithSocketTransformer, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractablesWithSocketTransformer, put=__cordl_internal_set_m_InteractablesWithSocketTransformer)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>*  m_InteractablesWithSocketTransformer;

/// @brief Field m_LastRemoveTime, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastRemoveTime, put=__cordl_internal_set_m_LastRemoveTime)) float_t  m_LastRemoveTime;

/// @brief Field m_MeshFilterCache, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MeshFilterCache, put=__cordl_internal_set_m_MeshFilterCache)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>*  m_MeshFilterCache;

/// @brief Field m_RecycleDelayTime, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RecycleDelayTime, put=__cordl_internal_set_m_RecycleDelayTime)) float_t  m_RecycleDelayTime;

/// @brief Field m_ShowInteractableHoverMeshes, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShowInteractableHoverMeshes, put=__cordl_internal_set_m_ShowInteractableHoverMeshes)) bool  m_ShowInteractableHoverMeshes;

/// @brief Field m_SocketActive, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SocketActive, put=__cordl_internal_set_m_SocketActive)) bool  m_SocketActive;

/// @brief Field m_SocketGrabTransformer, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SocketGrabTransformer, put=__cordl_internal_set_m_SocketGrabTransformer)) ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*  m_SocketGrabTransformer;

/// @brief Field m_SocketScaleMode, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SocketScaleMode, put=__cordl_internal_set_m_SocketScaleMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  m_SocketScaleMode;

/// @brief Field m_SocketSnappingRadius, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SocketSnappingRadius, put=__cordl_internal_set_m_SocketSnappingRadius)) float_t  m_SocketSnappingRadius;

/// @brief Field m_StayedColliders, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StayedColliders, put=__cordl_internal_set_m_StayedColliders)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  m_StayedColliders;

/// @brief Field m_TargetBoundsSize, offset 0x180, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TargetBoundsSize, put=__cordl_internal_set_m_TargetBoundsSize)) ::UnityEngine::Vector3  m_TargetBoundsSize;

/// @brief Field m_TriggerContactMonitor, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TriggerContactMonitor, put=__cordl_internal_set_m_TriggerContactMonitor)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  m_TriggerContactMonitor;

/// @brief Field m_UpdateCollidersAfterTriggerStay, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdateCollidersAfterTriggerStay, put=__cordl_internal_set_m_UpdateCollidersAfterTriggerStay)) ::System::Collections::IEnumerator*  m_UpdateCollidersAfterTriggerStay;

 __declspec(property(get=get_recycleDelayTime, put=set_recycleDelayTime)) float_t  recycleDelayTime;

/// @brief Field s_MeshFilters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MeshFilters, put=setStaticF_s_MeshFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  s_MeshFilters;

/// @brief Field s_WaitForFixedUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WaitForFixedUpdate, put=setStaticF_s_WaitForFixedUpdate)) ::UnityEngine::WaitForFixedUpdate*  s_WaitForFixedUpdate;

 __declspec(property(get=get_selectedInteractableMovementTypeOverride)) ::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType>  selectedInteractableMovementTypeOverride;

 __declspec(property(get=get_showInteractableHoverMeshes, put=set_showInteractableHoverMeshes)) bool  showInteractableHoverMeshes;

 __declspec(property(get=get_socketActive, put=set_socketActive)) bool  socketActive;

 __declspec(property(get=get_socketScaleMode, put=set_socketScaleMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  socketScaleMode;

 __declspec(property(get=get_socketSnappingLimit)) int32_t  socketSnappingLimit;

 __declspec(property(get=get_socketSnappingRadius, put=set_socketSnappingRadius)) float_t  socketSnappingRadius;

 __declspec(property(get=get_targetBoundsSize, put=set_targetBoundsSize)) ::UnityEngine::Vector3  targetBoundsSize;

 __declspec(property(get=get_unsortedValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  unsortedValidTargets;

/// @brief Method Awake, addr 0xb480af0, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanHover, addr 0xb482b7c, size 0x2c, virtual true, abstract: false, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method CanHoverSnap, addr 0xb4819dc, size 0x28, virtual true, abstract: false, final false
inline bool CanHoverSnap(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method CanSelect, addr 0xb482ba8, size 0x170, virtual true, abstract: false, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method CreateDefaultHoverMaterials, addr 0xb481024, size 0x318, virtual true, abstract: false, final false
inline void CreateDefaultHoverMaterials() ;

/// @brief Method DrawHoveredInteractables, addr 0xb482510, size 0x3f8, virtual true, abstract: false, final false
inline void DrawHoveredInteractables() ;

/// @brief Method EndSocketSnapping, addr 0xb483704, size 0x6c, virtual true, abstract: false, final false
inline bool EndSocketSnapping(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method GetHoverMeshMatrix, addr 0xb481cb4, size 0x810, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetHoverMeshMatrix(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::MeshFilter*  meshFilter, float_t  hoverScale) ;

/// @brief Method GetHoveredInteractableMaterial, addr 0xb482908, size 0x1c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetHoveredInteractableMaterial(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method GetValidTargets, addr 0xb482924, size 0x1c4, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

/// @brief Method InverseTransformDirection, addr 0xb4824c4, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  direction) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor* New_ctor() ;

/// @brief Method OnContactAdded, addr 0xb4831f4, size 0xe4, virtual false, abstract: false, final false
inline void OnContactAdded(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method OnContactRemoved, addr 0xb4832d8, size 0x58, virtual false, abstract: false, final false
inline void OnContactRemoved(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method OnDisable, addr 0xb480d5c, size 0x108, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb480bbc, size 0x104, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHoverEntered, addr 0xb4818fc, size 0xe0, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverEntering, addr 0xb4815dc, size 0x320, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExiting, addr 0xb481a04, size 0xe8, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnInteractableRegistered, addr 0xb483088, size 0x110, virtual false, abstract: false, final false
inline void OnInteractableRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// @brief Method OnInteractableUnregistered, addr 0xb483198, size 0x5c, virtual false, abstract: false, final false
inline void OnInteractableUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method OnRegistered, addr 0xb482e10, size 0x16c, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method OnSelectEntered, addr 0xb481aec, size 0xb8, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb481bc8, size 0xec, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0xb481ba4, size 0x24, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnTriggerEnter, addr 0xb480e64, size 0x18, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0xb480ed4, size 0x18, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0xb480e7c, size 0x58, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method OnUnregistered, addr 0xb482f7c, size 0x10c, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method OnValidate, addr 0xb480a30, size 0x4, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessInteractor, addr 0xb480f14, size 0xb4, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ResetCollidersAndValidTargets, addr 0xb480cc0, size 0x9c, virtual false, abstract: false, final false
inline void ResetCollidersAndValidTargets() ;

/// @brief Method SetMaterialFade, addr 0xb48133c, size 0x2a0, virtual false, abstract: false, final false
static inline void SetMaterialFade(::UnityEngine::Material*  material, ::UnityEngine::Color  color) ;

/// @brief Method ShouldDrawHoverMesh, addr 0xb482d18, size 0xf8, virtual true, abstract: false, final false
inline bool ShouldDrawHoverMesh(::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::Renderer*  meshRenderer, ::UnityEngine::Camera*  mainCamera) ;

/// @brief Method StartSocketSnapping, addr 0xb483330, size 0x3d4, virtual true, abstract: false, final false
inline bool StartSocketSnapping(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method SyncTransformerParams, addr 0xb480a34, size 0xbc, virtual false, abstract: false, final false
inline void SyncTransformerParams() ;

/// [IteratorStateMachine(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor::<UpdateCollidersAfterOnTriggerStay>d__67))]
/// @brief Method UpdateCollidersAfterOnTriggerStay, addr 0xb480b50, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateCollidersAfterOnTriggerStay() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get__unsortedValidTargets_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get__unsortedValidTargets_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_FixedScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_FixedScale() ;

constexpr bool const& __cordl_internal_get_m_HoverSocketSnapping() const;

constexpr bool& __cordl_internal_get_m_HoverSocketSnapping() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_InteractableCantHoverMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_InteractableCantHoverMeshMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_InteractableHoverMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_InteractableHoverMeshMaterial() ;

constexpr float_t const& __cordl_internal_get_m_InteractableHoverScale() const;

constexpr float_t& __cordl_internal_get_m_InteractableHoverScale() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>* const& __cordl_internal_get_m_InteractablesWithSocketTransformer() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>*& __cordl_internal_get_m_InteractablesWithSocketTransformer() ;

constexpr float_t const& __cordl_internal_get_m_LastRemoveTime() const;

constexpr float_t& __cordl_internal_get_m_LastRemoveTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>* const& __cordl_internal_get_m_MeshFilterCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>*& __cordl_internal_get_m_MeshFilterCache() ;

constexpr float_t const& __cordl_internal_get_m_RecycleDelayTime() const;

constexpr float_t& __cordl_internal_get_m_RecycleDelayTime() ;

constexpr bool const& __cordl_internal_get_m_ShowInteractableHoverMeshes() const;

constexpr bool& __cordl_internal_get_m_ShowInteractableHoverMeshes() ;

constexpr bool const& __cordl_internal_get_m_SocketActive() const;

constexpr bool& __cordl_internal_get_m_SocketActive() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer* const& __cordl_internal_get_m_SocketGrabTransformer() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*& __cordl_internal_get_m_SocketGrabTransformer() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode const& __cordl_internal_get_m_SocketScaleMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode& __cordl_internal_get_m_SocketScaleMode() ;

constexpr float_t const& __cordl_internal_get_m_SocketSnappingRadius() const;

constexpr float_t& __cordl_internal_get_m_SocketSnappingRadius() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_StayedColliders() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_StayedColliders() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetBoundsSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetBoundsSize() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* const& __cordl_internal_get_m_TriggerContactMonitor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*& __cordl_internal_get_m_TriggerContactMonitor() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay() ;

constexpr void __cordl_internal_set__unsortedValidTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_FixedScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_HoverSocketSnapping(bool  value) ;

constexpr void __cordl_internal_set_m_InteractableCantHoverMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_InteractableHoverMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_InteractableHoverScale(float_t  value) ;

constexpr void __cordl_internal_set_m_InteractablesWithSocketTransformer(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>*  value) ;

constexpr void __cordl_internal_set_m_LastRemoveTime(float_t  value) ;

constexpr void __cordl_internal_set_m_MeshFilterCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>*  value) ;

constexpr void __cordl_internal_set_m_RecycleDelayTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ShowInteractableHoverMeshes(bool  value) ;

constexpr void __cordl_internal_set_m_SocketActive(bool  value) ;

constexpr void __cordl_internal_set_m_SocketGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*  value) ;

constexpr void __cordl_internal_set_m_SocketScaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value) ;

constexpr void __cordl_internal_set_m_SocketSnappingRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_StayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_TargetBoundsSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TriggerContactMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  value) ;

constexpr void __cordl_internal_set_m_UpdateCollidersAfterTriggerStay(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0xb483770, size 0x29c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* getStaticF_s_MeshFilters() ;

static inline ::UnityEngine::WaitForFixedUpdate* getStaticF_s_WaitForFixedUpdate() ;

/// @brief Method get_ejectExistingSocketsWhenSnapping, addr 0xb480a28, size 0x8, virtual true, abstract: false, final false
inline bool get_ejectExistingSocketsWhenSnapping() ;

/// @brief Method get_fixedScale, addr 0xb480990, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_fixedScale() ;

/// @brief Method get_hoverSocketSnapping, addr 0xb480938, size 0x8, virtual false, abstract: false, final false
inline bool get_hoverSocketSnapping() ;

/// @brief Method get_interactableCantHoverMeshMaterial, addr 0xb4808c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_interactableCantHoverMeshMaterial() ;

/// @brief Method get_interactableHoverMeshMaterial, addr 0xb4808a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_interactableHoverMeshMaterial() ;

/// @brief Method get_interactableHoverScale, addr 0xb480918, size 0x8, virtual false, abstract: false, final false
inline float_t get_interactableHoverScale() ;

/// @brief Method get_isHoverActive, addr 0xb482ae8, size 0x20, virtual true, abstract: false, final false
inline bool get_isHoverActive() ;

/// @brief Method get_isHoverRecycleAllowed, addr 0xb480fc8, size 0x5c, virtual false, abstract: false, final false
inline bool get_isHoverRecycleAllowed() ;

/// @brief Method get_isSelectActive, addr 0xb482b08, size 0x20, virtual true, abstract: false, final false
inline bool get_isSelectActive() ;

/// @brief Method get_recycleDelayTime, addr 0xb480928, size 0x8, virtual false, abstract: false, final false
inline float_t get_recycleDelayTime() ;

/// @brief Method get_selectedInteractableMovementTypeOverride, addr 0xb482b28, size 0x54, virtual true, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType> get_selectedInteractableMovementTypeOverride() ;

/// @brief Method get_showInteractableHoverMeshes, addr 0xb480898, size 0x8, virtual false, abstract: false, final false
inline bool get_showInteractableHoverMeshes() ;

/// @brief Method get_socketActive, addr 0xb4808d8, size 0x8, virtual false, abstract: false, final false
inline bool get_socketActive() ;

/// @brief Method get_socketScaleMode, addr 0xb48096c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode get_socketScaleMode() ;

/// @brief Method get_socketSnappingLimit, addr 0xb480a20, size 0x8, virtual true, abstract: false, final false
inline int32_t get_socketSnappingLimit() ;

/// @brief Method get_socketSnappingRadius, addr 0xb480948, size 0x8, virtual false, abstract: false, final false
inline float_t get_socketSnappingRadius() ;

/// @brief Method get_targetBoundsSize, addr 0xb4809d4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetBoundsSize() ;

/// [CompilerGenerated]
/// @brief Method get_unsortedValidTargets, addr 0xb480a18, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* get_unsortedValidTargets() ;

static inline void setStaticF_s_MeshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value) ;

static inline void setStaticF_s_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate*  value) ;

/// @brief Method set_fixedScale, addr 0xb4809a0, size 0x34, virtual false, abstract: false, final false
inline void set_fixedScale(::UnityEngine::Vector3  value) ;

/// @brief Method set_hoverSocketSnapping, addr 0xb480940, size 0x8, virtual false, abstract: false, final false
inline void set_hoverSocketSnapping(bool  value) ;

/// @brief Method set_interactableCantHoverMeshMaterial, addr 0xb4808c8, size 0x10, virtual false, abstract: false, final false
inline void set_interactableCantHoverMeshMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_interactableHoverMeshMaterial, addr 0xb4808b0, size 0x10, virtual false, abstract: false, final false
inline void set_interactableHoverMeshMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_interactableHoverScale, addr 0xb480920, size 0x8, virtual false, abstract: false, final false
inline void set_interactableHoverScale(float_t  value) ;

/// @brief Method set_recycleDelayTime, addr 0xb480930, size 0x8, virtual false, abstract: false, final false
inline void set_recycleDelayTime(float_t  value) ;

/// @brief Method set_showInteractableHoverMeshes, addr 0xb4808a0, size 0x8, virtual false, abstract: false, final false
inline void set_showInteractableHoverMeshes(bool  value) ;

/// @brief Method set_socketActive, addr 0xb4808e0, size 0x38, virtual false, abstract: false, final false
inline void set_socketActive(bool  value) ;

/// @brief Method set_socketScaleMode, addr 0xb480974, size 0x1c, virtual false, abstract: false, final false
inline void set_socketScaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value) ;

/// @brief Method set_socketSnappingRadius, addr 0xb480950, size 0x1c, virtual false, abstract: false, final false
inline void set_socketSnappingRadius(float_t  value) ;

/// @brief Method set_targetBoundsSize, addr 0xb4809e4, size 0x34, virtual false, abstract: false, final false
inline void set_targetBoundsSize(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketInteractor(XRSocketInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketInteractor(XRSocketInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11472};

/// [SerializeField]
/// @brief Field m_ShowInteractableHoverMeshes, offset: 0x140, size: 0x1, def value: None
 bool  ___m_ShowInteractableHoverMeshes;

/// [SerializeField]
/// @brief Field m_InteractableHoverMeshMaterial, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_InteractableHoverMeshMaterial;

/// [SerializeField]
/// @brief Field m_InteractableCantHoverMeshMaterial, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_InteractableCantHoverMeshMaterial;

/// [SerializeField]
/// @brief Field m_SocketActive, offset: 0x158, size: 0x1, def value: None
 bool  ___m_SocketActive;

/// [SerializeField]
/// @brief Field m_InteractableHoverScale, offset: 0x15c, size: 0x4, def value: None
 float_t  ___m_InteractableHoverScale;

/// [SerializeField]
/// @brief Field m_RecycleDelayTime, offset: 0x160, size: 0x4, def value: None
 float_t  ___m_RecycleDelayTime;

/// @brief Field m_LastRemoveTime, offset: 0x164, size: 0x4, def value: None
 float_t  ___m_LastRemoveTime;

/// [SerializeField]
/// @brief Field m_HoverSocketSnapping, offset: 0x168, size: 0x1, def value: None
 bool  ___m_HoverSocketSnapping;

/// [SerializeField]
/// @brief Field m_SocketSnappingRadius, offset: 0x16c, size: 0x4, def value: None
 float_t  ___m_SocketSnappingRadius;

/// [SerializeField]
/// @brief Field m_SocketScaleMode, offset: 0x170, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  ___m_SocketScaleMode;

/// [SerializeField]
/// @brief Field m_FixedScale, offset: 0x174, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_FixedScale;

/// [SerializeField]
/// @brief Field m_TargetBoundsSize, offset: 0x180, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TargetBoundsSize;

/// [CompilerGenerated]
/// @brief Field <unsortedValidTargets>k__BackingField, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ____unsortedValidTargets_k__BackingField;

/// @brief Field m_StayedColliders, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  ___m_StayedColliders;

/// @brief Field m_TriggerContactMonitor, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  ___m_TriggerContactMonitor;

/// @brief Field m_MeshFilterCache, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>*  ___m_MeshFilterCache;

/// @brief Field m_UpdateCollidersAfterTriggerStay, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___m_UpdateCollidersAfterTriggerStay;

/// @brief Field m_SocketGrabTransformer, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*  ___m_SocketGrabTransformer;

/// @brief Field m_InteractablesWithSocketTransformer, offset: 0x1c0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>*  ___m_InteractablesWithSocketTransformer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_ShowInteractableHoverMeshes) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_InteractableHoverMeshMaterial) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_InteractableCantHoverMeshMaterial) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_SocketActive) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_InteractableHoverScale) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_RecycleDelayTime) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_LastRemoveTime) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_HoverSocketSnapping) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_SocketSnappingRadius) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_SocketScaleMode) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_FixedScale) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_TargetBoundsSize) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ____unsortedValidTargets_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_StayedColliders) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_TriggerContactMonitor) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_MeshFilterCache) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_UpdateCollidersAfterTriggerStay) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_SocketGrabTransformer) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor, ___m_InteractablesWithSocketTransformer) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor) == 0x1c8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__67
class CORDL_TYPE XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb483c84, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb483d40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb483d48, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb483d80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb483c80, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb480eec, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67(XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67(XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11471};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
