#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneAndBindpose_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneWeightDataForMesh_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BufferDataFromPreviousBake_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_MeshCreationConditions_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MaterialAndUVRect_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight1_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneAndBindpose_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneWeightDataForMesh_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BufferDataFromPreviousBake_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_MeshCreationConditions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_VertexAndTriangleProcessorNativeArray_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_VertexAndTriangleProcessor_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshCombinerSingle_BoneProcessor_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_Utility_MeshAnalysisResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__SerializableSourceBlendShape2Combined_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Specialized/zzzz__OrderedDictionary_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.StartProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::StartProfile)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d86748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"StartProfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.PrintProfileInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::PrintProfileInfo)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x9d867a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"PrintProfileInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Dispose)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9d86b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.set_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::set_textureBakeResults)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9d86dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.set_renderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::DigitalOpus::MB::Core::MB_RenderType)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::set_renderType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d86f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.set_resultSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::set_resultSceneObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d86fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d86f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"GetVertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapGet)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d87120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapGet", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapAdd)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d87178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapAdd", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapRemove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d871e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapRemove", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapTryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapTryGetValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d87238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapTryGetValue", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d872a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapClear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d872f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.instance2Combined_MapContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapContainsKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d87340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapContainsKey", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.InstanceID2DGO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(int32_t, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::InstanceID2DGO)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9d87398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"InstanceID2DGO", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetNumObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetNumObjectsInCombined)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d87588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 111}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetObjectsInCombined)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d875d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 110}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetMesh)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d87670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"GetMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.SetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SetMesh)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d87788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"SetMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d87818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"GetBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetLightmapIndex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d87820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_Initialize)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x9d8795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._collectMaterialTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::ArrayW<::UnityEngine::Material*>, ::System::Collections::Specialized::OrderedDictionary*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_collectMaterialTriangles)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x9d87c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_collectMaterialTriangles", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._collectOutOfBoundsUVRects2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::ArrayW<::UnityEngine::Material*>, ::System::Collections::Specialized::OrderedDictionary*, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_collectOutOfBoundsUVRects2)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x9d88314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_collectOutOfBoundsUVRects2", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._validateTextureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_validateTextureBakeResults)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9d88684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_validateTextureBakeResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._ShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_ShowHide)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x9d887ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_ShowHide", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._AddToCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_AddToCombined)> {
  constexpr static std::size_t size = 0x1094;
  constexpr static std::size_t addrs = 0x9d88de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_AddToCombined", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.__AddToCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool, int32_t, ::System::Collections::Specialized::OrderedDictionary*, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Diagnostics::Stopwatch*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__AddToCombined)> {
  constexpr static std::size_t size = 0x1bec;
  constexpr static std::size_t addrs = 0x9d8a68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"__AddToCombined", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._getBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::Renderer*, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_getBones)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d8c834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_getBones", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Apply)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d8c844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 113}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.ApplyShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ApplyShowHide)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d8c8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 129}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Apply)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d8c8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Apply)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9d8c9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 114}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateGameObjects)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d8cb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 118}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9d8d668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 119}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_UpdateGameObjects)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0x9d8cbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_UpdateGameObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.__UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, bool, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*, ::System::Collections::Specialized::OrderedDictionary*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__UpdateGameObjects)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x9d8d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"__UpdateGameObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.ShowHideGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ShowHideGameObjects)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9d8df38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"ShowHideGameObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.AddDeleteGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::AddDeleteGameObjects)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d8e054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.AddDeleteGameObjectsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::AddDeleteGameObjectsByID)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x9d8e26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.CombinedMeshContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::CombinedMeshContains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d8e9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.ClearBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ClearBuffers)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x9d8ea50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._NewMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_NewMesh)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d876f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_NewMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ClearMesh)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d8f018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ClearMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d8f0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._DisposeRuntimeCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_DisposeRuntimeCreated)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d8f0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.DestroyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::DestroyMesh)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9d8f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.DestroyMeshEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::DestroyMeshEditor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9d8f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 109}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.ValidateTargRendererAndMeshAndResultSceneObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ValidateTargRendererAndMeshAndResultSceneObj)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x9d89e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"ValidateTargRendererAndMeshAndResultSceneObj", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.BuildSourceMatsToSubmeshIdxMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::OrderedDictionary* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BuildSourceMatsToSubmeshIdxMap)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9d8a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"BuildSourceMatsToSubmeshIdxMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.BuildSceneHierarchPreBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::GameObject*, ::UnityEngine::Mesh*, bool, ::ArrayW<::UnityEngine::GameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BuildSceneHierarchPreBake)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x9d8f4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"BuildSceneHierarchPreBake", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._ConfigureSceneHierarch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*, ::UnityEngine::MeshFilter*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::GameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_ConfigureSceneHierarch)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x9d8fe74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_ConfigureSceneHierarch", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._SetLightmapIndexIfPreserveLightmapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::Renderer*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_SetLightmapIndexIfPreserveLightmapping)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9d902ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_SetLightmapIndexIfPreserveLightmapping", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.BuildSceneMeshObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::ArrayW<::UnityEngine::GameObject*>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BuildSceneMeshObject)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9d8e8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"BuildSceneMeshObject", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.IsMirrored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(::UnityEngine::Matrix4x4)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::IsMirrored)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9d8c580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"IsMirrored", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.CheckIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::CheckIntegrity)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9d90470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.GetMaterialsOnTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetMaterialsOnTargetRenderer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d90684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 128}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._UseNativeArrayAPIorNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_UseNativeArrayAPIorNot)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d88c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_UseNativeArrayAPIorNot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Create_BoneProcessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Create_BoneProcessor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d8a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"Create_BoneProcessor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Create_VertexAndTriangleProcessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* (*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Create_VertexAndTriangleProcessor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d88d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"Create_VertexAndTriangleProcessor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.Create_MeshChannelsCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* (*)(bool, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB2_LightmapOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Create_MeshChannelsCache)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d8a52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"Create_MeshChannelsCache", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LightmapOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.UpdateSkinnedMeshApproximateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateSkinnedMeshApproximateBounds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d90b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 123}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.UpdateSkinnedMeshApproximateBoundsFromBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateSkinnedMeshApproximateBoundsFromBones)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x9d90b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle.UpdateSkinnedMeshApproximateBoundsFromBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateSkinnedMeshApproximateBoundsFromBounds)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x9d90e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._UpdateMaterialsOnTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MB2_TextureBakeResults*, ::UnityEngine::Renderer*, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_UpdateMaterialsOnTargetRenderer)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9d91134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_UpdateMaterialsOnTargetRenderer", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_ctor)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x9d91348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_showHideGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_showHideGameObjects;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_showHideGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_showHideGameObjects;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_showHideGameObjects(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_showHideGameObjects = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_CollectMeshData = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_a()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData_a;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_a() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData_a;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_a(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_CollectMeshData_a = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_b()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData_b;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_b() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData_b;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_b(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_CollectMeshData_b = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_c()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData_c;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CollectMeshData_c() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CollectMeshData_c;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_CollectMeshData_c(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_CollectMeshData_c = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_InitFromMeshCombiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_InitFromMeshCombiner;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_InitFromMeshCombiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_InitFromMeshCombiner;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_InitFromMeshCombiner(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_InitFromMeshCombiner = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_Init()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_Init;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_Init() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_Init;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_Init(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_Init = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CopyFromDGOMeshToBuffers;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_addDeleteGameObjects_CopyFromDGOMeshToBuffers;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_addDeleteGameObjects_CopyFromDGOMeshToBuffers(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_addDeleteGameObjects_CopyFromDGOMeshToBuffers = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_apply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_apply;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_apply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_apply;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_apply(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_apply = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_applyShowHide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_applyShowHide;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_applyShowHide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_applyShowHide;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_applyShowHide(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_applyShowHide = value;
}
constexpr ::System::Diagnostics::Stopwatch*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_updateGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_updateGameObjects;
}
constexpr ::System::Diagnostics::Stopwatch* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_db_updateGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___db_updateGameObjects;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_db_updateGameObjects(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___db_updateGameObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_objectsInCombinedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsInCombinedMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_objectsInCombinedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsInCombinedMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_objectsInCombinedMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsInCombinedMesh = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_lightmapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapIndex;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_lightmapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapIndex;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_lightmapIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_mbDynamicObjectsInCombinedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mbDynamicObjectsInCombinedMesh;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_mbDynamicObjectsInCombinedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mbDynamicObjectsInCombinedMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_mbDynamicObjectsInCombinedMesh(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mbDynamicObjectsInCombinedMesh = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__instance2combined_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance2combined_map;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__instance2combined_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance2combined_map;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__instance2combined_map(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance2combined_map = value;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_channelsLastBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelsLastBake;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_channelsLastBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelsLastBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_channelsLastBake(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelsLastBake = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_verts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_verts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verts = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_tangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_tangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uvs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvs;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uvs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvs;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uvs(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uvs = value;
}
constexpr ::ArrayW<float_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uvsSliceIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvsSliceIdx;
}
constexpr ::ArrayW<float_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uvsSliceIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvsSliceIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uvsSliceIdx(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uvsSliceIdx = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv2s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv2s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv2s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv2s = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv3s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv3s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv3s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv3s = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv4s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv4s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv4s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv4s = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv5s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv5s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv5s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv5s = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv6s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv6s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv6s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv6s = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv7s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv7s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv7s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv7s = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv8s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8s;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_uv8s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8s;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_uv8s(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv8s = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_colors(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_submeshTris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshTris;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_submeshTris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshTris;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_submeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshTris = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_bindPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindPoses;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_bindPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindPoses;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_bindPoses(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bindPoses = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_blendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapes;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_blendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_blendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapes = value;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_bufferDataFromPrevious()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferDataFromPrevious;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_bufferDataFromPrevious() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferDataFromPrevious;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_bufferDataFromPrevious(::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferDataFromPrevious = value;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__meshBirth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBirth;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__meshBirth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshBirth;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__meshBirth(::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshBirth = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__vertexAndTriProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertexAndTriProcessor;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__vertexAndTriProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertexAndTriProcessor;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__vertexAndTriProcessor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vertexAndTriProcessor = value;
}
constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__boneProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneProcessor;
}
constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__boneProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boneProcessor;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__boneProcessor(::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boneProcessor = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__blendShapeProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeProcessor;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__blendShapeProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blendShapeProcessor;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__blendShapeProcessor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blendShapeProcessor = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__meshChannelsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshChannelsCache;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get__meshChannelsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshChannelsCache;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set__meshChannelsCache(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshChannelsCache = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_empty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___empty;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_empty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___empty;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_empty(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___empty = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_emptyIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyIDs;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_get_emptyIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyIDs;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__cordl_internal_set_emptyIDs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyIDs = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::StartProfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"StartProfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::PrintProfileInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"PrintProfileInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::set_resultSceneObject(::UnityEngine::GameObject*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetVertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"GetVertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapGet(::UnityEngine::GameObject*  gameObjectID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapGet", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(this, ___internal_method, gameObjectID);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapAdd(::UnityEngine::GameObject*  gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapAdd", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObjectID, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapRemove(::UnityEngine::GameObject*  gameObjectID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapRemove", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObjectID);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapTryGetValue(::UnityEngine::GameObject*  gameObjectID, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapTryGetValue", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObjectID, dgo);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::instance2Combined_MapContainsKey(::UnityEngine::GameObject*  gameObjectID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"instance2Combined_MapContainsKey", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObjectID);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::InstanceID2DGO(int32_t  instanceID, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>  dgoGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"InstanceID2DGO", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceID, dgoGameObject);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetNumObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 111}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 110}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"GetMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SetMesh(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"SetMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshCombinerSingle_MeshCreationConditions>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"GetBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetLightmapIndex()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_Initialize(int32_t  numResultMats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_Initialize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, numResultMats);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_collectMaterialTriangles(::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::ArrayW<::UnityEngine::Material*>  sharedMaterials, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_collectMaterialTriangles", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m, dgo, sharedMaterials, sourceMats2submeshIdx_map);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_collectOutOfBoundsUVRects2(::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::ArrayW<::UnityEngine::Material*>  sharedMaterials, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_collectOutOfBoundsUVRects2", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m, dgo, sharedMaterials, sourceMats2submeshIdx_map, meshAnalysisResults);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_validateTextureBakeResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_validateTextureBakeResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_ShowHide(::ArrayW<::UnityEngine::GameObject*>  goToShow, ::ArrayW<::UnityEngine::GameObject*>  goToHide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_ShowHide", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, goToShow, goToHide);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_AddToCombined(::ArrayW<::UnityEngine::GameObject*>  goToAdd, ::ArrayW<int32_t>  goToDelete, bool  disableRendererInSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_AddToCombined", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, goToAdd, goToDelete, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__AddToCombined(::ArrayW<::UnityEngine::GameObject*>  _goToAdd, ::ArrayW<int32_t>  _goToDelete, bool  disableRendererInSource, int32_t  numResultMats, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  oldMeshData, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::System::Diagnostics::Stopwatch*  sw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"__AddToCombined", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _goToAdd, _goToDelete, disableRendererInSource, numResultMats, sourceMats2submeshIdx_map, oldMeshData, newChannels, sw);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_getBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_getBones", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method, r, isSkinnedMeshWithBones);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 113}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uv2GenerationMethod);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ApplyShowHide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 129}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 114}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapesFlag, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 118}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 119}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_UpdateGameObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::__UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uVAdjuster)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"__UpdateGameObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, newChannels, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo, meshAnalysisResultsCache, sourceMats2submeshIdx_map, uVAdjuster);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ShowHideGameObjects(::ArrayW<::UnityEngine::GameObject*>  toShow, ::ArrayW<::UnityEngine::GameObject*>  toHide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"ShowHideGameObjects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toShow, toHide);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::CombinedMeshContains(::UnityEngine::GameObject*  go)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ClearBuffers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_NewMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_NewMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ClearMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_DisposeRuntimeCreated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::DestroyMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 109}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::ValidateTargRendererAndMeshAndResultSceneObj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"ValidateTargRendererAndMeshAndResultSceneObj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Specialized::OrderedDictionary* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BuildSourceMatsToSubmeshIdxMap(int32_t  numResultMats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"BuildSourceMatsToSubmeshIdxMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::OrderedDictionary*>(this, ___internal_method, numResultMats);
}
inline ::UnityW<::UnityEngine::Renderer> DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BuildSceneHierarchPreBake(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  mom, ::UnityEngine::GameObject*  root, ::UnityEngine::Mesh*  m, bool  createNewChild, ::ArrayW<::UnityEngine::GameObject*>  objsToBeAdded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"BuildSceneHierarchPreBake", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method, mom, root, m, createNewChild, objsToBeAdded);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_ConfigureSceneHierarch(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  mom, ::UnityEngine::GameObject*  root, ::UnityEngine::MeshRenderer*  mr, ::UnityEngine::MeshFilter*  mf, ::UnityEngine::SkinnedMeshRenderer*  smr, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::GameObject*>  objsToBeAdded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_ConfigureSceneHierarch", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mom, root, mr, mf, smr, m, objsToBeAdded);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_SetLightmapIndexIfPreserveLightmapping(::UnityEngine::Renderer*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_SetLightmapIndexIfPreserveLightmapping", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tr);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BuildSceneMeshObject(::ArrayW<::UnityEngine::GameObject*>  gos, bool  createNewChild)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"BuildSceneMeshObject", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gos, createNewChild);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::IsMirrored(::UnityEngine::Matrix4x4  tm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"IsMirrored", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tm);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::CheckIntegrity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::GetMaterialsOnTargetRenderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 128}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_UseNativeArrayAPIorNot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_UseNativeArrayAPIorNot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Create_BoneProcessor(bool  doNativeArrays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"Create_BoneProcessor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(this, ___internal_method, doNativeArrays);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Create_VertexAndTriangleProcessor(bool  doNativeArrays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"Create_VertexAndTriangleProcessor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(nullptr, ___internal_method, doNativeArrays);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::Create_MeshChannelsCache(bool  doNativeArrays, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lightmapOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"Create_MeshChannelsCache", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LightmapOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(nullptr, ___internal_method, doNativeArrays, LOG_LEVEL, lightmapOption);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateSkinnedMeshApproximateBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 123}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateSkinnedMeshApproximateBoundsFromBones()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UpdateSkinnedMeshApproximateBoundsFromBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_UpdateMaterialsOnTargetRenderer(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::UnityEngine::Renderer*  targetRenderer, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  subTris, int32_t  numNonZeroLengthSubmeshTris)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {"_UpdateMaterialsOnTargetRenderer", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textureBakeResults, targetRenderer, subTris, numNonZeroLengthSubmeshTris);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* DigitalOpus::MB::Core::MB3_MeshCombinerSingle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB3_MeshCombinerSingle()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0.___AddToCombined_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::___AddToCombined_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9db7694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*>(),
                        {"<__AddToCombined>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_get__goToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____goToAdd;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_get__goToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____goToAdd;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_set__goToAdd(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____goToAdd = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
constexpr ::System::Predicate_1<int32_t>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Predicate_1<int32_t>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::__cordl_internal_set___9__0(::System::Predicate_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::___AddToCombined_b__0(int32_t  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*>(),
                        {"<__AddToCombined>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0* DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0::MB3_MeshCombinerSingle___c__DisplayClass74_0()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9da8a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray.IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dab6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                        {"IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::Dispose)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9dab6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9da9ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_vertcies_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertcies_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_vertcies_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertcies_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_vertcies_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertcies_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_normals_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_normals_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_normals_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_tangents_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_tangents_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_tangents_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_colors_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_colors_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_colors_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv0raw_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0raw_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv0raw_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0raw_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv0raw_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv0raw_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv0modified_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0modified_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv0modified_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0modified_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv0modified_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv0modified_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv2raw_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2raw_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv2raw_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2raw_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv2raw_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv2raw_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv2modified_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2modified_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv2modified_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2modified_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv2modified_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv2modified_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv3_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv3_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv3_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv3_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv4_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv4_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv4_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv4_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv5_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv5_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv5_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv5_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv6_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv6_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv6_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv6_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv7_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv7_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv7_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv7_NativeArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv8_NativeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8_NativeArray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_uv8_NativeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8_NativeArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_uv8_NativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv8_NativeArray = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_bindPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindPoses;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_bindPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindPoses;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_bindPoses(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bindPoses = value;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_boneWeightData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeightData;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_boneWeightData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeightData;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_boneWeightData(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneWeightData = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_blendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapes;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_get_blendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::__cordl_internal_set_blendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapes = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                        {"IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray::MB3_MeshCombinerSingle_MeshChannelsNativeArray()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB2_LightmapOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9da8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LightmapOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9da88c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::Dispose)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9da88d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.HasCollectedMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::HasCollectedMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9da8a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"HasCollectedMeshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9da8a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetVerticiesAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetVerticiesAsNativeArray)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9da8b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetVerticiesAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetNormalsAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetNormalsAsNativeArray)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9da8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetNormalsAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetTangentsAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetTangentsAsNativeArray)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9da8d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetTangentsAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetUv0RawAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv0RawAsNativeArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9da8a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv0RawAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetUv0ModifiedAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv0ModifiedAsNativeArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9da8e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv0ModifiedAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetUv2ModifiedAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv2ModifiedAsNativeArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9da8f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv2ModifiedAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetUVChannelAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(int32_t, ::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUVChannelAsNativeArray)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x9da8fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUVChannelAsNativeArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetColorsAsNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Color> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetColorsAsNativeArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9da91dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetColorsAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.CollectChannelDataForAllMeshesInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::DigitalOpus::MB::Core::MB_RenderType, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::CollectChannelDataForAllMeshesInList)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x9da9268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"CollectChannelDataForAllMeshesInList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetBindposes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Renderer*, ::by_ref<bool>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetBindposes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9daaaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetBindposes", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetBoneWeightData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Renderer*, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetBoneWeightData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9daabc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetBoneWeightData", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetBlendShapes)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9daac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getMeshColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshColors)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9daa1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshColors", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getMeshNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshNormals)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9da9cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshNormals", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getMeshTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshTangents)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9da9f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshTangents", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getMeshUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshUVs)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9da9b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getMeshUV2s
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshUV2s)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9da9c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshUV2s", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getBindPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::by_ref<bool>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getBindPoses)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x9daa3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getBindPoses", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getBoneWeightData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>, ::UnityEngine::Renderer*, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getBoneWeightData)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x9daa728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getBoneWeightData", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray.GetUv0Raw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv0Raw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9daae98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv0Raw", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._getBoneWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (*)(::UnityEngine::Renderer*, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getBoneWeights)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9dab44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getBoneWeights", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray._generateTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::*)(::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Vector3>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_generateTangents)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x9daaf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_generateTangents", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get_lightmapOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapOption;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get_lightmapOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapOption;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapOption = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get_meshID2MeshChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshID2MeshChannels;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get_meshID2MeshChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshID2MeshChannels;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_set_meshID2MeshChannels(::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsNativeArray*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshID2MeshChannels = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get__collectedMeshData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectedMeshData;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get__collectedMeshData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectedMeshData;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_set__collectedMeshData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collectedMeshData = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::UnityEngine::Vector2& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get__HALF_UV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HALF_UV;
}
constexpr ::UnityEngine::Vector2 const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_get__HALF_UV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HALF_UV;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::__cordl_internal_set__HALF_UV(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HALF_UV = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LightmapOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ll, lo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::HasCollectedMeshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"HasCollectedMeshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar, int32_t  submeshIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m, mar, submeshIdx);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetVerticiesAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetVerticiesAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetNormalsAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetNormalsAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetTangentsAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetTangentsAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>(this, ___internal_method, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv0RawAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv0RawAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv0ModifiedAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv0ModifiedAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv2ModifiedAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv2ModifiedAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUVChannelAsNativeArray(int32_t  channel, ::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUVChannelAsNativeArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(this, ___internal_method, channel, m);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Color> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetColorsAsNativeArray(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetColorsAsNativeArray", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>(this, ___internal_method, m);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  doBlendShapes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"CollectChannelDataForAllMeshesInList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toUpdateDGOs, toAddDGOs, newChannels, renderType, doBlendShapes);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetBindposes(::UnityEngine::Renderer*  r, ::by_ref<bool>  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetBindposes", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(this, ___internal_method, r, isSkinnedMeshWithBones);
}
inline ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetBoneWeightData(::UnityEngine::Renderer*  r, int32_t  numbones, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetBoneWeightData", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>(this, ___internal_method, r, numbones, isSkinnedMeshWithBones);
}
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetBlendShapes(::UnityEngine::Mesh*  m, int32_t  gameObjectID, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>>(this, ___internal_method, m, gameObjectID, gameObject);
}
inline ::ArrayW<::UnityEngine::Color> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshColors(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshColors", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector3> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshNormals(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshNormals", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector4> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshTangents(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshTangents", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshUVs(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getMeshUV2s(::UnityEngine::Mesh*  m, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>  uv2modified)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getMeshUV2s", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m, uv2modified);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getBindPoses(::UnityEngine::Renderer*  r, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  poses, ::by_ref<bool>  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getBindPoses", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, poses, isSkinnedMeshWithBones);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getBoneWeightData(::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>  bwd, ::UnityEngine::Renderer*  r, int32_t  numBones, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getBoneWeightData", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bwd, r, numBones, isSkinnedMeshWithBones);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::GetUv0Raw(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"GetUv0Raw", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::BoneWeight> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_getBoneWeights(::UnityEngine::Renderer*  r, int32_t  numVertsInMeshBeingAdded, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_getBoneWeights", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoneWeight>>(nullptr, ___internal_method, r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::_generateTangents(::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Vector3>  verts, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uvs, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  outTangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(),
                        {"_generateTangents", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, verts, uvs, normals, outTangents);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>(ll, lo));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::operator ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::*)(::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9da2810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas.MapSharedMaterialsToAtlasRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::*)(::ArrayW<::UnityEngine::Material*>, bool, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*, ::System::Collections::Specialized::OrderedDictionary*, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::MapSharedMaterialsToAtlasRects)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0x9da2ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {"MapSharedMaterialsToAtlasRects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas.IsSameMaterialInTextureBakeResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::IsSameMaterialInTextureBakeResult)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9da33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {"IsSameMaterialInTextureBakeResult", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas.TryMapMaterialToUVRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::*)(::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t, int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*, ::by_ref<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, ::by_ref<int32_t>, ::by_ref<::StringW>, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::TryMapMaterialToUVRect)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x9da34e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {"TryMapMaterialToUVRect", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_textureBakeResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBakeResults;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_textureBakeResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBakeResults;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_set_textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureBakeResults = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_numTimesMatAppearsInAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTimesMatAppearsInAtlas;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_numTimesMatAppearsInAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTimesMatAppearsInAtlas;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_set_numTimesMatAppearsInAtlas(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numTimesMatAppearsInAtlas = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_matsAndSrcUVRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matsAndSrcUVRect;
}
constexpr ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_matsAndSrcUVRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matsAndSrcUVRect;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_set_matsAndSrcUVRect(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matsAndSrcUVRect = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_compareNamesWhenComparingMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compareNamesWhenComparingMaterials;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_get_compareNamesWhenComparingMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compareNamesWhenComparingMaterials;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::__cordl_internal_set_compareNamesWhenComparingMaterials(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compareNamesWhenComparingMaterials = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::_ctor(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB2_LogLevel  ll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbr, ll);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::MapSharedMaterialsToAtlasRects(::ArrayW<::UnityEngine::Material*>  sharedMaterials, bool  checkTargetSubmeshIdxsFromPreviousBake, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary*  sourceMats2submeshIdx_map, ::UnityEngine::GameObject*  go, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgoOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {"MapSharedMaterialsToAtlasRects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>(), ::i2c::type_of<::System::Collections::Specialized::OrderedDictionary*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sharedMaterials, checkTargetSubmeshIdxsFromPreviousBake, m, meshChannelsCache, meshAnalysisResultsCache, sourceMats2submeshIdx_map, go, dgoOut);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::IsSameMaterialInTextureBakeResult(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {"IsSameMaterialInTextureBakeResult", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::TryMapMaterialToUVRect(::UnityEngine::Material*  mat, ::UnityEngine::Mesh*  m, int32_t  submeshIdx, int32_t  idxInResultMats, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCache, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*  meshAnalysisCache, ::by_ref<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>  tilingTreatment, ::by_ref<::UnityEngine::Rect>  rectInAtlas, ::by_ref<::UnityEngine::Rect>  encapsulatingRectOut, ::by_ref<::UnityEngine::Rect>  sourceMaterialTilingOut, ::by_ref<int32_t>  sliceIdx, ::by_ref<::StringW>  errorMsg, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(),
                        {"TryMapMaterialToUVRect", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mat, m, submeshIdx, idxInResultMats, meshChannelCache, meshAnalysisCache, tilingTreatment, rectInAtlas, encapsulatingRectOut, sourceMaterialTilingOut, sliceIdx, errorMsg, logLevel);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::New_ctor(::GlobalNamespace::MB2_TextureBakeResults*  tbr, ::DigitalOpus::MB::Core::MB2_LogLevel  ll)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(tbr, ll));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas::MB3_MeshCombinerSingle_UVAdjuster_Atlas()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner.instance2Combined_MapAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::instance2Combined_MapAdd)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d9cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"instance2Combined_MapAdd", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner.instance2Combined_MapRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>, ::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::instance2Combined_MapRemove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d9cf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"instance2Combined_MapRemove", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner._ShowHideGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_ShowHideGameObjects)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d9cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"_ShowHideGameObjects", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner._AddToCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::ArrayW<::UnityEngine::GameObject*>, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>, ::System::Diagnostics::Stopwatch*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_AddToCombined)> {
  constexpr static std::size_t size = 0x2160;
  constexpr static std::size_t addrs = 0x9d9d074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"_AddToCombined", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner._UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_UpdateGameObjects)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x9d9f1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"_UpdateGameObjects", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::Apply)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x9d9fa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"Apply", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::Apply)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9da2134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"Apply", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::Apply)> {
  constexpr static std::size_t size = 0x20cc;
  constexpr static std::size_t addrs = 0x9da0068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"Apply", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner.ApplyShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::ApplyShowHide)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x9da218c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"ApplyShowHide", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9da2808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::instance2Combined_MapAdd(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  _instance2combined_map, ::UnityEngine::GameObject*  gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"instance2Combined_MapAdd", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _instance2combined_map, gameObjectID, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::instance2Combined_MapRemove(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  _instance2combined_map, ::UnityEngine::GameObject*  gameObjectID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"instance2Combined_MapRemove", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _instance2combined_map, gameObjectID);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_ShowHideGameObjects(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"_ShowHideGameObjects", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_AddToCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  totalAddVerts, int32_t  totalDeleteVerts, int32_t  numResultMats, int32_t  totalAddBlendShapes, int32_t  totalDeleteBlendShapes, ::ArrayW<int32_t>  totalAddSubmeshTris, ::ArrayW<int32_t>  totalDeleteSubmeshTris, ::ArrayW<int32_t>  _goToDelete, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::ArrayW<::UnityEngine::GameObject*>  _goToAdd, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  oldMeshData, ::System::Diagnostics::Stopwatch*  sw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"_AddToCombined", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>>(), ::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, newChannels, totalAddVerts, totalDeleteVerts, numResultMats, totalAddBlendShapes, totalDeleteBlendShapes, totalAddSubmeshTris, totalDeleteSubmeshTris, _goToDelete, toAddDGOs, _goToAdd, uvAdjuster, oldMeshData, sw);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_UpdateGameObjects(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosToUpdate, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uVAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"_UpdateGameObjects", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, combiner, dgosToUpdate, newChannels, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo, uVAdjuster, LOG_LEVEL);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"Apply", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, combiner, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"Apply", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, combiner, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::Apply(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapesFlag, bool  suppressClearMesh, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"Apply", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, combiner, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapesFlag, suppressClearMesh, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::ApplyShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {"ApplyShowHide", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, combiner);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_SubCombiner()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.get_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::get_channels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::IsInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::IsDisposed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t, ::ArrayW<int32_t>, int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.InitShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::InitShowHide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.InitFromMeshCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::InitFromMeshCombiner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::GetVertexCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.GetSubmeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::GetSubmeshCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.TransferOwnershipOfSerializableBuffersToCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::TransferOwnershipOfSerializableBuffersToCombiner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.CopyArraysFromPreviousBakeBuffersToNewBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>, int32_t, int32_t, ::ArrayW<int32_t>, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::CopyArraysFromPreviousBakeBuffersToNewBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.CopyFromDGOMeshToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, bool, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*, ::ArrayW<int32_t>, ::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::CopyFromDGOMeshToBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.AssignBuffersToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, bool, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::AssignBuffersToMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.AssignTriangleDataForSubmeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::AssignTriangleDataForSubmeshes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.AssignTriangleDataForSubmeshes_ShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>, ::by_ref<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::AssignTriangleDataForSubmeshes_ShowHide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.CopyUV2unchangedToSeparateRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, float_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::CopyUV2unchangedToSeparateRects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor.GetTriangleSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::GetTriangleSizes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 15}
                ));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::get_channels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::IsInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::IsDisposed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  vertexCount, ::ArrayW<int32_t>  newSubmeshTrisSize, int32_t  uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelsCache, bool  loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combiner, newChannels, vertexCount, newSubmeshTrisSize, uvChannelWithExtraParameter, meshChannelsCache, loadDataFromCombinedMesh, logLevel);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combiner);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, int32_t  uvChannelWithExtraParameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combiner, newChannels, uvChannelWithExtraParameter);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::GetVertexCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::GetSubmeshCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToTransfer, ::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake  serializableBufferData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, channelsToTransfer, serializableBufferData);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::by_ref<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>  iOldBuffers, int32_t  destStartVertIdx, int32_t  triangleIdxAdjustment, ::ArrayW<int32_t>  targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, iOldBuffers, destStartVertIdx, triangleIdxAdjustment, targSubmeshTidx, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToUpdate, bool  updateTris, bool  updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*  boneProcessor, ::ArrayW<int32_t>  targSubmeshTidx, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*  uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCache)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, destStartVertsIdx, channelsToUpdate, updateTris, updateBWdata, settings, boneProcessor, targSubmeshTidx, textureBakeResults, uvAdjuster, LOG_LEVEL, meshChannelCache);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::AssignBuffersToMesh(::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, ::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  channelsToWriteToMesh, bool  doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, settings, textureBakeResults, channelsToWriteToMesh, doWriteTrisToMesh, assignToMeshCustomizer, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::AssignTriangleDataForSubmeshes(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh*  mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, ::by_ref<::GlobalNamespace::MB3_MeshCombinerSingle_BufferDataFromPreviousBake>  serializableBufferData, ::by_ref<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>>  submeshTrisToUse, ::by_ref<int32_t>  numNonZeroLengthSubmeshes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, float_t  uv2UnwrappingParamsPackMargin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mbDynamicObjectsInCombinedMesh, uv2UnwrappingParamsPackMargin);
}
inline ::ArrayW<int32_t> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::GetTriangleSizes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB2_LightmapOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d90a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LightmapOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d9aa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::Dispose)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9d9aa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.HasCollectedMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::HasCollectedMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d9abe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"HasCollectedMeshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d9abf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetVertices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9d9acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetVertices", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetNormals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d9adb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetNormals", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetTangents)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d9ae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetTangents", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetUv0Raw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUv0Raw)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d9ac24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUv0Raw", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetUv0Modified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUv0Modified)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d9aec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUv0Modified", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetUv2Modified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUv2Modified)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d9af54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUv2Modified", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetUVChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(int32_t, ::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUVChannel)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9d9afe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetColors)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d9b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetColors", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.CollectChannelDataForAllMeshesInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::DigitalOpus::MB::Core::MB_RenderType, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::CollectChannelDataForAllMeshesInList)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x9d9b258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"CollectChannelDataForAllMeshesInList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetBindposes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Renderer*, ::by_ref<bool>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetBindposes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9d95214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetBindposes", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetBoneWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Renderer*, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetBoneWeights)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d95330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetBoneWeights", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache.GetBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetBlendShapes)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9d9c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getMeshColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshColors)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9d9bfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshColors", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getMeshNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshNormals)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9d9bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshNormals", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getMeshTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshTangents)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9d9bd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshTangents", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getMeshUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshUVs)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d9b95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getMeshUV2s
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::UnityEngine::Mesh*, ::by_ref<::ArrayW<::UnityEngine::Vector2>>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshUV2s)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d9ba1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshUV2s", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getBindPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::by_ref<bool>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getBindPoses)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x9d9c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getBindPoses", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._getBoneWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::BoneWeight> (*)(::UnityEngine::Renderer*, int32_t, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getBoneWeights)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9d9c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getBoneWeights", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache._generateTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::*)(::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_generateTangents)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x9d9c9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_generateTangents", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get_lightmapOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapOption;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get_lightmapOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapOption;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapOption = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get_meshID2MeshChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshID2MeshChannels;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get_meshID2MeshChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshID2MeshChannels;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_set_meshID2MeshChannels(::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshID2MeshChannels = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get__collectedMeshData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectedMeshData;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get__collectedMeshData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectedMeshData;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_set__collectedMeshData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collectedMeshData = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::UnityEngine::Vector2& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get__HALF_UV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HALF_UV;
}
constexpr ::UnityEngine::Vector2 const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_get__HALF_UV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HALF_UV;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::__cordl_internal_set__HALF_UV(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HALF_UV = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LightmapOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ll, lo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::HasCollectedMeshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"HasCollectedMeshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar, int32_t  submeshIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m, mar, submeshIdx);
}
inline ::ArrayW<::UnityEngine::Vector3> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetVertices(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetVertices", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector3> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetNormals(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetNormals", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector4> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetTangents(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetTangents", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUv0Raw(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUv0Raw", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUv0Modified(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUv0Modified", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUv2Modified(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUv2Modified", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, channel, m);
}
inline ::ArrayW<::UnityEngine::Color> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetColors(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetColors", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, m);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  doBlendShapes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"CollectChannelDataForAllMeshesInList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_RenderType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toUpdateDGOs, toAddDGOs, newChannels, renderType, doBlendShapes);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetBindposes(::UnityEngine::Renderer*  r, ::by_ref<bool>  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetBindposes", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(this, ___internal_method, r, isSkinnedMeshWithBones);
}
inline ::ArrayW<::UnityEngine::BoneWeight> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetBoneWeights(::UnityEngine::Renderer*  r, int32_t  numVertsInMeshBeingAdded, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetBoneWeights", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoneWeight>>(this, ___internal_method, r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones);
}
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::GetBlendShapes(::UnityEngine::Mesh*  m, int32_t  gameObjectID, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"GetBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>>(this, ___internal_method, m, gameObjectID, gameObject);
}
inline ::ArrayW<::UnityEngine::Color> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshColors(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshColors", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector3> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshNormals(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshNormals", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector4> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshTangents(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshTangents", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshUVs(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getMeshUV2s(::UnityEngine::Mesh*  m, ::by_ref<::ArrayW<::UnityEngine::Vector2>>  uv2modified)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getMeshUV2s", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector2>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m, uv2modified);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getBindPoses(::UnityEngine::Renderer*  r, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  poses, ::by_ref<bool>  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getBindPoses", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, poses, isSkinnedMeshWithBones);
}
inline ::ArrayW<::UnityEngine::BoneWeight> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_getBoneWeights(::UnityEngine::Renderer*  r, int32_t  numVertsInMeshBeingAdded, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_getBoneWeights", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::BoneWeight>>(nullptr, ___internal_method, r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::_generateTangents(::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Vector3>  verts, ::ArrayW<::UnityEngine::Vector2>  uvs, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  outTangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(),
                        {"_generateTangents", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, verts, uvs, normals, outTangents);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions  lo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*>(ll, lo));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::operator ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface"
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::i___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache::MB3_MeshCombinerSingle_MeshChannelsCache()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface.HasCollectedMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::HasCollectedMeshData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface.CollectChannelDataForAllMeshesInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::DigitalOpus::MB::Core::MB_RenderType, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::CollectChannelDataForAllMeshesInList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface.GetBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::GetBlendShapes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::*)(::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::HasCollectedMeshData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  newChannels, ::DigitalOpus::MB::Core::MB_RenderType  renderType, bool  doBlendShapes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toUpdateDGOs, toAddDGOs, newChannels, renderType, doBlendShapes);
}
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::GetBlendShapes(::UnityEngine::Mesh*  mesh, int32_t  instanceID, ::UnityEngine::GameObject*  gameObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>>(this, ___internal_method, mesh, instanceID, gameObject);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface::hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar, int32_t  submeshIdx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m, mar, submeshIdx);
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d9a754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels.IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d9a764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                        {"IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::Dispose)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d9a76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d91ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_tangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_tangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv0raw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0raw;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv0raw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0raw;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv0raw(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv0raw = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv0modified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0modified;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv0modified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv0modified;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv0modified(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv0modified = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv2raw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2raw;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv2raw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2raw;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv2raw(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv2raw = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv2modified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2modified;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv2modified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv2modified;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv2modified(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv2modified = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv3;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv3(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv3 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv4;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv4(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv4 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv5;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv5(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv5 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv6;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv6(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv6 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv7;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv7(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv7 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_uv8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uv8;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_uv8(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uv8 = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_colors(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors = value;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_boneWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeights;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_boneWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeights;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneWeights = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_bindPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindPoses;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_bindPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindPoses;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_bindPoses(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bindPoses = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_triangles(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangles = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_blendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapes;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_get_blendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::__cordl_internal_set_blendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapes = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                        {"IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels::MB3_MeshCombinerSingle_MeshChannels()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::Initialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d8c488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject.InitializeNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::*)(bool, ::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::InitializeNew)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9d8c33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"InitializeNew", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject.UnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::UnInitialize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d9a70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"UnInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::CompareTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d9a738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"CompareTo", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d8c278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_instanceID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceID;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_instanceID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceID;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_instanceID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceID = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::StringW& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_vertIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_vertIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_vertIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertIdx = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_blendShapeIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_blendShapeIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_blendShapeIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeIdx = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_numVerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVerts;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_numVerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVerts;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_numVerts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVerts = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_numBlendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBlendShapes;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_numBlendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBlendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_numBlendShapes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numBlendShapes = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_numBoneWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBoneWeights;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_numBoneWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBoneWeights;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_numBoneWeights(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numBoneWeights = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_isSkinnedMeshWithBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSkinnedMeshWithBones;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_isSkinnedMeshWithBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSkinnedMeshWithBones;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_isSkinnedMeshWithBones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSkinnedMeshWithBones = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_indexesOfBonesUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexesOfBonesUsed;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_indexesOfBonesUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexesOfBonesUsed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_indexesOfBonesUsed(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexesOfBonesUsed = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_lightmapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapIndex;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_lightmapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapIndex;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_lightmapIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapIndex = value;
}
constexpr ::UnityEngine::Vector4& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_lightmapTilingOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapTilingOffset;
}
constexpr ::UnityEngine::Vector4 const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_lightmapTilingOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapTilingOffset;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_lightmapTilingOffset(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapTilingOffset = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_meshSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshSize;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_meshSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshSize;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_meshSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshSize = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_show()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_show() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_show(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___show = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_invertTriangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertTriangles;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_invertTriangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertTriangles;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_invertTriangles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertTriangles = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_submeshTriIdxs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshTriIdxs;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_submeshTriIdxs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshTriIdxs;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_submeshTriIdxs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshTriIdxs = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_submeshNumTris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshNumTris;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_submeshNumTris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshNumTris;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_submeshNumTris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshNumTris = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_targetSubmeshIdxs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmeshIdxs;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_targetSubmeshIdxs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmeshIdxs;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_targetSubmeshIdxs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSubmeshIdxs = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_uvRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvRects;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_uvRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvRects;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uvRects = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_encapsulatingRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encapsulatingRect;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_encapsulatingRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encapsulatingRect;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_encapsulatingRect(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encapsulatingRect = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_sourceMaterialTiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialTiling;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_sourceMaterialTiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialTiling;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_sourceMaterialTiling(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterialTiling = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_obUVRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obUVRects;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_obUVRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obUVRects;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_obUVRects(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obUVRects = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_textureArraySliceIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArraySliceIdx;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_textureArraySliceIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureArraySliceIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_textureArraySliceIdx(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureArraySliceIdx = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_sourceSharedMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSharedMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get_sourceSharedMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSharedMaterials;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set_sourceSharedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceSharedMaterials = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__beingDeleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beingDeleted;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__beingDeleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beingDeleted;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__beingDeleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beingDeleted = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSubmeshTris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSubmeshTris;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSubmeshTris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSubmeshTris;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSubmeshTris(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSubmeshTris = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBones;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSMR_CachedBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSMR_CachedBones = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBindposes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBindposes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBindposes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBindposes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSMR_CachedBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSMR_CachedBindposes = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBoneAndBindPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBoneAndBindPose;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBoneAndBindPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBoneAndBindPose;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSMR_CachedBoneAndBindPose(::ArrayW<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSMR_CachedBoneAndBindPose = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_srcMeshBoneIdx2masterListBoneIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_srcMeshBoneIdx2masterListBoneIdx;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_srcMeshBoneIdx2masterListBoneIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_srcMeshBoneIdx2masterListBoneIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSMR_srcMeshBoneIdx2masterListBoneIdx(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSMR_srcMeshBoneIdx2masterListBoneIdx = value;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBoneWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBoneWeights;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBoneWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBoneWeights;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSMR_CachedBoneWeights(::ArrayW<::UnityEngine::BoneWeight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSMR_CachedBoneWeights = value;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBoneWeightData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBoneWeightData;
}
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_get__tmpSMR_CachedBoneWeightData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpSMR_CachedBoneWeightData;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::__cordl_internal_set__tmpSMR_CachedBoneWeightData(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpSMR_CachedBoneWeightData = value;
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::Initialize(bool  beingDeleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beingDeleted);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::InitializeNew(bool  beingDeleted, ::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"InitializeNew", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beingDeleted, go);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::UnInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"UnInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::CompareTo(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {"CompareTo", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>());
}
/// @brief Convert operator to "::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::operator ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*() noexcept {
return static_cast<::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>"
constexpr ::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::i___System__IComparable_1___DigitalOpus__MB__Core__MB3_MeshCombinerSingle_MB_DynamicGameObject__() noexcept {
return static_cast<::System::IComparable_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject::MB3_MeshCombinerSingle_MB_DynamicGameObject()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d882b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d9a5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::__cordl_internal_set_data(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::_ctor(int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, len);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>());
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::New_ctor(int32_t  len)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>(len));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray::MB3_MeshCombinerSingle_SerializableIntArray()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d90770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.GetNewBonesSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::GetNewBonesSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d971fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"GetNewBonesSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.BuildBoneIdx2DGOMapIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::ArrayW<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::BuildBoneIdx2DGOMapIfNecessary)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d97244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"BuildBoneIdx2DGOMapIfNecessary", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.RemoveBonesForDgosWeAreDeleting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::RemoveBonesForDgosWeAreDeleting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d97348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"RemoveBonesForDgosWeAreDeleting", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.GetCachedSMRMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::GetCachedSMRMeshData)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x9d9734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"GetCachedSMRMeshData", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.AllocateAndSetupSMRDataStructures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::AllocateAndSetupSMRDataStructures)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9d97af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"AllocateAndSetupSMRDataStructures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x9d98c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.CopyBoneWeightsFromMeshForDGOsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyBoneWeightsFromMeshForDGOsInCombined)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d98f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyBoneWeightsFromMeshForDGOsInCombined", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.AddBonesToNewBonesArrayAndAdjustBWIndexes1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::AddBonesToNewBonesArrayAndAdjustBWIndexes1)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x9d98f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"AddBonesToNewBonesArrayAndAdjustBWIndexes1", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d99250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.CopyVertsNormsTansToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyVertsNormsTansToBuffers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d99254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.CopyVertsNormsTansToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, int32_t, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyVertsNormsTansToBuffers)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x9d992bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.InsertNewBonesIntoBonesArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::InsertNewBonesIntoBonesArray)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9d99b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"InsertNewBonesIntoBonesArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.ApplySMRdataToMeshToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::ApplySMRdataToMeshToBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d99d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"ApplySMRdataToMeshToBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.ApplySMRdataToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::ApplySMRdataToMesh)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d99dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"ApplySMRdataToMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.UpdateGameObjects_UpdateBWIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::UpdateGameObjects_UpdateBWIndexes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d99eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"UpdateGameObjects_UpdateBWIndexes", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9d99fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d9a058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.DisposeOfTemporarySMRData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::DisposeOfTemporarySMRData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9d9a060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"DisposeOfTemporarySMRData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI._AllocateNewArraysForCombinedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_AllocateNewArraysForCombinedMesh)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x9d987a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_AllocateNewArraysForCombinedMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI._CollectBonesToAddForDGO_Pass2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_CollectBonesToAddForDGO_Pass2)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x9d9a1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_CollectBonesToAddForDGO_Pass2", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI._BuildMasterBonesArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_BuildMasterBonesArray)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x9d97f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_BuildMasterBonesArray", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI._CollectSkinningDataForDGOsInCombinedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_CollectSkinningDataForDGOsInCombinedMesh)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9d97c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_CollectSkinningDataForDGOsInCombinedMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI.DB_CheckIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::DB_CheckIntegrity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d9a5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"DB_CheckIntegrity", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_bonesToAddAndInCombined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesToAddAndInCombined;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_bonesToAddAndInCombined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesToAddAndInCombined;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_bonesToAddAndInCombined(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonesToAddAndInCombined = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_masterList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_masterList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterList;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_masterList(::System::Collections::Generic::List_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masterList = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_nBindPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBindPoses;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_nBindPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBindPoses;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_nBindPoses(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nBindPoses = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_nbones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_nbones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbones;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_nbones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nbones = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_boneWeightSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeightSize;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_boneWeightSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeightSize;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_boneWeightSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneWeightSize = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_targBoneWeightIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targBoneWeightIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_targBoneWeightIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targBoneWeightIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_targBoneWeightIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targBoneWeightIdx = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_dgo2firstIdxInBoneWeightsArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dgo2firstIdxInBoneWeightsArray;
}
constexpr ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_dgo2firstIdxInBoneWeightsArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dgo2firstIdxInBoneWeightsArray;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_dgo2firstIdxInBoneWeightsArray(::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dgo2firstIdxInBoneWeightsArray = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_bonesPerVertex_nvarr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesPerVertex_nvarr;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_bonesPerVertex_nvarr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesPerVertex_nvarr;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_bonesPerVertex_nvarr(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonesPerVertex_nvarr = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_boneWeight1s_nvarr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeight1s_nvarr;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_get_boneWeight1s_nvarr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeight1s_nvarr;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::__cordl_internal_set_boneWeight1s_nvarr(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneWeight1s_nvarr = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cm);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::GetNewBonesSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"GetNewBonesSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::BuildBoneIdx2DGOMapIfNecessary(::ArrayW<int32_t>  _goToDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"BuildBoneIdx2DGOMapIfNecessary", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _goToDelete);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::RemoveBonesForDgosWeAreDeleting(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"RemoveBonesForDgosWeAreDeleting", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::GetCachedSMRMeshData(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"GetCachedSMRMeshData", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::AllocateAndSetupSMRDataStructures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosToAdd, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosInCombinedMesh, int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"AllocateAndSetupSMRDataStructures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgosToAdd, dgosInCombinedMesh, newVertSize, vertexAndTriangleProcessor);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyBoneWeightsFromMeshForDGOsInCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  targVidx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyBoneWeightsFromMeshForDGOsInCombined", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, targVidx);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::AddBonesToNewBonesArrayAndAdjustBWIndexes1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  firstVertexIdxForThisDGO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"AddBonesToNewBonesArrayAndAdjustBWIndexes1", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, firstVertexIdxForThisDGO);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(int32_t  totalDeleteVerts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalDeleteVerts);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector3>  nnorms, ::ArrayW<::UnityEngine::Vector4>  ntangs, ::ArrayW<::UnityEngine::Vector3>  nverts, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Vector3>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, settings, vertsIdx, nnorms, ntangs, nverts, normals, tangents, verts);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nnorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  ntangs, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nverts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, settings, vertsIdx, nnorms, ntangs, nverts, normals, tangents, verts);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::InsertNewBonesIntoBonesArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"InsertNewBonesIntoBonesArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::ApplySMRdataToMeshToBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"ApplySMRdataToMeshToBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::ApplySMRdataToMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"ApplySMRdataToMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combiner, mesh);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::UpdateGameObjects_UpdateBWIndexes(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"UpdateGameObjects_UpdateBWIndexes", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::DisposeOfTemporarySMRData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"DisposeOfTemporarySMRData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_AllocateNewArraysForCombinedMesh(int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_AllocateNewArraysForCombinedMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVertSize, vertexAndTriangleProcessor);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_CollectBonesToAddForDGO_Pass2(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, bool  noExtraBonesForMeshRenderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_CollectBonesToAddForDGO_Pass2", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dgo, noExtraBonesForMeshRenderers);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_BuildMasterBonesArray(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosToAdd, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosInCombinedMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_BuildMasterBonesArray", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dgosToAdd, dgosInCombinedMesh);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::_CollectSkinningDataForDGOsInCombinedMesh(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosAdding, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  dgosInCombinedMesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*  meshChannelsCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"_CollectSkinningDataForDGOsInCombinedMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache_NativeArray*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgosAdding, dgosInCombinedMesh, meshChannelsCache);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::DB_CheckIntegrity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(),
                        {"DB_CheckIntegrity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::New_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI*>(cm));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::operator ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::i___DigitalOpus__MB__Core__MB_IMeshCombinerSingle_BoneProcessor() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessorNewAPI()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d938bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d93944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.GetNewBonesSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetNewBonesSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d9394c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetNewBonesSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9d908dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.GetBonesToAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetBonesToAdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d93964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetBonesToAdd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.GetNumBonesToDelete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetNumBonesToDelete)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d9396c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetNumBonesToDelete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.BuildBoneIdx2DGOMapIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::ArrayW<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::BuildBoneIdx2DGOMapIfNecessary)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9d939b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"BuildBoneIdx2DGOMapIfNecessary", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.RemoveBonesForDgosWeAreDeleting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::RemoveBonesForDgosWeAreDeleting)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d93e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"RemoveBonesForDgosWeAreDeleting", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.AllocateAndSetupSMRDataStructures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, int32_t, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::AllocateAndSetupSMRDataStructures)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9d93f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"AllocateAndSetupSMRDataStructures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x9d9437c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.GetNewBonesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetNewBonesLength)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d94270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetNewBonesLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor._CollectSkinningDataForDGOsInCombinedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::_CollectSkinningDataForDGOsInCombinedMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9d94118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"_CollectSkinningDataForDGOsInCombinedMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.CollectBonesToAddForDGO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Renderer*, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CollectBonesToAddForDGO)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x9d9488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CollectBonesToAddForDGO", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor._buildBoneIdx2dgoMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*> (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::_buildBoneIdx2dgoMap)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9d93b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"_buildBoneIdx2dgoMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x9d953d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.InsertNewBonesIntoBonesArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::InsertNewBonesIntoBonesArray)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x9d95838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"InsertNewBonesIntoBonesArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.AddBonesToNewBonesArrayAndAdjustBWIndexes1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::AddBonesToNewBonesArrayAndAdjustBWIndexes1)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x9d95b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"AddBonesToNewBonesArrayAndAdjustBWIndexes1", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.UpdateGameObjects_UpdateBWIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::UpdateGameObjects_UpdateBWIndexes)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x9d9606c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"UpdateGameObjects_UpdateBWIndexes", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.CopyVertsNormsTansToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, int32_t, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyVertsNormsTansToBuffers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d963a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.CopyVertsNormsTansToBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyVertsNormsTansToBuffers)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x9d96408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.DisposeOfTemporarySMRData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::DisposeOfTemporarySMRData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d96c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"DisposeOfTemporarySMRData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.CopyBoneWeightsFromMeshForDGOsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyBoneWeightsFromMeshForDGOsInCombined)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d96cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyBoneWeightsFromMeshForDGOsInCombined", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.ApplySMRdataToMeshToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::ApplySMRdataToMeshToBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d96d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"ApplySMRdataToMeshToBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.ApplySMRdataToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::ApplySMRdataToMesh)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d96d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"ApplySMRdataToMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.GetCachedSMRMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetCachedSMRMeshData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d96d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetCachedSMRMeshData", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor.DB_CheckIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::DB_CheckIntegrity)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x9d96d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"DB_CheckIntegrity", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneIdx2dgoMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIdx2dgoMap;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneIdx2dgoMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIdx2dgoMap;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_boneIdx2dgoMap(::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneIdx2dgoMap = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneIdxsToDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIdxsToDelete;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneIdxsToDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIdxsToDelete;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_boneIdxsToDelete(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneIdxsToDelete = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_bonesToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesToAdd;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_bonesToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesToAdd;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_bonesToAdd(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonesToAdd = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneAndBindPose2idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneAndBindPose2idx;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneAndBindPose2idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneAndBindPose2idx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_boneAndBindPose2idx(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneAndBindPose2idx = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_oldBonesPreviousBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldBonesPreviousBake;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_oldBonesPreviousBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldBonesPreviousBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_oldBonesPreviousBake(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldBonesPreviousBake = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_oldBindPosesPreviousBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldBindPosesPreviousBake;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_oldBindPosesPreviousBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldBindPosesPreviousBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_oldBindPosesPreviousBake(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldBindPosesPreviousBake = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_nbones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_nbones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbones;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_nbones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nbones = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_nbindPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbindPoses;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_nbindPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nbindPoses;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_nbindPoses(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nbindPoses = value;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_nboneWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nboneWeights;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_nboneWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nboneWeights;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_nboneWeights(::ArrayW<::UnityEngine::BoneWeight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nboneWeights = value;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeights;
}
constexpr ::ArrayW<::UnityEngine::BoneWeight> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get_boneWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneWeights;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set_boneWeights(::ArrayW<::UnityEngine::BoneWeight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneWeights = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get__newBonesStartAtIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newBonesStartAtIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get__newBonesStartAtIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newBonesStartAtIdx;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set__newBonesStartAtIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newBonesStartAtIdx = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get__didSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didSetup;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_get__didSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didSetup;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::__cordl_internal_set__didSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____didSetup = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetNewBonesSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetNewBonesSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cm);
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetBonesToAdd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetBonesToAdd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>*>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetNumBonesToDelete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetNumBonesToDelete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::BuildBoneIdx2DGOMapIfNecessary(::ArrayW<int32_t>  _goToDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"BuildBoneIdx2DGOMapIfNecessary", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _goToDelete);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::RemoveBonesForDgosWeAreDeleting(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"RemoveBonesForDgosWeAreDeleting", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::AllocateAndSetupSMRDataStructures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"AllocateAndSetupSMRDataStructures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toAddDGOs, mbDynamicObjectsInCombinedMesh, newVertSize, vertexAndTriangleProcessor);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetNewBonesLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetNewBonesLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::_CollectSkinningDataForDGOsInCombinedMesh(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  objsToAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"_CollectSkinningDataForDGOsInCombinedMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objsToAdd);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CollectBonesToAddForDGO(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Renderer*  r, bool  noExtraBonesForMeshRenderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CollectBonesToAddForDGO", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dgo, r, noExtraBonesForMeshRenderers);
}
inline ::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::_buildBoneIdx2dgoMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"_buildBoneIdx2dgoMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*>>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(int32_t  totalDeleteVerts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalDeleteVerts);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::InsertNewBonesIntoBonesArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"InsertNewBonesIntoBonesArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::AddBonesToNewBonesArrayAndAdjustBWIndexes1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"AddBonesToNewBonesArrayAndAdjustBWIndexes1", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, vertsIdx);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::UpdateGameObjects_UpdateBWIndexes(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"UpdateGameObjects_UpdateBWIndexes", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nnorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  ntangs, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nverts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>(), ::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, settings, vertsIdx, nnorms, ntangs, nverts, normals, tangents, verts);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector3>  nnorms, ::ArrayW<::UnityEngine::Vector4>  ntangs, ::ArrayW<::UnityEngine::Vector3>  nverts, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Vector3>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyVertsNormsTansToBuffers", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, settings, vertsIdx, nnorms, ntangs, nverts, normals, tangents, verts);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::DisposeOfTemporarySMRData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"DisposeOfTemporarySMRData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::CopyBoneWeightsFromMeshForDGOsInCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  targVidx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"CopyBoneWeightsFromMeshForDGOsInCombined", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dgo, targVidx);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::ApplySMRdataToMeshToBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"ApplySMRdataToMeshToBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::ApplySMRdataToMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"ApplySMRdataToMesh", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combiner, mesh);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::GetCachedSMRMeshData(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"GetCachedSMRMeshData", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dgo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::DB_CheckIntegrity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(),
                        {"DB_CheckIntegrity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::New_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor*>(cm));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::operator ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor"
constexpr ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::i___DigitalOpus__MB__Core__MB_IMeshCombinerSingle_BoneProcessor() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d91960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d8a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.GetBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> (*)(::UnityEngine::Mesh*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::GetBlendShapes)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x9d919a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"GetBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.ApplyBlendShapeFramesToMeshAndBuildMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::ApplyBlendShapeFramesToMeshAndBuildMap)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x9d91f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"ApplyBlendShapeFramesToMeshAndBuildMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.AllocateBlendShapeArrayIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::AllocateBlendShapeArrayIfNecessary)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d92858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"AllocateBlendShapeArrayIfNecessary", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.AssignNewBlendShapesToCombinerIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::AssignNewBlendShapesToCombinerIfNecessary)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d9294c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"AssignNewBlendShapesToCombinerIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.CopyBlendShapesInCurrentMeshIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(::by_ref<int32_t>, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::CopyBlendShapesInCurrentMeshIfNecessary)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d92a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"CopyBlendShapesInCurrentMeshIfNecessary", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.CopyBlendShapesForNewMeshIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(::by_ref<int32_t>, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::CopyBlendShapesForNewMeshIfNecessary)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9d92b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"CopyBlendShapesForNewMeshIfNecessary", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor._ConvertBlendShapeNameToOutputName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_ConvertBlendShapeNameToOutputName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d924d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"_ConvertBlendShapeNameToOutputName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor.ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x9d92cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor._BuildSrcShape2CombinedMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_BuildSrcShape2CombinedMap)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x9d925c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"_BuildSrcShape2CombinedMap", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor._ZeroArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_ZeroArray)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9d92514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"_ZeroArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_get_combiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_get_combiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combiner;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_set_combiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combiner = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_get_nblendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nblendShapes;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_get_nblendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nblendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_set_nblendShapes(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nblendShapes = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cm);
}
inline ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*> DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::GetBlendShapes(::UnityEngine::Mesh*  m, ::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*  meshID2MeshChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"GetBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>>(nullptr, ___internal_method, m, gameObject, meshID2MeshChannels);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::ApplyBlendShapeFramesToMeshAndBuildMap(int32_t  newVertCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"ApplyBlendShapeFramesToMeshAndBuildMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVertCount);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::AllocateBlendShapeArrayIfNecessary(int32_t  nBlendShapeSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"AllocateBlendShapeArrayIfNecessary", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nBlendShapeSize);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::AssignNewBlendShapesToCombinerIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"AssignNewBlendShapesToCombinerIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::CopyBlendShapesInCurrentMeshIfNecessary(::by_ref<int32_t>  targBlendShapeIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"CopyBlendShapesInCurrentMeshIfNecessary", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targBlendShapeIdx, dgo);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::CopyBlendShapesForNewMeshIfNecessary(::by_ref<int32_t>  targBlendShapeIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::UnityEngine::Mesh*  mesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*  meshChannelCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"CopyBlendShapesForNewMeshIfNecessary", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targBlendShapeIdx, dgo, mesh, meshChannelCache);
}
inline ::StringW DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_ConvertBlendShapeNameToOutputName(::StringW  bs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"_ConvertBlendShapeNameToOutputName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bs);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName(int32_t  newVertCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"ApplyBlendShapeFramesToMeshAndBuildMap_MergeBlendShapesWithTheSameName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVertCount);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_BuildSrcShape2CombinedMap(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*  map, ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>  bs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"_BuildSrcShape2CombinedMap", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>(), ::i2c::type_of<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, combiner, map, bs);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::_ZeroArray(::ArrayW<::UnityEngine::Vector3>  arr, int32_t  idx, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(),
                        {"_ZeroArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, idx, length);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::New_ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  cm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor*>(cm));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d91f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::StringW& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_indexInSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexInSource;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_indexInSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexInSource;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_set_indexInSource(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexInSource = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_frames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frames;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_get_frames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frames;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::__cordl_internal_set_frames(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frames = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape::MB3_MeshCombinerSingle_MBBlendShape()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d91f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_frameWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameWeight;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_frameWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameWeight;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_set_frameWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameWeight = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_set_vertices(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_set_normals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_tangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_get_tangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::__cordl_internal_set_tangents(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame* DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame::MB3_MeshCombinerSingle_MBBlendShapeFrame()   {
}
