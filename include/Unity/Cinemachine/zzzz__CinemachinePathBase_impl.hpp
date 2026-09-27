#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePathBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_PositionUnits_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.get_MinPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::get_MinPos)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.get_MaxPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::get_MaxPos)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.get_Looped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::get_Looped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.StandardizePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::StandardizePos)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaed7424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluatePosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaed74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateTangent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaed7524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateOrientation)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaed7578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateLocalPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateLocalTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateLocalTangent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateLocalOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateLocalOrientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.FindClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(::UnityEngine::Vector3, int32_t, int32_t, int32_t)>(&::Unity::Cinemachine::CinemachinePathBase::FindClosestPoint)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xaed7654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.MinUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::MinUnit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaed7a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"MinUnit", {}, {::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.MaxUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::MaxUnit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaed7a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"MaxUnit", {}, {::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.StandardizeUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(float_t, ::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::StandardizeUnit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaed7abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluatePositionAtUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePathBase::*)(float_t, ::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluatePositionAtUnit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaed7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"EvaluatePositionAtUnit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateTangentAtUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePathBase::*)(float_t, ::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateTangentAtUnit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaed7d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"EvaluateTangentAtUnit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.EvaluateOrientationAtUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachinePathBase::*)(float_t, ::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::EvaluateOrientationAtUnit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaed7d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"EvaluateOrientationAtUnit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.get_DistanceCacheSampleStepsPerSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::get_DistanceCacheSampleStepsPerSegment)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.InvalidateDistanceCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::InvalidateDistanceCache)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaed7db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.DistanceCacheIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::DistanceCacheIsValid)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaed7de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"DistanceCacheIsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.get_PathLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::get_PathLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaed7a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"get_PathLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.StandardizePathDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(float_t)>(&::Unity::Cinemachine::CinemachinePathBase::StandardizePathDistance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaed7b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"StandardizePathDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.ToNativePathUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(float_t, ::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::ToNativePathUnits)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xaed7be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"ToNativePathUnits", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.FromPathNativeUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePathBase::*)(float_t, ::GlobalNamespace::CinemachinePathBase_PositionUnits)>(&::Unity::Cinemachine::CinemachinePathBase::FromPathNativeUnits)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xaed822c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"FromPathNativeUnits", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaed8394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase.ResamplePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePathBase::*)(int32_t)>(&::Unity::Cinemachine::CinemachinePathBase::ResamplePath)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xaed7e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"ResamplePath", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePathBase::*)()>(&::Unity::Cinemachine::CinemachinePathBase::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaed73b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_Resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resolution;
}
constexpr int32_t const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_Resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resolution;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_Resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resolution = value;
}
constexpr ::Unity::Cinemachine::CinemachinePathBase_Appearance*& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_Appearance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Appearance;
}
constexpr ::Unity::Cinemachine::CinemachinePathBase_Appearance* const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_Appearance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Appearance;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_Appearance(::Unity::Cinemachine::CinemachinePathBase_Appearance*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Appearance = value;
}
constexpr ::ArrayW<float_t>& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_DistanceToPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceToPos;
}
constexpr ::ArrayW<float_t> const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_DistanceToPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceToPos;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_DistanceToPos(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DistanceToPos = value;
}
constexpr ::ArrayW<float_t>& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_PosToDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PosToDistance;
}
constexpr ::ArrayW<float_t> const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_PosToDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PosToDistance;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_PosToDistance(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PosToDistance = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_CachedSampleSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedSampleSteps;
}
constexpr int32_t const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_CachedSampleSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedSampleSteps;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_CachedSampleSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedSampleSteps = value;
}
constexpr float_t& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_PathLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathLength;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_PathLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathLength;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_PathLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PathLength = value;
}
constexpr float_t& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_cachedPosStepSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedPosStepSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_cachedPosStepSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedPosStepSize;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_cachedPosStepSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cachedPosStepSize = value;
}
constexpr float_t& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_cachedDistanceStepSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedDistanceStepSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePathBase::__cordl_internal_get_m_cachedDistanceStepSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedDistanceStepSize;
}
constexpr void Unity::Cinemachine::CinemachinePathBase::__cordl_internal_set_m_cachedDistanceStepSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cachedDistanceStepSize = value;
}
inline float_t Unity::Cinemachine::CinemachinePathBase::get_MinPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::get_MaxPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePathBase::get_Looped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::StandardizePos(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePathBase::EvaluatePosition(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePathBase::EvaluateTangent(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachinePathBase::EvaluateOrientation(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, pos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePathBase::EvaluateLocalPosition(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePathBase::EvaluateLocalTangent(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachinePathBase::EvaluateLocalOrientation(float_t  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, pos);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::FindClosestPoint(::UnityEngine::Vector3  p, int32_t  startSegment, int32_t  searchRadius, int32_t  stepsPerSegment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p, startSegment, searchRadius, stepsPerSegment);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::MinUnit(::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"MinUnit", {}, {::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, units);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::MaxUnit(::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"MaxUnit", {}, {::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, units);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::StandardizeUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos, units);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePathBase::EvaluatePositionAtUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"EvaluatePositionAtUnit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos, units);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePathBase::EvaluateTangentAtUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"EvaluateTangentAtUnit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos, units);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachinePathBase::EvaluateOrientationAtUnit(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"EvaluateOrientationAtUnit", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, pos, units);
}
inline int32_t Unity::Cinemachine::CinemachinePathBase::get_DistanceCacheSampleStepsPerSegment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePathBase::InvalidateDistanceCache()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePathBase::DistanceCacheIsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"DistanceCacheIsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::get_PathLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"get_PathLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::StandardizePathDistance(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"StandardizePathDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::ToNativePathUnits(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"ToNativePathUnits", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos, units);
}
inline float_t Unity::Cinemachine::CinemachinePathBase::FromPathNativeUnits(float_t  pos, ::GlobalNamespace::CinemachinePathBase_PositionUnits  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"FromPathNativeUnits", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CinemachinePathBase_PositionUnits>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos, units);
}
inline void Unity::Cinemachine::CinemachinePathBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePathBase::ResamplePath(int32_t  stepsPerSegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {"ResamplePath", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stepsPerSegment);
}
inline void Unity::Cinemachine::CinemachinePathBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachinePathBase* Unity::Cinemachine::CinemachinePathBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePathBase*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePathBase::CinemachinePathBase()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePathBase_Appearance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePathBase_Appearance::*)()>(&::Unity::Cinemachine::CinemachinePathBase_Appearance::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaed6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase_Appearance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_get_pathColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathColor;
}
constexpr ::UnityEngine::Color const& Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_get_pathColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathColor;
}
constexpr void Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_set_pathColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathColor = value;
}
constexpr ::UnityEngine::Color& Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_get_inactivePathColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactivePathColor;
}
constexpr ::UnityEngine::Color const& Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_get_inactivePathColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactivePathColor;
}
constexpr void Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_set_inactivePathColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactivePathColor = value;
}
constexpr float_t& Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Unity::Cinemachine::CinemachinePathBase_Appearance::__cordl_internal_set_width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
inline void Unity::Cinemachine::CinemachinePathBase_Appearance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePathBase_Appearance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachinePathBase_Appearance* Unity::Cinemachine::CinemachinePathBase_Appearance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePathBase_Appearance*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePathBase_Appearance::CinemachinePathBase_Appearance()   {
}
