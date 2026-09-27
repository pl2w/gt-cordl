#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderConveyorManager_EvaluateSplineJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderConveyorManager_EvaluateSplineJob_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob.GetSplineAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::NativeSpline (::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::*)(int32_t)>(&::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::GetSplineAt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c20468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob>(),
                        {"GetSplineAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob.SetSplineAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::*)(int32_t, ::UnityEngine::Splines::NativeSpline)>(&::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::SetSplineAt)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c2014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob>(),
                        {"SetSplineAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::NativeSpline>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::Execute)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5c204a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Splines::NativeSpline GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::GetSplineAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob>(),
                        {"GetSplineAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::NativeSpline>(*this, ___internal_method, index);
}
inline void GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::SetSplineAt(int32_t  index, ::UnityEngine::Splines::NativeSpline  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob>(),
                        {"SetSplineAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::NativeSpline>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, s);
}
inline void GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "conveyorSpline0", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "conveyorSpline1", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "conveyorSpline2", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "conveyorSpline3", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "conveyorRotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "conveyorIndices", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splineTimes", ty: "::Unity::Collections::NativeList_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shelfOffsets", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::BuilderConveyorManager_EvaluateSplineJob(::UnityEngine::Splines::NativeSpline  conveyorSpline0, ::UnityEngine::Splines::NativeSpline  conveyorSpline1, ::UnityEngine::Splines::NativeSpline  conveyorSpline2, ::UnityEngine::Splines::NativeSpline  conveyorSpline3, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  conveyorRotations, ::Unity::Collections::NativeList_1<int32_t>  conveyorIndices, ::Unity::Collections::NativeList_1<float_t>  splineTimes, ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  shelfOffsets) noexcept  {
this->conveyorSpline0 = conveyorSpline0;
this->conveyorSpline1 = conveyorSpline1;
this->conveyorSpline2 = conveyorSpline2;
this->conveyorSpline3 = conveyorSpline3;
this->conveyorRotations = conveyorRotations;
this->conveyorIndices = conveyorIndices;
this->splineTimes = splineTimes;
this->shelfOffsets = shelfOffsets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderConveyorManager_EvaluateSplineJob::BuilderConveyorManager_EvaluateSplineJob()   {
}
