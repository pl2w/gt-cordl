#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart_Crank.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_CrankThreshold_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_CrankThreshold_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Crank.SetOnCrankedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Crank::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::TransferrableObjectHoldablePart_Crank::SetOnCrankedCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {"SetOnCrankedCallback", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Crank.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Crank::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart_Crank::Awake)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x573d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Crank.UpdateHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Crank::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::TransferrableObjectHoldablePart_Crank::UpdateHeld)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x573d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Crank.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Crank::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart_Crank::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x573e108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Crank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Crank::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart_Crank::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x573e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleX;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleX;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_crankHandleX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleX = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleY;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleY;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_crankHandleY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleY = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleMinZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMinZ;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleMinZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMinZ;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_crankHandleMinZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleMinZ = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleMaxZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMaxZ;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankHandleMaxZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHandleMaxZ;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_crankHandleMaxZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHandleMaxZ = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_maxHandSnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_maxHandSnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_maxHandSnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHandSnapDistance = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankAngleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAngleOffset;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankAngleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAngleOffset;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_crankAngleOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankAngleOffset = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankRadius;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_crankRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankRadius;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_crankRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankRadius = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_rotatingPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingPart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_rotatingPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingPart;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_rotatingPart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingPart = value;
}
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_lastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_lastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_lastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_baseLocalAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngle;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_baseLocalAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngle;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_baseLocalAngle(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalAngle = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_baseLocalAngleInverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngleInverse;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_baseLocalAngleInverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalAngleInverse;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_baseLocalAngleInverse(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalAngleInverse = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_onCrankedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCrankedCallback;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_onCrankedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCrankedCallback;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_onCrankedCallback(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCrankedCallback = value;
}
constexpr ::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_thresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholds;
}
constexpr ::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold> const& GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_get_thresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholds;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Crank::__cordl_internal_set_thresholds(::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thresholds = value;
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Crank::SetOnCrankedCallback(::System::Action_1<float_t>*  onCrankedCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {"SetOnCrankedCallback", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onCrankedCallback);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Crank::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Crank::UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, isHeldLeftHand);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Crank::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Crank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObjectHoldablePart_Crank* GlobalNamespace::TransferrableObjectHoldablePart_Crank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectHoldablePart_Crank::TransferrableObjectHoldablePart_Crank()   {
}
