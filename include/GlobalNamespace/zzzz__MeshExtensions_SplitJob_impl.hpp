#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions_SplitJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_SplitJob_def.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_SplitJob_Bucket_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions_SplitJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshExtensions_SplitJob::*)()>(&::GlobalNamespace::MeshExtensions_SplitJob::Execute)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5d1631c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_SplitJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshExtensions_SplitJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_SplitJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::MeshExtensions_SplitJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::MeshExtensions_SplitJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "CosThresh", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SrcVerts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SrcTris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FaceN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DstVerts", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DstTris", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshExtensions_SplitJob::MeshExtensions_SplitJob(float_t  CosThresh, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  SrcVerts, ::Unity::Collections::NativeArray_1<int32_t>  SrcTris, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  DstVerts, ::Unity::Collections::NativeList_1<int32_t>  DstTris) noexcept  {
this->CosThresh = CosThresh;
this->SrcVerts = SrcVerts;
this->SrcTris = SrcTris;
this->FaceN = FaceN;
this->DstVerts = DstVerts;
this->DstTris = DstTris;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshExtensions_SplitJob::MeshExtensions_SplitJob()   {
}
