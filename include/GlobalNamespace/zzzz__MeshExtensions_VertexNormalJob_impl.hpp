#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions_VertexNormalJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_VertexNormalJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions_VertexNormalJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshExtensions_VertexNormalJob::*)(int32_t)>(&::GlobalNamespace::MeshExtensions_VertexNormalJob::Execute)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5d168bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_VertexNormalJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshExtensions_VertexNormalJob::Execute(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_VertexNormalJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::MeshExtensions_VertexNormalJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::MeshExtensions_VertexNormalJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "AreaWeight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TriN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "V2T", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Out", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshExtensions_VertexNormalJob::MeshExtensions_VertexNormalJob(int32_t  AreaWeight, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  TriN, ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>  V2T, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Out) noexcept  {
this->AreaWeight = AreaWeight;
this->TriN = TriN;
this->V2T = V2T;
this->Out = Out;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshExtensions_VertexNormalJob::MeshExtensions_VertexNormalJob()   {
}
