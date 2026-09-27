#pragma once
// IWYU pragma private; include "GlobalNamespace/TasselPhysics.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TasselPhysics_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TasselPhysics.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TasselPhysics::*)()>(&::GlobalNamespace::TasselPhysics::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x565cdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TasselPhysics*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TasselPhysics.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TasselPhysics::*)()>(&::GlobalNamespace::TasselPhysics::Update)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x565cec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TasselPhysics*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TasselPhysics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TasselPhysics::*)()>(&::GlobalNamespace::TasselPhysics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565d31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TasselPhysics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::TasselPhysics::__cordl_internal_get_tasselInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tasselInstances;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::TasselPhysics::__cordl_internal_get_tasselInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tasselInstances;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_tasselInstances(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tasselInstances = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TasselPhysics::__cordl_internal_get_localCenterOfMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCenterOfMass;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TasselPhysics::__cordl_internal_get_localCenterOfMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCenterOfMass;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_localCenterOfMass(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localCenterOfMass = value;
}
constexpr float_t& GlobalNamespace::TasselPhysics::__cordl_internal_get_gravityStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr float_t const& GlobalNamespace::TasselPhysics::__cordl_internal_get_gravityStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_gravityStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityStrength = value;
}
constexpr float_t& GlobalNamespace::TasselPhysics::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::TasselPhysics::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr bool& GlobalNamespace::TasselPhysics::__cordl_internal_get_LockXAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockXAxis;
}
constexpr bool const& GlobalNamespace::TasselPhysics::__cordl_internal_get_LockXAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockXAxis;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_LockXAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockXAxis = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TasselPhysics::__cordl_internal_get_lastCenterPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCenterPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TasselPhysics::__cordl_internal_get_lastCenterPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCenterPos;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_lastCenterPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCenterPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TasselPhysics::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TasselPhysics::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr float_t& GlobalNamespace::TasselPhysics::__cordl_internal_get_centerOfMassLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassLength;
}
constexpr float_t const& GlobalNamespace::TasselPhysics::__cordl_internal_get_centerOfMassLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassLength;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_centerOfMassLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOfMassLength = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TasselPhysics::__cordl_internal_get_rotCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotCorrection;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TasselPhysics::__cordl_internal_get_rotCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotCorrection;
}
constexpr void GlobalNamespace::TasselPhysics::__cordl_internal_set_rotCorrection(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotCorrection = value;
}
inline void GlobalNamespace::TasselPhysics::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TasselPhysics*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TasselPhysics::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TasselPhysics*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TasselPhysics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TasselPhysics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TasselPhysics* GlobalNamespace::TasselPhysics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TasselPhysics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TasselPhysics::TasselPhysics()   {
}
