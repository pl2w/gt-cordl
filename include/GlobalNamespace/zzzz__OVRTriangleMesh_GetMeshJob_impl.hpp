#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_GetMeshJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_GetMeshJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTriangleMesh_GetMeshJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTriangleMesh_GetMeshJob::*)()>(&::GlobalNamespace::OVRTriangleMesh_GetMeshJob::Execute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa57c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh_GetMeshJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTriangleMesh_GetMeshJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTriangleMesh_GetMeshJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::OVRTriangleMesh_GetMeshJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::OVRTriangleMesh_GetMeshJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTriangleMesh_GetMeshJob::OVRTriangleMesh_GetMeshJob(uint64_t  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept  {
this->Space = Space;
this->Positions = Positions;
this->Indices = Indices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTriangleMesh_GetMeshJob::OVRTriangleMesh_GetMeshJob()   {
}
