#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs_TransformTrianglesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_TransformTrianglesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::*)(int32_t)>(&::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::Execute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa667e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::OVRMeshJobs_TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t>  Triangles, ::Unity::Collections::NativeArray_1<int16_t>  MeshIndices, int32_t  NumIndices) noexcept  {
this->Triangles = Triangles;
this->MeshIndices = MeshIndices;
this->NumIndices = NumIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshJobs_TransformTrianglesJob::OVRMeshJobs_TransformTrianglesJob()   {
}
