#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKHandTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKHandTarget_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRController_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaIKHandTarget.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKHandTarget::*)()>(&::GlobalNamespace::GorillaIKHandTarget::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x579d9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKHandTarget.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKHandTarget::*)()>(&::GlobalNamespace::GorillaIKHandTarget::FixedUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x579da14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKHandTarget.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKHandTarget::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GorillaIKHandTarget::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579da9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKHandTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKHandTarget::*)()>(&::GlobalNamespace::GorillaIKHandTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_handToStickTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handToStickTo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_handToStickTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handToStickTo;
}
constexpr void GlobalNamespace::GorillaIKHandTarget::__cordl_internal_set_handToStickTo(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handToStickTo = value;
}
constexpr bool& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::GorillaIKHandTarget::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr float_t& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::GorillaIKHandTarget::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_thisRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_thisRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisRigidbody;
}
constexpr void GlobalNamespace::GorillaIKHandTarget::__cordl_internal_set_thisRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_controllerReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerReference;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& GlobalNamespace::GorillaIKHandTarget::__cordl_internal_get_controllerReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerReference;
}
constexpr void GlobalNamespace::GorillaIKHandTarget::__cordl_internal_set_controllerReference(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerReference = value;
}
inline void GlobalNamespace::GorillaIKHandTarget::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKHandTarget::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKHandTarget::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GorillaIKHandTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKHandTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaIKHandTarget* GlobalNamespace::GorillaIKHandTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaIKHandTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKHandTarget::GorillaIKHandTarget()   {
}
