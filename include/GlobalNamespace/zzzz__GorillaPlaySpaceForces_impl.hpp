#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlaySpaceForces.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPlaySpaceForces_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPlaySpaceForces.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlaySpaceForces::*)()>(&::GlobalNamespace::GorillaPlaySpaceForces::Start)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x579dc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpaceForces*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlaySpaceForces.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlaySpaceForces::*)()>(&::GlobalNamespace::GorillaPlaySpaceForces::FixedUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x579dd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpaceForces*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlaySpaceForces._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlaySpaceForces::*)()>(&::GlobalNamespace::GorillaPlaySpaceForces::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579dddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpaceForces*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHandCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHandCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandCollider;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_leftHandCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandCollider = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHandCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHandCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandCollider;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_rightHandCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandCollider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHandRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_leftHandRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandRigidbody;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_leftHandRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHandRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_rightHandRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandRigidbody;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_rightHandRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandRigidbody = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_bodyColliderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_bodyColliderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderOffset;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_bodyColliderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyColliderOffset = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_forceConstant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceConstant;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_forceConstant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceConstant;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_forceConstant(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceConstant = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_lastLeftHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_lastLeftHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPosition;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_lastLeftHandPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftHandPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_lastRightHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_lastRightHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPosition;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_lastRightHandPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightHandPosition = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_playspaceRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playspaceRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_playspaceRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playspaceRigidbody;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_playspaceRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playspaceRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_headsetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_get_headsetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr void GlobalNamespace::GorillaPlaySpaceForces::__cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headsetTransform = value;
}
inline void GlobalNamespace::GorillaPlaySpaceForces::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpaceForces*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlaySpaceForces::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpaceForces*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlaySpaceForces::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpaceForces*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPlaySpaceForces* GlobalNamespace::GorillaPlaySpaceForces::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlaySpaceForces*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlaySpaceForces::GorillaPlaySpaceForces()   {
}
