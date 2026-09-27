#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor_BakeMeshJob.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_BakeMeshJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::*)()>(&::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9ec0a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor_BakeMeshJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RoomMeshAnchor_BakeMeshJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor_BakeMeshJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::RoomMeshAnchor_BakeMeshJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::RoomMeshAnchor_BakeMeshJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "MeshID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Convex", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::RoomMeshAnchor_BakeMeshJob(int32_t  MeshID, bool  Convex) noexcept  {
this->MeshID = MeshID;
this->Convex = Convex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob::RoomMeshAnchor_BakeMeshJob()   {
}
