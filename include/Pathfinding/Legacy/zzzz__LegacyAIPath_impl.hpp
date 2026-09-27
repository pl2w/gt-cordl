#pragma once
// IWYU pragma private; include "Pathfinding/Legacy/LegacyAIPath.hpp"
#include "Pathfinding/zzzz__AIPath_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Legacy/zzzz__LegacyAIPath_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyAIPath::*)()>(&::Pathfinding::Legacy::LegacyAIPath::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ebc134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                    {::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyAIPath::*)(::Pathfinding::Path*)>(&::Pathfinding::Legacy::LegacyAIPath::OnPathComplete)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ebc244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                    {::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyAIPath::*)()>(&::Pathfinding::Legacy::LegacyAIPath::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ebc8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                    {::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.XZSqrMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::Legacy::LegacyAIPath::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Legacy::LegacyAIPath::XZSqrMagnitude)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ebcc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"XZSqrMagnitude", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.CalculateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Legacy::LegacyAIPath::*)(::UnityEngine::Vector3)>(&::Pathfinding::Legacy::LegacyAIPath::CalculateVelocity)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5ebc4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"CalculateVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.RotateTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyAIPath::*)(::UnityEngine::Vector3)>(&::Pathfinding::Legacy::LegacyAIPath::RotateTowards)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ebcab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"RotateTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath.CalculateTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Legacy::LegacyAIPath::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Legacy::LegacyAIPath::CalculateTargetPoint)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5ebcc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"CalculateTargetPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Legacy::LegacyAIPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Legacy::LegacyAIPath::*)()>(&::Pathfinding::Legacy::LegacyAIPath::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ebce9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_forwardLook()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardLook;
}
constexpr float_t const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_forwardLook() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardLook;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_forwardLook(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardLook = value;
}
constexpr bool& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_closestOnPathCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestOnPathCheck;
}
constexpr bool const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_closestOnPathCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestOnPathCheck;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_closestOnPathCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closestOnPathCheck = value;
}
constexpr float_t& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_minMoveScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minMoveScale;
}
constexpr float_t const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_minMoveScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minMoveScale;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_minMoveScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minMoveScale = value;
}
constexpr int32_t& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_currentWaypointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypointIndex;
}
constexpr int32_t const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_currentWaypointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypointIndex;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_currentWaypointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWaypointIndex = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_lastFoundWaypointPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFoundWaypointPosition;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_lastFoundWaypointPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFoundWaypointPosition;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_lastFoundWaypointPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFoundWaypointPosition = value;
}
constexpr float_t& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_lastFoundWaypointTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFoundWaypointTime;
}
constexpr float_t const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_lastFoundWaypointTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFoundWaypointTime;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_lastFoundWaypointTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFoundWaypointTime = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_targetDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetDirection;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Legacy::LegacyAIPath::__cordl_internal_get_targetDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetDirection;
}
constexpr void Pathfinding::Legacy::LegacyAIPath::__cordl_internal_set_targetDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetDirection = value;
}
inline void Pathfinding::Legacy::LegacyAIPath::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Legacy::LegacyAIPath::OnPathComplete(::Pathfinding::Path*  _p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p);
}
inline void Pathfinding::Legacy::LegacyAIPath::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Pathfinding::Legacy::LegacyAIPath::XZSqrMagnitude(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"XZSqrMagnitude", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::Vector3 Pathfinding::Legacy::LegacyAIPath::CalculateVelocity(::UnityEngine::Vector3  currentPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"CalculateVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, currentPosition);
}
inline void Pathfinding::Legacy::LegacyAIPath::RotateTowards(::UnityEngine::Vector3  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"RotateTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir);
}
inline ::UnityEngine::Vector3 Pathfinding::Legacy::LegacyAIPath::CalculateTargetPoint(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {"CalculateTargetPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p, a, b);
}
inline void Pathfinding::Legacy::LegacyAIPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Legacy::LegacyAIPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Legacy::LegacyAIPath* Pathfinding::Legacy::LegacyAIPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Legacy::LegacyAIPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Legacy::LegacyAIPath::LegacyAIPath()   {
}
