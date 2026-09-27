#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BufferDataFromPreviousBake_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshCombinerSingle_BoneProcessor_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.get_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::get_channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db1f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"get_channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.set_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::set_channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db1f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"set_channels", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9db1f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db1fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db1fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t, ::ArrayW<int32_t>, int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::Init)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x9db1ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"Init", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.InitShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::InitShowHide)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9db29cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"InitShowHide", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.InitFromMeshCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::InitFromMeshCombiner)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x9db2510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"InitFromMeshCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.ApplyDataBufferToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::UnityEngine::Mesh*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::ApplyDataBufferToMesh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9db2a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"ApplyDataBufferToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetVertexCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9db2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetVertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.GetSubmeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetSubmeshCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9db2af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetSubmeshCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.TransferOwnershipOfSerializableBuffersToCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::TransferOwnershipOfSerializableBuffersToCombiner)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9db2b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"TransferOwnershipOfSerializableBuffersToCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.CopyArraysFromPreviousBakeBuffersToNewBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>, int32_t, int32_t, ::ArrayW<int32_t>, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::CopyArraysFromPreviousBakeBuffersToNewBuffers)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x9db2b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"CopyArraysFromPreviousBakeBuffersToNewBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.CopyFromDGOMeshToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, bool, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*, ::ArrayW<int32_t>, ::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::CopyFromDGOMeshToBuffers)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x9db3534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"CopyFromDGOMeshToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.AssignBuffersToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AssignBuffersToMesh)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x9db4da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AssignBuffersToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.AssignTriangleDataForSubmeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AssignTriangleDataForSubmeshes)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9db58ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AssignTriangleDataForSubmeshes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.AssignTriangleDataForSubmeshes_ShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AssignTriangleDataForSubmeshes_ShowHide)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x9db5fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AssignTriangleDataForSubmeshes_ShowHide", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.AdjustVertsToWriteAccordingToPivotPositionIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB_MeshPivotLocation, ::DigitalOpus::MB::Core::MB_RenderType, bool, ::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AdjustVertsToWriteAccordingToPivotPositionIfNecessary)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x9db55e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AdjustVertsToWriteAccordingToPivotPositionIfNecessary", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshPivotLocation>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._NumNonZeroLengthSubmeshTris
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_NumNonZeroLengthSubmeshTris)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9db5f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_NumNonZeroLengthSubmeshTris", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._copyAndAdjustUVsFromMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Mesh*, int32_t, int32_t, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>, ::Unity::Collections::NativeSlice_1<float_t>, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::GlobalNamespace::MB2_TextureBakeResults*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_copyAndAdjustUVsFromMesh)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x9db437c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_copyAndAdjustUVsFromMesh", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<float_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._CopyAndAdjustUV2FromMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_CopyAndAdjustUV2FromMesh)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x9db48d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_CopyAndAdjustUV2FromMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.CopyUV2unchangedToSeparateRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, float_t)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::CopyUV2unchangedToSeparateRects)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x9db638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"CopyUV2unchangedToSeparateRects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.GetSubmeshTrisWithShowHideApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetSubmeshTrisWithShowHideApplied)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x9db5b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetSubmeshTrisWithShowHideApplied", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray.GetTriangleSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetTriangleSizes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9db6aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetTriangleSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._LocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::*)(::UnityEngine::Transform*, bool, bool, int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorld)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x9db3f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorld", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._LocalToWorldMatrix_TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, bool, bool, int32_t, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorldMatrix_TRS)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x9db6dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorldMatrix_TRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._LocalToWorld_TR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool, bool, int32_t, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorld_TR)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x9db6b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorld_TR", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray._LocalToWorld_TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, bool, int32_t, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorld_TRS)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x9db71b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorld_TRS", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::get_channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"get_channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::set_channels(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"set_channels", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  vertexCount, ::ArrayW<int32_t>  newSubmeshTrisSize, int32_t  uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, bool  loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"Init", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, combiner, newChannels, vertexCount, newSubmeshTrisSize, uvChannelWithExtraParameter, meshChannelsCache, loadDataFromCombinedMesh, logLevel);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"InitShowHide", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, combiner);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  uvChannelWithExtraParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"InitFromMeshCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, combiner, newChannels, uvChannelWithExtraParameter);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::ApplyDataBufferToMesh(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"ApplyDataBufferToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetVertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetVertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetSubmeshCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetSubmeshCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToTransfer, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  serializableBufferData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"TransferOwnershipOfSerializableBuffersToCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c, channelsToTransfer, serializableBufferData);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  iOldBuffers, int32_t  destStartVertIdx, int32_t  triangleIdxAdjustment, ::ArrayW<int32_t>  targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"CopyArraysFromPreviousBakeBuffersToNewBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dgo, iOldBuffers, destStartVertIdx, triangleIdxAdjustment, targSubmeshTidx, LOG_LEVEL);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToUpdate, bool  updateTris, bool  updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  boneProcessor, ::ArrayW<int32_t>  targSubmeshTidx, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCacheParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"CopyFromDGOMeshToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dgo, destStartVertsIdx, channelsToUpdate, updateTris, updateBWdata, settings, boneProcessor, targSubmeshTidx, textureBakeResults, uvAdjuster, LOG_LEVEL, meshChannelCacheParam);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AssignBuffersToMesh(::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToWriteToMesh, bool  doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AssignBuffersToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, settings, textureBakeResults, channelsToWriteToMesh, doWriteTrisToMesh, assignToMeshCustomizer, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AssignTriangleDataForSubmeshes(::UnityEngine::Mesh*  mmesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AssignTriangleDataForSubmeshes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mmesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AssignTriangleDataForSubmeshes_ShowHide", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::AdjustVertsToWriteAccordingToPivotPositionIfNecessary(::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  clearBuffersAfterBake, ::UnityEngine::Vector3  pivotLocation_wld, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"AdjustVertsToWriteAccordingToPivotPositionIfNecessary", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshPivotLocation>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pivotLocationType, renderType, clearBuffersAfterBake, pivotLocation_wld, serializableBufferData);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_NumNonZeroLengthSubmeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  subTris, ::by_ref<int32_t>  numIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_NumNonZeroLengthSubmeshTris", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, subTris, numIndexes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_copyAndAdjustUVsFromMesh(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Mesh*  mesh, int32_t  uvChannel, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uvsOut, ::Unity::Collections::NativeSlice_1<float_t>  uvsSliceIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*  meshChannelsCache, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_copyAndAdjustUVsFromMesh", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<float_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tbr, dgo, mesh, uvChannel, vertsIdx, uvsOut, uvsSliceIdx, meshChannelsCache, LOG_LEVEL, textureBakeResults);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_CopyAndAdjustUV2FromMesh(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*  meshChannelsCache, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_CopyAndAdjustUV2FromMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings, meshChannelsCache, dgo, vertsIdx, LOG_LEVEL);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, float_t  uv2UnwrappingParamsPackMargin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"CopyUV2unchangedToSeparateRects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mbDynamicObjectsInCombinedMesh, uv2UnwrappingParamsPackMargin);
}
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetSubmeshTrisWithShowHideApplied(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetSubmeshTrisWithShowHideApplied", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(*this, ___internal_method, mbDynamicObjectsInCombinedMesh);
}
inline ::ArrayW<int32_t> GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::GetTriangleSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"GetTriangleSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorld(::UnityEngine::Transform*  t, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dgoMeshVerts, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dgoMeshNorms, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dgoMeshTans, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorld", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t, doNorm, doTan, destStartVertsIdx, dgoMeshVerts, dgoMeshNorms, dgoMeshTans, verticies, normals, tangents);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorldMatrix_TRS(::by_ref<::UnityEngine::Matrix4x4>  wld_X_local, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshVerts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshNorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  dgoMeshTans, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorldMatrix_TRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wld_X_local, doNorm, doTan, destStartVertsIdx, dgoMeshVerts, dgoMeshNorms, dgoMeshTans, verticies, normals, tangents);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorld_TR(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshVerts_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshNorms_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  dgoMeshTans_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorld_TR", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wld_Rot_local, position_wld, doNorm, doTan, destStartVertsIdx, dgoMeshVerts_local, dgoMeshNorms_local, dgoMeshTans_local, verticies, normals, tangents);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::_LocalToWorld_TRS(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, ::UnityEngine::Vector3  scale, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshVerts_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  dgoMeshNorms_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  dgoMeshTans_local, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray>(),
                        {"_LocalToWorld_TRS", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wld_Rot_local, position_wld, scale, doNorm, doTan, destStartVertsIdx, dgoMeshVerts_local, dgoMeshNorms_local, dgoMeshTans_local, verticies, normals, tangents);
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr  GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::operator ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*()  {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IVertexAndTriangleProcessor()  {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isInitialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LOG_LEVEL", ty: "::DigitalOpus::MB::Core::MB2_LogLevel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_channels_k__BackingField", ty: "::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexAttributes", ty: "::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataArrayAllocated", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataArray", ty: "::GlobalNamespace::Mesh_MeshDataArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::Mesh_MeshData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "verticiesModified", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "verticies", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normals", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangents", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colors", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv0s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv2s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv3s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv4s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv5s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv6s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv7s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv8s", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvsSliceIdx", ty: "::Unity::Collections::NativeSlice_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvsWithExtraIndex", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "submeshTris", ty: "::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangleBuffer", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bufferStride_0", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bufferStride_1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bufferStride_2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rawSliceSizerType_0", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rawSliceSizerType_1", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rawSliceVertexStream_0", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rawSliceVertexStream_1", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray(bool  _disposed, bool  _isInitialized, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  _channels_k__BackingField, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  vertexAttributes, bool  dataArrayAllocated, ::GlobalNamespace::Mesh_MeshDataArray  dataArray, ::GlobalNamespace::Mesh_MeshData  data, int32_t  vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  verticiesModified, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verticies, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Color>  colors, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv0s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv2s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv3s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv4s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv5s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv6s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv7s, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector2>  uv8s, ::Unity::Collections::NativeSlice_1<float_t>  uvsSliceIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  uvsWithExtraIndex, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris, ::Unity::Collections::NativeArray_1<uint16_t>  triangleBuffer, int32_t  bufferStride_0, int32_t  bufferStride_1, int32_t  bufferStride_2, ::System::Type*  rawSliceSizerType_0, ::System::Type*  rawSliceSizerType_1, ::System::Object*  rawSliceVertexStream_0, ::System::Object*  rawSliceVertexStream_1) noexcept  {
this->_disposed = _disposed;
this->_isInitialized = _isInitialized;
this->LOG_LEVEL = LOG_LEVEL;
this->_channels_k__BackingField = _channels_k__BackingField;
this->vertexAttributes = vertexAttributes;
this->dataArrayAllocated = dataArrayAllocated;
this->dataArray = dataArray;
this->data = data;
this->vertexCount = vertexCount;
this->verticiesModified = verticiesModified;
this->verticies = verticies;
this->normals = normals;
this->tangents = tangents;
this->colors = colors;
this->uv0s = uv0s;
this->uv2s = uv2s;
this->uv3s = uv3s;
this->uv4s = uv4s;
this->uv5s = uv5s;
this->uv6s = uv6s;
this->uv7s = uv7s;
this->uv8s = uv8s;
this->uvsSliceIdx = uvsSliceIdx;
this->uvsWithExtraIndex = uvsWithExtraIndex;
this->submeshTris = submeshTris;
this->triangleBuffer = triangleBuffer;
this->bufferStride_0 = bufferStride_0;
this->bufferStride_1 = bufferStride_1;
this->bufferStride_2 = bufferStride_2;
this->rawSliceSizerType_0 = rawSliceSizerType_0;
this->rawSliceSizerType_1 = rawSliceSizerType_1;
this->rawSliceVertexStream_0 = rawSliceVertexStream_0;
this->rawSliceVertexStream_1 = rawSliceVertexStream_1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray::MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray()   {
}
