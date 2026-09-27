#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRGazeInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRGazeInteractor_GazeAssistanceCalculation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRGazeInteractor)
namespace GlobalNamespace {
struct XRGazeInteractor_GazeAssistanceCalculation;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRInteractableSnapVolume;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRGazeInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRGazeInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [AddComponentMenu("XR/Interactors/XR Gaze Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor::GazeAssistanceCalculation, UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor
class CORDL_TYPE XRGazeInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor {
public:
// Declarations
using GazeAssistanceCalculation = ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation;

 __declspec(property(get=get_clampGazeAssistanceDistanceScaling, put=set_clampGazeAssistanceDistanceScaling)) bool  clampGazeAssistanceDistanceScaling;

 __declspec(property(get=get_gazeAssistanceCalculation, put=set_gazeAssistanceCalculation)) ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation  gazeAssistanceCalculation;

 __declspec(property(get=get_gazeAssistanceColliderFixedSize, put=set_gazeAssistanceColliderFixedSize)) float_t  gazeAssistanceColliderFixedSize;

 __declspec(property(get=get_gazeAssistanceColliderScale, put=set_gazeAssistanceColliderScale)) float_t  gazeAssistanceColliderScale;

 __declspec(property(get=get_gazeAssistanceDistanceScaling, put=set_gazeAssistanceDistanceScaling)) bool  gazeAssistanceDistanceScaling;

 __declspec(property(get=get_gazeAssistanceDistanceScalingClampValue, put=set_gazeAssistanceDistanceScalingClampValue)) float_t  gazeAssistanceDistanceScalingClampValue;

 __declspec(property(get=get_gazeAssistanceSnapVolume, put=set_gazeAssistanceSnapVolume)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  gazeAssistanceSnapVolume;

/// @brief Field m_ClampGazeAssistanceDistanceScaling, offset 0x4f1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ClampGazeAssistanceDistanceScaling, put=__cordl_internal_set_m_ClampGazeAssistanceDistanceScaling)) bool  m_ClampGazeAssistanceDistanceScaling;

/// @brief Field m_GazeAssistanceCalculation, offset 0x4dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GazeAssistanceCalculation, put=__cordl_internal_set_m_GazeAssistanceCalculation)) ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation  m_GazeAssistanceCalculation;

/// @brief Field m_GazeAssistanceColliderFixedSize, offset 0x4e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GazeAssistanceColliderFixedSize, put=__cordl_internal_set_m_GazeAssistanceColliderFixedSize)) float_t  m_GazeAssistanceColliderFixedSize;

/// @brief Field m_GazeAssistanceColliderScale, offset 0x4e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GazeAssistanceColliderScale, put=__cordl_internal_set_m_GazeAssistanceColliderScale)) float_t  m_GazeAssistanceColliderScale;

/// @brief Field m_GazeAssistanceDistanceScaling, offset 0x4f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_GazeAssistanceDistanceScaling, put=__cordl_internal_set_m_GazeAssistanceDistanceScaling)) bool  m_GazeAssistanceDistanceScaling;

/// @brief Field m_GazeAssistanceDistanceScalingClampValue, offset 0x4f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue, put=__cordl_internal_set_m_GazeAssistanceDistanceScalingClampValue)) float_t  m_GazeAssistanceDistanceScalingClampValue;

/// @brief Field m_GazeAssistanceSnapVolume, offset 0x4e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GazeAssistanceSnapVolume, put=__cordl_internal_set_m_GazeAssistanceSnapVolume)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  m_GazeAssistanceSnapVolume;

/// @brief Method Awake, addr 0xb46e068, size 0x1c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateSnapColliderSize, addr 0xb46e83c, size 0xd0, virtual false, abstract: false, final false
inline float_t CalculateSnapColliderSize(::UnityEngine::Collider*  interactableCollider) ;

/// @brief Method CanInteract, addr 0xb46e31c, size 0xdc, virtual false, abstract: false, final false
inline bool CanInteract(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method CreateGazeAssistanceSnapVolume, addr 0xb46e084, size 0x234, virtual false, abstract: false, final false
inline void CreateGazeAssistanceSnapVolume() ;

/// @brief Method GetHoverTimeToSelect, addr 0xb46e90c, size 0x128, virtual true, abstract: false, final false
inline float_t GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method GetTimeToAutoDeselect, addr 0xb46ea34, size 0x12c, virtual true, abstract: false, final false
inline float_t GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor* New_ctor() ;

/// @brief Method PreprocessInteractor, addr 0xb46e2b8, size 0x64, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method UpdateSnapVolumeInteractable, addr 0xb46e3f8, size 0x444, virtual true, abstract: false, final false
inline void UpdateSnapVolumeInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

constexpr bool const& __cordl_internal_get_m_ClampGazeAssistanceDistanceScaling() const;

constexpr bool& __cordl_internal_get_m_ClampGazeAssistanceDistanceScaling() ;

constexpr ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation const& __cordl_internal_get_m_GazeAssistanceCalculation() const;

constexpr ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation& __cordl_internal_get_m_GazeAssistanceCalculation() ;

constexpr float_t const& __cordl_internal_get_m_GazeAssistanceColliderFixedSize() const;

constexpr float_t& __cordl_internal_get_m_GazeAssistanceColliderFixedSize() ;

constexpr float_t const& __cordl_internal_get_m_GazeAssistanceColliderScale() const;

constexpr float_t& __cordl_internal_get_m_GazeAssistanceColliderScale() ;

constexpr bool const& __cordl_internal_get_m_GazeAssistanceDistanceScaling() const;

constexpr bool& __cordl_internal_get_m_GazeAssistanceDistanceScaling() ;

constexpr float_t const& __cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue() const;

constexpr float_t& __cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume> const& __cordl_internal_get_m_GazeAssistanceSnapVolume() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>& __cordl_internal_get_m_GazeAssistanceSnapVolume() ;

constexpr void __cordl_internal_set_m_ClampGazeAssistanceDistanceScaling(bool  value) ;

constexpr void __cordl_internal_set_m_GazeAssistanceCalculation(::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation  value) ;

constexpr void __cordl_internal_set_m_GazeAssistanceColliderFixedSize(float_t  value) ;

constexpr void __cordl_internal_set_m_GazeAssistanceColliderScale(float_t  value) ;

constexpr void __cordl_internal_set_m_GazeAssistanceDistanceScaling(bool  value) ;

constexpr void __cordl_internal_set_m_GazeAssistanceDistanceScalingClampValue(float_t  value) ;

constexpr void __cordl_internal_set_m_GazeAssistanceSnapVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  value) ;

/// @brief Method .ctor, addr 0xb46eb60, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_clampGazeAssistanceDistanceScaling, addr 0xb46e048, size 0x8, virtual false, abstract: false, final false
inline bool get_clampGazeAssistanceDistanceScaling() ;

/// @brief Method get_gazeAssistanceCalculation, addr 0xb46dff0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation get_gazeAssistanceCalculation() ;

/// @brief Method get_gazeAssistanceColliderFixedSize, addr 0xb46e000, size 0x8, virtual false, abstract: false, final false
inline float_t get_gazeAssistanceColliderFixedSize() ;

/// @brief Method get_gazeAssistanceColliderScale, addr 0xb46e010, size 0x8, virtual false, abstract: false, final false
inline float_t get_gazeAssistanceColliderScale() ;

/// @brief Method get_gazeAssistanceDistanceScaling, addr 0xb46e038, size 0x8, virtual false, abstract: false, final false
inline bool get_gazeAssistanceDistanceScaling() ;

/// @brief Method get_gazeAssistanceDistanceScalingClampValue, addr 0xb46e058, size 0x8, virtual false, abstract: false, final false
inline float_t get_gazeAssistanceDistanceScalingClampValue() ;

/// @brief Method get_gazeAssistanceSnapVolume, addr 0xb46e020, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume> get_gazeAssistanceSnapVolume() ;

/// @brief Method set_clampGazeAssistanceDistanceScaling, addr 0xb46e050, size 0x8, virtual false, abstract: false, final false
inline void set_clampGazeAssistanceDistanceScaling(bool  value) ;

/// @brief Method set_gazeAssistanceCalculation, addr 0xb46dff8, size 0x8, virtual false, abstract: false, final false
inline void set_gazeAssistanceCalculation(::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation  value) ;

/// @brief Method set_gazeAssistanceColliderFixedSize, addr 0xb46e008, size 0x8, virtual false, abstract: false, final false
inline void set_gazeAssistanceColliderFixedSize(float_t  value) ;

/// @brief Method set_gazeAssistanceColliderScale, addr 0xb46e018, size 0x8, virtual false, abstract: false, final false
inline void set_gazeAssistanceColliderScale(float_t  value) ;

/// @brief Method set_gazeAssistanceDistanceScaling, addr 0xb46e040, size 0x8, virtual false, abstract: false, final false
inline void set_gazeAssistanceDistanceScaling(bool  value) ;

/// @brief Method set_gazeAssistanceDistanceScalingClampValue, addr 0xb46e060, size 0x8, virtual false, abstract: false, final false
inline void set_gazeAssistanceDistanceScalingClampValue(float_t  value) ;

/// @brief Method set_gazeAssistanceSnapVolume, addr 0xb46e028, size 0x10, virtual false, abstract: false, final false
inline void set_gazeAssistanceSnapVolume(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGazeInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGazeInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGazeInteractor(XRGazeInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGazeInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGazeInteractor(XRGazeInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11454};

/// [SerializeField]
/// @brief Field m_GazeAssistanceCalculation, offset: 0x4dc, size: 0x4, def value: None
 ::GlobalNamespace::XRGazeInteractor_GazeAssistanceCalculation  ___m_GazeAssistanceCalculation;

/// [SerializeField]
/// @brief Field m_GazeAssistanceColliderFixedSize, offset: 0x4e0, size: 0x4, def value: None
 float_t  ___m_GazeAssistanceColliderFixedSize;

/// [SerializeField]
/// @brief Field m_GazeAssistanceColliderScale, offset: 0x4e4, size: 0x4, def value: None
 float_t  ___m_GazeAssistanceColliderScale;

/// [SerializeField]
/// @brief Field m_GazeAssistanceSnapVolume, offset: 0x4e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  ___m_GazeAssistanceSnapVolume;

/// [SerializeField]
/// @brief Field m_GazeAssistanceDistanceScaling, offset: 0x4f0, size: 0x1, def value: None
 bool  ___m_GazeAssistanceDistanceScaling;

/// [SerializeField]
/// @brief Field m_ClampGazeAssistanceDistanceScaling, offset: 0x4f1, size: 0x1, def value: None
 bool  ___m_ClampGazeAssistanceDistanceScaling;

/// [SerializeField]
/// @brief Field m_GazeAssistanceDistanceScalingClampValue, offset: 0x4f4, size: 0x4, def value: None
 float_t  ___m_GazeAssistanceDistanceScalingClampValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_GazeAssistanceCalculation) == 0x4dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_GazeAssistanceColliderFixedSize) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_GazeAssistanceColliderScale) == 0x4e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_GazeAssistanceSnapVolume) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_GazeAssistanceDistanceScaling) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_ClampGazeAssistanceDistanceScaling) == 0x4f1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor, ___m_GazeAssistanceDistanceScalingClampValue) == 0x4f4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor) == 0x4f8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
