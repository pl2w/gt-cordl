#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoverboardVisual)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class HoverboardAudio;
}
namespace GlobalNamespace {
class HoverboardHandle;
}
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HoverboardVisual;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoverboardVisual*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoverboardVisual*, "", "HoverboardVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoverboardVisual
class CORDL_TYPE HoverboardVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsHeld, put=set_IsHeld)) bool  IsHeld;

 __declspec(property(get=get_IsLeftHanded, put=set_IsLeftHanded)) bool  IsLeftHanded;

 __declspec(property(get=get_NominalLocalPosition, put=set_NominalLocalPosition)) ::UnityEngine::Vector3  NominalLocalPosition;

 __declspec(property(get=get_NominalLocalRotation, put=set_NominalLocalRotation)) ::UnityEngine::Quaternion  NominalLocalRotation;

 __declspec(property(get=get_NominalParentTransform)) ::UnityW<::UnityEngine::Transform>  NominalParentTransform;

/// @brief Field <IsHeld>k__BackingField, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsHeld_k__BackingField, put=__cordl_internal_set__IsHeld_k__BackingField)) bool  _IsHeld_k__BackingField;

/// @brief Field <IsLeftHanded>k__BackingField, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLeftHanded_k__BackingField, put=__cordl_internal_set__IsLeftHanded_k__BackingField)) bool  _IsLeftHanded_k__BackingField;

/// @brief Field <NominalLocalPosition>k__BackingField, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get__NominalLocalPosition_k__BackingField, put=__cordl_internal_set__NominalLocalPosition_k__BackingField)) ::UnityEngine::Vector3  _NominalLocalPosition_k__BackingField;

/// @brief Field <NominalLocalRotation>k__BackingField, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__NominalLocalRotation_k__BackingField, put=__cordl_internal_set__NominalLocalRotation_k__BackingField)) ::UnityEngine::Quaternion  _NominalLocalRotation_k__BackingField;

/// @brief Field <boardColor>k__BackingField, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__boardColor_k__BackingField, put=__cordl_internal_set__boardColor_k__BackingField)) ::UnityEngine::Color  _boardColor_k__BackingField;

 __declspec(property(get=get_boardColor, put=set_boardColor)) ::UnityEngine::Color  boardColor;

/// @brief Field boardMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_boardMesh, put=__cordl_internal_set_boardMesh)) ::UnityW<::UnityEngine::MeshRenderer>  boardMesh;

/// @brief Field carveHapticDuration, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_carveHapticDuration, put=__cordl_internal_set_carveHapticDuration)) float_t  carveHapticDuration;

/// @brief Field carveHapticStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_carveHapticStrength, put=__cordl_internal_set_carveHapticStrength)) float_t  carveHapticStrength;

/// @brief Field colorMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorMaterial, put=__cordl_internal_set_colorMaterial)) ::UnityW<::UnityEngine::Material>  colorMaterial;

/// @brief Field grindHapticDuration, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_grindHapticDuration, put=__cordl_internal_set_grindHapticDuration)) float_t  grindHapticDuration;

/// @brief Field grindHapticStrength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_grindHapticStrength, put=__cordl_internal_set_grindHapticStrength)) float_t  grindHapticStrength;

/// @brief Field handleInteractionPoint, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleInteractionPoint, put=__cordl_internal_set_handleInteractionPoint)) ::UnityW<::GlobalNamespace::InteractionPoint>  handleInteractionPoint;

/// @brief Field handlePosition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_handlePosition, put=__cordl_internal_set_handlePosition)) ::UnityW<::GlobalNamespace::HoverboardHandle>  handlePosition;

/// @brief Field hoverboardAudio, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardAudio, put=__cordl_internal_set_hoverboardAudio)) ::UnityW<::GlobalNamespace::HoverboardAudio>  hoverboardAudio;

/// @brief Field interpolatedLocalPosition, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_interpolatedLocalPosition, put=__cordl_internal_set_interpolatedLocalPosition)) ::UnityEngine::Vector3  interpolatedLocalPosition;

/// @brief Field interpolatedLocalRotation, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_interpolatedLocalRotation, put=__cordl_internal_set_interpolatedLocalRotation)) ::UnityEngine::Quaternion  interpolatedLocalRotation;

/// @brief Field isCallbackActive, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCallbackActive, put=__cordl_internal_set_isCallbackActive)) bool  isCallbackActive;

/// @brief Field lerpIntoHandDuration, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpIntoHandDuration, put=__cordl_internal_set_lerpIntoHandDuration)) float_t  lerpIntoHandDuration;

/// @brief Field parentRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentRig, put=__cordl_internal_set_parentRig)) ::UnityW<::GlobalNamespace::VRRig>  parentRig;

/// @brief Field positionLerpSpeed, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionLerpSpeed, put=__cordl_internal_set_positionLerpSpeed)) float_t  positionLerpSpeed;

/// @brief Field raceLapsReadout, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_raceLapsReadout, put=__cordl_internal_set_raceLapsReadout)) ::UnityW<::TMPro::TextMeshPro>  raceLapsReadout;

