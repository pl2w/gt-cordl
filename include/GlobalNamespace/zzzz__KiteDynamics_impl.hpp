#pragma once
// IWYU pragma private; include "GlobalNamespace/KiteDynamics.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__KiteDynamics_def.hpp"
#include "GlobalNamespace/zzzz__ITetheredObjectBehavior_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::Awake)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5735fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x57360c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.ReParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::ReParent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5736108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ReParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.EnableDynamics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)(bool, bool, bool)>(&::GlobalNamespace::KiteDynamics::EnableDynamics)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x57361c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"EnableDynamics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.EnableDistanceConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)(bool, float_t)>(&::GlobalNamespace::KiteDynamics::EnableDistanceConstraints)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x573633c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"EnableDistanceConstraints", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.get_ColliderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::get_ColliderEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5736390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"get_ColliderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::FixedUpdate)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5736414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.ITetheredObjectBehavior_DbgClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::ITetheredObjectBehavior_DbgClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x573669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ITetheredObjectBehavior.DbgClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.ITetheredObjectBehavior_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::ITetheredObjectBehavior_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57366d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ITetheredObjectBehavior.IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.ITetheredObjectBehavior_TriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>)>(&::GlobalNamespace::KiteDynamics::ITetheredObjectBehavior_TriggerEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57366dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ITetheredObjectBehavior.TriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics.ReturnStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::ReturnStep)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x57366e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ReturnStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KiteDynamics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KiteDynamics::*)()>(&::GlobalNamespace::KiteDynamics::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57368e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::KiteDynamics::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::KiteDynamics::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::KiteDynamics::__cordl_internal_get_balloonCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::KiteDynamics::__cordl_internal_get_balloonCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonCollider;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_balloonCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonCollider = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::KiteDynamics::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::KiteDynamics::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_bouyancyMinHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMinHeight;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_bouyancyMinHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMinHeight;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_bouyancyMinHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyMinHeight = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_bouyancyMaxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMaxHeight;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_bouyancyMaxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMaxHeight;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_bouyancyMaxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyMaxHeight = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_bouyancyActualHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyActualHeight;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_bouyancyActualHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyActualHeight;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_bouyancyActualHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyActualHeight = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_airResistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___airResistance;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_airResistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___airResistance;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_airResistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___airResistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KiteDynamics::__cordl_internal_get_knot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KiteDynamics::__cordl_internal_get_knot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knot;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_knot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knot = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::KiteDynamics::__cordl_internal_get_knotRb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knotRb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::KiteDynamics::__cordl_internal_get_knotRb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knotRb;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_knotRb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knotRb = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::KiteDynamics::__cordl_internal_get_grabPt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::KiteDynamics::__cordl_internal_get_grabPt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPt;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_grabPt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::KiteDynamics::__cordl_internal_get_grabPtInitParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtInitParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::KiteDynamics::__cordl_internal_get_grabPtInitParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtInitParent;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_grabPtInitParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPtInitParent = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_maximumVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumVelocity;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_maximumVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumVelocity;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_maximumVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumVelocity = value;
}
constexpr bool& GlobalNamespace::KiteDynamics::__cordl_internal_get_enableDynamics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDynamics;
}
constexpr bool const& GlobalNamespace::KiteDynamics::__cordl_internal_get_enableDynamics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDynamics;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_enableDynamics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableDynamics = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_balloonScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonScale;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_balloonScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonScale;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_balloonScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::KiteDynamics::__cordl_internal_get_grabPtPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::KiteDynamics::__cordl_internal_get_grabPtPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtPosition;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_grabPtPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPtPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::KiteDynamics::__cordl_internal_get_ctrlRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctrlRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::KiteDynamics::__cordl_internal_get_ctrlRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctrlRotation;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_ctrlRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctrlRotation = value;
}
constexpr float_t& GlobalNamespace::KiteDynamics::__cordl_internal_get_returnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnSpeed;
}
constexpr float_t const& GlobalNamespace::KiteDynamics::__cordl_internal_get_returnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnSpeed;
}
constexpr void GlobalNamespace::KiteDynamics::__cordl_internal_set_returnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnSpeed = value;
}
inline void GlobalNamespace::KiteDynamics::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::ReParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ReParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::EnableDynamics(bool  enable, bool  collider, bool  kinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"EnableDynamics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, collider, kinematic);
}
inline void GlobalNamespace::KiteDynamics::EnableDistanceConstraints(bool  enable, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"EnableDistanceConstraints", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, scale);
}
inline bool GlobalNamespace::KiteDynamics::get_ColliderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"get_ColliderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::ITetheredObjectBehavior_DbgClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ITetheredObjectBehavior.DbgClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::KiteDynamics::ITetheredObjectBehavior_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ITetheredObjectBehavior.IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::ITetheredObjectBehavior_TriggerEnter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  force, ::by_ref<::UnityEngine::Vector3>  collisionPt, ::by_ref<bool>  transferOwnership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ITetheredObjectBehavior.TriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, force, collisionPt, transferOwnership);
}
inline bool GlobalNamespace::KiteDynamics::ReturnStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {"ReturnStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KiteDynamics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KiteDynamics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KiteDynamics* GlobalNamespace::KiteDynamics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KiteDynamics*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr  GlobalNamespace::KiteDynamics::operator ::GlobalNamespace::ITetheredObjectBehavior*() noexcept {
return static_cast<::GlobalNamespace::ITetheredObjectBehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr ::GlobalNamespace::ITetheredObjectBehavior* GlobalNamespace::KiteDynamics::i___GlobalNamespace__ITetheredObjectBehavior() noexcept {
return static_cast<::GlobalNamespace::ITetheredObjectBehavior*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KiteDynamics::KiteDynamics()   {
}
