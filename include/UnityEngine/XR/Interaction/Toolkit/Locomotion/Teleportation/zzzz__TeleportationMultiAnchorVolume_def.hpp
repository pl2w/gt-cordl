#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationMultiAnchorVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportationMultiAnchorVolume)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class FurthestTeleportationAnchorFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class ITeleportationVolumeAnchorFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettingsDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume_DefaultDestinationFilterCache;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume_DefaultDestinationFilterCache;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportationMultiAnchorVolume");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportationMultiAnchorVolume/DefaultDestinationFilterCache");
// [AddComponentMenu("XR/Teleportation Multi-Anchor Volume", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume
class CORDL_TYPE TeleportationMultiAnchorVolume : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable {
public:
// Declarations
using DefaultDestinationFilterCache = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache;

/// @brief Field <destinationAnchor>k__BackingField, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__destinationAnchor_k__BackingField, put=__cordl_internal_set__destinationAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _destinationAnchor_k__BackingField;

/// @brief Field <destinationEvaluationProgress>k__BackingField, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get__destinationEvaluationProgress_k__BackingField, put=__cordl_internal_set__destinationEvaluationProgress_k__BackingField)) float_t  _destinationEvaluationProgress_k__BackingField;

 __declspec(property(get=get_anchorTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  anchorTransforms;

 __declspec(property(get=get_destinationAnchor, put=set_destinationAnchor)) ::UnityW<::UnityEngine::Transform>  destinationAnchor;

/// @brief Field destinationAnchorChanged, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationAnchorChanged, put=__cordl_internal_set_destinationAnchorChanged)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  destinationAnchorChanged;

 __declspec(property(get=get_destinationEvaluationFilter)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  destinationEvaluationFilter;

 __declspec(property(get=get_destinationEvaluationProgress, put=set_destinationEvaluationProgress)) float_t  destinationEvaluationProgress;

 __declspec(property(get=get_destinationEvaluationSettings, put=set_destinationEvaluationSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  destinationEvaluationSettings;

/// @brief Field m_AnchorTransforms, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorTransforms, put=__cordl_internal_set_m_AnchorTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  m_AnchorTransforms;

/// @brief Field m_DefaultAnchorFilterCache, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultAnchorFilterCache, put=__cordl_internal_set_m_DefaultAnchorFilterCache)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  m_DefaultAnchorFilterCache;

/// @brief Field m_DestinationEvaluationSettings, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DestinationEvaluationSettings, put=__cordl_internal_set_m_DestinationEvaluationSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  m_DestinationEvaluationSettings;

/// @brief Field m_LastDestinationQueryTime, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastDestinationQueryTime, put=__cordl_internal_set_m_LastDestinationQueryTime)) float_t  m_LastDestinationQueryTime;

/// @brief Field m_WaitStartTime, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WaitStartTime, put=__cordl_internal_set_m_WaitStartTime)) float_t  m_WaitStartTime;

/// @brief Field m_WaitingToEvaluateDestination, offset 0x208, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WaitingToEvaluateDestination, put=__cordl_internal_set_m_WaitingToEvaluateDestination)) bool  m_WaitingToEvaluateDestination;

 __declspec(property(get=get_shouldDelayDestinationEvaluation)) bool  shouldDelayDestinationEvaluation;

/// @brief Method Awake, addr 0xb44e924, size 0x6c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearDestinationAnchor, addr 0xb44ecc0, size 0x44, virtual false, abstract: false, final false
inline void ClearDestinationAnchor() ;

/// @brief Method EvaluateDestinationAnchor, addr 0xb44ed04, size 0xfc, virtual false, abstract: false, final false
inline void EvaluateDestinationAnchor() ;

/// @brief Method GenerateTeleportRequest, addr 0xb44f178, size 0xc8, virtual true, abstract: false, final false
inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest) ;

/// @brief Method GetAttachTransform, addr 0xb44f0e4, size 0x94, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb44eac4, size 0x60, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0xb44e71c, size 0x208, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnHoverEntered, addr 0xb44ec1c, size 0xa4, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb44ee00, size 0x30, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method ProcessInteractable, addr 0xb44ee30, size 0x224, virtual true, abstract: false, final false
inline void ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method SetDestinationAtValidIndex, addr 0xb44f054, size 0x90, virtual false, abstract: false, final false
inline void SetDestinationAtValidIndex(int32_t  anchorIndex) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__destinationAnchor_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__destinationAnchor_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__destinationEvaluationProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__destinationEvaluationProgress_k__BackingField() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>* const& __cordl_internal_get_destinationAnchorChanged() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*& __cordl_internal_get_destinationAnchorChanged() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_AnchorTransforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_AnchorTransforms() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* const& __cordl_internal_get_m_DefaultAnchorFilterCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*& __cordl_internal_get_m_DefaultAnchorFilterCache() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* const& __cordl_internal_get_m_DestinationEvaluationSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*& __cordl_internal_get_m_DestinationEvaluationSettings() ;

constexpr float_t const& __cordl_internal_get_m_LastDestinationQueryTime() const;

constexpr float_t& __cordl_internal_get_m_LastDestinationQueryTime() ;

constexpr float_t const& __cordl_internal_get_m_WaitStartTime() const;

constexpr float_t& __cordl_internal_get_m_WaitStartTime() ;

constexpr bool const& __cordl_internal_get_m_WaitingToEvaluateDestination() const;

constexpr bool& __cordl_internal_get_m_WaitingToEvaluateDestination() ;

constexpr void __cordl_internal_set__destinationAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__destinationEvaluationProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_destinationAnchorChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value) ;

constexpr void __cordl_internal_set_m_AnchorTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_m_DefaultAnchorFilterCache(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  value) ;

constexpr void __cordl_internal_set_m_DestinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_LastDestinationQueryTime(float_t  value) ;

constexpr void __cordl_internal_set_m_WaitStartTime(float_t  value) ;

constexpr void __cordl_internal_set_m_WaitingToEvaluateDestination(bool  value) ;

/// @brief Method .ctor, addr 0xb44f240, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_destinationAnchorChanged, addr 0xb44e548, size 0xb0, virtual false, abstract: false, final false
inline void add_destinationAnchorChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value) ;

/// @brief Method get_anchorTransforms, addr 0xb44e410, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_anchorTransforms() ;

/// [CompilerGenerated]
/// @brief Method get_destinationAnchor, addr 0xb44e530, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_destinationAnchor() ;

/// @brief Method get_destinationEvaluationFilter, addr 0xb44e430, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* get_destinationEvaluationFilter() ;

/// [CompilerGenerated]
/// @brief Method get_destinationEvaluationProgress, addr 0xb44e520, size 0x8, virtual false, abstract: false, final false
inline float_t get_destinationEvaluationProgress() ;

/// @brief Method get_destinationEvaluationSettings, addr 0xb44e418, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* get_destinationEvaluationSettings() ;

/// @brief Method get_shouldDelayDestinationEvaluation, addr 0xb44e6a8, size 0x74, virtual false, abstract: false, final false
inline bool get_shouldDelayDestinationEvaluation() ;

/// [CompilerGenerated]
/// @brief Method remove_destinationAnchorChanged, addr 0xb44e5f8, size 0xb0, virtual false, abstract: false, final false
inline void remove_destinationAnchorChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_destinationAnchor, addr 0xb44e538, size 0x10, virtual false, abstract: false, final false
inline void set_destinationAnchor(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_destinationEvaluationProgress, addr 0xb44e528, size 0x8, virtual false, abstract: false, final false
inline void set_destinationEvaluationProgress(float_t  value) ;

/// @brief Method set_destinationEvaluationSettings, addr 0xb44e420, size 0x10, virtual false, abstract: false, final false
inline void set_destinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationMultiAnchorVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMultiAnchorVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationMultiAnchorVolume(TeleportationMultiAnchorVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMultiAnchorVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationMultiAnchorVolume(TeleportationMultiAnchorVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11363};

/// [SerializeField]
/// [Tooltip("The transforms that represent the possible teleportation destinations.")]
/// @brief Field m_AnchorTransforms, offset: 0x1d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___m_AnchorTransforms;

/// [SerializeField]
/// [Tooltip("Settings for how this volume evaluates a destination anchor.")]
/// @brief Field m_DestinationEvaluationSettings, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  ___m_DestinationEvaluationSettings;

/// [CompilerGenerated]
/// @brief Field <destinationEvaluationProgress>k__BackingField, offset: 0x1e8, size: 0x4, def value: None
 float_t  ____destinationEvaluationProgress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <destinationAnchor>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____destinationAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field destinationAnchorChanged, offset: 0x1f8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  ___destinationAnchorChanged;

/// @brief Field m_DefaultAnchorFilterCache, offset: 0x200, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  ___m_DefaultAnchorFilterCache;

/// @brief Field m_WaitingToEvaluateDestination, offset: 0x208, size: 0x1, def value: None
 bool  ___m_WaitingToEvaluateDestination;

/// @brief Field m_WaitStartTime, offset: 0x20c, size: 0x4, def value: None
 float_t  ___m_WaitStartTime;

/// @brief Field m_LastDestinationQueryTime, offset: 0x210, size: 0x4, def value: None
 float_t  ___m_LastDestinationQueryTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___m_AnchorTransforms) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___m_DestinationEvaluationSettings) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ____destinationEvaluationProgress_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ____destinationAnchor_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___destinationAnchorChanged) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___m_DefaultAnchorFilterCache) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___m_WaitingToEvaluateDestination) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___m_WaitStartTime) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume, ___m_LastDestinationQueryTime) == 0x210, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume) == 0x218, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume/DefaultDestinationFilterCache
