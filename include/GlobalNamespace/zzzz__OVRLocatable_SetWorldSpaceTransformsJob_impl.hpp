#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_SetWorldSpaceTransformsJob.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_SetWorldSpaceTransformsJob_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob.UnityEngine_Jobs_IJobParallelForTransform_Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::UnityEngine_Jobs_IJobParallelForTransform_Execute)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa576548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob>(),
                        {"UnityEngine.Jobs.IJobParallelForTransform.Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::UnityEngine_Jobs_IJobParallelForTransform_Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob>(),
                        {"UnityEngine.Jobs.IJobParallelForTransform.Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::OVRLocatable_SetWorldSpaceTransformsJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses) noexcept  {
this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::OVRLocatable_SetWorldSpaceTransformsJob()   {
}
