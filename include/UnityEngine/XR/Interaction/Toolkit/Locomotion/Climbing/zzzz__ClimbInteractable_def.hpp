#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClimbInteractable)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettingsDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing", "ClimbInteractable");
// [SelectionBase]
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [AddComponentMenu("XR/Climb Interactable", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbInteractable.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbInteractable
class CORDL_TYPE ClimbInteractable : public ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable {
public:
// Declarations
 __declspec(property(get=get_climbAssistanceTeleportVolume, put=set_climbAssistanceTeleportVolume)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  climbAssistanceTeleportVolume;

 __declspec(property(get=get_climbProvider, put=set_climbProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  climbProvider;

 __declspec(property(get=get_climbSettingsOverride, put=set_climbSettingsOverride)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  climbSettingsOverride;

 __declspec(property(get=get_climbTransform, put=set_climbTransform)) ::UnityW<::UnityEngine::Transform>  climbTransform;

 __declspec(property(get=get_filterInteractionByDistance, put=set_filterInteractionByDistance)) bool  filterInteractionByDistance;

/// @brief Field m_ClimbAssistanceTeleportVolume, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClimbAssistanceTeleportVolume, put=__cordl_internal_set_m_ClimbAssistanceTeleportVolume)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  m_ClimbAssistanceTeleportVolume;

/// @brief Field m_ClimbProvider, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClimbProvider, put=__cordl_internal_set_m_ClimbProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  m_ClimbProvider;

/// @brief Field m_ClimbSettingsOverride, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClimbSettingsOverride, put=__cordl_internal_set_m_ClimbSettingsOverride)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  m_ClimbSettingsOverride;

/// @brief Field m_ClimbTransform, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClimbTransform, put=__cordl_internal_set_m_ClimbTransform)) ::UnityW<::UnityEngine::Transform>  m_ClimbTransform;

/// @brief Field m_FilterInteractionByDistance, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FilterInteractionByDistance, put=__cordl_internal_set_m_FilterInteractionByDistance)) bool  m_FilterInteractionByDistance;

/// @brief Field m_MaxInteractionDistance, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxInteractionDistance, put=__cordl_internal_set_m_MaxInteractionDistance)) float_t  m_MaxInteractionDistance;

 __declspec(property(get=get_maxInteractionDistance, put=set_maxInteractionDistance)) float_t  maxInteractionDistance;

/// @brief Method Awake, addr 0xb456c68, size 0xc4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method IsHoverableBy, addr 0xb456d2c, size 0x68, virtual true, abstract: false, final false
inline bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

/// @brief Method IsSelectableBy, addr 0xb456d94, size 0x7c, virtual true, abstract: false, final false
inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable* New_ctor() ;

/// @brief Method OnSelectEntered, addr 0xb456e10, size 0x104, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb4572dc, size 0xb8, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnValidate, addr 0xb456bb0, size 0x8c, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xb456c3c, size 0x2c, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> const& __cordl_internal_get_m_ClimbAssistanceTeleportVolume() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>& __cordl_internal_get_m_ClimbAssistanceTeleportVolume() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> const& __cordl_internal_get_m_ClimbProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>& __cordl_internal_get_m_ClimbProvider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* const& __cordl_internal_get_m_ClimbSettingsOverride() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*& __cordl_internal_get_m_ClimbSettingsOverride() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ClimbTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ClimbTransform() ;

constexpr bool const& __cordl_internal_get_m_FilterInteractionByDistance() const;

constexpr bool& __cordl_internal_get_m_FilterInteractionByDistance() ;

constexpr float_t const& __cordl_internal_get_m_MaxInteractionDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxInteractionDistance() ;

constexpr void __cordl_internal_set_m_ClimbAssistanceTeleportVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  value) ;

constexpr void __cordl_internal_set_m_ClimbProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  value) ;

constexpr void __cordl_internal_set_m_ClimbSettingsOverride(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ClimbTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_FilterInteractionByDistance(bool  value) ;

constexpr void __cordl_internal_set_m_MaxInteractionDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xb4574f0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_climbAssistanceTeleportVolume, addr 0xb456b80, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> get_climbAssistanceTeleportVolume() ;

/// @brief Method get_climbProvider, addr 0xb456ab0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> get_climbProvider() ;

/// @brief Method get_climbSettingsOverride, addr 0xb456b98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* get_climbSettingsOverride() ;

/// @brief Method get_climbTransform, addr 0xb456ac8, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_climbTransform() ;

/// @brief Method get_filterInteractionByDistance, addr 0xb456b60, size 0x8, virtual false, abstract: false, final false
inline bool get_filterInteractionByDistance() ;

/// @brief Method get_maxInteractionDistance, addr 0xb456b70, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxInteractionDistance() ;

/// @brief Method set_climbAssistanceTeleportVolume, addr 0xb456b88, size 0x10, virtual false, abstract: false, final false
inline void set_climbAssistanceTeleportVolume(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  value) ;

/// @brief Method set_climbProvider, addr 0xb456ab8, size 0x10, virtual false, abstract: false, final false
inline void set_climbProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*  value) ;

/// @brief Method set_climbSettingsOverride, addr 0xb456ba0, size 0x10, virtual false, abstract: false, final false
inline void set_climbSettingsOverride(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value) ;

/// @brief Method set_climbTransform, addr 0xb456b50, size 0x10, virtual false, abstract: false, final false
inline void set_climbTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_filterInteractionByDistance, addr 0xb456b68, size 0x8, virtual false, abstract: false, final false
inline void set_filterInteractionByDistance(bool  value) ;

/// @brief Method set_maxInteractionDistance, addr 0xb456b78, size 0x8, virtual false, abstract: false, final false
inline void set_maxInteractionDistance(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClimbInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClimbInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClimbInteractable(ClimbInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClimbInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClimbInteractable(ClimbInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11387};

/// @brief Field k_DefaultMaxInteractionDistance offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultMaxInteractionDistance{static_cast<float_t>(0.1f)};

/// [SerializeField]
/// [Tooltip("The climb provider that performs locomotion while this interactable is selected. If no climb provider is configured, will attempt to find one.")]
/// @brief Field m_ClimbProvider, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  ___m_ClimbProvider;

/// [SerializeField]
/// [Tooltip("Transform that defines the coordinate space for climb locomotion. Will use this GameObject\'s Transform by default.")]
/// @brief Field m_ClimbTransform, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ClimbTransform;

/// [SerializeField]
/// [Tooltip("Controls whether to apply a distance check when validating hover and select interaction.")]
/// @brief Field m_FilterInteractionByDistance, offset: 0x1b0, size: 0x1, def value: None
 bool  ___m_FilterInteractionByDistance;

/// [SerializeField]
/// [Tooltip("The maximum distance that an interactor can be from this interactable to begin hover or select.")]
/// @brief Field m_MaxInteractionDistance, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___m_MaxInteractionDistance;

/// [SerializeField]
/// [Tooltip("The teleport volume used to assist with movement to a specific destination after ending a climb (optional, may be None). Only used if there is a Climb Teleport Interactor in the scene.")]
/// @brief Field m_ClimbAssistanceTeleportVolume, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  ___m_ClimbAssistanceTeleportVolume;

/// [SerializeField]
/// [Tooltip("Optional override of locomotion settings specified in the climb provider. Only applies as an override if set to Use Value or if the asset reference is set.")]
/// @brief Field m_ClimbSettingsOverride, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  ___m_ClimbSettingsOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable, ___m_ClimbProvider) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable, ___m_ClimbTransform) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable, ___m_FilterInteractionByDistance) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable, ___m_MaxInteractionDistance) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable, ___m_ClimbAssistanceTeleportVolume) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable, ___m_ClimbSettingsOverride) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable) == 0x1c8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing
