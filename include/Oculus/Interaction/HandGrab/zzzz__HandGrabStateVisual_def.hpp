#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabStateVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabStateVisual)
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
class SyntheticHand;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabStateVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabStateVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabStateVisual*, "Oculus.Interaction.HandGrab", "HandGrabStateVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabStateVisual
class CORDL_TYPE HandGrabStateVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HandGrabState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandGrabState, put=__cordl_internal_set_HandGrabState)) ::Oculus::Interaction::HandGrab::IHandGrabState*  HandGrabState;

/// @brief Field _areFingersFree, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__areFingersFree, put=__cordl_internal_set__areFingersFree)) bool  _areFingersFree;

/// @brief Field _handGrabState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabState, put=__cordl_internal_set__handGrabState)) ::UnityW<::UnityEngine::Object>  _handGrabState;

/// @brief Field _isWristFree, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWristFree, put=__cordl_internal_set__isWristFree)) bool  _isWristFree;

/// @brief Field _started, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _syntheticHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__syntheticHand, put=__cordl_internal_set__syntheticHand)) ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  _syntheticHand;

/// @brief Field _wasCompletelyFree, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasCompletelyFree, put=__cordl_internal_set__wasCompletelyFree)) bool  _wasCompletelyFree;

/// @brief Method Awake, addr 0xa4d7fd8, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ConstrainingForce, addr 0xa4d80ec, size 0x2e4, virtual false, abstract: false, final false
inline void ConstrainingForce(::Oculus::Interaction::HandGrab::IHandGrabState*  grabSource, ::by_ref<float_t>  fingersConstraint, ::by_ref<float_t>  wristConstraint) ;

/// @brief Method FreeFingers, addr 0xa4d85bc, size 0x44, virtual false, abstract: false, final false
inline bool FreeFingers() ;

/// @brief Method FreeWrist, addr 0xa4d8600, size 0x48, virtual false, abstract: false, final false
inline bool FreeWrist() ;

/// @brief Method InjectAllHandGrabInteractorVisual, addr 0xa4d8734, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllHandGrabInteractorVisual(::Oculus::Interaction::HandGrab::IHandGrabState*  handGrabState, ::Oculus::Interaction::Input::SyntheticHand*  syntheticHand) ;

/// @brief Method InjectHandGrabState, addr 0xa4d8760, size 0xcc, virtual false, abstract: false, final false
inline void InjectHandGrabState(::Oculus::Interaction::HandGrab::IHandGrabState*  handGrabState) ;

/// @brief Method InjectSyntheticHand, addr 0xa4d882c, size 0x8, virtual false, abstract: false, final false
inline void InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand*  syntheticHand) ;

/// @brief Method LateUpdate, addr 0xa4d806c, size 0x80, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::HandGrab::HandGrabStateVisual* New_ctor() ;

/// @brief Method Start, addr 0xa4d8040, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateFingers, addr 0xa4d8648, size 0xec, virtual false, abstract: false, final false
inline void UpdateFingers(::Oculus::Interaction::HandGrab::HandPose*  handPose, ::Oculus::Interaction::Input::HandFingerFlags  grabbingFingers, float_t  strength) ;

/// @brief Method UpdateHandPose, addr 0xa4d83d0, size 0x1ec, virtual false, abstract: false, final false
inline void UpdateHandPose(::Oculus::Interaction::HandGrab::IHandGrabState*  grabSource, float_t  fingersConstraint, float_t  wristConstraint) ;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* const& __cordl_internal_get_HandGrabState() const;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabState*& __cordl_internal_get_HandGrabState() ;

constexpr bool const& __cordl_internal_get__areFingersFree() const;

constexpr bool& __cordl_internal_get__areFingersFree() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handGrabState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handGrabState() ;

constexpr bool const& __cordl_internal_get__isWristFree() const;

constexpr bool& __cordl_internal_get__isWristFree() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand> const& __cordl_internal_get__syntheticHand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand>& __cordl_internal_get__syntheticHand() ;

constexpr bool const& __cordl_internal_get__wasCompletelyFree() const;

constexpr bool& __cordl_internal_get__wasCompletelyFree() ;

constexpr void __cordl_internal_set_HandGrabState(::Oculus::Interaction::HandGrab::IHandGrabState*  value) ;

constexpr void __cordl_internal_set__areFingersFree(bool  value) ;

constexpr void __cordl_internal_set__handGrabState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isWristFree(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__syntheticHand(::UnityW<::Oculus::Interaction::Input::SyntheticHand>  value) ;

constexpr void __cordl_internal_set__wasCompletelyFree(bool  value) ;

/// @brief Method .ctor, addr 0xa4d8834, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabStateVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabStateVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabStateVisual(HandGrabStateVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabStateVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabStateVisual(HandGrabStateVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16311};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.HandGrab.IHandGrabState), new[] {  })]
/// @brief Field _handGrabState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handGrabState;

/// @brief Field HandGrabState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::IHandGrabState*  ___HandGrabState;

/// [SerializeField]
/// @brief Field _syntheticHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  ____syntheticHand;

/// @brief Field _areFingersFree, offset: 0x38, size: 0x1, def value: None
 bool  ____areFingersFree;

/// @brief Field _isWristFree, offset: 0x39, size: 0x1, def value: None
 bool  ____isWristFree;

/// @brief Field _wasCompletelyFree, offset: 0x3a, size: 0x1, def value: None
 bool  ____wasCompletelyFree;

/// @brief Field _started, offset: 0x3b, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ____handGrabState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ___HandGrabState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ____syntheticHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ____areFingersFree) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ____isWristFree) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ____wasCompletelyFree) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabStateVisual, ____started) == 0x3b, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabStateVisual) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
