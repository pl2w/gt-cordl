#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_FlipTriangleWindingJob.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_Triangle_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_FlipTriangleWindingJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::*)(int32_t)>(&::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::Execute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa57c324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::OVRTriangleMesh_FlipTriangleWindingJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle>  Triangles) noexcept  {
this->Triangles = Triangles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob::OVRTriangleMesh_FlipTriangleWindingJob()   {
}
