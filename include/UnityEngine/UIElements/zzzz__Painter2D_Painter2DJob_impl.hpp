#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D_Painter2DJob.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_Painter2DJobData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Painter2D_Painter2DJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Painter2D_Painter2DJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Painter2D_Painter2DJob::*)(int32_t)>(&::GlobalNamespace::Painter2D_Painter2DJob::Execute)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb8c7a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Painter2D_Painter2DJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Painter2D_Painter2DJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Painter2D_Painter2DJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::Painter2D_Painter2DJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::Painter2D_Painter2DJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "painterHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allocator", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jobParameters", ty: "::Unity::Collections::NativeSlice_1<::GlobalNamespace::Painter2D_Painter2DJobData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Painter2D_Painter2DJob::Painter2D_Painter2DJob(::System::IntPtr  painterHandle, ::UnityEngine::UIElements::TempMeshAllocator  allocator, ::Unity::Collections::NativeSlice_1<::GlobalNamespace::Painter2D_Painter2DJobData>  jobParameters) noexcept  {
this->painterHandle = painterHandle;
this->allocator = allocator;
this->jobParameters = jobParameters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Painter2D_Painter2DJob::Painter2D_Painter2DJob()   {
}
