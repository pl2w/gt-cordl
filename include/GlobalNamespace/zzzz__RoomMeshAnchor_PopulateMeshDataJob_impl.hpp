#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor_PopulateMeshDataJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_PopulateMeshDataJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::*)()>(&::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::Execute)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9ec0814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshData", ty: "::GlobalNamespace::Mesh_MeshData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::RoomMeshAnchor_PopulateMeshDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<int32_t>  Triangles, ::GlobalNamespace::Mesh_MeshData  MeshData) noexcept  {
this->Vertices = Vertices;
this->Triangles = Triangles;
this->MeshData = MeshData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob::RoomMeshAnchor_PopulateMeshDataJob()   {
}