class CORDL_TYPE TeleportationMultiAnchorVolume_DefaultDestinationFilterCache : public ::System::Object {
public:
// Declarations
/// @brief Field s_FilterInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FilterInstance, put=setStaticF_s_FilterInstance)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter>  s_FilterInstance;

/// @brief Field s_Users, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Users, put=setStaticF_s_Users)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  s_Users;

/// @brief Method SubscribeAndGetInstance, addr 0xb44e990, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* SubscribeAndGetInstance(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  user) ;

/// @brief Method Unsubscribe, addr 0xb44eb24, size 0xf8, virtual false, abstract: false, final false
static inline void Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  user) ;

static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter> getStaticF_s_FilterInstance() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>* getStaticF_s_Users() ;

static inline void setStaticF_s_FilterInstance(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter>  value) ;

static inline void setStaticF_s_Users(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationMultiAnchorVolume_DefaultDestinationFilterCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMultiAnchorVolume_DefaultDestinationFilterCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationMultiAnchorVolume_DefaultDestinationFilterCache(TeleportationMultiAnchorVolume_DefaultDestinationFilterCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMultiAnchorVolume_DefaultDestinationFilterCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationMultiAnchorVolume_DefaultDestinationFilterCache(TeleportationMultiAnchorVolume_DefaultDestinationFilterCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
