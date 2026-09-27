#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa63c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Results", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<int32_t>  Results) noexcept  {
this->Space = Space;
this->Results = Results;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob::OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob()   {
}
