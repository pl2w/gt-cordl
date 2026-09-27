#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbTeleportInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
CORDL_MODULE_EXPORT(ClimbTeleportInteractor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRActivateInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbTeleportInteractor___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettingsDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
struct LocomotionState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbTeleportInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbTeleportInteractor___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing", "ClimbTeleportInteractor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing", "ClimbTeleportInteractor/<>c");
// [AddComponentMenu("XR/Locomotion/Climb Teleport Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor
class CORDL_TYPE ClimbTeleportInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor {
public:
// Declarations
using __c = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c;

 __declspec(property(get=get_climbProvider, put=set_climbProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  climbProvider;

 __declspec(property(get=get_destinationEvaluationSettings, put=set_destinationEvaluationSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  destinationEvaluationSettings;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

/// @brief Field m_ActivateEventArgs, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateEventArgs, put=__cordl_internal_set_m_ActivateEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  m_ActivateEventArgs;

/// @brief Field m_ClimbProvider, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClimbProvider, put=__cordl_internal_set_m_ClimbProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  m_ClimbProvider;

/// @brief Field m_DeactivateEventArgs, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeactivateEventArgs, put=__cordl_internal_set_m_DeactivateEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  m_DeactivateEventArgs;

/// @brief Field m_DestinationEvaluationSettings, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DestinationEvaluationSettings, put=__cordl_internal_set_m_DestinationEvaluationSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  m_DestinationEvaluationSettings;

/// @brief Field m_PreservedTeleportVolumeSettings, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreservedTeleportVolumeSettings, put=__cordl_internal_set_m_PreservedTeleportVolumeSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  m_PreservedTeleportVolumeSettings;

/// @brief Field m_TargetTeleportVolume, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetTeleportVolume, put=__cordl_internal_set_m_TargetTeleportVolume)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  m_TargetTeleportVolume;

 __declspec(property(get=get_shouldActivate)) bool  shouldActivate;

 __declspec(property(get=get_shouldDeactivate)) bool  shouldDeactivate;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Method GetActivateTargets, addr 0xb458f38, size 0x11c, virtual true, abstract: false, final true
inline void GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method GetValidTargets, addr 0xb458dec, size 0x11c, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor* New_ctor() ;

/// @brief Method OnClimbAnchorUpdated, addr 0xb458dc4, size 0x28, virtual false, abstract: false, final false
inline void OnClimbAnchorUpdated(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*  provider) ;

/// @brief Method OnClimbBegin, addr 0xb458804, size 0xa4, virtual false, abstract: false, final false
inline void OnClimbBegin() ;

/// @brief Method OnClimbEnd, addr 0xb4588a8, size 0x3f8, virtual false, abstract: false, final false
inline void OnClimbEnd() ;

/// @brief Method OnDisable, addr 0xb45860c, size 0x13c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4584e8, size 0x124, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocomotionStateChanged, addr 0xb4587e8, size 0x1c, virtual false, abstract: false, final false
inline void OnLocomotionStateChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state) ;

/// @brief Method ReleaseTargetTeleportVolume, addr 0xb458748, size 0xa0, virtual false, abstract: false, final false
inline void ReleaseTargetTeleportVolume() ;

/// @brief Method SetTargetTeleportVolume, addr 0xb458ca0, size 0x124, virtual false, abstract: false, final false
inline void SetTargetTeleportVolume(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  activeClimbInteractable) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform, addr 0xb459330, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* const& __cordl_internal_get_m_ActivateEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& __cordl_internal_get_m_ActivateEventArgs() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> const& __cordl_internal_get_m_ClimbProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>& __cordl_internal_get_m_ClimbProvider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* const& __cordl_internal_get_m_DeactivateEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& __cordl_internal_get_m_DeactivateEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* const& __cordl_internal_get_m_DestinationEvaluationSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*& __cordl_internal_get_m_DestinationEvaluationSettings() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* const& __cordl_internal_get_m_PreservedTeleportVolumeSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*& __cordl_internal_get_m_PreservedTeleportVolumeSettings() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> const& __cordl_internal_get_m_TargetTeleportVolume() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>& __cordl_internal_get_m_TargetTeleportVolume() ;

constexpr void __cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_ClimbProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  value) ;

constexpr void __cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_DestinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_PreservedTeleportVolumeSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_TargetTeleportVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  value) ;

/// @brief Method .ctor, addr 0xb459054, size 0x2dc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_climbProvider, addr 0xb4584b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> get_climbProvider() ;

/// @brief Method get_destinationEvaluationSettings, addr 0xb4584d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* get_destinationEvaluationSettings() ;

/// @brief Method get_isSelectActive, addr 0xb458f08, size 0x20, virtual true, abstract: false, final false
inline bool get_isSelectActive() ;

/// @brief Method get_shouldActivate, addr 0xb458f28, size 0x8, virtual true, abstract: false, final true
inline bool get_shouldActivate() ;

/// @brief Method get_shouldDeactivate, addr 0xb458f30, size 0x8, virtual true, abstract: false, final true
inline bool get_shouldDeactivate() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRActivateInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

/// @brief Method set_climbProvider, addr 0xb4584c0, size 0x10, virtual false, abstract: false, final false
inline void set_climbProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*  value) ;

/// @brief Method set_destinationEvaluationSettings, addr 0xb4584d8, size 0x10, virtual false, abstract: false, final false
inline void set_destinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClimbTeleportInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClimbTeleportInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClimbTeleportInteractor(ClimbTeleportInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClimbTeleportInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClimbTeleportInteractor(ClimbTeleportInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11393};

/// [SerializeField]
/// [Tooltip("The climb locomotion provider to query for active locomotion and climbed interactable.")]
/// @brief Field m_ClimbProvider, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  ___m_ClimbProvider;

/// [SerializeField]
/// [Tooltip("Optional settings for how the hovered teleport volume evaluates a destination anchor. Applies as an override to the teleport volume\'s settings if set to Use Value or if the asset reference is set.")]
/// @brief Field m_DestinationEvaluationSettings, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  ___m_DestinationEvaluationSettings;

/// @brief Field m_ActivateEventArgs, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  ___m_ActivateEventArgs;

/// @brief Field m_DeactivateEventArgs, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  ___m_DeactivateEventArgs;

/// @brief Field m_TargetTeleportVolume, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  ___m_TargetTeleportVolume;

/// @brief Field m_PreservedTeleportVolumeSettings, offset: 0x168, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  ___m_PreservedTeleportVolumeSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor, ___m_ClimbProvider) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor, ___m_DestinationEvaluationSettings) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor, ___m_ActivateEventArgs) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor, ___m_DeactivateEventArgs) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor, ___m_TargetTeleportVolume) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor, ___m_PreservedTeleportVolumeSettings) == 0x168, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor) == 0x170, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor/<>c
class CORDL_TYPE ClimbTeleportInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*  __9;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  __9__28_0;

/// @brief Field <>9__28_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_1, put=setStaticF___9__28_1)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  __9__28_1;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c* New_ctor() ;

/// @brief Method <.ctor>b__28_0, addr 0xb4593a8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* __ctor_b__28_0() ;

/// @brief Method <.ctor>b__28_1, addr 0xb4593fc, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* __ctor_b__28_1() ;

/// @brief Method .ctor, addr 0xb4593a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* getStaticF___9__28_0() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* getStaticF___9__28_1() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*  value) ;

static inline void setStaticF___9__28_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value) ;

static inline void setStaticF___9__28_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClimbTeleportInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClimbTeleportInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClimbTeleportInteractor___c(ClimbTeleportInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClimbTeleportInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClimbTeleportInteractor___c(ClimbTeleportInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing
