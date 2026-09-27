#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_VertexAndTriangleProcessor.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_VertexAndTriangleProcessor_def.hpp"
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
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.get_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::get_channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9da3ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"get_channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.set_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::set_channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9da3efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"set_channels", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::Dispose)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9da3f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9da400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9da4014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t, ::ArrayW<int32_t>, int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::Init)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x9da401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"Init", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.InitShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::InitShowHide)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9da476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"InitShowHide", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.InitFromMeshCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::InitFromMeshCombiner)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x9da4470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"InitFromMeshCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9da47a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetVertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.GetSubmeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetSubmeshCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9da47b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetSubmeshCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.TransferOwnershipOfSerializableBuffersToCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::TransferOwnershipOfSerializableBuffersToCombiner)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9da47d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"TransferOwnershipOfSerializableBuffersToCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.CopyArraysFromPreviousBakeBuffersToNewBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>, int32_t, int32_t, ::ArrayW<int32_t>, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::CopyArraysFromPreviousBakeBuffersToNewBuffers)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x9da4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"CopyArraysFromPreviousBakeBuffersToNewBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.CopyFromDGOMeshToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, bool, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*, ::ArrayW<int32_t>, ::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::CopyFromDGOMeshToBuffers)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x9da5140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"CopyFromDGOMeshToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.AssignBuffersToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AssignBuffersToMesh)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0x9da654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AssignBuffersToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.AssignTriangleDataForSubmeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AssignTriangleDataForSubmeshes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9da7134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AssignTriangleDataForSubmeshes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.AssignTriangleDataForSubmeshes_ShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AssignTriangleDataForSubmeshes_ShowHide)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9da7650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AssignTriangleDataForSubmeshes_ShowHide", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.AdjustVertsToWriteAccordingToPivotPositionIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB_MeshPivotLocation, ::DigitalOpus::MB::Core::MB_RenderType, bool, ::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AdjustVertsToWriteAccordingToPivotPositionIfNecessary)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x9da6e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AdjustVertsToWriteAccordingToPivotPositionIfNecessary", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshPivotLocation>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._NumNonZeroLengthSubmeshTris
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>, ::by_ref<int32_t>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_NumNonZeroLengthSubmeshTris)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9da75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_NumNonZeroLengthSubmeshTris", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._copyAndAdjustUVsFromMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Mesh*, int32_t, int32_t, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<float_t>, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::GlobalNamespace::MB2_TextureBakeResults*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_copyAndAdjustUVsFromMesh)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x9da5b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_copyAndAdjustUVsFromMesh", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._CopyAndAdjustUV2FromMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_CopyAndAdjustUV2FromMesh)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x9da60b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_CopyAndAdjustUV2FromMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.CopyUV2unchangedToSeparateRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, float_t)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::CopyUV2unchangedToSeparateRects)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x9da7654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"CopyUV2unchangedToSeparateRects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.GetSubmeshTrisWithShowHideApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetSubmeshTrisWithShowHideApplied)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x9da7204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetSubmeshTrisWithShowHideApplied", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor.GetTriangleSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetTriangleSizes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9da7ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetTriangleSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._LocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::*)(::UnityEngine::Transform*, bool, bool, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorld)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x9da5870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorld", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._LocalToWorldMatrix_TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, bool, bool, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorldMatrix_TRS)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9da7f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorldMatrix_TRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._LocalToWorld_TR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool, bool, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorld_TR)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9da7d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorld_TR", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor._LocalToWorld_TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, bool, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorld_TRS)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x9da8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorld_TRS", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::get_channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"get_channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::set_channels(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"set_channels", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  vertexCount, ::ArrayW<int32_t>  newSubmeshTrisSize, int32_t  uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, bool  loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"Init", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, combiner, newChannels, vertexCount, newSubmeshTrisSize, uvChannelWithExtraParameter, meshChannelsCache, loadDataFromCombinedMesh, logLevel);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"InitShowHide", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, combiner);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  uvChannelWithExtraParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"InitFromMeshCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, combiner, newChannels, uvChannelWithExtraParameter);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetVertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetVertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetSubmeshCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetSubmeshCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToTransfer, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  serializableBufferData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"TransferOwnershipOfSerializableBuffersToCombiner", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, c, channelsToTransfer, serializableBufferData);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  iOldBuffers, int32_t  destStartVertIdx, int32_t  triangleIdxAdjustment, ::ArrayW<int32_t>  targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"CopyArraysFromPreviousBakeBuffersToNewBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dgo, iOldBuffers, destStartVertIdx, triangleIdxAdjustment, targSubmeshTidx, LOG_LEVEL);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToUpdate, bool  updateTris, bool  updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  boneProcessor, ::ArrayW<int32_t>  targSubmeshTidx, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCacheParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"CopyFromDGOMeshToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dgo, destStartVertsIdx, channelsToUpdate, updateTris, updateBWdata, settings, boneProcessor, targSubmeshTidx, textureBakeResults, uvAdjuster, LOG_LEVEL, meshChannelCacheParam);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AssignBuffersToMesh(::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToWriteToMesh, bool  doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AssignBuffersToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, settings, textureBakeResults, channelsToWriteToMesh, doWriteTrisToMesh, assignToMeshCustomizer, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AssignTriangleDataForSubmeshes(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AssignTriangleDataForSubmeshes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AssignTriangleDataForSubmeshes_ShowHide", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::AdjustVertsToWriteAccordingToPivotPositionIfNecessary(::DigitalOpus::MB::Core::MB_MeshPivotLocation  pivotLocationType, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  clearBuffersAfterBake, ::UnityEngine::Vector3  pivotLocation_wld, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  verts2Write)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"AdjustVertsToWriteAccordingToPivotPositionIfNecessary", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshPivotLocation>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pivotLocationType, renderType, clearBuffersAfterBake, pivotLocation_wld, serializableBufferData, verts2Write);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_NumNonZeroLengthSubmeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  subTris, ::by_ref<int32_t>  numIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_NumNonZeroLengthSubmeshTris", {}, {::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, subTris, numIndexes);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_copyAndAdjustUVsFromMesh(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Mesh*  mesh, int32_t  uvChannel, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector2>  uvsOut, ::ArrayW<float_t>  uvsSliceIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*  meshChannelsCache, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_copyAndAdjustUVsFromMesh", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tbr, dgo, mesh, uvChannel, vertsIdx, uvsOut, uvsSliceIdx, meshChannelsCache, LOG_LEVEL, textureBakeResults);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_CopyAndAdjustUV2FromMesh(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*  meshChannelsCache, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_CopyAndAdjustUV2FromMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings, meshChannelsCache, dgo, vertsIdx, LOG_LEVEL);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, float_t  uv2UnwrappingParamsPackMargin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"CopyUV2unchangedToSeparateRects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mbDynamicObjectsInCombinedMesh, uv2UnwrappingParamsPackMargin);
}
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetSubmeshTrisWithShowHideApplied(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetSubmeshTrisWithShowHideApplied", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(*this, ___internal_method, mbDynamicObjectsInCombinedMesh);
}
inline ::ArrayW<int32_t> GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::GetTriangleSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"GetTriangleSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorld(::UnityEngine::Transform*  t, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorld", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t, doNorm, doTan, destStartVertsIdx, dgoMeshVerts, dgoMeshNorms, dgoMeshTans, verticies, normals, tangents);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorldMatrix_TRS(::by_ref<::UnityEngine::Matrix4x4>  wld_X_local, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorldMatrix_TRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wld_X_local, doNorm, doTan, destStartVertsIdx, dgoMeshVerts, dgoMeshNorms, dgoMeshTans, verticies, normals, tangents);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorld_TR(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts_local, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms_local, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans_local, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorld_TR", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wld_Rot_local, position_wld, doNorm, doTan, destStartVertsIdx, dgoMeshVerts_local, dgoMeshNorms_local, dgoMeshTans_local, verticies, normals, tangents);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::_LocalToWorld_TRS(::UnityEngine::Quaternion  wld_Rot_local, ::UnityEngine::Vector3  position_wld, ::UnityEngine::Vector3  scale, bool  doNorm, bool  doTan, int32_t  destStartVertsIdx, ::ArrayW<::UnityEngine::Vector3>  dgoMeshVerts_local, ::ArrayW<::UnityEngine::Vector3>  dgoMeshNorms_local, ::ArrayW<::UnityEngine::Vector4>  dgoMeshTans_local, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor>(),
                        {"_LocalToWorld_TRS", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wld_Rot_local, position_wld, scale, doNorm, doTan, destStartVertsIdx, dgoMeshVerts_local, dgoMeshNorms_local, dgoMeshTans_local, verticies, normals, tangents);
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr  GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::operator ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*()  {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IVertexAndTriangleProcessor()  {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isInitialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LOG_LEVEL", ty: "::DigitalOpus::MB::Core::MB2_LogLevel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_channels_k__BackingField", ty: "::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "verticies", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv0s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvsSliceIdx", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv2s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv3s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv4s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv5s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv6s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv7s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv8s", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "submeshTris", ty: "::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::MB3_MeshCombinerSingle_VertexAndTriangleProcessor(bool  _disposed, bool  _isInitialized, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  _channels_k__BackingField, ::ArrayW<::UnityEngine::Vector3>  verticies, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<::UnityEngine::Vector2>  uv0s, ::ArrayW<float_t>  uvsSliceIdx, ::ArrayW<::UnityEngine::Vector2>  uv2s, ::ArrayW<::UnityEngine::Vector2>  uv3s, ::ArrayW<::UnityEngine::Vector2>  uv4s, ::ArrayW<::UnityEngine::Vector2>  uv5s, ::ArrayW<::UnityEngine::Vector2>  uv6s, ::ArrayW<::UnityEngine::Vector2>  uv7s, ::ArrayW<::UnityEngine::Vector2>  uv8s, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  submeshTris) noexcept  {
this->_disposed = _disposed;
this->_isInitialized = _isInitialized;
this->LOG_LEVEL = LOG_LEVEL;
this->_channels_k__BackingField = _channels_k__BackingField;
this->verticies = verticies;
this->normals = normals;
this->tangents = tangents;
this->colors = colors;
this->uv0s = uv0s;
this->uvsSliceIdx = uvsSliceIdx;
this->uv2s = uv2s;
this->uv3s = uv3s;
this->uv4s = uv4s;
this->uv5s = uv5s;
this->uv6s = uv6s;
this->uv7s = uv7s;
this->uv8s = uv8s;
this->submeshTris = submeshTris;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_VertexAndTriangleProcessor::MB3_MeshCombinerSingle_VertexAndTriangleProcessor()   {
}
