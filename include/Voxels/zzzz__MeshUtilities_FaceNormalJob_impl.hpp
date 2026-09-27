#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_FaceNormalJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Voxels/zzzz__MeshUtilities_FaceNormalJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshUtilities_FaceNormalJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshUtilities_FaceNormalJob::*)(int32_t)>(&::GlobalNamespace::MeshUtilities_FaceNormalJob::Execute)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5db3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtilities_FaceNormalJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshUtilities_FaceNormalJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtilities_FaceNormalJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::MeshUtilities_FaceNormalJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::MeshUtilities_FaceNormalJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Verts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FaceN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshUtilities_FaceNormalJob::MeshUtilities_FaceNormalJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Verts, ::Unity::Collections::NativeArray_1<int32_t>  Tris, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN) noexcept  {
this->Verts = Verts;
this->Tris = Tris;
this->FaceN = FaceN;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshUtilities_FaceNormalJob::MeshUtilities_FaceNormalJob()   {
}
