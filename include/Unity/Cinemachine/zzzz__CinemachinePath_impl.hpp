#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePath.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePath_Waypoint_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePath_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePath_Waypoint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.get_MinPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::get_MinPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed6a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.get_MaxPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::get_MaxPos)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaed6a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.get_Looped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::get_Looped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed6aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaed6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaed6bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.get_DistanceCacheSampleStepsPerSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::get_DistanceCacheSampleStepsPerSegment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed6be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.GetBoundingIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePath::*)(float_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Unity::Cinemachine::CinemachinePath::GetBoundingIndices)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xaed6bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"GetBoundingIndices", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.EvaluateLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePath::*)(float_t)>(&::Unity::Cinemachine::CinemachinePath::EvaluateLocalPosition)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaed6e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.EvaluateLocalTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePath::*)(float_t)>(&::Unity::Cinemachine::CinemachinePath::EvaluateLocalTangent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaed6f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.EvaluateLocalOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachinePath::*)(float_t)>(&::Unity::Cinemachine::CinemachinePath::EvaluateLocalOrientation)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaed70a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.GetRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePath::*)(int32_t, int32_t, float_t)>(&::Unity::Cinemachine::CinemachinePath::GetRoll)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaed723c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"GetRoll", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath.RollAroundForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t)>(&::Unity::Cinemachine::CinemachinePath::RollAroundForward)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaed731c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"RollAroundForward", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePath::*)()>(&::Unity::Cinemachine::CinemachinePath::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaed7354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachinePath::__cordl_internal_get_m_Looped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Looped;
}
constexpr bool const& Unity::Cinemachine::CinemachinePath::__cordl_internal_get_m_Looped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Looped;
}
constexpr void Unity::Cinemachine::CinemachinePath::__cordl_internal_set_m_Looped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Looped = value;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint>& Unity::Cinemachine::CinemachinePath::__cordl_internal_get_m_Waypoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Waypoints;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint> const& Unity::Cinemachine::CinemachinePath::__cordl_internal_get_m_Waypoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Waypoints;
}
constexpr void Unity::Cinemachine::CinemachinePath::__cordl_internal_set_m_Waypoints(::ArrayW<::GlobalNamespace::CinemachinePath_Waypoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Waypoints = value;
}
inline float_t Unity::Cinemachine::CinemachinePath::get_MinPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePath::get_MaxPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePath::get_Looped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePath::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePath::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachinePath::get_DistanceCacheSampleStepsPerSegment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePath::GetBoundingIndices(float_t  pos, ::by_ref<int32_t>  indexA, ::by_ref<int32_t>  indexB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"GetBoundingIndices", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos, indexA, indexB);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePath::EvaluateLocalPosition(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePath::EvaluateLocalTangent(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachinePath::EvaluateLocalOrientation(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, pos);
}
inline float_t Unity::Cinemachine::CinemachinePath::GetRoll(int32_t  indexA, int32_t  indexB, float_t  standardizedPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"GetRoll", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, indexA, indexB, standardizedPos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachinePath::RollAroundForward(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {"RollAroundForward", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle);
}
inline void Unity::Cinemachine::CinemachinePath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachinePath* Unity::Cinemachine::CinemachinePath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePath*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePath::CinemachinePath()   {
}
