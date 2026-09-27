#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_TransformPosesJob.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TransformPosesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TransformPosesJob.Unity_Jobs_IJobFor_Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_TransformPosesJob::*)(int32_t)>(&::GlobalNamespace::OVRLocatable_TransformPosesJob::Unity_Jobs_IJobFor_Execute)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa5762c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TransformPosesJob>(),
                        {"Unity.Jobs.IJobFor.Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_TransformPosesJob::Unity_Jobs_IJobFor_Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_TransformPosesJob>(),
                        {"Unity.Jobs.IJobFor.Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  GlobalNamespace::OVRLocatable_TransformPosesJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::OVRLocatable_TransformPosesJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRLocatable_TransformPosesJob::OVRLocatable_TransformPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  Poses, ::UnityEngine::Matrix4x4  Transform, ::UnityEngine::Quaternion  Rotation) noexcept  {
this->Poses = Poses;
this->Transform = Transform;
this->Rotation = Rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_TransformPosesJob::OVRLocatable_TransformPosesJob()   {
}
