#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions_TriNormalJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_TriNormalJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions_TriNormalJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshExtensions_TriNormalJob::*)(int32_t)>(&::GlobalNamespace::MeshExtensions_TriNormalJob::Execute)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d166e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_TriNormalJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshExtensions_TriNormalJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_TriNormalJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::MeshExtensions_TriNormalJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::MeshExtensions_TriNormalJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "V", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "T", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Out", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AreaWeight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshExtensions_TriNormalJob::MeshExtensions_TriNormalJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  V, ::Unity::Collections::NativeArray_1<int32_t>  T, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Out, int32_t  AreaWeight) noexcept  {
this->V = V;
this->T = T;
this->Out = Out;
this->AreaWeight = AreaWeight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshExtensions_TriNormalJob::MeshExtensions_TriNormalJob()   {
}
