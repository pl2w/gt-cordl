#pragma once
// IWYU pragma private; include "GlobalNamespace/HandRayController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandRayController_HandSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandRayController)
namespace GlobalNamespace {
struct HandRayController_HandSide;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor;
}
// Forward declare root types
namespace GlobalNamespace {
class HandRayController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandRayController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandRayController*, "", "HandRayController");
// Dependencies HandRayController::HandSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandRayController
class CORDL_TYPE HandRayController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandSide = ::GlobalNamespace::HandRayController_HandSide;

/// @brief Field ActiveHand, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActiveHand, put=__cordl_internal_set_ActiveHand)) ::GlobalNamespace::HandRayController_HandSide  ActiveHand;

/// @brief Field _activationCounter, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__activationCounter, put=__cordl_internal_set__activationCounter)) int32_t  _activationCounter;

/// @brief Field _activeHandRay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeHandRay, put=__cordl_internal_set__activeHandRay)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  _activeHandRay;

/// @brief Field _hasInitialised, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasInitialised, put=__cordl_internal_set__hasInitialised)) bool  _hasInitialised;

/// @brief Field _leftHandRay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandRay, put=__cordl_internal_set__leftHandRay)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  _leftHandRay;

/// @brief Field _rightHandRay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandRay, put=__cordl_internal_set__rightHandRay)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  _rightHandRay;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::HandRayController>  instance;

/// @brief Method Awake, addr 0x5a44d1c, size 0x1c8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisableHandRays, addr 0x5a44fe4, size 0x144, virtual false, abstract: false, final false
inline void DisableHandRays() ;

/// @brief Method EnableHandRays, addr 0x5a4512c, size 0x13c, virtual false, abstract: false, final false
inline void EnableHandRays() ;

/// @brief Method HideHands, addr 0x5a4550c, size 0x34, virtual false, abstract: false, final false
inline void HideHands() ;

/// @brief Method InitialiseHands, addr 0x5a459e4, size 0xa0, virtual false, abstract: false, final false
inline void InitialiseHands() ;

static inline ::GlobalNamespace::HandRayController* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a45128, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PostUpdate, addr 0x5a455e0, size 0xbc, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method PulseActiveHandray, addr 0x5a45540, size 0xa0, virtual false, abstract: false, final false
inline void PulseActiveHandray(float_t  vibrationStrength, float_t  vibrationDuration) ;

/// @brief Method Start, addr 0x5a44ee4, size 0x100, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleHands, addr 0x5a45268, size 0x2a4, virtual false, abstract: false, final false
inline void ToggleHands() ;

/// @brief Method ToggleLeftHandRay, addr 0x5a45840, size 0x1a4, virtual false, abstract: false, final false
inline void ToggleLeftHandRay(bool  enabled) ;

/// @brief Method ToggleRightHandRay, addr 0x5a4569c, size 0x1a4, virtual false, abstract: false, final false
inline void ToggleRightHandRay(bool  enabled) ;

constexpr ::GlobalNamespace::HandRayController_HandSide const& __cordl_internal_get_ActiveHand() const;

constexpr ::GlobalNamespace::HandRayController_HandSide& __cordl_internal_get_ActiveHand() ;

constexpr int32_t const& __cordl_internal_get__activationCounter() const;

constexpr int32_t& __cordl_internal_get__activationCounter() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& __cordl_internal_get__activeHandRay() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& __cordl_internal_get__activeHandRay() ;

constexpr bool const& __cordl_internal_get__hasInitialised() const;

constexpr bool& __cordl_internal_get__hasInitialised() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& __cordl_internal_get__leftHandRay() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& __cordl_internal_get__leftHandRay() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& __cordl_internal_get__rightHandRay() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& __cordl_internal_get__rightHandRay() ;

constexpr void __cordl_internal_set_ActiveHand(::GlobalNamespace::HandRayController_HandSide  value) ;

constexpr void __cordl_internal_set__activationCounter(int32_t  value) ;

constexpr void __cordl_internal_set__activeHandRay(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value) ;

constexpr void __cordl_internal_set__hasInitialised(bool  value) ;

constexpr void __cordl_internal_set__leftHandRay(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value) ;

constexpr void __cordl_internal_set__rightHandRay(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value) ;

/// @brief Method .ctor, addr 0x5a45a84, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::HandRayController> getStaticF_instance() ;

/// @brief Method get_Instance, addr 0x5a44b74, size 0x1a8, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::HandRayController> get_Instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::HandRayController>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandRayController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandRayController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandRayController(HandRayController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandRayController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandRayController(HandRayController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2978};

/// [SerializeField]
/// @brief Field _leftHandRay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  ____leftHandRay;

/// [SerializeField]
/// @brief Field _rightHandRay, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  ____rightHandRay;

/// @brief Field _hasInitialised, offset: 0x30, size: 0x1, def value: None
 bool  ____hasInitialised;

/// @brief Field ActiveHand, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::HandRayController_HandSide  ___ActiveHand;

/// @brief Field _activeHandRay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  ____activeHandRay;

/// @brief Field _activationCounter, offset: 0x40, size: 0x4, def value: None
 int32_t  ____activationCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandRayController, ____leftHandRay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandRayController, ____rightHandRay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandRayController, ____hasInitialised) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandRayController, ___ActiveHand) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandRayController, ____activeHandRay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandRayController, ____activationCounter) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandRayController) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