/// @brief Field racePositionReadout, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_racePositionReadout, put=__cordl_internal_set_racePositionReadout)) ::UnityW<::TMPro::TextMeshPro>  racePositionReadout;

/// @brief Field rotationLerpSpeed, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationLerpSpeed, put=__cordl_internal_set_rotationLerpSpeed)) float_t  rotationLerpSpeed;

/// @brief Field velocityEstimator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Method Awake, addr 0x5956e94, size 0xfc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DropFreeBoard, addr 0x5956888, size 0x11c, virtual false, abstract: false, final false
inline void DropFreeBoard() ;

/// @brief Method ICallBack.CallBack, addr 0x595704c, size 0x588, virtual true, abstract: false, final true
inline void ICallBack_CallBack() ;

static inline ::GlobalNamespace::HoverboardVisual* New_ctor() ;

/// @brief Method PlayCarveHaptic, addr 0x5957688, size 0xc8, virtual false, abstract: false, final false
inline void PlayCarveHaptic(float_t  carveForce) ;

/// @brief Method PlayGrindHaptic, addr 0x59575d4, size 0xb4, virtual false, abstract: false, final false
inline void PlayGrindHaptic() ;

/// @brief Method ProxyGrabHandle, addr 0x5957750, size 0x74, virtual false, abstract: false, final false
inline void ProxyGrabHandle(bool  isLeftHand) ;

/// @brief Method SetIsHeld, addr 0x59564c0, size 0x380, virtual false, abstract: false, final false
inline void SetIsHeld(bool  isHeldLeftHanded, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Color  boardColor) ;

/// @brief Method SetNotHeld, addr 0x59569a4, size 0x35c, virtual false, abstract: false, final false
inline void SetNotHeld() ;

/// @brief Method SetNotHeld, addr 0x5957044, size 0x8, virtual false, abstract: false, final false
inline void SetNotHeld(bool  isLeftHanded) ;

/// @brief Method SetRaceDisplay, addr 0x59577c4, size 0x90, virtual false, abstract: false, final false
inline void SetRaceDisplay(::StringW  text) ;

/// @brief Method SetRaceLapsDisplay, addr 0x5957854, size 0x90, virtual false, abstract: false, final false
inline void SetRaceLapsDisplay(::StringW  text) ;

constexpr bool const& __cordl_internal_get__IsHeld_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsHeld_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsLeftHanded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLeftHanded_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__NominalLocalPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__NominalLocalPosition_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__NominalLocalRotation_k__BackingField() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__NominalLocalRotation_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__boardColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__boardColor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_boardMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_boardMesh() ;

constexpr float_t const& __cordl_internal_get_carveHapticDuration() const;

constexpr float_t& __cordl_internal_get_carveHapticDuration() ;

constexpr float_t const& __cordl_internal_get_carveHapticStrength() const;

constexpr float_t& __cordl_internal_get_carveHapticStrength() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_colorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_colorMaterial() ;

constexpr float_t const& __cordl_internal_get_grindHapticDuration() const;

constexpr float_t& __cordl_internal_get_grindHapticDuration() ;

constexpr float_t const& __cordl_internal_get_grindHapticStrength() const;

constexpr float_t& __cordl_internal_get_grindHapticStrength() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_handleInteractionPoint() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_handleInteractionPoint() ;

constexpr ::UnityW<::GlobalNamespace::HoverboardHandle> const& __cordl_internal_get_handlePosition() const;

constexpr ::UnityW<::GlobalNamespace::HoverboardHandle>& __cordl_internal_get_handlePosition() ;

constexpr ::UnityW<::GlobalNamespace::HoverboardAudio> const& __cordl_internal_get_hoverboardAudio() const;

constexpr ::UnityW<::GlobalNamespace::HoverboardAudio>& __cordl_internal_get_hoverboardAudio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_interpolatedLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_interpolatedLocalPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_interpolatedLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_interpolatedLocalRotation() ;

constexpr bool const& __cordl_internal_get_isCallbackActive() const;

constexpr bool& __cordl_internal_get_isCallbackActive() ;

constexpr float_t const& __cordl_internal_get_lerpIntoHandDuration() const;

constexpr float_t& __cordl_internal_get_lerpIntoHandDuration() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_parentRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_parentRig() ;

constexpr float_t const& __cordl_internal_get_positionLerpSpeed() const;

constexpr float_t& __cordl_internal_get_positionLerpSpeed() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_raceLapsReadout() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_raceLapsReadout() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_racePositionReadout() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_racePositionReadout() ;

constexpr float_t const& __cordl_internal_get_rotationLerpSpeed() const;

constexpr float_t& __cordl_internal_get_rotationLerpSpeed() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set__IsHeld_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsLeftHanded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__NominalLocalPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__NominalLocalRotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__boardColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_boardMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_carveHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_carveHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_colorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_grindHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_grindHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_handleInteractionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_handlePosition(::UnityW<::GlobalNamespace::HoverboardHandle>  value) ;

constexpr void __cordl_internal_set_hoverboardAudio(::UnityW<::GlobalNamespace::HoverboardAudio>  value) ;

constexpr void __cordl_internal_set_interpolatedLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_interpolatedLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_isCallbackActive(bool  value) ;

