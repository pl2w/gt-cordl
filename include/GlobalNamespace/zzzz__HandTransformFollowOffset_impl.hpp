#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTransformFollowOffset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HandTransformFollowOffset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandTransformFollowOffset.UpdatePositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTransformFollowOffset::*)()>(&::GlobalNamespace::HandTransformFollowOffset::UpdatePositionRotation)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x57e39a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTransformFollowOffset*>(),
                        {"UpdatePositionRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandTransformFollowOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTransformFollowOffset::*)()>(&::GlobalNamespace::HandTransformFollowOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e3bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTransformFollowOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_followTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_followTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTransform;
}
constexpr void GlobalNamespace::HandTransformFollowOffset::__cordl_internal_set_followTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followTransform = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_targetTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_targetTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransforms;
}
constexpr void GlobalNamespace::HandTransformFollowOffset::__cordl_internal_set_targetTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransforms = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr void GlobalNamespace::HandTransformFollowOffset::__cordl_internal_set_positionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr void GlobalNamespace::HandTransformFollowOffset::__cordl_internal_set_rotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void GlobalNamespace::HandTransformFollowOffset::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::HandTransformFollowOffset::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void GlobalNamespace::HandTransformFollowOffset::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
inline void GlobalNamespace::HandTransformFollowOffset::UpdatePositionRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTransformFollowOffset*>(),
                        {"UpdatePositionRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandTransformFollowOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTransformFollowOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTransformFollowOffset* GlobalNamespace::HandTransformFollowOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTransformFollowOffset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTransformFollowOffset::HandTransformFollowOffset()   {
}
