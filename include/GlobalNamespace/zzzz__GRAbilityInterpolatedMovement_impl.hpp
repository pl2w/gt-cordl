#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityInterpolatedMovement.hpp"
#include "GlobalNamespace/zzzz__GRAbilityInterpolatedMovement_InterpType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityInterpolatedMovement_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityInterpolatedMovement_InterpType_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityInterpolatedMovement::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GRAbilityInterpolatedMovement::Setup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58678a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement.InitFromVelocityAndDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityInterpolatedMovement::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GRAbilityInterpolatedMovement::InitFromVelocityAndDuration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x586794c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"InitFromVelocityAndDuration", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityInterpolatedMovement::*)()>(&::GlobalNamespace::GRAbilityInterpolatedMovement::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58679a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityInterpolatedMovement::*)()>(&::GlobalNamespace::GRAbilityInterpolatedMovement::Stop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5867a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityInterpolatedMovement::*)()>(&::GlobalNamespace::GRAbilityInterpolatedMovement::IsDone)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5867a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityInterpolatedMovement::*)(float_t)>(&::GlobalNamespace::GRAbilityInterpolatedMovement::Update)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5867a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityInterpolatedMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityInterpolatedMovement::*)()>(&::GlobalNamespace::GRAbilityInterpolatedMovement::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5867ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_startPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_startPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_startPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_endPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_endPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_endPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPos = value;
}
constexpr float_t& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr double_t& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr double_t const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_endTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
constexpr float_t& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_maxVelocityMagnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocityMagnitude;
}
constexpr float_t const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_maxVelocityMagnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocityMagnitude;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_maxVelocityMagnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVelocityMagnitude = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_interpolationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolationType;
}
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_interpolationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolationType;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_interpolationType(::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolationType = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_walkableArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkableArea;
}
constexpr int32_t const& GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_get_walkableArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkableArea;
}
constexpr void GlobalNamespace::GRAbilityInterpolatedMovement::__cordl_internal_set_walkableArea(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walkableArea = value;
}
inline void GlobalNamespace::GRAbilityInterpolatedMovement::Setup(::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void GlobalNamespace::GRAbilityInterpolatedMovement::InitFromVelocityAndDuration(::UnityEngine::Vector3  velocity, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"InitFromVelocityAndDuration", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, duration);
}
inline void GlobalNamespace::GRAbilityInterpolatedMovement::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityInterpolatedMovement::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityInterpolatedMovement::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityInterpolatedMovement::Update(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityInterpolatedMovement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityInterpolatedMovement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityInterpolatedMovement* GlobalNamespace::GRAbilityInterpolatedMovement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityInterpolatedMovement*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement::GRAbilityInterpolatedMovement()   {
}
