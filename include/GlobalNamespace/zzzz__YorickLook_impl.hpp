#pragma once
// IWYU pragma private; include "GlobalNamespace/YorickLook.hpp"
#include "GlobalNamespace/zzzz__VRRig_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__YorickLook_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::YorickLook.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::YorickLook::*)()>(&::GlobalNamespace::YorickLook::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57764f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YorickLook*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YorickLook.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::YorickLook::*)()>(&::GlobalNamespace::YorickLook::LateUpdate)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x5776550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YorickLook*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::YorickLook._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::YorickLook::*)()>(&::GlobalNamespace::YorickLook::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5776f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YorickLook*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::YorickLook::__cordl_internal_get_leftEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftEye;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::YorickLook::__cordl_internal_get_leftEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftEye;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_leftEye(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftEye = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::YorickLook::__cordl_internal_get_rightEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightEye;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::YorickLook::__cordl_internal_get_rightEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightEye;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_rightEye(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightEye = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::YorickLook::__cordl_internal_get_lookTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::YorickLook::__cordl_internal_get_lookTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookTarget;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookTarget = value;
}
constexpr float_t& GlobalNamespace::YorickLook::__cordl_internal_get_lookRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookRadius;
}
constexpr float_t const& GlobalNamespace::YorickLook::__cordl_internal_get_lookRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookRadius;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_lookRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookRadius = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& GlobalNamespace::YorickLook::__cordl_internal_get_rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& GlobalNamespace::YorickLook::__cordl_internal_get_rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_rigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& GlobalNamespace::YorickLook::__cordl_internal_get_overlapRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapRigs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& GlobalNamespace::YorickLook::__cordl_internal_get_overlapRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapRigs;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_overlapRigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapRigs = value;
}
constexpr float_t& GlobalNamespace::YorickLook::__cordl_internal_get_rotSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr float_t const& GlobalNamespace::YorickLook::__cordl_internal_get_rotSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_rotSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotSpeed = value;
}
constexpr float_t& GlobalNamespace::YorickLook::__cordl_internal_get_lookAtAngleDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtAngleDegrees;
}
constexpr float_t const& GlobalNamespace::YorickLook::__cordl_internal_get_lookAtAngleDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtAngleDegrees;
}
constexpr void GlobalNamespace::YorickLook::__cordl_internal_set_lookAtAngleDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtAngleDegrees = value;
}
inline void GlobalNamespace::YorickLook::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YorickLook*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::YorickLook::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YorickLook*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::YorickLook::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::YorickLook*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::YorickLook* GlobalNamespace::YorickLook::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::YorickLook*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::YorickLook::YorickLook()   {
}
