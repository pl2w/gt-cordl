#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaThrowableController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaThrowableController)
namespace GlobalNamespace {
class GorillaThrowable;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaThrowableController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaThrowableController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaThrowableController*, "", "GorillaThrowableController");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaThrowableController
class CORDL_TYPE GorillaThrowableController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field boolVar, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_boolVar, put=__cordl_internal_set_boolVar)) bool  boolVar;

/// @brief Field colliders, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field gorillaThrowableLayerMask, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_gorillaThrowableLayerMask, put=__cordl_internal_set_gorillaThrowableLayerMask)) int32_t  gorillaThrowableLayerMask;

/// @brief Field handRadius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_handRadius, put=__cordl_internal_set_handRadius)) float_t  handRadius;

/// @brief Field hoverVibrationDuration, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverVibrationDuration, put=__cordl_internal_set_hoverVibrationDuration)) float_t  hoverVibrationDuration;

/// @brief Field hoverVibrationStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverVibrationStrength, put=__cordl_internal_set_hoverVibrationStrength)) float_t  hoverVibrationStrength;

/// @brief Field inputDevice, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputDevice, put=__cordl_internal_set_inputDevice)) ::UnityEngine::XR::InputDevice  inputDevice;

/// @brief Field leftDevice, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftDevice, put=__cordl_internal_set_leftDevice)) ::UnityEngine::XR::InputDevice  leftDevice;

/// @brief Field leftHandController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandController, put=__cordl_internal_set_leftHandController)) ::UnityW<::UnityEngine::Transform>  leftHandController;

/// @brief Field leftHandGrabbedObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandGrabbedObject, put=__cordl_internal_set_leftHandGrabbedObject)) ::UnityW<::GlobalNamespace::GorillaThrowable>  leftHandGrabbedObject;

/// @brief Field leftHandIsGrabbing, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandIsGrabbing, put=__cordl_internal_set_leftHandIsGrabbing)) bool  leftHandIsGrabbing;

/// @brief Field magnitude, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnitude, put=__cordl_internal_set_magnitude)) float_t  magnitude;

/// @brief Field minCollider, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_minCollider, put=__cordl_internal_set_minCollider)) ::UnityW<::UnityEngine::Collider>  minCollider;

/// @brief Field returnCollider, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnCollider, put=__cordl_internal_set_returnCollider)) ::UnityW<::UnityEngine::Collider>  returnCollider;

/// @brief Field rightDevice, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightDevice, put=__cordl_internal_set_rightDevice)) ::UnityEngine::XR::InputDevice  rightDevice;

/// @brief Field rightHandController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandController, put=__cordl_internal_set_rightHandController)) ::UnityW<::UnityEngine::Transform>  rightHandController;

/// @brief Field rightHandGrabbedObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandGrabbedObject, put=__cordl_internal_set_rightHandGrabbedObject)) ::UnityW<::GlobalNamespace::GorillaThrowable>  rightHandGrabbedObject;

/// @brief Field rightHandIsGrabbing, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandIsGrabbing, put=__cordl_internal_set_rightHandIsGrabbing)) bool  rightHandIsGrabbing;

/// @brief Field testCanGrab, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_testCanGrab, put=__cordl_internal_set_testCanGrab)) bool  testCanGrab;

/// @brief Field triggerValue, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerValue, put=__cordl_internal_set_triggerValue)) float_t  triggerValue;

/// @brief Method Awake, addr 0x59a172c, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanGrabAnObject, addr 0x59a1a64, size 0x3c0, virtual false, abstract: false, final false
inline bool CanGrabAnObject(::UnityEngine::Transform*  handTransform, ::by_ref<::UnityEngine::Collider*>  returnCollider) ;

/// @brief Method CheckIfHandHasGrabbed, addr 0x59a1f18, size 0xf4, virtual false, abstract: false, final false
inline bool CheckIfHandHasGrabbed(::UnityEngine::XR::XRNode  node) ;

