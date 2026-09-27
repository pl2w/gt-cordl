#pragma once
// IWYU pragma private; include "Pathfinding/Util/PathInterpolator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__PathInterpolator_def.hpp"
#include "Pathfinding/Util/zzzz__IMovementPlane_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_position)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ed6894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                    {::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_endPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_endPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ed6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_endPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_tangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_tangent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ed69e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_tangent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_remainingDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ed6a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.set_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(float_t)>(&::Pathfinding::Util::PathInterpolator::set_remainingDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ed6a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"set_remainingDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed6b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.set_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(float_t)>(&::Pathfinding::Util::PathInterpolator::set_distance)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ed6a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"set_distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_segmentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_segmentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed6b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_segmentIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.set_segmentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(int32_t)>(&::Pathfinding::Util::PathInterpolator::set_segmentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"set_segmentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ed6b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.GetRemainingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::Util::PathInterpolator::GetRemainingPath)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ed6b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.SetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::Util::PathInterpolator::SetPath)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ed6d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"SetPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.MoveToSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(int32_t, float_t)>(&::Pathfinding::Util::PathInterpolator::MoveToSegment)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ed6fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToSegment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.MoveToClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::PathInterpolator::MoveToClosestPoint)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5ed70dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.MoveToLocallyClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(::UnityEngine::Vector3, bool, bool)>(&::Pathfinding::Util::PathInterpolator::MoveToLocallyClosestPoint)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5ed72e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToLocallyClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.MoveToCircleIntersection2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)(::UnityEngine::Vector3, float_t, ::Pathfinding::Util::IMovementPlane*)>(&::Pathfinding::Util::PathInterpolator::MoveToCircleIntersection2D)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5ed774c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToCircleIntersection2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Pathfinding::Util::IMovementPlane*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.PrevSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::PrevSegment)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ed7b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                    {::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator.NextSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::NextSegment)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ed7c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                    {::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::PathInterpolator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::PathInterpolator::*)()>(&::Pathfinding::Util::PathInterpolator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ed7d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::Util::PathInterpolator::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::Util::PathInterpolator::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::Util::PathInterpolator::__cordl_internal_set_path(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr float_t& Pathfinding::Util::PathInterpolator::__cordl_internal_get_distanceToSegmentStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToSegmentStart;
}
constexpr float_t const& Pathfinding::Util::PathInterpolator::__cordl_internal_get_distanceToSegmentStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToSegmentStart;
}
constexpr void Pathfinding::Util::PathInterpolator::__cordl_internal_set_distanceToSegmentStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceToSegmentStart = value;
}
constexpr float_t& Pathfinding::Util::PathInterpolator::__cordl_internal_get_currentDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDistance;
}
constexpr float_t const& Pathfinding::Util::PathInterpolator::__cordl_internal_get_currentDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDistance;
}
constexpr void Pathfinding::Util::PathInterpolator::__cordl_internal_set_currentDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDistance = value;
}
constexpr float_t& Pathfinding::Util::PathInterpolator::__cordl_internal_get_currentSegmentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSegmentLength;
}
constexpr float_t const& Pathfinding::Util::PathInterpolator::__cordl_internal_get_currentSegmentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSegmentLength;
}
constexpr void Pathfinding::Util::PathInterpolator::__cordl_internal_set_currentSegmentLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSegmentLength = value;
}
constexpr float_t& Pathfinding::Util::PathInterpolator::__cordl_internal_get_totalDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDistance;
}
constexpr float_t const& Pathfinding::Util::PathInterpolator::__cordl_internal_get_totalDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDistance;
}
constexpr void Pathfinding::Util::PathInterpolator::__cordl_internal_set_totalDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalDistance = value;
}
constexpr int32_t& Pathfinding::Util::PathInterpolator::__cordl_internal_get__segmentIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segmentIndex_k__BackingField;
}
constexpr int32_t const& Pathfinding::Util::PathInterpolator::__cordl_internal_get__segmentIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segmentIndex_k__BackingField;
}
constexpr void Pathfinding::Util::PathInterpolator::__cordl_internal_set__segmentIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____segmentIndex_k__BackingField = value;
}
inline ::UnityEngine::Vector3 Pathfinding::Util::PathInterpolator::get_position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::PathInterpolator::get_endPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_endPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::PathInterpolator::get_tangent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_tangent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Pathfinding::Util::PathInterpolator::get_remainingDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::Util::PathInterpolator::set_remainingDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"set_remainingDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::Util::PathInterpolator::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::Util::PathInterpolator::set_distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"set_distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Util::PathInterpolator::get_segmentIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_segmentIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Util::PathInterpolator::set_segmentIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"set_segmentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Util::PathInterpolator::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Util::PathInterpolator::GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Pathfinding::Util::PathInterpolator::SetPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"SetPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::Util::PathInterpolator::MoveToSegment(int32_t  index, float_t  fractionAlongSegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToSegment", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, fractionAlongSegment);
}
inline void Pathfinding::Util::PathInterpolator::MoveToClosestPoint(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline void Pathfinding::Util::PathInterpolator::MoveToLocallyClosestPoint(::UnityEngine::Vector3  point, bool  allowForwards, bool  allowBackwards)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToLocallyClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, allowForwards, allowBackwards);
}
inline void Pathfinding::Util::PathInterpolator::MoveToCircleIntersection2D(::UnityEngine::Vector3  circleCenter3D, float_t  radius, ::Pathfinding::Util::IMovementPlane*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {"MoveToCircleIntersection2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Pathfinding::Util::IMovementPlane*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, circleCenter3D, radius, transform);
}
inline void Pathfinding::Util::PathInterpolator::PrevSegment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::PathInterpolator::NextSegment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::PathInterpolator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::PathInterpolator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::PathInterpolator* Pathfinding::Util::PathInterpolator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::PathInterpolator*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::PathInterpolator::PathInterpolator()   {
}
