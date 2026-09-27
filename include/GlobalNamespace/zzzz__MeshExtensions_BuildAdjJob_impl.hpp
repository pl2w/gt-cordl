#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions_BuildAdjJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap`2_ParallelWriter_impl.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_BuildAdjJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions_BuildAdjJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshExtensions_BuildAdjJob::*)(int32_t)>(&::GlobalNamespace::MeshExtensions_BuildAdjJob::Execute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d16820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_BuildAdjJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshExtensions_BuildAdjJob::Execute(int32_t  triIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions_BuildAdjJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, triIdx);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::MeshExtensions_BuildAdjJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::MeshExtensions_BuildAdjJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "T", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MapW", ty: "::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<int32_t,int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshExtensions_BuildAdjJob::MeshExtensions_BuildAdjJob(::Unity::Collections::NativeArray_1<int32_t>  T, ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<int32_t,int32_t>  MapW) noexcept  {
this->T = T;
this->MapW = MapW;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshExtensions_BuildAdjJob::MeshExtensions_BuildAdjJob()   {
}
