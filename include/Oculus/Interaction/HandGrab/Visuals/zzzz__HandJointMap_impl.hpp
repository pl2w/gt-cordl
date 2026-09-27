#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandJointMap.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandJointMap_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandJointMap.get_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandGrab::Visuals::HandJointMap::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandJointMap::get_RotationOffset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4e5aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandJointMap.get_TrackedRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandGrab::Visuals::HandJointMap::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandJointMap::get_TrackedRotation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4e5b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(),
                        {"get_TrackedRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandJointMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandJointMap::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandJointMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_set_id(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_get_rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_get_rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandJointMap::__cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOffset = value;
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandGrab::Visuals::HandJointMap::get_RotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandGrab::Visuals::HandJointMap::get_TrackedRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(),
                        {"get_TrackedRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandJointMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::Visuals::HandJointMap* Oculus::Interaction::HandGrab::Visuals::HandJointMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Visuals::HandJointMap::HandJointMap()   {
}
