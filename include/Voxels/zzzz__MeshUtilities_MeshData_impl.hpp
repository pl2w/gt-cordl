#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_MeshData.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Voxels/zzzz__MeshUtilities_MeshData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshUtilities_MeshData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshUtilities_MeshData::*)()>(&::GlobalNamespace::MeshUtilities_MeshData::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5db3370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtilities_MeshData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshUtilities_MeshData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtilities_MeshData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MeshUtilities_MeshData::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MeshUtilities_MeshData::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshUtilities_MeshData::MeshUtilities_MeshData(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Vertices, ::Unity::Collections::NativeList_1<int32_t>  Triangles, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Normals) noexcept  {
this->Vertices = Vertices;
this->Triangles = Triangles;
this->Normals = Normals;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshUtilities_MeshData::MeshUtilities_MeshData()   {
}
