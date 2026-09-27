#pragma once
// IWYU pragma private; include "GlobalNamespace/FishingRod.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FishingRod_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__VerletLine_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__HingeJoint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FishingRod.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::OnActivate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5803d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                    {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::OnDeactivate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5803e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                    {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5803f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                    {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.SetBobFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)(bool)>(&::GlobalNamespace::FishingRod::SetBobFloat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5803f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"SetBobFloat", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.QuickReel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::QuickReel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x580402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"QuickReel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.IsFreeHandGripping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::IsFreeHandGripping)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x58040e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"IsFreeHandGripping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FishingRod::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FishingRod::OnRelease)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58042f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                    {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.ReelIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::ReelIn)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5804068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ReelIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.ReelOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::ReelOut)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5803de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ReelOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.ReelStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::ReelStop)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5803e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ReelStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.SetHandleMotorUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t, ::UnityEngine::HingeJoint*, bool)>(&::GlobalNamespace::FishingRod::SetHandleMotorUse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5804460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"SetHandleMotorUse", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::HingeJoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5804510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                    {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.ResetLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)(float_t)>(&::GlobalNamespace::FishingRod::ResetLineLength)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58043b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ResetLineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::FixedUpdate)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x580466c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod.GetSignedDeltaYZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::FishingRod::GetSignedDeltaYZ)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5804bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"GetSignedDeltaYZ", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FishingRod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FishingRod::*)()>(&::GlobalNamespace::FishingRod::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5804d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FishingRod::__cordl_internal_get_handleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FishingRod::__cordl_internal_get_handleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleTransform;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_handleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleTransform = value;
}
constexpr ::UnityW<::UnityEngine::HingeJoint>& GlobalNamespace::FishingRod::__cordl_internal_get_handleJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleJoint;
}
constexpr ::UnityW<::UnityEngine::HingeJoint> const& GlobalNamespace::FishingRod::__cordl_internal_get_handleJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleJoint;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_handleJoint(::UnityW<::UnityEngine::HingeJoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleJoint = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::FishingRod::__cordl_internal_get_handleRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::FishingRod::__cordl_internal_get_handleRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleRigidbody;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_handleRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::FishingRod::__cordl_internal_get_handleCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::FishingRod::__cordl_internal_get_handleCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleCollider;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_handleCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleCollider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::FishingRod::__cordl_internal_get_bobRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::FishingRod::__cordl_internal_get_bobRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobRigidbody;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_bobRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::FishingRod::__cordl_internal_get_bobCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::FishingRod::__cordl_internal_get_bobCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobCollider;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_bobCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::VerletLine>& GlobalNamespace::FishingRod::__cordl_internal_get_line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr ::UnityW<::GlobalNamespace::VerletLine> const& GlobalNamespace::FishingRod::__cordl_internal_get_line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_line(::UnityW<::GlobalNamespace::VerletLine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___line = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::FishingRod::__cordl_internal_get_tipTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tipTracker;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::FishingRod::__cordl_internal_get_tipTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tipTracker;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_tipTracker(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tipTracker = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::FishingRod::__cordl_internal_get_tipBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tipBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::FishingRod::__cordl_internal_get_tipBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tipBody;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_tipBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tipBody = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::FishingRod::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::FishingRod::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FishingRod::__cordl_internal_get_reelFreezeLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelFreezeLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FishingRod::__cordl_internal_get_reelFreezeLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelFreezeLocalPosition;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_reelFreezeLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reelFreezeLocalPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FishingRod::__cordl_internal_get_reelFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FishingRod::__cordl_internal_get_reelFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelFrom;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_reelFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reelFrom = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FishingRod::__cordl_internal_get_reelTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FishingRod::__cordl_internal_get_reelTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelTo;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_reelTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reelTo = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FishingRod::__cordl_internal_get_reelToSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelToSync;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FishingRod::__cordl_internal_get_reelToSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelToSync;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_reelToSync(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reelToSync = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_reelSpinRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelSpinRate;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_reelSpinRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reelSpinRate;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_reelSpinRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reelSpinRate = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_lineResizeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineResizeRate;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_lineResizeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineResizeRate;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_lineResizeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineResizeRate = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_lineCastFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastFactor;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_lineCastFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastFactor;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_lineCastFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineCastFactor = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_lineLengthMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineLengthMin;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_lineLengthMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineLengthMin;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_lineLengthMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineLengthMin = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_lineLengthMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineLengthMax;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_lineLengthMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineLengthMax;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_lineLengthMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineLengthMax = value;
}
constexpr bool& GlobalNamespace::FishingRod::__cordl_internal_get__bobFloating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobFloating;
}
constexpr bool const& GlobalNamespace::FishingRod::__cordl_internal_get__bobFloating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobFloating;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__bobFloating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bobFloating = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_bobFloatForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobFloatForce;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_bobFloatForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobFloatForce;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_bobFloatForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobFloatForce = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_bobStaticDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobStaticDrag;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_bobStaticDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobStaticDrag;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_bobStaticDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobStaticDrag = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get_bobDynamicDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobDynamicDrag;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get_bobDynamicDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobDynamicDrag;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set_bobDynamicDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobDynamicDrag = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get__bobFloatPlaneY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobFloatPlaneY;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get__bobFloatPlaneY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobFloatPlaneY;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__bobFloatPlaneY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bobFloatPlaneY = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get__targetSegmentMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetSegmentMin;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get__targetSegmentMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetSegmentMin;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__targetSegmentMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetSegmentMin = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get__targetSegmentMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetSegmentMax;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get__targetSegmentMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetSegmentMax;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__targetSegmentMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetSegmentMax = value;
}
constexpr bool& GlobalNamespace::FishingRod::__cordl_internal_get__manualReeling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manualReeling;
}
constexpr bool const& GlobalNamespace::FishingRod::__cordl_internal_get__manualReeling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manualReeling;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__manualReeling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manualReeling = value;
}
constexpr bool& GlobalNamespace::FishingRod::__cordl_internal_get__lineResizing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineResizing;
}
constexpr bool const& GlobalNamespace::FishingRod::__cordl_internal_get__lineResizing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineResizing;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__lineResizing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineResizing = value;
}
constexpr bool& GlobalNamespace::FishingRod::__cordl_internal_get__lineExpanding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineExpanding;
}
constexpr bool const& GlobalNamespace::FishingRod::__cordl_internal_get__lineExpanding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineExpanding;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__lineExpanding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineExpanding = value;
}
constexpr bool& GlobalNamespace::FishingRod::__cordl_internal_get__lineResetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineResetting;
}
constexpr bool const& GlobalNamespace::FishingRod::__cordl_internal_get__lineResetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineResetting;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__lineResetting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineResetting = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::FishingRod::__cordl_internal_get__sinceReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceReset;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::FishingRod::__cordl_internal_get__sinceReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceReset;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__sinceReset(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sinceReset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FishingRod::__cordl_internal_get__lastLocalRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocalRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FishingRod::__cordl_internal_get__lastLocalRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocalRot;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__lastLocalRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastLocalRot = value;
}
constexpr float_t& GlobalNamespace::FishingRod::__cordl_internal_get__localRotDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRotDelta;
}
constexpr float_t const& GlobalNamespace::FishingRod::__cordl_internal_get__localRotDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRotDelta;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__localRotDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localRotDelta = value;
}
constexpr bool& GlobalNamespace::FishingRod::__cordl_internal_get__isGrippingHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGrippingHandle;
}
constexpr bool const& GlobalNamespace::FishingRod::__cordl_internal_get__isGrippingHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGrippingHandle;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__isGrippingHandle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isGrippingHandle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FishingRod::__cordl_internal_get__grippingHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grippingHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FishingRod::__cordl_internal_get__grippingHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grippingHand;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__grippingHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grippingHand = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::FishingRod::__cordl_internal_get__sinceGripLoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceGripLoss;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::FishingRod::__cordl_internal_get__sinceGripLoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceGripLoss;
}
constexpr void GlobalNamespace::FishingRod::__cordl_internal_set__sinceGripLoss(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sinceGripLoss = value;
}
inline void GlobalNamespace::FishingRod::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::OnDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::SetBobFloat(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"SetBobFloat", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::FishingRod::QuickReel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"QuickReel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FishingRod::IsFreeHandGripping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"IsFreeHandGripping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FishingRod::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::FishingRod::ReelIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ReelIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::ReelOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ReelOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::ReelStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ReelStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::SetHandleMotorUse(bool  useMotor, float_t  spinRate, ::UnityEngine::HingeJoint*  handleJoint, bool  reverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"SetHandleMotorUse", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::HingeJoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, useMotor, spinRate, handleJoint, reverse);
}
inline void GlobalNamespace::FishingRod::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FishingRod*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FishingRod::ResetLineLength(float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"ResetLineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void GlobalNamespace::FishingRod::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::FishingRod::GetSignedDeltaYZ(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {"GetSignedDeltaYZ", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::FishingRod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FishingRod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FishingRod* GlobalNamespace::FishingRod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FishingRod*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FishingRod::FishingRod()   {
}
