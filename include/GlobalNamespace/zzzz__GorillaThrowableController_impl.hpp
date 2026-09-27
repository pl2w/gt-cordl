#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaThrowableController.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowableController_def.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowableController::*)()>(&::GlobalNamespace::GorillaThrowableController::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59a172c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowableController::*)()>(&::GlobalNamespace::GorillaThrowableController::LateUpdate)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x59a17c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController.CheckIfHandHasReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaThrowableController::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::GorillaThrowableController::CheckIfHandHasReleased)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59a1e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"CheckIfHandHasReleased", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController.CheckIfHandHasGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaThrowableController::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::GorillaThrowableController::CheckIfHandHasGrabbed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59a1f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"CheckIfHandHasGrabbed", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController.CanGrabAnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaThrowableController::*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Collider*>)>(&::GlobalNamespace::GorillaThrowableController::CanGrabAnObject)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x59a1a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"CanGrabAnObject", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController.GrabbableObjectHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowableController::*)(bool)>(&::GlobalNamespace::GorillaThrowableController::GrabbableObjectHover)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"GrabbableObjectHover", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowableController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowableController::*)()>(&::GlobalNamespace::GorillaThrowableController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59a20b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftHandController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandController;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftHandController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandController;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_leftHandController(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandController = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightHandController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandController;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightHandController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandController;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_rightHandController(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandController = value;
}
constexpr bool& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftHandIsGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIsGrabbing;
}
constexpr bool const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftHandIsGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandIsGrabbing;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_leftHandIsGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandIsGrabbing = value;
}
constexpr bool& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightHandIsGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIsGrabbing;
}
constexpr bool const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightHandIsGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandIsGrabbing;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_rightHandIsGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandIsGrabbing = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaThrowable>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftHandGrabbedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandGrabbedObject;
}
constexpr ::UnityW<::GlobalNamespace::GorillaThrowable> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftHandGrabbedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandGrabbedObject;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_leftHandGrabbedObject(::UnityW<::GlobalNamespace::GorillaThrowable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandGrabbedObject = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaThrowable>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightHandGrabbedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandGrabbedObject;
}
constexpr ::UnityW<::GlobalNamespace::GorillaThrowable> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightHandGrabbedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandGrabbedObject;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_rightHandGrabbedObject(::UnityW<::GlobalNamespace::GorillaThrowable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandGrabbedObject = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_hoverVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverVibrationStrength;
}
constexpr float_t const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_hoverVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverVibrationStrength;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_hoverVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_hoverVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverVibrationDuration;
}
constexpr float_t const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_hoverVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverVibrationDuration;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_hoverVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverVibrationDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_handRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRadius;
}
constexpr float_t const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_handRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRadius;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_handRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRadius = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_rightDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightDevice;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_rightDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightDevice = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_leftDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftDevice;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_leftDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftDevice = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_inputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_inputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDevice;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputDevice = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_triggerValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerValue;
}
constexpr float_t const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_triggerValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerValue;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_triggerValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerValue = value;
}
constexpr bool& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_boolVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolVar;
}
constexpr bool const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_boolVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolVar;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_boolVar(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolVar = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_minCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_minCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCollider;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_minCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minCollider = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_returnCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_returnCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCollider;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_returnCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnCollider = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_magnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr float_t const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_magnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_magnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnitude = value;
}
constexpr bool& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_testCanGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testCanGrab;
}
constexpr bool const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_testCanGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testCanGrab;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_testCanGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testCanGrab = value;
}
constexpr int32_t& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_gorillaThrowableLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaThrowableLayerMask;
}
constexpr int32_t const& GlobalNamespace::GorillaThrowableController::__cordl_internal_get_gorillaThrowableLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaThrowableLayerMask;
}
constexpr void GlobalNamespace::GorillaThrowableController::__cordl_internal_set_gorillaThrowableLayerMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaThrowableLayerMask = value;
}
inline void GlobalNamespace::GorillaThrowableController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaThrowableController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaThrowableController::CheckIfHandHasReleased(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"CheckIfHandHasReleased", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool GlobalNamespace::GorillaThrowableController::CheckIfHandHasGrabbed(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"CheckIfHandHasGrabbed", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool GlobalNamespace::GorillaThrowableController::CanGrabAnObject(::UnityEngine::Transform*  handTransform, ::by_ref<::UnityEngine::Collider*>  returnCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"CanGrabAnObject", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handTransform, returnCollider);
}
inline void GlobalNamespace::GorillaThrowableController::GrabbableObjectHover(bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {"GrabbableObjectHover", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void GlobalNamespace::GorillaThrowableController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowableController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaThrowableController* GlobalNamespace::GorillaThrowableController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaThrowableController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaThrowableController::GorillaThrowableController()   {
}
