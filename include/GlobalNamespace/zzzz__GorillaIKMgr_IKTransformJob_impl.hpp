#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKTransformJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKTransformJob_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr_IKTransformJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr_IKTransformJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::GorillaIKMgr_IKTransformJob::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5917b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr_IKTransformJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaIKMgr_IKTransformJob::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr_IKTransformJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, xform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::GorillaIKMgr_IKTransformJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::GorillaIKMgr_IKTransformJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "transformRotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transformPositions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaIKMgr_IKTransformJob::GorillaIKMgr_IKTransformJob(::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  transformRotations, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  transformPositions) noexcept  {
this->transformRotations = transformRotations;
this->transformPositions = transformPositions;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr_IKTransformJob::GorillaIKMgr_IKTransformJob()   {
}
