#pragma once
// IWYU pragma private; include "GlobalNamespace/OwlLook.hpp"
#include "GlobalNamespace/zzzz__VRRig_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OwlLook_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OwlLook.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwlLook::*)()>(&::GlobalNamespace::OwlLook::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5760bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwlLook*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwlLook.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwlLook::*)()>(&::GlobalNamespace::OwlLook::LateUpdate)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x5760c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwlLook*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwlLook._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwlLook::*)()>(&::GlobalNamespace::OwlLook::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57615c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwlLook*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OwlLook::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OwlLook::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_head(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OwlLook::__cordl_internal_get_lookTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OwlLook::__cordl_internal_get_lookTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookTarget;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OwlLook::__cordl_internal_get_neck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neck;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OwlLook::__cordl_internal_get_neck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neck;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_neck(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neck = value;
}
constexpr float_t& GlobalNamespace::OwlLook::__cordl_internal_get_lookRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookRadius;
}
constexpr float_t const& GlobalNamespace::OwlLook::__cordl_internal_get_lookRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookRadius;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_lookRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookRadius = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::OwlLook::__cordl_internal_get_overlapColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::OwlLook::__cordl_internal_get_overlapColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapColliders = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& GlobalNamespace::OwlLook::__cordl_internal_get_rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& GlobalNamespace::OwlLook::__cordl_internal_get_rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_rigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& GlobalNamespace::OwlLook::__cordl_internal_get_overlapRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapRigs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& GlobalNamespace::OwlLook::__cordl_internal_get_overlapRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapRigs;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_overlapRigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapRigs = value;
}
constexpr float_t& GlobalNamespace::OwlLook::__cordl_internal_get_rotSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr float_t const& GlobalNamespace::OwlLook::__cordl_internal_get_rotSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotSpeed;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_rotSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotSpeed = value;
}
constexpr float_t& GlobalNamespace::OwlLook::__cordl_internal_get_lookAtAngleDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtAngleDegrees;
}
constexpr float_t const& GlobalNamespace::OwlLook::__cordl_internal_get_lookAtAngleDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtAngleDegrees;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_lookAtAngleDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtAngleDegrees = value;
}
constexpr float_t& GlobalNamespace::OwlLook::__cordl_internal_get_maxNeckY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeckY;
}
constexpr float_t const& GlobalNamespace::OwlLook::__cordl_internal_get_maxNeckY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeckY;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_maxNeckY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNeckY = value;
}
constexpr float_t& GlobalNamespace::OwlLook::__cordl_internal_get_minNeckY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minNeckY;
}
constexpr float_t const& GlobalNamespace::OwlLook::__cordl_internal_get_minNeckY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minNeckY;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_minNeckY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minNeckY = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::OwlLook::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::OwlLook::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::OwlLook::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
inline void GlobalNamespace::OwlLook::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwlLook*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OwlLook::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwlLook*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OwlLook::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwlLook*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OwlLook* GlobalNamespace::OwlLook::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OwlLook*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OwlLook::OwlLook()   {
}
