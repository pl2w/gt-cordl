#pragma once
// IWYU pragma private; include "Voxels/SurfaceNetsBuffer.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__SurfaceNetsBuffer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::Voxels::SurfaceNetsBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsBuffer::*)(int32_t, int32_t, int32_t, ::Unity::Collections::Allocator)>(&::Voxels::SurfaceNetsBuffer::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5db4a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsBuffer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsBuffer::*)(int32_t)>(&::Voxels::SurfaceNetsBuffer::Reset)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5db4c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsBuffer>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SurfaceNetsBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SurfaceNetsBuffer::*)()>(&::Voxels::SurfaceNetsBuffer::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5db4e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::SurfaceNetsBuffer::_ctor(int32_t  vertexCap, int32_t  indexCap, int32_t  strideCount, ::Unity::Collections::Allocator  alloc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsBuffer>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertexCap, indexCap, strideCount, alloc);
}
inline void Voxels::SurfaceNetsBuffer::Reset(int32_t  strideCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsBuffer>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, strideCount);
}
inline void Voxels::SurfaceNetsBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNetsBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Voxels::SurfaceNetsBuffer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Voxels::SurfaceNetsBuffer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Materials", ty: "::Unity::Collections::NativeList_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SurfacePoints", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SurfaceStrides", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StrideToIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::SurfaceNetsBuffer::SurfaceNetsBuffer(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Vertices, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Normals, ::Unity::Collections::NativeList_1<uint8_t>  Materials, ::Unity::Collections::NativeList_1<int32_t>  Triangles, ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  SurfacePoints, ::Unity::Collections::NativeList_1<int32_t>  SurfaceStrides, ::Unity::Collections::NativeArray_1<int32_t>  StrideToIndex) noexcept  {
this->Vertices = Vertices;
this->Normals = Normals;
this->Materials = Materials;
this->Triangles = Triangles;
this->SurfacePoints = SurfacePoints;
this->SurfaceStrides = SurfaceStrides;
this->StrideToIndex = StrideToIndex;
}
// Ctor Parameters []
constexpr ::Voxels::SurfaceNetsBuffer::SurfaceNetsBuffer()   {
}
