#pragma once
// IWYU pragma private; include "Pathfinding/Legacy/LegacyRichAI.hpp"
#include "Pathfinding/zzzz__RichAI_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Legacy/zzzz__LegacyRichAI_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRichAI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyRichAI::*)()>(&::Pathfinding::Legacy::LegacyRichAI::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ebcf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                    {::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRichAI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyRichAI::*)()>(&::Pathfinding::Legacy::LegacyRichAI::Update)> {
  constexpr static std::size_t size = 0xfc4;
  constexpr static std::size_t addrs = 0x5ebd02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                    {::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRichAI.RaycastPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Legacy::LegacyRichAI::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::Legacy::LegacyRichAI::RaycastPosition)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ebe22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                        {"RaycastPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRichAI.RotateTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Legacy::LegacyRichAI::*)(::UnityEngine::Vector3)>(&::Pathfinding::Legacy::LegacyRichAI::RotateTowards)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5ebdff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                        {"RotateTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyRichAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyRichAI::*)()>(&::Pathfinding::Legacy::LegacyRichAI::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ebe3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_preciseSlowdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preciseSlowdown;
}
constexpr bool const& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_preciseSlowdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preciseSlowdown;
}
constexpr void Pathfinding::Legacy::LegacyRichAI::__cordl_internal_set_preciseSlowdown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preciseSlowdown = value;
}
constexpr bool& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_raycastingForGroundPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastingForGroundPlacement;
}
constexpr bool const& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_raycastingForGroundPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastingForGroundPlacement;
}
constexpr void Pathfinding::Legacy::LegacyRichAI::__cordl_internal_set_raycastingForGroundPlacement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastingForGroundPlacement = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Pathfinding::Legacy::LegacyRichAI::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_lastTargetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTargetPoint;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_lastTargetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTargetPoint;
}
constexpr void Pathfinding::Legacy::LegacyRichAI::__cordl_internal_set_lastTargetPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTargetPoint = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_currentTargetDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetDirection;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Legacy::LegacyRichAI::__cordl_internal_get_currentTargetDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetDirection;
}
constexpr void Pathfinding::Legacy::LegacyRichAI::__cordl_internal_set_currentTargetDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTargetDirection = value;
}
inline void Pathfinding::Legacy::LegacyRichAI::setStaticF_deltaTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "deltaTime", ::Pathfinding::Legacy::LegacyRichAI*>(std::forward<float_t>(value));
}
inline float_t Pathfinding::Legacy::LegacyRichAI::getStaticF_deltaTime()  {
return ::cordl_internals::getStaticField<float_t, "deltaTime", ::Pathfinding::Legacy::LegacyRichAI*>();
}
inline void Pathfinding::Legacy::LegacyRichAI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Legacy::LegacyRichAI::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Legacy::LegacyRichAI::RaycastPosition(::UnityEngine::Vector3  position, float_t  lasty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                        {"RaycastPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, lasty);
}
inline bool Pathfinding::Legacy::LegacyRichAI::RotateTowards(::UnityEngine::Vector3  trotdir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                        {"RotateTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trotdir);
}
inline void Pathfinding::Legacy::LegacyRichAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyRichAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Legacy::LegacyRichAI* Pathfinding::Legacy::LegacyRichAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Legacy::LegacyRichAI*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Legacy::LegacyRichAI::LegacyRichAI()   {
}
