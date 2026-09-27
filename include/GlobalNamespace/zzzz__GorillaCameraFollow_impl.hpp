#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraFollow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaCameraFollow_def.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3rdPersonFollow_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraFollow.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraFollow::*)()>(&::GlobalNamespace::GorillaCameraFollow::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x579d388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraFollow*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraFollow.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraFollow::*)()>(&::GlobalNamespace::GorillaCameraFollow::LateUpdate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x579d4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraFollow*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraFollow::*)()>(&::GlobalNamespace::GorillaCameraFollow::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x579d5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_playerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_playerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHead;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_playerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerHead = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_cameraParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_cameraParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraParent;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_cameraParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraParent = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_headOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_headOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headOffset;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_headOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_eulerRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eulerRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_eulerRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eulerRotationOffset;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_eulerRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eulerRotationOffset = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_cinemachineCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cinemachineCamera;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera> const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_cinemachineCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cinemachineCamera;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_cinemachineCamera(::UnityW<::Unity::Cinemachine::CinemachineVirtualCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cinemachineCamera = value;
}
constexpr ::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow>& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_cinemachineFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cinemachineFollow;
}
constexpr ::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow> const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_cinemachineFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cinemachineFollow;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_cinemachineFollow(::UnityW<::Unity::Cinemachine::Cinemachine3rdPersonFollow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cinemachineFollow = value;
}
constexpr float_t& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseCameraRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseCameraRadius;
}
constexpr float_t const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseCameraRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseCameraRadius;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_baseCameraRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseCameraRadius = value;
}
constexpr float_t& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseFollowDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFollowDistance;
}
constexpr float_t const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseFollowDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFollowDistance;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_baseFollowDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseFollowDistance = value;
}
constexpr float_t& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseVerticalArmLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVerticalArmLength;
}
constexpr float_t const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseVerticalArmLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVerticalArmLength;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_baseVerticalArmLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseVerticalArmLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseShoulderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseShoulderOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaCameraFollow::__cordl_internal_get_baseShoulderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseShoulderOffset;
}
constexpr void GlobalNamespace::GorillaCameraFollow::__cordl_internal_set_baseShoulderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseShoulderOffset = value;
}
inline void GlobalNamespace::GorillaCameraFollow::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraFollow*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCameraFollow::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraFollow*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCameraFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaCameraFollow* GlobalNamespace::GorillaCameraFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaCameraFollow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaCameraFollow::GorillaCameraFollow()   {
}
