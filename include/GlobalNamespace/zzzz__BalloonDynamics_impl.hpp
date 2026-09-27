#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonDynamics.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BalloonDynamics_def.hpp"
#include "GlobalNamespace/zzzz__ITetheredObjectBehavior_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5716fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x57170cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ReParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ReParent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x571710c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ReParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ApplyBouyancyForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ApplyBouyancyForce)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57171c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyBouyancyForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ApplyUpRightForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ApplyUpRightForce)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5717280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyUpRightForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ApplyAntiSpinForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ApplyAntiSpinForce)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5717354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyAntiSpinForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ApplyAirResistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ApplyAirResistance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57173c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyAirResistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ApplyDistanceConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ApplyDistanceConstraint)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5717414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyDistanceConstraint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.EnableDynamics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)(bool, bool, bool)>(&::GlobalNamespace::BalloonDynamics::EnableDynamics)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x571775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"EnableDynamics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.EnableDistanceConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)(bool, float_t)>(&::GlobalNamespace::BalloonDynamics::EnableDistanceConstraints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57178f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"EnableDistanceConstraints", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.get_ColliderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::get_ColliderEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57178fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"get_ColliderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::FixedUpdate)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5717980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ITetheredObjectBehavior_DbgClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ITetheredObjectBehavior_DbgClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5717b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ITetheredObjectBehavior.DbgClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ITetheredObjectBehavior_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ITetheredObjectBehavior_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5717b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ITetheredObjectBehavior.IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ITetheredObjectBehavior_TriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>)>(&::GlobalNamespace::BalloonDynamics::ITetheredObjectBehavior_TriggerEnter)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5717b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ITetheredObjectBehavior.TriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics.ReturnStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::ReturnStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5718124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ReturnStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonDynamics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonDynamics::*)()>(&::GlobalNamespace::BalloonDynamics::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x571812c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_balloonCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_balloonCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonCollider;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_balloonCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonCollider = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyForce;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyForce;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bouyancyForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyForce = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyMinHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMinHeight;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyMinHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMinHeight;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bouyancyMinHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyMinHeight = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyMaxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMaxHeight;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyMaxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyMaxHeight;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bouyancyMaxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyMaxHeight = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyActualHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyActualHeight;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bouyancyActualHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bouyancyActualHeight;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bouyancyActualHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bouyancyActualHeight = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_varianceMaxheight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___varianceMaxheight;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_varianceMaxheight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___varianceMaxheight;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_varianceMaxheight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___varianceMaxheight = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_airResistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___airResistance;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_airResistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___airResistance;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_airResistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___airResistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_knot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_knot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knot;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_knot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knot = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_knotRb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knotRb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_knotRb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knotRb;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_knotRb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knotRb = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_grabPt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_grabPt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPt;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_grabPt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_grabPtInitParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtInitParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_grabPtInitParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtInitParent;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_grabPtInitParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPtInitParent = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_stringLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringLength;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_stringLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringLength;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_stringLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringLength = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_stringStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringStrength;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_stringStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringStrength;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_stringStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringStrength = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_stringStretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringStretch;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_stringStretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringStretch;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_stringStretch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringStretch = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_maximumVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumVelocity;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_maximumVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumVelocity;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_maximumVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumVelocity = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_upRightTorque()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upRightTorque;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_upRightTorque() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upRightTorque;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_upRightTorque(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upRightTorque = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_antiSpinTorque()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiSpinTorque;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_antiSpinTorque() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiSpinTorque;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_antiSpinTorque(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antiSpinTorque = value;
}
constexpr bool& GlobalNamespace::BalloonDynamics::__cordl_internal_get_enableDynamics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDynamics;
}
constexpr bool const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_enableDynamics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDynamics;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_enableDynamics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableDynamics = value;
}
constexpr bool& GlobalNamespace::BalloonDynamics::__cordl_internal_get_enableDistanceConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDistanceConstraints;
}
constexpr bool const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_enableDistanceConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDistanceConstraints;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_enableDistanceConstraints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableDistanceConstraints = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_balloonScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonScale;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_balloonScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonScale;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_balloonScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonScale = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bopSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bopSpeed;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bopSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bopSpeed;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bopSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bopSpeed = value;
}
constexpr float_t& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bopSpeedCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bopSpeedCap;
}
constexpr float_t const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_bopSpeedCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bopSpeedCap;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_bopSpeedCap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bopSpeedCap = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BalloonDynamics::__cordl_internal_get_balloonBopSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonBopSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BalloonDynamics::__cordl_internal_get_balloonBopSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonBopSource;
}
constexpr void GlobalNamespace::BalloonDynamics::__cordl_internal_set_balloonBopSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonBopSource = value;
}
inline void GlobalNamespace::BalloonDynamics::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ReParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ReParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ApplyBouyancyForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyBouyancyForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ApplyUpRightForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyUpRightForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ApplyAntiSpinForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyAntiSpinForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ApplyAirResistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyAirResistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ApplyDistanceConstraint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ApplyDistanceConstraint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::EnableDynamics(bool  enable, bool  collider, bool  kinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"EnableDynamics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, collider, kinematic);
}
inline void GlobalNamespace::BalloonDynamics::EnableDistanceConstraints(bool  enable, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"EnableDistanceConstraints", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, scale);
}
inline bool GlobalNamespace::BalloonDynamics::get_ColliderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"get_ColliderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ITetheredObjectBehavior_DbgClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ITetheredObjectBehavior.DbgClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BalloonDynamics::ITetheredObjectBehavior_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ITetheredObjectBehavior.IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::ITetheredObjectBehavior_TriggerEnter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  force, ::by_ref<::UnityEngine::Vector3>  collisionPt, ::by_ref<bool>  transferOwnership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ITetheredObjectBehavior.TriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, force, collisionPt, transferOwnership);
}
inline bool GlobalNamespace::BalloonDynamics::ReturnStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {"ReturnStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonDynamics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonDynamics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BalloonDynamics* GlobalNamespace::BalloonDynamics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BalloonDynamics*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr  GlobalNamespace::BalloonDynamics::operator ::GlobalNamespace::ITetheredObjectBehavior*() noexcept {
return static_cast<::GlobalNamespace::ITetheredObjectBehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITetheredObjectBehavior"
constexpr ::GlobalNamespace::ITetheredObjectBehavior* GlobalNamespace::BalloonDynamics::i___GlobalNamespace__ITetheredObjectBehavior() noexcept {
return static_cast<::GlobalNamespace::ITetheredObjectBehavior*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BalloonDynamics::BalloonDynamics()   {
}
