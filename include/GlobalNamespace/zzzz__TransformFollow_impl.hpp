#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformFollow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransformFollow_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformFollow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollow::*)()>(&::GlobalNamespace::TransformFollow::Awake)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x598f974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollow*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformFollow.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollow::*)()>(&::GlobalNamespace::TransformFollow::LateUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x598fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollow*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollow::*)()>(&::GlobalNamespace::TransformFollow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransformFollow::__cordl_internal_get_transformToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransformFollow::__cordl_internal_get_transformToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr void GlobalNamespace::TransformFollow::__cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformToFollow = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformFollow::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformFollow::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::TransformFollow::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformFollow::__cordl_internal_get_prevPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformFollow::__cordl_internal_get_prevPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPos;
}
constexpr void GlobalNamespace::TransformFollow::__cordl_internal_set_prevPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPos = value;
}
constexpr bool& GlobalNamespace::TransformFollow::__cordl_internal_get_rotationOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOnly;
}
constexpr bool const& GlobalNamespace::TransformFollow::__cordl_internal_get_rotationOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOnly;
}
constexpr void GlobalNamespace::TransformFollow::__cordl_internal_set_rotationOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOnly = value;
}
constexpr bool& GlobalNamespace::TransformFollow::__cordl_internal_get_forRigRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forRigRecording;
}
constexpr bool const& GlobalNamespace::TransformFollow::__cordl_internal_get_forRigRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forRigRecording;
}
constexpr void GlobalNamespace::TransformFollow::__cordl_internal_set_forRigRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forRigRecording = value;
}
constexpr ::UnityW<::GlobalNamespace::TransformFollow>& GlobalNamespace::TransformFollow::__cordl_internal_get_parentFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentFollow;
}
constexpr ::UnityW<::GlobalNamespace::TransformFollow> const& GlobalNamespace::TransformFollow::__cordl_internal_get_parentFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentFollow;
}
constexpr void GlobalNamespace::TransformFollow::__cordl_internal_set_parentFollow(::UnityW<::GlobalNamespace::TransformFollow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentFollow = value;
}
inline void GlobalNamespace::TransformFollow::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollow*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformFollow::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollow*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformFollow* GlobalNamespace::TransformFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformFollow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformFollow::TransformFollow()   {
}