/// @brief Method CheckIfHandHasReleased, addr 0x59a1e24, size 0xf4, virtual false, abstract: false, final false
inline bool CheckIfHandHasReleased(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GrabbableObjectHover, addr 0x59a200c, size 0xac, virtual false, abstract: false, final false
inline void GrabbableObjectHover(bool  isLeft) ;

/// @brief Method LateUpdate, addr 0x59a17c4, size 0x2a0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaThrowableController* New_ctor() ;

constexpr bool const& __cordl_internal_get_boolVar() const;

constexpr bool& __cordl_internal_get_boolVar() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr int32_t const& __cordl_internal_get_gorillaThrowableLayerMask() const;

constexpr int32_t& __cordl_internal_get_gorillaThrowableLayerMask() ;

constexpr float_t const& __cordl_internal_get_handRadius() const;

constexpr float_t& __cordl_internal_get_handRadius() ;

constexpr float_t const& __cordl_internal_get_hoverVibrationDuration() const;

constexpr float_t& __cordl_internal_get_hoverVibrationDuration() ;

constexpr float_t const& __cordl_internal_get_hoverVibrationStrength() const;

constexpr float_t& __cordl_internal_get_hoverVibrationStrength() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_inputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_inputDevice() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_leftDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_leftDevice() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandController() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandController() ;

constexpr ::UnityW<::GlobalNamespace::GorillaThrowable> const& __cordl_internal_get_leftHandGrabbedObject() const;

constexpr ::UnityW<::GlobalNamespace::GorillaThrowable>& __cordl_internal_get_leftHandGrabbedObject() ;

constexpr bool const& __cordl_internal_get_leftHandIsGrabbing() const;

constexpr bool& __cordl_internal_get_leftHandIsGrabbing() ;

constexpr float_t const& __cordl_internal_get_magnitude() const;

constexpr float_t& __cordl_internal_get_magnitude() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_minCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_minCollider() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_returnCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_returnCollider() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_rightDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_rightDevice() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandController() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandController() ;

constexpr ::UnityW<::GlobalNamespace::GorillaThrowable> const& __cordl_internal_get_rightHandGrabbedObject() const;

constexpr ::UnityW<::GlobalNamespace::GorillaThrowable>& __cordl_internal_get_rightHandGrabbedObject() ;

constexpr bool const& __cordl_internal_get_rightHandIsGrabbing() const;

constexpr bool& __cordl_internal_get_rightHandIsGrabbing() ;

constexpr bool const& __cordl_internal_get_testCanGrab() const;

constexpr bool& __cordl_internal_get_testCanGrab() ;

constexpr float_t const& __cordl_internal_get_triggerValue() const;

constexpr float_t& __cordl_internal_get_triggerValue() ;

constexpr void __cordl_internal_set_boolVar(bool  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_gorillaThrowableLayerMask(int32_t  value) ;

constexpr void __cordl_internal_set_handRadius(float_t  value) ;

constexpr void __cordl_internal_set_hoverVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_hoverVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_leftDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_leftHandController(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftHandGrabbedObject(::UnityW<::GlobalNamespace::GorillaThrowable>  value) ;

constexpr void __cordl_internal_set_leftHandIsGrabbing(bool  value) ;

constexpr void __cordl_internal_set_magnitude(float_t  value) ;

constexpr void __cordl_internal_set_minCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_returnCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_rightDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_rightHandController(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHandGrabbedObject(::UnityW<::GlobalNamespace::GorillaThrowable>  value) ;

constexpr void __cordl_internal_set_rightHandIsGrabbing(bool  value) ;

constexpr void __cordl_internal_set_testCanGrab(bool  value) ;

constexpr void __cordl_internal_set_triggerValue(float_t  value) ;

/// @brief Method .ctor, addr 0x59a20b8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaThrowableController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaThrowableController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaThrowableController(GorillaThrowableController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaThrowableController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaThrowableController(GorillaThrowableController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2620};

/// @brief Field leftHandController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandController;

/// @brief Field rightHandController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandController;

/// @brief Field leftHandIsGrabbing, offset: 0x30, size: 0x1, def value: None
 bool  ___leftHandIsGrabbing;

/// @brief Field rightHandIsGrabbing, offset: 0x31, size: 0x1, def value: None
 bool  ___rightHandIsGrabbing;

/// @brief Field leftHandGrabbedObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaThrowable>  ___leftHandGrabbedObject;

/// @brief Field rightHandGrabbedObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaThrowable>  ___rightHandGrabbedObject;

/// @brief Field hoverVibrationStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___hoverVibrationStrength;

/// @brief Field hoverVibrationDuration, offset: 0x4c, size: 0x4, def value: None
 float_t  ___hoverVibrationDuration;

/// @brief Field handRadius, offset: 0x50, size: 0x4, def value: None
 float_t  ___handRadius;

/// @brief Field rightDevice, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___rightDevice;

/// @brief Field leftDevice, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___leftDevice;

/// @brief Field inputDevice, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___inputDevice;

/// @brief Field triggerValue, offset: 0x88, size: 0x4, def value: None
 float_t  ___triggerValue;

/// @brief Field boolVar, offset: 0x8c, size: 0x1, def value: None
 bool  ___boolVar;

/// @brief Field colliders, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field minCollider, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___minCollider;

/// @brief Field returnCollider, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___returnCollider;

/// @brief Field magnitude, offset: 0xa8, size: 0x4, def value: None
 float_t  ___magnitude;

/// @brief Field testCanGrab, offset: 0xac, size: 0x1, def value: None
 bool  ___testCanGrab;

/// @brief Field gorillaThrowableLayerMask, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___gorillaThrowableLayerMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___leftHandController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___rightHandController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___leftHandIsGrabbing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___rightHandIsGrabbing) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___leftHandGrabbedObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___rightHandGrabbedObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___hoverVibrationStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___hoverVibrationDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___handRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___rightDevice) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___leftDevice) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___inputDevice) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___triggerValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___boolVar) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___colliders) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___minCollider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___returnCollider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___magnitude) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___testCanGrab) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowableController, ___gorillaThrowableLayerMask) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaThrowableController) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
