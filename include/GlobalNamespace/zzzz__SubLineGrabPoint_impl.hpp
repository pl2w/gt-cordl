#pragma once
// IWYU pragma private; include "GlobalNamespace/SubLineGrabPoint.hpp"
#include "GlobalNamespace/zzzz__SubGrabPoint_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SubLineGrabPoint_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "GlobalNamespace/zzzz__SlotTransformOverride_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint.GetTransformation_GripPointLocalToAdvOriginLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::SubLineGrabPoint::*)(::GlobalNamespace::AdvancedItemState_PreData*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubLineGrabPoint::GetTransformation_GripPointLocalToAdvOriginLocal)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5768fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint.InitializePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubLineGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubLineGrabPoint::InitializePoints)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x57691cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint.GetPreData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AdvancedItemState_PreData* (::GlobalNamespace::SubLineGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubLineGrabPoint::GetPreData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x57693b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint.EvaluateScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SubLineGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubLineGrabPoint::EvaluateScore)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x57695d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubLineGrabPoint::*)()>(&::GlobalNamespace::SubLineGrabPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57698a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint._GetPreData_g__FindNearestFractionOnLine_8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SubLineGrabPoint::_GetPreData_g__FindNearestFractionOnLine_8_0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57694d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                        {"<GetPreData>g__FindNearestFractionOnLine|8_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubLineGrabPoint._EvaluateScore_g__FindNearestFractionOnLine_9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SubLineGrabPoint::_EvaluateScore_g__FindNearestFractionOnLine_9_0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57697a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                        {"<EvaluateScore>g__FindNearestFractionOnLine|9_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_startPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_startPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr void GlobalNamespace::SubLineGrabPoint::__cordl_internal_set_startPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_endPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_endPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPoint;
}
constexpr void GlobalNamespace::SubLineGrabPoint::__cordl_internal_set_endPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_startPointRelativeToGrabPointOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPointRelativeToGrabPointOrigin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_startPointRelativeToGrabPointOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPointRelativeToGrabPointOrigin;
}
constexpr void GlobalNamespace::SubLineGrabPoint::__cordl_internal_set_startPointRelativeToGrabPointOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPointRelativeToGrabPointOrigin = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_endPointRelativeToGrabPointOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPointRelativeToGrabPointOrigin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_endPointRelativeToGrabPointOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPointRelativeToGrabPointOrigin;
}
constexpr void GlobalNamespace::SubLineGrabPoint::__cordl_internal_set_endPointRelativeToGrabPointOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPointRelativeToGrabPointOrigin = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_startPointRelativeTransformToGrabPointOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPointRelativeTransformToGrabPointOrigin;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_startPointRelativeTransformToGrabPointOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPointRelativeTransformToGrabPointOrigin;
}
constexpr void GlobalNamespace::SubLineGrabPoint::__cordl_internal_set_startPointRelativeTransformToGrabPointOrigin(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPointRelativeTransformToGrabPointOrigin = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_endPointRelativeTransformToGrabPointOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPointRelativeTransformToGrabPointOrigin;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::SubLineGrabPoint::__cordl_internal_get_endPointRelativeTransformToGrabPointOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPointRelativeTransformToGrabPointOrigin;
}
constexpr void GlobalNamespace::SubLineGrabPoint::__cordl_internal_set_endPointRelativeTransformToGrabPointOrigin(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPointRelativeTransformToGrabPointOrigin = value;
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::SubLineGrabPoint::GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, advancedItemState, slotTransformOverride);
}
inline void GlobalNamespace::SubLineGrabPoint::InitializePoints(::UnityEngine::Transform*  anchor, ::UnityEngine::Transform*  grabPointAnchor, ::UnityEngine::Transform*  advancedGrabPointOrigin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, grabPointAnchor, advancedGrabPointOrigin);
}
inline ::GlobalNamespace::AdvancedItemState_PreData* GlobalNamespace::SubLineGrabPoint::GetPreData(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AdvancedItemState_PreData*>(this, ___internal_method, objectTransform, handTransform, targetDock, slotTransformOverride);
}
inline float_t GlobalNamespace::SubLineGrabPoint::EvaluateScore(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, objectTransform, handTransform, targetDock);
}
inline void GlobalNamespace::SubLineGrabPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SubLineGrabPoint::_GetPreData_g__FindNearestFractionOnLine_8_0(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                        {"<GetPreData>g__FindNearestFractionOnLine|8_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, origin, end, point);
}
inline float_t GlobalNamespace::SubLineGrabPoint::_EvaluateScore_g__FindNearestFractionOnLine_9_0(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubLineGrabPoint*>(),
                        {"<EvaluateScore>g__FindNearestFractionOnLine|9_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, origin, end, point);
}
inline ::GlobalNamespace::SubLineGrabPoint* GlobalNamespace::SubLineGrabPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubLineGrabPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubLineGrabPoint::SubLineGrabPoint()   {
}
