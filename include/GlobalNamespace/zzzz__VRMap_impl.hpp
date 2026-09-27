#pragma once
// IWYU pragma private; include "GlobalNamespace/VRMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRMap_def.hpp"
#include "GlobalNamespace/zzzz__NetworkVector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRMap.get_syncPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRMap::*)()>(&::GlobalNamespace::VRMap::get_syncPos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57460a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"get_syncPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.set_syncPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VRMap::set_syncPos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57460bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"set_syncPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)()>(&::GlobalNamespace::VRMap::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57460d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.MapOther
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)(float_t)>(&::GlobalNamespace::VRMap::MapOther)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57460d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"MapOther", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.MapMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)(float_t, ::UnityEngine::Transform*)>(&::GlobalNamespace::VRMap::MapMine)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x57461d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"MapMine", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.GetExtrapolatedControllerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRMap::*)()>(&::GlobalNamespace::VRMap::GetExtrapolatedControllerPosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x573e01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"GetExtrapolatedControllerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.MapOtherFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)(float_t, float_t)>(&::GlobalNamespace::VRMap::MapOtherFinger)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5746910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.MapMyFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)(float_t)>(&::GlobalNamespace::VRMap::MapMyFinger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x574692c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap.LerpFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)(float_t, bool)>(&::GlobalNamespace::VRMap::LerpFinger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5746930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMap::*)()>(&::GlobalNamespace::VRMap::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5746934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::VRMap::__cordl_internal_get_vrTargetNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrTargetNode;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::VRMap::__cordl_internal_get_vrTargetNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrTargetNode;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_vrTargetNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrTargetNode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMap::__cordl_internal_get_overrideTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMap::__cordl_internal_get_overrideTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTarget;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_overrideTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMap::__cordl_internal_get_rigTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMap::__cordl_internal_get_rigTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigTarget;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_rigTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMap::__cordl_internal_get_trackingPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMap::__cordl_internal_get_trackingPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingPositionOffset;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_trackingPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackingPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMap::__cordl_internal_get_trackingRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMap::__cordl_internal_get_trackingRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingRotationOffset;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_trackingRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackingRotationOffset = value;
}
constexpr ::GlobalNamespace::NetworkVector3*& GlobalNamespace::VRMap::__cordl_internal_get_netSyncPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSyncPos;
}
constexpr ::GlobalNamespace::NetworkVector3* const& GlobalNamespace::VRMap::__cordl_internal_get_netSyncPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSyncPos;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_netSyncPos(::GlobalNamespace::NetworkVector3*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netSyncPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMap::__cordl_internal_get_syncRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMap::__cordl_internal_get_syncRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncRotation;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_syncRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncRotation = value;
}
constexpr float_t& GlobalNamespace::VRMap::__cordl_internal_get_calcT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calcT;
}
constexpr float_t const& GlobalNamespace::VRMap::__cordl_internal_get_calcT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calcT;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_calcT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calcT = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::VRMap::__cordl_internal_get_myInputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myInputDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::VRMap::__cordl_internal_get_myInputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myInputDevice;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_myInputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myInputDevice = value;
}
constexpr bool& GlobalNamespace::VRMap::__cordl_internal_get_hasInputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInputDevice;
}
constexpr bool const& GlobalNamespace::VRMap::__cordl_internal_get_hasInputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInputDevice;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_hasInputDevice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInputDevice = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMap::__cordl_internal_get_handholdOverrideTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handholdOverrideTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMap::__cordl_internal_get_handholdOverrideTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handholdOverrideTarget;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_handholdOverrideTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handholdOverrideTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMap::__cordl_internal_get_handholdOverrideTargetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handholdOverrideTargetOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMap::__cordl_internal_get_handholdOverrideTargetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handholdOverrideTargetOffset;
}
constexpr void GlobalNamespace::VRMap::__cordl_internal_set_handholdOverrideTargetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handholdOverrideTargetOffset = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRMap::get_syncPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"get_syncPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::VRMap::set_syncPos(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"set_syncPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRMap::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRMap::MapOther(float_t  lerpValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"MapOther", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue);
}
inline void GlobalNamespace::VRMap::MapMine(float_t  ratio, ::UnityEngine::Transform*  playerOffsetTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"MapMine", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ratio, playerOffsetTransform);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRMap::GetExtrapolatedControllerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {"GetExtrapolatedControllerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::VRMap::MapOtherFinger(float_t  handSync, float_t  lerpValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handSync, lerpValue);
}
inline void GlobalNamespace::VRMap::MapMyFinger(float_t  lerpValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue);
}
inline void GlobalNamespace::VRMap::LerpFinger(float_t  lerpValue, bool  isOther)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue, isOther);
}
inline void GlobalNamespace::VRMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRMap* GlobalNamespace::VRMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRMap::VRMap()   {
}
