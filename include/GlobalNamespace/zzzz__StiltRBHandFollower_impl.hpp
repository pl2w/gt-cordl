#pragma once
// IWYU pragma private; include "GlobalNamespace/StiltRBHandFollower.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StiltRBHandFollower_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StiltRBHandFollower.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StiltRBHandFollower::*)()>(&::GlobalNamespace::StiltRBHandFollower::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5af7da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StiltRBHandFollower.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StiltRBHandFollower::*)()>(&::GlobalNamespace::StiltRBHandFollower::FixedUpdate)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5af7e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StiltRBHandFollower.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StiltRBHandFollower::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::StiltRBHandFollower::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af8064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StiltRBHandFollower.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StiltRBHandFollower::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::StiltRBHandFollower::OnCollisionStay)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af80fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StiltRBHandFollower.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StiltRBHandFollower::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::StiltRBHandFollower::OnCollisionExit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5af8194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StiltRBHandFollower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StiltRBHandFollower::*)()>(&::GlobalNamespace::StiltRBHandFollower::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5af8200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::StiltRBHandFollower::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_targetHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_targetHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetHand;
}
constexpr void GlobalNamespace::StiltRBHandFollower::__cordl_internal_set_targetHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetHand = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_handOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_handOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handOffset;
}
constexpr void GlobalNamespace::StiltRBHandFollower::__cordl_internal_set_handOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_handRotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRotOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_handRotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRotOffset;
}
constexpr void GlobalNamespace::StiltRBHandFollower::__cordl_internal_set_handRotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRotOffset = value;
}
constexpr float_t& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_angularSpeedLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularSpeedLimit;
}
constexpr float_t const& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_angularSpeedLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularSpeedLimit;
}
constexpr void GlobalNamespace::StiltRBHandFollower::__cordl_internal_set_angularSpeedLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularSpeedLimit = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>*& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_collisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>* const& GlobalNamespace::StiltRBHandFollower::__cordl_internal_get_collisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisions;
}
constexpr void GlobalNamespace::StiltRBHandFollower::__cordl_internal_set_collisions(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisions = value;
}
inline void GlobalNamespace::StiltRBHandFollower::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StiltRBHandFollower::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StiltRBHandFollower::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::StiltRBHandFollower::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::StiltRBHandFollower::OnCollisionExit(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::StiltRBHandFollower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StiltRBHandFollower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StiltRBHandFollower* GlobalNamespace::StiltRBHandFollower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StiltRBHandFollower*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StiltRBHandFollower::StiltRBHandFollower()   {
}
