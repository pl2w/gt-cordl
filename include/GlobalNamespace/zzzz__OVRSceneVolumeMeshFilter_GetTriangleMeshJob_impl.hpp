#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter_GetTriangleMeshJob.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_GetTriangleMeshJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::Execute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa63ca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::OVRSceneVolumeMeshFilter_GetTriangleMeshJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<int32_t>  Triangles) noexcept  {
this->Space = Space;
this->Vertices = Vertices;
this->Triangles = Triangles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshJob::OVRSceneVolumeMeshFilter_GetTriangleMeshJob()   {
}
