#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_NegateXJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_NegateXJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh_NegateXJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTriangleMesh_NegateXJob::*)(int32_t)>(&::GlobalNamespace::OVRTriangleMesh_NegateXJob::Execute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa57c344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh_NegateXJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTriangleMesh_NegateXJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh_NegateXJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::OVRTriangleMesh_NegateXJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRTriangleMesh_NegateXJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTriangleMesh_NegateXJob::OVRTriangleMesh_NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions) noexcept  {
this->Positions = Positions;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTriangleMesh_NegateXJob::OVRTriangleMesh_NegateXJob()   {
}
