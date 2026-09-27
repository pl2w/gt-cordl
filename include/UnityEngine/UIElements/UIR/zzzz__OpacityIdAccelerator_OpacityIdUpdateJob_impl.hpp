#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/OpacityIdAccelerator_OpacityIdUpdateJob.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__OpacityIdAccelerator_OpacityIdUpdateJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::*)(int32_t)>(&::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::Execute)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb7dfb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "oldVerts", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "newVerts", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "opacityData", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::OpacityIdAccelerator_OpacityIdUpdateJob(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  oldVerts, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  newVerts, ::UnityEngine::Color32  opacityData) noexcept  {
this->oldVerts = oldVerts;
this->newVerts = newVerts;
this->opacityData = opacityData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpacityIdAccelerator_OpacityIdUpdateJob::OpacityIdAccelerator_OpacityIdUpdateJob()   {
}