constexpr void __cordl_internal_set_lerpIntoHandDuration(float_t  value) ;

constexpr void __cordl_internal_set_parentRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_positionLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_raceLapsReadout(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_racePositionReadout(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_rotationLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x59578e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsHeld, addr 0x5956f90, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHeld() ;

/// [CompilerGenerated]
/// @brief Method get_IsLeftHanded, addr 0x5956fa0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLeftHanded() ;

/// [CompilerGenerated]
/// @brief Method get_NominalLocalPosition, addr 0x5956fb0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NominalLocalPosition() ;

/// [CompilerGenerated]
/// @brief Method get_NominalLocalRotation, addr 0x5956fc8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_NominalLocalRotation() ;

/// @brief Method get_NominalParentTransform, addr 0x5956fe0, size 0x64, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_NominalParentTransform() ;

/// [CompilerGenerated]
/// @brief Method get_boardColor, addr 0x5956e7c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_boardColor() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsHeld, addr 0x5956f98, size 0x8, virtual false, abstract: false, final false
inline void set_IsHeld(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsLeftHanded, addr 0x5956fa8, size 0x8, virtual false, abstract: false, final false
inline void set_IsLeftHanded(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_NominalLocalPosition, addr 0x5956fbc, size 0xc, virtual false, abstract: false, final false
inline void set_NominalLocalPosition(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_NominalLocalRotation, addr 0x5956fd4, size 0xc, virtual false, abstract: false, final false
inline void set_NominalLocalRotation(::UnityEngine::Quaternion  value) ;

/// [CompilerGenerated]
/// @brief Method set_boardColor, addr 0x5956e88, size 0xc, virtual false, abstract: false, final false
inline void set_boardColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverboardVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverboardVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverboardVisual(HoverboardVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverboardVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverboardVisual(HoverboardVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2316};

/// [SerializeField]
/// @brief Field parentRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___parentRig;

/// [SerializeField]
/// @brief Field velocityEstimator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// [SerializeField]
/// [FormerlySerializedAs("audio")]
/// @brief Field hoverboardAudio, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoverboardAudio>  ___hoverboardAudio;

/// [SerializeField]
/// @brief Field handlePosition, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoverboardHandle>  ___handlePosition;

/// [SerializeField]
/// @brief Field grindHapticStrength, offset: 0x40, size: 0x4, def value: None
 float_t  ___grindHapticStrength;

/// [SerializeField]
/// @brief Field grindHapticDuration, offset: 0x44, size: 0x4, def value: None
 float_t  ___grindHapticDuration;

/// [SerializeField]
/// @brief Field carveHapticStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___carveHapticStrength;

/// [SerializeField]
/// @brief Field carveHapticDuration, offset: 0x4c, size: 0x4, def value: None
 float_t  ___carveHapticDuration;

/// [SerializeField]
/// @brief Field boardMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___boardMesh;

/// [SerializeField]
/// @brief Field handleInteractionPoint, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___handleInteractionPoint;

/// [SerializeField]
/// @brief Field racePositionReadout, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___racePositionReadout;

/// [SerializeField]
/// @brief Field raceLapsReadout, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___raceLapsReadout;

/// @brief Field colorMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___colorMaterial;

/// [CompilerGenerated]
/// @brief Field <boardColor>k__BackingField, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____boardColor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsHeld>k__BackingField, offset: 0x88, size: 0x1, def value: None
 bool  ____IsHeld_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsLeftHanded>k__BackingField, offset: 0x89, size: 0x1, def value: None
 bool  ____IsLeftHanded_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NominalLocalPosition>k__BackingField, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____NominalLocalPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NominalLocalRotation>k__BackingField, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____NominalLocalRotation_k__BackingField;

/// @brief Field interpolatedLocalPosition, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___interpolatedLocalPosition;

/// @brief Field interpolatedLocalRotation, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___interpolatedLocalRotation;

/// [SerializeField]
/// @brief Field lerpIntoHandDuration, offset: 0xc4, size: 0x4, def value: None
 float_t  ___lerpIntoHandDuration;

/// @brief Field positionLerpSpeed, offset: 0xc8, size: 0x4, def value: None
 float_t  ___positionLerpSpeed;

/// @brief Field rotationLerpSpeed, offset: 0xcc, size: 0x4, def value: None
 float_t  ___rotationLerpSpeed;

/// @brief Field isCallbackActive, offset: 0xd0, size: 0x1, def value: None
 bool  ___isCallbackActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___parentRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___velocityEstimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___hoverboardAudio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___handlePosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___grindHapticStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___grindHapticDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___carveHapticStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___carveHapticDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___boardMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___handleInteractionPoint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___racePositionReadout) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___raceLapsReadout) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___colorMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ____boardColor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ____IsHeld_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ____IsLeftHanded_k__BackingField) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ____NominalLocalPosition_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ____NominalLocalRotation_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___interpolatedLocalPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___interpolatedLocalRotation) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___lerpIntoHandDuration) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___positionLerpSpeed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___rotationLerpSpeed) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardVisual, ___isCallbackActive) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoverboardVisual) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
