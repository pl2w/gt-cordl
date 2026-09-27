#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersion_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersionInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersion_PipelineType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersion_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion._CreateMBVersionConcrete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MBVersionInterface* (*)()>(&::DigitalOpus::MB::Core::MBVersion::_CreateMBVersionConcrete)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d7f32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"_CreateMBVersionConcrete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::DigitalOpus::MB::Core::MBVersion::version)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d7f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.Is_2018_3_OrNewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::DigitalOpus::MB::Core::MBVersion::Is_2018_3_OrNewer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d7f4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"Is_2018_3_OrNewer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.Is_2017_1_OrNewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::DigitalOpus::MB::Core::MBVersion::Is_2017_1_OrNewer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d7f5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"Is_2017_1_OrNewer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MBVersion::GetActive)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d7f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::DigitalOpus::MB::Core::MBVersion::SetActive)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d7f784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"SetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.SetActiveRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::DigitalOpus::MB::Core::MBVersion::SetActiveRecursively)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d7f888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"SetActiveRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.FindSceneObjectsOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::DigitalOpus::MB::Core::MBVersion::FindSceneObjectsOfType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d7f98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"FindSceneObjectsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsRunningAndMeshNotReadWriteable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MBVersion::IsRunningAndMeshNotReadWriteable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d7fa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsRunningAndMeshNotReadWriteable", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetMeshChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(int32_t, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MBVersion::GetMeshChannel)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d7fb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetMeshChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetScaleInLightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::MeshRenderer*)>(&::DigitalOpus::MB::Core::MBVersion::GetScaleInLightmap)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d7fc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetScaleInLightmap", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.MeshClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, bool)>(&::DigitalOpus::MB::Core::MBVersion::MeshClear)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d7fd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"MeshClear", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.MeshAssignUVChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>)>(&::DigitalOpus::MB::Core::MBVersion::MeshAssignUVChannel)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d7fe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"MeshAssignUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetLightmapTilingOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Renderer*)>(&::DigitalOpus::MB::Core::MBVersion::GetLightmapTilingOffset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d7ff84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetLightmapTilingOffset", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (*)(::UnityEngine::Renderer*, bool)>(&::DigitalOpus::MB::Core::MBVersion::GetBones)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d80078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBones", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsSwizzledNormalMapPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::DigitalOpus::MB::Core::MBVersion::IsSwizzledNormalMapPlatform)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d7048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsSwizzledNormalMapPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsMaterialKeywordValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::MBVersion::IsMaterialKeywordValid)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d8017c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsMaterialKeywordValid", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.OptimizeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MBVersion::OptimizeMesh)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d80280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"OptimizeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetBlendShapeFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Mesh*, int32_t)>(&::DigitalOpus::MB::Core::MBVersion::GetBlendShapeFrameCount)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d80374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBlendShapeFrameCount", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetBlendShapeFrameWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Mesh*, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MBVersion::GetBlendShapeFrameWeight)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d80478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBlendShapeFrameWeight", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetBlendShapeFrameVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MBVersion::GetBlendShapeFrameVertices)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d80584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBlendShapeFrameVertices", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.ClearBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MBVersion::ClearBlendShapes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d806b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"ClearBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.AddBlendShapeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::StringW, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MBVersion::AddBlendShapeFrame)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d807ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"AddBlendShapeFrame", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.MaxMeshVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::DigitalOpus::MB::Core::MBVersion::MaxMeshVertexCount)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d808e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"MaxMeshVertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.SetMeshIndexFormatAndClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, bool, bool)>(&::DigitalOpus::MB::Core::MBVersion::SetMeshIndexFormatAndClearMesh)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9d809cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"SetMeshIndexFormatAndClearMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GraphicsUVStartsAtTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::DigitalOpus::MB::Core::MBVersion::GraphicsUVStartsAtTop)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d72024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GraphicsUVStartsAtTop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsTexture_sRGBgammaCorrected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*, bool)>(&::DigitalOpus::MB::Core::MBVersion::IsTexture_sRGBgammaCorrected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d80ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsTexture_sRGBgammaCorrected", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsTextureReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MBVersion::IsTextureReadable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d80bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsTextureReadable", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.CollectPropertyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MBVersion::CollectPropertyNames)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9d80ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"CollectPropertyNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.DoSpecialRenderPipeline_TexturePackerFastSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MBVersion::DoSpecialRenderPipeline_TexturePackerFastSetup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d80e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"DoSpecialRenderPipeline_TexturePackerFastSetup", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.GetProjectColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorSpace (*)()>(&::DigitalOpus::MB::Core::MBVersion::GetProjectColorSpace)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d80ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetProjectColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.DetectPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MBVersion_PipelineType (*)()>(&::DigitalOpus::MB::Core::MBVersion::DetectPipeline)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d80fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"DetectPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.UnescapeURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::DigitalOpus::MB::Core::MBVersion::UnescapeURL)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d810d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"UnescapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsAssetInProject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::DigitalOpus::MB::Core::MBVersion::IsAssetInProject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d811c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsAssetInProject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.IsUsingAddressables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::DigitalOpus::MB::Core::MBVersion::IsUsingAddressables)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9d79554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsUsingAddressables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion.FindRuntimeMaterialsFromAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::GlobalNamespace::MB2_TextureBakeResults*, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*)>(&::DigitalOpus::MB::Core::MBVersion::FindRuntimeMaterialsFromAddresses)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d749ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"FindRuntimeMaterialsFromAddresses", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersion::*)()>(&::DigitalOpus::MB::Core::MBVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d812e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MBVersion::setStaticF__MBVersion(::DigitalOpus::MB::Core::MBVersionInterface*  value)  {
::cordl_internals::setStaticField<::DigitalOpus::MB::Core::MBVersionInterface*, "_MBVersion", ::DigitalOpus::MB::Core::MBVersion*>(std::forward<::DigitalOpus::MB::Core::MBVersionInterface*>(value));
}
inline ::DigitalOpus::MB::Core::MBVersionInterface* DigitalOpus::MB::Core::MBVersion::getStaticF__MBVersion()  {
return ::cordl_internals::getStaticField<::DigitalOpus::MB::Core::MBVersionInterface*, "_MBVersion", ::DigitalOpus::MB::Core::MBVersion*>();
}
inline ::DigitalOpus::MB::Core::MBVersionInterface* DigitalOpus::MB::Core::MBVersion::_CreateMBVersionConcrete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"_CreateMBVersionConcrete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MBVersionInterface*>(nullptr, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::MBVersion::version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersion::Is_2018_3_OrNewer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"Is_2018_3_OrNewer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersion::Is_2017_1_OrNewer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"Is_2017_1_OrNewer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersion::GetActive(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go);
}
inline void DigitalOpus::MB::Core::MBVersion::SetActive(::UnityEngine::GameObject*  go, bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"SetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, isActive);
}
inline void DigitalOpus::MB::Core::MBVersion::SetActiveRecursively(::UnityEngine::GameObject*  go, bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"SetActiveRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, isActive);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> DigitalOpus::MB::Core::MBVersion::FindSceneObjectsOfType(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"FindSceneObjectsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, t);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsRunningAndMeshNotReadWriteable", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MBVersion::GetMeshChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetMeshChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, channel, m, LOG_LEVEL);
}
inline float_t DigitalOpus::MB::Core::MBVersion::GetScaleInLightmap(::UnityEngine::MeshRenderer*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetScaleInLightmap", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r);
}
inline void DigitalOpus::MB::Core::MBVersion::MeshClear(::UnityEngine::Mesh*  m, bool  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"MeshClear", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, t);
}
inline void DigitalOpus::MB::Core::MBVersion::MeshAssignUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::Vector2>  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"MeshAssignUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channel, m, uvs);
}
inline ::UnityEngine::Vector4 DigitalOpus::MB::Core::MBVersion::GetLightmapTilingOffset(::UnityEngine::Renderer*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetLightmapTilingOffset", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, r);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> DigitalOpus::MB::Core::MBVersion::GetBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBones", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(nullptr, ___internal_method, r, isSkinnedMeshWithBones);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsSwizzledNormalMapPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsSwizzledNormalMapPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsMaterialKeywordValid(::UnityEngine::Material*  mat, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsMaterialKeywordValid", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mat, keyword);
}
inline void DigitalOpus::MB::Core::MBVersion::OptimizeMesh(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"OptimizeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m);
}
inline int32_t DigitalOpus::MB::Core::MBVersion::GetBlendShapeFrameCount(::UnityEngine::Mesh*  m, int32_t  shapeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBlendShapeFrameCount", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, m, shapeIndex);
}
inline float_t DigitalOpus::MB::Core::MBVersion::GetBlendShapeFrameWeight(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBlendShapeFrameWeight", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, m, shapeIndex, frameIndex);
}
inline void DigitalOpus::MB::Core::MBVersion::GetBlendShapeFrameVertices(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetBlendShapeFrameVertices", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, shapeIndex, frameIndex, vs, ns, ts);
}
inline void DigitalOpus::MB::Core::MBVersion::ClearBlendShapes(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"ClearBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m);
}
inline void DigitalOpus::MB::Core::MBVersion::AddBlendShapeFrame(::UnityEngine::Mesh*  m, ::StringW  nm, float_t  wt, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"AddBlendShapeFrame", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, nm, wt, vs, ns, ts);
}
inline int32_t DigitalOpus::MB::Core::MBVersion::MaxMeshVertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"MaxMeshVertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void DigitalOpus::MB::Core::MBVersion::SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh*  m, int32_t  numVerts, bool  vertices, bool  justClearTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"SetMeshIndexFormatAndClearMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, numVerts, vertices, justClearTriangles);
}
inline bool DigitalOpus::MB::Core::MBVersion::GraphicsUVStartsAtTop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GraphicsUVStartsAtTop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D*  tex, bool  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsTexture_sRGBgammaCorrected", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex, hint);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsTextureReadable(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsTextureReadable", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tex);
}
inline void DigitalOpus::MB::Core::MBVersion::CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"CollectPropertyNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texPropertyNames, shaderTexPropertyNames, _customShaderPropNames, resultMaterial, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MBVersion::DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject*  cameraGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"DoSpecialRenderPipeline_TexturePackerFastSetup", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraGameObject);
}
inline ::UnityEngine::ColorSpace DigitalOpus::MB::Core::MBVersion::GetProjectColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"GetProjectColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::MBVersion_PipelineType DigitalOpus::MB::Core::MBVersion::DetectPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"DetectPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MBVersion_PipelineType>(nullptr, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::MBVersion::UnescapeURL(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"UnescapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, url);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsAssetInProject(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsAssetInProject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target);
}
inline bool DigitalOpus::MB::Core::MBVersion::IsUsingAddressables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"IsUsingAddressables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MBVersion::FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResult, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {"FindRuntimeMaterialsFromAddresses", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, textureBakeResult, isComplete);
}
inline void DigitalOpus::MB::Core::MBVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MBVersion* DigitalOpus::MB::Core::MBVersion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MBVersion*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MBVersion::MBVersion()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::*)(int32_t)>(&::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d812b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::*)()>(&::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d812e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::*)()>(&::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d812ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::*)()>(&::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d81434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::*)()>(&::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d8143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::*)()>(&::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d81474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get_textureBakeResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBakeResult;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get_textureBakeResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBakeResult;
}
constexpr void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_set_textureBakeResult(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureBakeResult = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get_isComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* const& DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_get_isComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::__cordl_internal_set_isComplete(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isComplete = value;
}
inline void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38* DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38::MBVersion__FindRuntimeMaterialsFromAddresses_d__38()   {
}
