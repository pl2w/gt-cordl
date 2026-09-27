#pragma once
// IWYU pragma private; include "GlobalNamespace/SpringyWobbler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpringyWobbler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpringyWobbler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpringyWobbler::*)()>(&::GlobalNamespace::SpringyWobbler::Start)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x565bd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpringyWobbler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpringyWobbler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpringyWobbler::*)()>(&::GlobalNamespace::SpringyWobbler::Update)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x565bf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpringyWobbler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpringyWobbler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpringyWobbler::*)()>(&::GlobalNamespace::SpringyWobbler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565c574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpringyWobbler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SpringyWobbler::__cordl_internal_get_stabilizingForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stabilizingForce;
}
constexpr float_t const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_stabilizingForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stabilizingForce;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_stabilizingForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stabilizingForce = value;
}
constexpr float_t& GlobalNamespace::SpringyWobbler::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GlobalNamespace::SpringyWobbler::__cordl_internal_get_maxDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDisplacement;
}
constexpr float_t const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_maxDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDisplacement;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_maxDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDisplacement = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::SpringyWobbler::__cordl_internal_get_children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_children(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___children = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpringyWobbler::__cordl_internal_get_idealEndpointLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealEndpointLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_idealEndpointLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealEndpointLocalPos;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_idealEndpointLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealEndpointLocalPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpringyWobbler::__cordl_internal_get_rotateToFaceLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateToFaceLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_rotateToFaceLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateToFaceLocalPos;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_rotateToFaceLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateToFaceLocalPos = value;
}
constexpr float_t& GlobalNamespace::SpringyWobbler::__cordl_internal_get_startStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startStiffness;
}
constexpr float_t const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_startStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startStiffness;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_startStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startStiffness = value;
}
constexpr float_t& GlobalNamespace::SpringyWobbler::__cordl_internal_get_endStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endStiffness;
}
constexpr float_t const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_endStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endStiffness;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_endStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endStiffness = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpringyWobbler::__cordl_internal_get_lastIdealEndpointWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIdealEndpointWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_lastIdealEndpointWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIdealEndpointWorldPos;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_lastIdealEndpointWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastIdealEndpointWorldPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpringyWobbler::__cordl_internal_get_lastEndpointWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEndpointWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_lastEndpointWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEndpointWorldPos;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_lastEndpointWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastEndpointWorldPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpringyWobbler::__cordl_internal_get_endpointVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpointVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpringyWobbler::__cordl_internal_get_endpointVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpointVelocity;
}
constexpr void GlobalNamespace::SpringyWobbler::__cordl_internal_set_endpointVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endpointVelocity = value;
}
inline void GlobalNamespace::SpringyWobbler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpringyWobbler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpringyWobbler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpringyWobbler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpringyWobbler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpringyWobbler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpringyWobbler* GlobalNamespace::SpringyWobbler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpringyWobbler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpringyWobbler::SpringyWobbler()   {
}
