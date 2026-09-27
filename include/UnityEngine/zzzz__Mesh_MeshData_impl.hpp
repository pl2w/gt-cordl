#pragma once
// IWYU pragma private; include "UnityEngine/Mesh_MeshData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.HasVertexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::GlobalNamespace::Mesh_MeshData::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5afdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetVertexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5afe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetVertexBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetVertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5afe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexBufferCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetVertexDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::Mesh_MeshData::GetVertexDataPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5afe7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexDataPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetVertexDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::Mesh_MeshData::GetVertexDataSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5afec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexDataSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.CopyAttributeIntoPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::CopyAttributeIntoPtr)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5aff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"CopyAttributeIntoPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.CopyIndicesIntoPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, bool, int32_t, ::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::CopyIndicesIntoPtr)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5aff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"CopyIndicesIntoPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndexFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndexFormat (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetIndexFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5affe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexFormat", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::Mesh_MeshData::GetIndexCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b0020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndexDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetIndexDataPtr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexDataPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndexDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetIndexDataSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexDataSize", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetSubMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetSubMeshCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b00ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetLodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Mesh_MeshData::GetLodCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetLodCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SubMeshDescriptor (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::Mesh_MeshData::GetSubMesh)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb5b0164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetVertexBufferParamsFromPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::GlobalNamespace::Mesh_MeshData::SetVertexBufferParamsFromPtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5b0234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetVertexBufferParamsFromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::GlobalNamespace::Mesh_MeshData::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb5b0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetIndexBufferParamsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::GlobalNamespace::Mesh_MeshData::SetIndexBufferParamsImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b03c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetIndexBufferParamsImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetSubMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::Mesh_MeshData::SetSubMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b041c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetSubMeshImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshData::SetSubMeshImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5b0460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMeshImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.get_vertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Mesh_MeshData::*)()>(&::GlobalNamespace::Mesh_MeshData::get_vertexCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_vertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.get_vertexBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Mesh_MeshData::*)()>(&::GlobalNamespace::Mesh_MeshData::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_vertexBufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.HasVertexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Mesh_MeshData::*)(::UnityEngine::Rendering::VertexAttribute)>(&::GlobalNamespace::Mesh_MeshData::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::GlobalNamespace::Mesh_MeshData::GetVertices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5b05d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::GlobalNamespace::Mesh_MeshData::GetNormals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5b0640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetNormals", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>)>(&::GlobalNamespace::Mesh_MeshData::GetTangents)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5b06ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetTangents", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color>)>(&::GlobalNamespace::Mesh_MeshData::GetColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5b0718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetColors", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>)>(&::GlobalNamespace::Mesh_MeshData::GetUVs)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb5b0784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetVertexBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::GlobalNamespace::Mesh_MeshData::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5b0888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetVertexBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::GlobalNamespace::Mesh_MeshData::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb5b0890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetIndexBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::GlobalNamespace::Mesh_MeshData::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetIndexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.get_indexFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndexFormat (::GlobalNamespace::Mesh_MeshData::*)()>(&::GlobalNamespace::Mesh_MeshData::get_indexFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_indexFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<uint16_t>, int32_t, bool)>(&::GlobalNamespace::Mesh_MeshData::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5b09cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<uint16_t>, int32_t, int32_t, bool)>(&::GlobalNamespace::Mesh_MeshData::GetIndices)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb5b09d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<int32_t>, int32_t, bool)>(&::GlobalNamespace::Mesh_MeshData::GetIndices)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5b0d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<int32_t>, int32_t, int32_t, bool)>(&::GlobalNamespace::Mesh_MeshData::GetIndices)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb5b0d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.get_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Mesh_MeshData::*)()>(&::GlobalNamespace::Mesh_MeshData::get_subMeshCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_subMeshCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.set_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(int32_t)>(&::GlobalNamespace::Mesh_MeshData::set_subMeshCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b0fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"set_subMeshCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SubMeshDescriptor (::GlobalNamespace::Mesh_MeshData::*)(int32_t)>(&::GlobalNamespace::Mesh_MeshData::GetSubMesh)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb5b1030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mesh_MeshData::*)(int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshData::SetSubMesh)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb5b10bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.get_lodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Mesh_MeshData::*)()>(&::GlobalNamespace::Mesh_MeshData::get_lodCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5b0cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_lodCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.GetSubMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>)>(&::GlobalNamespace::Mesh_MeshData::GetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b01e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetVertexBufferParamsFromArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::GlobalNamespace::Mesh_MeshData::SetVertexBufferParamsFromArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5b0374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mesh_MeshData.SetSubMeshImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::GlobalNamespace::Mesh_MeshData::SetSubMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5b04bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Mesh_MeshData::HasVertexAttribute(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self, attr);
}
inline int32_t GlobalNamespace::Mesh_MeshData::GetVertexCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline int32_t GlobalNamespace::Mesh_MeshData::GetVertexBufferCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexBufferCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline ::System::IntPtr GlobalNamespace::Mesh_MeshData::GetVertexDataPtr(::System::IntPtr  self, int32_t  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexDataPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self, stream);
}
inline uint64_t GlobalNamespace::Mesh_MeshData::GetVertexDataSize(::System::IntPtr  self, int32_t  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertexDataSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, self, stream);
}
inline void GlobalNamespace::Mesh_MeshData::CopyAttributeIntoPtr(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"CopyAttributeIntoPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, attr, format, dim, dst);
}
inline void GlobalNamespace::Mesh_MeshData::CopyIndicesIntoPtr(::System::IntPtr  self, int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex, int32_t  dstStride, ::System::IntPtr  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"CopyIndicesIntoPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, submesh, meshLod, applyBaseVertex, dstStride, dst);
}
inline ::UnityEngine::Rendering::IndexFormat GlobalNamespace::Mesh_MeshData::GetIndexFormat(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexFormat", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndexFormat>(nullptr, ___internal_method, self);
}
inline int32_t GlobalNamespace::Mesh_MeshData::GetIndexCount(::System::IntPtr  self, int32_t  submesh, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self, submesh, meshlod);
}
inline ::System::IntPtr GlobalNamespace::Mesh_MeshData::GetIndexDataPtr(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexDataPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self);
}
inline uint64_t GlobalNamespace::Mesh_MeshData::GetIndexDataSize(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndexDataSize", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, self);
}
inline int32_t GlobalNamespace::Mesh_MeshData::GetSubMeshCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline int32_t GlobalNamespace::Mesh_MeshData::GetLodCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetLodCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor GlobalNamespace::Mesh_MeshData::GetSubMesh(::System::IntPtr  self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SubMeshDescriptor>(nullptr, ___internal_method, self, index);
}
inline void GlobalNamespace::Mesh_MeshData::SetVertexBufferParamsFromPtr(::System::IntPtr  self, int32_t  vertexCount, ::System::IntPtr  attributesPtr, int32_t  attributesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributesPtr, attributesCount);
}
inline void GlobalNamespace::Mesh_MeshData::SetVertexBufferParamsFromArray(::System::IntPtr  self, int32_t  vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void GlobalNamespace::Mesh_MeshData::SetIndexBufferParamsImpl(::System::IntPtr  self, int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  indexFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetIndexBufferParamsImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, indexCount, indexFormat);
}
inline void GlobalNamespace::Mesh_MeshData::SetSubMeshCount(::System::IntPtr  self, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, count);
}
inline void GlobalNamespace::Mesh_MeshData::SetSubMeshImpl(::System::IntPtr  self, int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMeshImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, desc, flags);
}
inline int32_t GlobalNamespace::Mesh_MeshData::get_vertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_vertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Mesh_MeshData::get_vertexBufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_vertexBufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::Mesh_MeshData::HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, attr);
}
inline void GlobalNamespace::Mesh_MeshData::GetVertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  outVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetVertices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outVertices);
}
inline void GlobalNamespace::Mesh_MeshData::GetNormals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  outNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetNormals", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outNormals);
}
inline void GlobalNamespace::Mesh_MeshData::GetTangents(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  outTangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetTangents", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outTangents);
}
inline void GlobalNamespace::Mesh_MeshData::GetColors(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  outColors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetColors", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outColors);
}
inline void GlobalNamespace::Mesh_MeshData::GetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  outUVs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, channel, outUVs);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GlobalNamespace::Mesh_MeshData::GetVertexData(/* [DefaultValue("0")] */ int32_t  stream)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                    {"GetVertexData", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, stream);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::Mesh_MeshData::CopyAttributeInto(::Unity::Collections::NativeArray_1<T>  buffer, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                    {"CopyAttributeInto", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, channel, format, dim);
}
inline void GlobalNamespace::Mesh_MeshData::SetVertexBufferParams(int32_t  vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertexCount, attributes);
}
inline void GlobalNamespace::Mesh_MeshData::SetVertexBufferParams(int32_t  vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertexCount, attributes);
}
inline void GlobalNamespace::Mesh_MeshData::SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetIndexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indexCount, format);
}
inline ::UnityEngine::Rendering::IndexFormat GlobalNamespace::Mesh_MeshData::get_indexFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_indexFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndexFormat>(*this, ___internal_method);
}
inline void GlobalNamespace::Mesh_MeshData::GetIndices(::Unity::Collections::NativeArray_1<uint16_t>  outIndices, int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outIndices, submesh, applyBaseVertex);
}
inline void GlobalNamespace::Mesh_MeshData::GetIndices(::Unity::Collections::NativeArray_1<uint16_t>  outIndices, int32_t  submesh, int32_t  meshlod, /* [DefaultValue("true")] */ bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outIndices, submesh, meshlod, applyBaseVertex);
}
inline void GlobalNamespace::Mesh_MeshData::GetIndices(::Unity::Collections::NativeArray_1<int32_t>  outIndices, int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outIndices, submesh, applyBaseVertex);
}
inline void GlobalNamespace::Mesh_MeshData::GetIndices(::Unity::Collections::NativeArray_1<int32_t>  outIndices, int32_t  submesh, int32_t  meshlod, /* [DefaultValue("true")] */ bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outIndices, submesh, meshlod, applyBaseVertex);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GlobalNamespace::Mesh_MeshData::GetIndexData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                    {"GetIndexData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Mesh_MeshData::get_subMeshCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_subMeshCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Mesh_MeshData::set_subMeshCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"set_subMeshCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor GlobalNamespace::Mesh_MeshData::GetSubMesh(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SubMeshDescriptor>(*this, ___internal_method, index);
}
inline void GlobalNamespace::Mesh_MeshData::SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, desc, flags);
}
inline int32_t GlobalNamespace::Mesh_MeshData::get_lodCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"get_lodCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Mesh_MeshData::GetSubMesh_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"GetSubMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, ret);
}
inline void GlobalNamespace::Mesh_MeshData::SetVertexBufferParamsFromArray_Injected(::System::IntPtr  self, int32_t  vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void GlobalNamespace::Mesh_MeshData::SetSubMeshImpl_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mesh_MeshData>(),
                        {"SetSubMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, desc, flags);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Mesh_MeshData::Mesh_MeshData(::System::IntPtr  m_Ptr) noexcept  {
this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Mesh_MeshData::Mesh_MeshData()   {
}
