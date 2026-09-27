#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigJobManager_VRRigTransformJob.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformInput_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformJob_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager_VRRigTransformJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager_VRRigTransformJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::VRRigJobManager_VRRigTransformJob::Execute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a112d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager_VRRigTransformJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VRRigJobManager_VRRigTransformJob::Execute(int32_t  i, ::UnityEngine::Jobs::TransformAccess  tA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager_VRRigTransformJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, tA);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::VRRigJobManager_VRRigTransformJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::VRRigJobManager_VRRigTransformJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "input", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VRRigJobManager_VRRigTransformJob::VRRigJobManager_VRRigTransformJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  input) noexcept  {
this->input = input;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigJobManager_VRRigTransformJob::VRRigJobManager_VRRigTransformJob()   {
}
