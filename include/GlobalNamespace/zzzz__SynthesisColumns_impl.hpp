#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisColumns.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SynthesisColumns_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisArcadeObject_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisColumns_ColumnShape_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisColumns_RenderPipelineType_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisColumns___c__DisplayClass37_0_def.hpp"
#include "GlobalNamespace/zzzz__SynthesisColumns_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.ParseColumnsJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* (*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::ParseColumnsJson)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b29374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ParseColumnsJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.LoadLayoutFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::LoadLayoutFromJson)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b2672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"LoadLayoutFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.AutoAssignFromResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)()>(&::GlobalNamespace::SynthesisColumns::AutoAssignFromResources)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5b25dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"AutoAssignFromResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.ParseShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SynthesisColumns_ColumnShape (*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::ParseShape)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b29664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ParseShape", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.GetActivePipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SynthesisColumns_RenderPipelineType (::GlobalNamespace::SynthesisColumns::*)()>(&::GlobalNamespace::SynthesisColumns::GetActivePipeline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b29770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"GetActivePipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.GetSkinsRootFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SynthesisColumns::*)()>(&::GlobalNamespace::SynthesisColumns::GetSkinsRootFolder)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b29808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"GetSkinsRootFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.HandleSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::GlobalNamespace::SynthesisColumns::HandleSceneLoaded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b298f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"HandleSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.SafeClearSpawnedColumns
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)()>(&::GlobalNamespace::SynthesisColumns::SafeClearSpawnedColumns)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5b29960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"SafeClearSpawnedColumns", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.DestroyAfterPhysicsStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SynthesisColumns::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GlobalNamespace::SynthesisColumns::DestroyAfterPhysicsStep)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b29b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"DestroyAfterPhysicsStep", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.SpawnForActiveScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)()>(&::GlobalNamespace::SynthesisColumns::SpawnForActiveScene)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b293bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"SpawnForActiveScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.SpawnSingleColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*)>(&::GlobalNamespace::SynthesisColumns::SpawnSingleColumn)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x5b29c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"SpawnSingleColumn", {}, {::i2c::type_of<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.ApplyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)(::UnityEngine::GameObject*, ::StringW, float_t)>(&::GlobalNamespace::SynthesisColumns::ApplyTexture)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x5b2a27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ApplyTexture", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.FindTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::SynthesisColumns::*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::FindTexture)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5b2adc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"FindTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.IsHttpUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisColumns::*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::IsHttpUrl)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b2bcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"IsHttpUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.GetCacheFilePathForUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SynthesisColumns::*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::GetCacheFilePathForUrl)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5b2bdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"GetCacheFilePathForUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.TryLoadTextureFromDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::SynthesisColumns::*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::TryLoadTextureFromDisk)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b2ba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"TryLoadTextureFromDisk", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.DownloadAndCacheTextureCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SynthesisColumns::*)(::StringW)>(&::GlobalNamespace::SynthesisColumns::DownloadAndCacheTextureCoroutine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b2bd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"DownloadAndCacheTextureCoroutine", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.ApplyDownloadedTextureToPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)(::StringW, ::UnityEngine::Texture2D*)>(&::GlobalNamespace::SynthesisColumns::ApplyDownloadedTextureToPending)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5b2c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ApplyDownloadedTextureToPending", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.ApplyTextureToRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)(::UnityEngine::MeshRenderer*, ::UnityEngine::Texture2D*, float_t)>(&::GlobalNamespace::SynthesisColumns::ApplyTextureToRenderer)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x5b2b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ApplyTextureToRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.BuildStripUVBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::SynthesisColumns::BuildStripUVBox)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5b2a914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"BuildStripUVBox", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.ComputeTileY_FromAspect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SynthesisColumns::*)(::UnityEngine::Texture2D*, float_t, float_t)>(&::GlobalNamespace::SynthesisColumns::ComputeTileY_FromAspect)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b2c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ComputeTileY_FromAspect", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns.readColumnsFromJsonFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SynthesisColumns::*)(::GlobalNamespace::SynthesisArcadeObject*)>(&::GlobalNamespace::SynthesisColumns::readColumnsFromJsonFile)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5b26404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"readColumnsFromJsonFile", {}, {::i2c::type_of<::GlobalNamespace::SynthesisArcadeObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns::*)()>(&::GlobalNamespace::SynthesisColumns::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b2c758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns._BuildStripUVBox_g__Face_37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::by_ref<::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0>)>(&::GlobalNamespace::SynthesisColumns::_BuildStripUVBox_g__Face_37_0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5b2c510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"<BuildStripUVBox>g__Face|37_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultColumnPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColumnPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultColumnPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColumnPrefab;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set_defaultColumnPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColumnPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultRectPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultRectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultRectPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultRectPrefab;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set_defaultRectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultRectPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultMaterialURP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterialURP;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultMaterialURP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterialURP;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set_defaultMaterialURP(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterialURP = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultMaterialBuiltin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterialBuiltin;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SynthesisColumns::__cordl_internal_get_defaultMaterialBuiltin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterialBuiltin;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set_defaultMaterialBuiltin(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterialBuiltin = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>*& GlobalNamespace::SynthesisColumns::__cordl_internal_get_textureLibrary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureLibrary;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>* const& GlobalNamespace::SynthesisColumns::__cordl_internal_get_textureLibrary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureLibrary;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set_textureLibrary(::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureLibrary = value;
}
constexpr ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*& GlobalNamespace::SynthesisColumns::__cordl_internal_get__currentLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLayout;
}
constexpr ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__currentLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLayout;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__currentLayout(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentLayout = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::SynthesisColumns::__cordl_internal_get__dynamicTextureCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicTextureCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__dynamicTextureCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicTextureCache;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__dynamicTextureCache(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicTextureCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>*& GlobalNamespace::SynthesisColumns::__cordl_internal_get__pendingTextureAssignments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingTextureAssignments;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>* const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__pendingTextureAssignments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingTextureAssignments;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__pendingTextureAssignments(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingTextureAssignments = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisColumns::__cordl_internal_get__lastSceneSpawnedFor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSceneSpawnedFor;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__lastSceneSpawnedFor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSceneSpawnedFor;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__lastSceneSpawnedFor(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSceneSpawnedFor = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisColumns::__cordl_internal_get__skinsRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinsRoot;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__skinsRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinsRoot;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__skinsRoot(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinsRoot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SynthesisColumns::__cordl_internal_get__spawnedColumns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedColumns;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__spawnedColumns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedColumns;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__spawnedColumns(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnedColumns = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::SynthesisColumns::__cordl_internal_get__mpb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mpb;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::SynthesisColumns::__cordl_internal_get__mpb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mpb;
}
constexpr void GlobalNamespace::SynthesisColumns::__cordl_internal_set__mpb(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mpb = value;
}
inline ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* GlobalNamespace::SynthesisColumns::ParseColumnsJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ParseColumnsJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*>(nullptr, ___internal_method, json);
}
inline void GlobalNamespace::SynthesisColumns::LoadLayoutFromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"LoadLayoutFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void GlobalNamespace::SynthesisColumns::AutoAssignFromResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"AutoAssignFromResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynthesisColumns_ColumnShape GlobalNamespace::SynthesisColumns::ParseShape(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ParseShape", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SynthesisColumns_ColumnShape>(nullptr, ___internal_method, s);
}
inline ::GlobalNamespace::SynthesisColumns_RenderPipelineType GlobalNamespace::SynthesisColumns::GetActivePipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"GetActivePipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SynthesisColumns_RenderPipelineType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SynthesisColumns::GetSkinsRootFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"GetSkinsRootFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisColumns::HandleSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"HandleSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void GlobalNamespace::SynthesisColumns::SafeClearSpawnedColumns()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"SafeClearSpawnedColumns", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SynthesisColumns::DestroyAfterPhysicsStep(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  toDestroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"DestroyAfterPhysicsStep", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, toDestroy);
}
inline void GlobalNamespace::SynthesisColumns::SpawnForActiveScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"SpawnForActiveScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisColumns::SpawnSingleColumn(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"SpawnSingleColumn", {}, {::i2c::type_of<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void GlobalNamespace::SynthesisColumns::ApplyTexture(::UnityEngine::GameObject*  columnGO, ::StringW  textureKey, float_t  worldDiameterM)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ApplyTexture", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columnGO, textureKey, worldDiameterM);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::SynthesisColumns::FindTexture(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"FindTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, key);
}
inline bool GlobalNamespace::SynthesisColumns::IsHttpUrl(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"IsHttpUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::StringW GlobalNamespace::SynthesisColumns::GetCacheFilePathForUrl(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"GetCacheFilePathForUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, url);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::SynthesisColumns::TryLoadTextureFromDisk(::StringW  keyOrUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"TryLoadTextureFromDisk", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, keyOrUrl);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SynthesisColumns::DownloadAndCacheTextureCoroutine(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"DownloadAndCacheTextureCoroutine", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, url);
}
inline void GlobalNamespace::SynthesisColumns::ApplyDownloadedTextureToPending(::StringW  textureKey, ::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ApplyDownloadedTextureToPending", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureKey, tex);
}
inline void GlobalNamespace::SynthesisColumns::ApplyTextureToRenderer(::UnityEngine::MeshRenderer*  r, ::UnityEngine::Texture2D*  tex, float_t  worldDiameterM)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ApplyTextureToRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, tex, worldDiameterM);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::SynthesisColumns::BuildStripUVBox(float_t  w, float_t  d, float_t  h, float_t  tileMeters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"BuildStripUVBox", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, w, d, h, tileMeters);
}
inline float_t GlobalNamespace::SynthesisColumns::ComputeTileY_FromAspect(::UnityEngine::Texture2D*  tex, float_t  heightMeters, float_t  tileMetersX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"ComputeTileY_FromAspect", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, tex, heightMeters, tileMetersX);
}
inline ::StringW GlobalNamespace::SynthesisColumns::readColumnsFromJsonFile(::GlobalNamespace::SynthesisArcadeObject*  _instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"readColumnsFromJsonFile", {}, {::i2c::type_of<::GlobalNamespace::SynthesisArcadeObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _instance);
}
inline void GlobalNamespace::SynthesisColumns::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisColumns::_BuildStripUVBox_g__Face_37_0(::UnityEngine::Vector3  bl, ::UnityEngine::Vector3  tl, ::UnityEngine::Vector3  tr, ::UnityEngine::Vector3  br, ::UnityEngine::Vector2  uvBL, ::UnityEngine::Vector2  uvTL, ::UnityEngine::Vector2  uvTR, ::UnityEngine::Vector2  uvBR, ::by_ref<::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns*>(),
                        {"<BuildStripUVBox>g__Face|37_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bl, tl, tr, br, uvBL, uvTL, uvTR, uvBR, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::SynthesisColumns* GlobalNamespace::SynthesisColumns::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns::SynthesisColumns()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)(int32_t)>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b2c038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)()>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b2ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)()>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5b2ca2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)()>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b2cfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)()>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)()>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b2d084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::*)()>(&::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::SynthesisColumns>& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SynthesisColumns> const& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SynthesisColumns>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_set_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___url = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get__cachePath_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachePath_5__2;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get__cachePath_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachePath_5__2;
}
constexpr void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_set__cachePath_5__2(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachePath_5__2 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get__req_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____req_5__3;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_get__req_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____req_5__3;
}
constexpr void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__cordl_internal_set__req_5__3(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____req_5__3 = value;
}
inline void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34* GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::*)(int32_t)>(&::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b29be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::*)()>(&::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2c84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::*)()>(&::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b2c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::*)()>(&::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2c9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::*)()>(&::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b2c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::*)()>(&::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2ca08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_get_toDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toDestroy;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_get_toDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toDestroy;
}
constexpr void GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::__cordl_internal_set_toDestroy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toDestroy = value;
}
inline void GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26* GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26::SynthesisColumns__DestroyAfterPhysicsStep_d__26()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::*)()>(&::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2c844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::__cordl_internal_get_worldDiameterM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldDiameterM;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::__cordl_internal_get_worldDiameterM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldDiameterM;
}
constexpr void GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::__cordl_internal_set_worldDiameterM(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldDiameterM = value;
}
inline void GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData* GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData::SynthesisColumns_ColumnVisualRuntimeData()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns_TextureMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns_TextureMapping::*)()>(&::GlobalNamespace::SynthesisColumns_TextureMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_TextureMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SynthesisColumns_TextureMapping::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns_TextureMapping::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void GlobalNamespace::SynthesisColumns_TextureMapping::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::SynthesisColumns_TextureMapping::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::SynthesisColumns_TextureMapping::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void GlobalNamespace::SynthesisColumns_TextureMapping::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
inline void GlobalNamespace::SynthesisColumns_TextureMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_TextureMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynthesisColumns_TextureMapping* GlobalNamespace::SynthesisColumns_TextureMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns_TextureMapping*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns_TextureMapping::SynthesisColumns_TextureMapping()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::*)()>(&::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2c83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_shape(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shape = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_x(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_y(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___y = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_diameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diameter;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_diameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diameter;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_diameter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diameter = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_depth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::StringW& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::StringW const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_texture(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr float_t& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_rotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotate;
}
constexpr float_t const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_get_rotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotate;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::__cordl_internal_set_rotate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotate = value;
}
inline void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry* GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry::SynthesisColumns_SynthesisColumnLayoutEntry()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::*)()>(&::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2c834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>*& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::__cordl_internal_get_columns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columns;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>* const& GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::__cordl_internal_get_columns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columns;
}
constexpr void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::__cordl_internal_set_columns(::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___columns = value;
}
inline void GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload::SynthesisColumns_SynthesisColumnLayoutPayload()   {
}
