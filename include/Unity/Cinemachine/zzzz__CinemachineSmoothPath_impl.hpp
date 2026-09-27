#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSmoothPath.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSmoothPath_Waypoint_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSmoothPath_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSmoothPath_Waypoint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.get_MinPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::get_MinPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed95f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.get_MaxPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::get_MaxPos)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaed9600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.get_Looped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::get_Looped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.get_DistanceCacheSampleStepsPerSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::get_DistanceCacheSampleStepsPerSegment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed9644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaed964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::Reset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaed965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.InvalidateDistanceCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::InvalidateDistanceCache)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaed9734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.UpdateControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::UpdateControlPoints)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaed9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"UpdateControlPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.GetBoundingIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineSmoothPath::*)(float_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Unity::Cinemachine::CinemachineSmoothPath::GetBoundingIndices)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xaed9a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"GetBoundingIndices", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.EvaluateLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineSmoothPath::*)(float_t)>(&::Unity::Cinemachine::CinemachineSmoothPath::EvaluateLocalPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaed9b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.EvaluateLocalTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineSmoothPath::*)(float_t)>(&::Unity::Cinemachine::CinemachineSmoothPath::EvaluateLocalTangent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xaed9c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.EvaluateLocalOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineSmoothPath::*)(float_t)>(&::Unity::Cinemachine::CinemachineSmoothPath::EvaluateLocalOrientation)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xaed9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath.RollAroundForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t)>(&::Unity::Cinemachine::CinemachineSmoothPath::RollAroundForward)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaeda054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"RollAroundForward", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSmoothPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSmoothPath::*)()>(&::Unity::Cinemachine::CinemachineSmoothPath::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaeda08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_Looped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Looped;
}
constexpr bool const& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_Looped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Looped;
}
constexpr void Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_set_m_Looped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Looped = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_Waypoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Waypoints;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint> const& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_Waypoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Waypoints;
}
constexpr void Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_set_m_Waypoints(::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Waypoints = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_ControlPoints1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPoints1;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint> const& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_ControlPoints1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPoints1;
}
constexpr void Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_set_m_ControlPoints1(::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlPoints1 = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_ControlPoints2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPoints2;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint> const& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_ControlPoints2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPoints2;
}
constexpr void Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_set_m_ControlPoints2(::ArrayW<::GlobalNamespace::CinemachineSmoothPath_Waypoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlPoints2 = value;
}
constexpr bool& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_IsLoopedCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsLoopedCache;
}
constexpr bool const& Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_get_m_IsLoopedCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsLoopedCache;
}
constexpr void Unity::Cinemachine::CinemachineSmoothPath::__cordl_internal_set_m_IsLoopedCache(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsLoopedCache = value;
}
inline float_t Unity::Cinemachine::CinemachineSmoothPath::get_MinPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineSmoothPath::get_MaxPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineSmoothPath::get_Looped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachineSmoothPath::get_DistanceCacheSampleStepsPerSegment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSmoothPath::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSmoothPath::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSmoothPath::InvalidateDistanceCache()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSmoothPath::UpdateControlPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"UpdateControlPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineSmoothPath::GetBoundingIndices(float_t  pos, ::by_ref<int32_t>  indexA, ::by_ref<int32_t>  indexB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"GetBoundingIndices", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos, indexA, indexB);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineSmoothPath::EvaluateLocalPosition(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineSmoothPath::EvaluateLocalTangent(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineSmoothPath::EvaluateLocalOrientation(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, pos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineSmoothPath::RollAroundForward(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {"RollAroundForward", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle);
}
inline void Unity::Cinemachine::CinemachineSmoothPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSmoothPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineSmoothPath* Unity::Cinemachine::CinemachineSmoothPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineSmoothPath*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineSmoothPath::CinemachineSmoothPath()   {
}
