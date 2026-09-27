#pragma once
// IWYU pragma private; include "GlobalNamespace/SubSplineGrabPoint.hpp"
#include "GlobalNamespace/zzzz__SubLineGrabPoint_impl.hpp"
#include "GlobalNamespace/zzzz__SubSplineGrabPoint_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "GlobalNamespace/zzzz__CatmullRomSpline_def.hpp"
#include "GlobalNamespace/zzzz__SlotTransformOverride_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubSplineGrabPoint.GetTransformation_GripPointLocalToAdvOriginLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::SubSplineGrabPoint::*)(::GlobalNamespace::AdvancedItemState_PreData*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubSplineGrabPoint::GetTransformation_GripPointLocalToAdvOriginLocal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57698b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubSplineGrabPoint.InitializePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubSplineGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubSplineGrabPoint::InitializePoints)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x57698f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubSplineGrabPoint.GetPreData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AdvancedItemState_PreData* (::GlobalNamespace::SubSplineGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::SlotTransformOverride*)>(&::GlobalNamespace::SubSplineGrabPoint::GetPreData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5769b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubSplineGrabPoint.EvaluateScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SubSplineGrabPoint::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SubSplineGrabPoint::EvaluateScore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5769c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubSplineGrabPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubSplineGrabPoint::*)()>(&::GlobalNamespace::SubSplineGrabPoint::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5769d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline>& GlobalNamespace::SubSplineGrabPoint::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline> const& GlobalNamespace::SubSplineGrabPoint::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GlobalNamespace::SubSplineGrabPoint::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::CatmullRomSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::SubSplineGrabPoint::__cordl_internal_get_controlPointsRelativeToGrabOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointsRelativeToGrabOrigin;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::SubSplineGrabPoint::__cordl_internal_get_controlPointsRelativeToGrabOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointsRelativeToGrabOrigin;
}
constexpr void GlobalNamespace::SubSplineGrabPoint::__cordl_internal_set_controlPointsRelativeToGrabOrigin(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPointsRelativeToGrabOrigin = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& GlobalNamespace::SubSplineGrabPoint::__cordl_internal_get_controlPointsTransformsRelativeToGrabOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointsTransformsRelativeToGrabOrigin;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& GlobalNamespace::SubSplineGrabPoint::__cordl_internal_get_controlPointsTransformsRelativeToGrabOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPointsTransformsRelativeToGrabOrigin;
}
constexpr void GlobalNamespace::SubSplineGrabPoint::__cordl_internal_set_controlPointsTransformsRelativeToGrabOrigin(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPointsTransformsRelativeToGrabOrigin = value;
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::SubSplineGrabPoint::GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, advancedItemState, slotTransformOverride);
}
inline void GlobalNamespace::SubSplineGrabPoint::InitializePoints(::UnityEngine::Transform*  anchor, ::UnityEngine::Transform*  grabPointAnchor, ::UnityEngine::Transform*  advancedGrabPointOrigin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, grabPointAnchor, advancedGrabPointOrigin);
}
inline ::GlobalNamespace::AdvancedItemState_PreData* GlobalNamespace::SubSplineGrabPoint::GetPreData(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AdvancedItemState_PreData*>(this, ___internal_method, objectTransform, handTransform, targetDock, slotTransformOverride);
}
inline float_t GlobalNamespace::SubSplineGrabPoint::EvaluateScore(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, objectTransform, handTransform, targetDock);
}
inline void GlobalNamespace::SubSplineGrabPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubSplineGrabPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubSplineGrabPoint* GlobalNamespace::SubSplineGrabPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubSplineGrabPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubSplineGrabPoint::SubSplineGrabPoint()   {
}
