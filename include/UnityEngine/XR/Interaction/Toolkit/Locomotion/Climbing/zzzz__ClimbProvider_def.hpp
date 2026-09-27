#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ClimbProvider)
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettingsDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettings;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
struct GravityOverride;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class GravityProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class IGravityController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XROriginMovement;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing", "ClimbProvider");
// [AddComponentMenu("XR/Locomotion/Climb Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbProvider.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbProvider
class CORDL_TYPE ClimbProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <gravityPaused>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__gravityPaused_k__BackingField, put=__cordl_internal_set__gravityPaused_k__BackingField)) bool  _gravityPaused_k__BackingField;

/// @brief Field <transformation>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  _transformation_k__BackingField;

 __declspec(property(get=get_canProcess)) bool  canProcess;

 __declspec(property(get=get_climbAnchorInteractable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>  climbAnchorInteractable;

 __declspec(property(get=get_climbAnchorInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  climbAnchorInteractor;

/// @brief Field climbAnchorUpdated, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_climbAnchorUpdated, put=__cordl_internal_set_climbAnchorUpdated)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  climbAnchorUpdated;

 __declspec(property(get=get_climbSettings, put=set_climbSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  climbSettings;

 __declspec(property(get=get_enableGravityOnClimbEnd, put=set_enableGravityOnClimbEnd)) bool  enableGravityOnClimbEnd;

 __declspec(property(get=get_gravityPaused, put=set_gravityPaused)) bool  gravityPaused;

/// @brief Field m_ClimbSettings, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClimbSettings, put=__cordl_internal_set_m_ClimbSettings)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  m_ClimbSettings;

/// @brief Field m_EnableGravityOnClimbEnd, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableGravityOnClimbEnd, put=__cordl_internal_set_m_EnableGravityOnClimbEnd)) bool  m_EnableGravityOnClimbEnd;

/// @brief Field m_EnabledProvidersToDisable, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EnabledProvidersToDisable, put=__cordl_internal_set_m_EnabledProvidersToDisable)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  m_EnabledProvidersToDisable;

/// @brief Field m_GrabbedClimbables, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrabbedClimbables, put=__cordl_internal_set_m_GrabbedClimbables)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>*  m_GrabbedClimbables;

/// @brief Field m_GrabbingInteractors, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrabbingInteractors, put=__cordl_internal_set_m_GrabbingInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  m_GrabbingInteractors;

/// @brief Field m_GravityProvider, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityProvider, put=__cordl_internal_set_m_GravityProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  m_GravityProvider;

/// @brief Field m_InteractorAnchorClimbSpacePosition, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InteractorAnchorClimbSpacePosition, put=__cordl_internal_set_m_InteractorAnchorClimbSpacePosition)) ::UnityEngine::Vector3  m_InteractorAnchorClimbSpacePosition;

/// @brief Field m_InteractorAnchorWorldPosition, offset 0xe0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InteractorAnchorWorldPosition, put=__cordl_internal_set_m_InteractorAnchorWorldPosition)) ::UnityEngine::Vector3  m_InteractorAnchorWorldPosition;

/// @brief Field m_ProvidersToDisable, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProvidersToDisable, put=__cordl_internal_set_m_ProvidersToDisable)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  m_ProvidersToDisable;

 __declspec(property(get=get_providersToDisable, put=set_providersToDisable)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  providersToDisable;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  transformation;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*() noexcept;

/// @brief Method Awake, addr 0xb457804, size 0x11c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FinishClimbGrab, addr 0xb457394, size 0x15c, virtual false, abstract: false, final false
inline void FinishClimbGrab(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method FinishLocomotion, addr 0xb457ad8, size 0x248, virtual false, abstract: false, final false
inline void FinishLocomotion() ;

/// @brief Method GetActiveClimbSettings, addr 0xb458078, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings* GetActiveClimbSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  climbInteractable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider* New_ctor() ;

/// @brief Method OnGravityLockChanged, addr 0xb4581ac, size 0x10, virtual true, abstract: false, final false
inline void OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method OnGroundedChanged, addr 0xb4581a4, size 0x8, virtual true, abstract: false, final false
inline void OnGroundedChanged(bool  isGrounded) ;

/// @brief Method RemoveGravityLock, addr 0xb458100, size 0x84, virtual true, abstract: false, final true
inline void RemoveGravityLock() ;

/// @brief Method StartClimbGrab, addr 0xb456f14, size 0x3c8, virtual false, abstract: false, final false
inline void StartClimbGrab(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  climbInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method StepClimbMovement, addr 0xb457d20, size 0x1a4, virtual false, abstract: false, final false
inline void StepClimbMovement(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  currentClimbInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  currentInteractor) ;

/// @brief Method TryLockGravity, addr 0xb457fdc, size 0x9c, virtual true, abstract: false, final true
inline bool TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged, addr 0xb458194, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged, addr 0xb458184, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged(bool  isGrounded) ;

/// @brief Method Update, addr 0xb457990, size 0x148, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateClimbAnchor, addr 0xb457ec4, size 0x118, virtual false, abstract: false, final false
inline void UpdateClimbAnchor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  climbInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

constexpr bool const& __cordl_internal_get__gravityPaused_k__BackingField() const;

constexpr bool& __cordl_internal_get__gravityPaused_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>* const& __cordl_internal_get_climbAnchorUpdated() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*& __cordl_internal_get_climbAnchorUpdated() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* const& __cordl_internal_get_m_ClimbSettings() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*& __cordl_internal_get_m_ClimbSettings() ;

constexpr bool const& __cordl_internal_get_m_EnableGravityOnClimbEnd() const;

constexpr bool& __cordl_internal_get_m_EnableGravityOnClimbEnd() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& __cordl_internal_get_m_EnabledProvidersToDisable() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& __cordl_internal_get_m_EnabledProvidersToDisable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>* const& __cordl_internal_get_m_GrabbedClimbables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>*& __cordl_internal_get_m_GrabbedClimbables() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& __cordl_internal_get_m_GrabbingInteractors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& __cordl_internal_get_m_GrabbingInteractors() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& __cordl_internal_get_m_GravityProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& __cordl_internal_get_m_GravityProvider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InteractorAnchorClimbSpacePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InteractorAnchorClimbSpacePosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InteractorAnchorWorldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InteractorAnchorWorldPosition() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& __cordl_internal_get_m_ProvidersToDisable() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& __cordl_internal_get_m_ProvidersToDisable() ;

constexpr void __cordl_internal_set__gravityPaused_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

constexpr void __cordl_internal_set_climbAnchorUpdated(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  value) ;

constexpr void __cordl_internal_set_m_ClimbSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_EnableGravityOnClimbEnd(bool  value) ;

constexpr void __cordl_internal_set_m_EnabledProvidersToDisable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

constexpr void __cordl_internal_set_m_GrabbedClimbables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>*  value) ;

constexpr void __cordl_internal_set_m_GrabbingInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value) ;

constexpr void __cordl_internal_set_m_InteractorAnchorClimbSpacePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InteractorAnchorWorldPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ProvidersToDisable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// @brief Method .ctor, addr 0xb4581bc, size 0x22c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_climbAnchorUpdated, addr 0xb4576a4, size 0xb0, virtual false, abstract: false, final false
inline void add_climbAnchorUpdated(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  value) ;

/// @brief Method get_canProcess, addr 0xb45768c, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// @brief Method get_climbAnchorInteractable, addr 0xb45758c, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable> get_climbAnchorInteractable() ;

/// @brief Method get_climbAnchorInteractor, addr 0xb457604, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* get_climbAnchorInteractor() ;

/// @brief Method get_climbSettings, addr 0xb45757c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* get_climbSettings() ;

/// @brief Method get_enableGravityOnClimbEnd, addr 0xb45756c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableGravityOnClimbEnd() ;

/// [CompilerGenerated]
/// @brief Method get_gravityPaused, addr 0xb457694, size 0x8, virtual true, abstract: false, final true
inline bool get_gravityPaused() ;

/// @brief Method get_providersToDisable, addr 0xb45755c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* get_providersToDisable() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb45767c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* get_transformation() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Gravity__IGravityController() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_climbAnchorUpdated, addr 0xb457754, size 0xb0, virtual false, abstract: false, final false
inline void remove_climbAnchorUpdated(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  value) ;

/// @brief Method set_climbSettings, addr 0xb457584, size 0x8, virtual false, abstract: false, final false
inline void set_climbSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value) ;

/// @brief Method set_enableGravityOnClimbEnd, addr 0xb457574, size 0x8, virtual false, abstract: false, final false
inline void set_enableGravityOnClimbEnd(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_gravityPaused, addr 0xb45769c, size 0x8, virtual false, abstract: false, final false
inline void set_gravityPaused(bool  value) ;

/// @brief Method set_providersToDisable, addr 0xb457564, size 0x8, virtual false, abstract: false, final false
inline void set_providersToDisable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb457684, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClimbProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClimbProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClimbProvider(ClimbProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClimbProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClimbProvider(ClimbProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11388};

/// [SerializeField]
/// [Tooltip("List of providers to disable while climb locomotion is active. If empty, no providers will be disabled by this component while climbing.")]
/// @brief Field m_ProvidersToDisable, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  ___m_ProvidersToDisable;

/// [SerializeField]
/// [Tooltip("Whether to allow falling when climb locomotion ends. Disable to pause gravity when releasing, keeping the user from falling.")]
/// @brief Field m_EnableGravityOnClimbEnd, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_EnableGravityOnClimbEnd;

/// [SerializeField]
/// [Tooltip("Climb locomotion settings. Can be overridden by the Climb Interactable used for locomotion.")]
/// @brief Field m_ClimbSettings, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  ___m_ClimbSettings;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  ____transformation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <gravityPaused>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____gravityPaused_k__BackingField;

/// [CompilerGenerated]
/// @brief Field climbAnchorUpdated, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  ___climbAnchorUpdated;

/// @brief Field m_GravityProvider, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  ___m_GravityProvider;

/// @brief Field m_GrabbingInteractors, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  ___m_GrabbingInteractors;

/// @brief Field m_GrabbedClimbables, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>*  ___m_GrabbedClimbables;

/// @brief Field m_InteractorAnchorWorldPosition, offset: 0xe0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InteractorAnchorWorldPosition;

/// @brief Field m_InteractorAnchorClimbSpacePosition, offset: 0xec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InteractorAnchorClimbSpacePosition;

/// @brief Field m_EnabledProvidersToDisable, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  ___m_EnabledProvidersToDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_ProvidersToDisable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_EnableGravityOnClimbEnd) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_ClimbSettings) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ____transformation_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ____gravityPaused_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___climbAnchorUpdated) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_GravityProvider) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_GrabbingInteractors) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_GrabbedClimbables) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_InteractorAnchorWorldPosition) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_InteractorAnchorClimbSpacePosition) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider, ___m_EnabledProvidersToDisable) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider) == 0x100, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing
