#pragma once
// IWYU pragma private; include "GlobalNamespace/PerSceneRenderData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerSceneRenderData_def.hpp"
#include "GlobalNamespace/zzzz__PerSceneRenderData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.RefreshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::RefreshRenderer)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x567d288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"RefreshRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.get_sceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::get_sceneName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x567d414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_sceneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.get_sceneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::get_sceneIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x567d3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_sceneIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x567d44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x567d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x567d594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.AddMeshToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*)>(&::GlobalNamespace::PerSceneRenderData::AddMeshToList)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x567d5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"AddMeshToList", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.CheckShouldRepopulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::CheckShouldRepopulate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x567d704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"CheckShouldRepopulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.get_IsLoadingLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::get_IsLoadingLightmaps)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x567d734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_IsLoadingLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.get_LoadingLightmapsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::get_LoadingLightmapsCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x567d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_LoadingLightmapsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.GetLightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::PerSceneRenderData::*)(::StringW)>(&::GlobalNamespace::PerSceneRenderData::GetLightmap)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x567d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"GetLightmap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.PopulateLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::StringW, ::StringW, ::ArrayW<::UnityEngine::LightmapData*>)>(&::GlobalNamespace::PerSceneRenderData::PopulateLightmaps)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x567da1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"PopulateLightmaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::LightmapData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.ReleaseLightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::StringW)>(&::GlobalNamespace::PerSceneRenderData::ReleaseLightmap)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x567dde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"ReleaseLightmap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.TryGetLightmapOrAsyncLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::StringW, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*)>(&::GlobalNamespace::PerSceneRenderData::TryGetLightmapOrAsyncLoad)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x567de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"TryGetLightmapOrAsyncLoad", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.IsLightmapWithNameLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerSceneRenderData::*)(::StringW)>(&::GlobalNamespace::PerSceneRenderData::IsLightmapWithNameLoaded)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x567e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"IsLightmapWithNameLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.IsLightmapsWithNamesLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerSceneRenderData::*)(::StringW, ::StringW)>(&::GlobalNamespace::PerSceneRenderData::IsLightmapsWithNamesLoaded)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x567e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"IsLightmapsWithNamesLoaded", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.GetFromAndToLightmapNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::by_ref<::StringW>, ::by_ref<::StringW>)>(&::GlobalNamespace::PerSceneRenderData::GetFromAndToLightmapNames)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x567e308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"GetFromAndToLightmapNames", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.g_StartAllScenesPopulateLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::PerSceneRenderData::g_StartAllScenesPopulateLightmaps)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x567e5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"g_StartAllScenesPopulateLightmaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData._g_AllScenesPopulateLightmaps_OnOneCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PerSceneRenderData*)>(&::GlobalNamespace::PerSceneRenderData::_g_AllScenesPopulateLightmaps_OnOneCompleted)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x567e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"_g_AllScenesPopulateLightmaps_OnOneCompleted", {}, {::i2c::type_of<::GlobalNamespace::PerSceneRenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.get_g_AllScenesPopulatingLightmapsLoadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::PerSceneRenderData::get_g_AllScenesPopulatingLightmapsLoadCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x567ea3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_g_AllScenesPopulatingLightmapsLoadCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData.StartPopulateLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::StringW, ::StringW)>(&::GlobalNamespace::PerSceneRenderData::StartPopulateLightmaps)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x567e804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"StartPopulateLightmaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData._PopulateLightmaps_OnLoadLightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::PerSceneRenderData::_PopulateLightmaps_OnLoadLightmap)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x567eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"_PopulateLightmaps_OnLoadLightmap", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData::*)()>(&::GlobalNamespace::PerSceneRenderData::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x567eda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_representativeRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___representativeRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_representativeRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___representativeRenderer;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_representativeRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___representativeRenderer = value;
}
constexpr ::StringW& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_lightmapsResourcePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapsResourcePath;
}
constexpr ::StringW const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_lightmapsResourcePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapsResourcePath;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_lightmapsResourcePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapsResourcePath = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_singleLightmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleLightmap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_singleLightmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleLightmap;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_singleLightmap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleLightmap = value;
}
constexpr int32_t& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_lastLightmapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLightmapIndex;
}
constexpr int32_t const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_lastLightmapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLightmapIndex;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_lastLightmapIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLightmapIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_gO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gO;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_gO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gO;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_gO(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gO = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_mRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_mRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRenderers;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_mRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mRenderers = value;
}
constexpr int32_t& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_mRendererIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRendererIndex;
}
constexpr int32_t const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_mRendererIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRendererIndex;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_mRendererIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mRendererIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>*& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_resourceRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceRequests;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>* const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_resourceRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceRequests;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_resourceRequests(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceRequests = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_lightmapsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapsCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_lightmapsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapsCache;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_lightmapsCache(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapsCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>*& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__momentName_to_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____momentName_to_callbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>* const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__momentName_to_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____momentName_to_callbacks;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set__momentName_to_callbacks(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____momentName_to_callbacks = value;
}
constexpr ::StringW& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_fromMomentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_fromMomentName;
}
constexpr ::StringW const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_fromMomentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_fromMomentName;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set__populateLightmaps_fromMomentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____populateLightmaps_fromMomentName = value;
}
constexpr ::StringW& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_toMomentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_toMomentName;
}
constexpr ::StringW const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_toMomentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_toMomentName;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set__populateLightmaps_toMomentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____populateLightmaps_toMomentName = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_fromMomentLightmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_fromMomentLightmap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_fromMomentLightmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_fromMomentLightmap;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set__populateLightmaps_fromMomentLightmap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____populateLightmaps_fromMomentLightmap = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_toMomentLightmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_toMomentLightmap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get__populateLightmaps_toMomentLightmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____populateLightmaps_toMomentLightmap;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set__populateLightmaps_toMomentLightmap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____populateLightmaps_toMomentLightmap = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_OnPopulateToAndFromLightmapsCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPopulateToAndFromLightmapsCompleted;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>* const& GlobalNamespace::PerSceneRenderData::__cordl_internal_get_OnPopulateToAndFromLightmapsCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPopulateToAndFromLightmapsCompleted;
}
constexpr void GlobalNamespace::PerSceneRenderData::__cordl_internal_set_OnPopulateToAndFromLightmapsCompleted(::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPopulateToAndFromLightmapsCompleted = value;
}
inline void GlobalNamespace::PerSceneRenderData::setStaticF__g_allScenesPopulateLightmaps_renderDatasHashSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*, "_g_allScenesPopulateLightmaps_renderDatasHashSet", ::GlobalNamespace::PerSceneRenderData*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>* GlobalNamespace::PerSceneRenderData::getStaticF__g_allScenesPopulateLightmaps_renderDatasHashSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*, "_g_allScenesPopulateLightmaps_renderDatasHashSet", ::GlobalNamespace::PerSceneRenderData*>();
}
inline void GlobalNamespace::PerSceneRenderData::setStaticF_g_OnAllScenesPopulateLightmapsCompleted(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "g_OnAllScenesPopulateLightmapsCompleted", ::GlobalNamespace::PerSceneRenderData*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::PerSceneRenderData::getStaticF_g_OnAllScenesPopulateLightmapsCompleted()  {
return ::cordl_internals::getStaticField<::System::Action*, "g_OnAllScenesPopulateLightmapsCompleted", ::GlobalNamespace::PerSceneRenderData*>();
}
inline void GlobalNamespace::PerSceneRenderData::RefreshRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"RefreshRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PerSceneRenderData::get_sceneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_sceneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PerSceneRenderData::get_sceneIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_sceneIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData::AddMeshToList(::UnityEngine::GameObject*  _gO, ::UnityEngine::MeshRenderer*  mR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"AddMeshToList", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _gO, mR);
}
inline bool GlobalNamespace::PerSceneRenderData::CheckShouldRepopulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"CheckShouldRepopulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PerSceneRenderData::get_IsLoadingLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_IsLoadingLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PerSceneRenderData::get_LoadingLightmapsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_LoadingLightmapsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::PerSceneRenderData::GetLightmap(::StringW  timeOfDay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"GetLightmap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, timeOfDay);
}
inline void GlobalNamespace::PerSceneRenderData::PopulateLightmaps(::StringW  fromTimeOfDay, ::StringW  toTimeOfDay, ::ArrayW<::UnityEngine::LightmapData*>  lightmaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"PopulateLightmaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::LightmapData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromTimeOfDay, toTimeOfDay, lightmaps);
}
inline void GlobalNamespace::PerSceneRenderData::ReleaseLightmap(::StringW  oldTimeOfDay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"ReleaseLightmap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldTimeOfDay);
}
inline void GlobalNamespace::PerSceneRenderData::TryGetLightmapOrAsyncLoad(::StringW  momentName, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"TryGetLightmapOrAsyncLoad", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, momentName, callback);
}
inline bool GlobalNamespace::PerSceneRenderData::IsLightmapWithNameLoaded(::StringW  lightmapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"IsLightmapWithNameLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lightmapName);
}
inline bool GlobalNamespace::PerSceneRenderData::IsLightmapsWithNamesLoaded(::StringW  fromLightmapName, ::StringW  toLightmapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"IsLightmapsWithNamesLoaded", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromLightmapName, toLightmapName);
}
inline void GlobalNamespace::PerSceneRenderData::GetFromAndToLightmapNames(::by_ref<::StringW>  fromLightmapName, ::by_ref<::StringW>  toLightmapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"GetFromAndToLightmapNames", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromLightmapName, toLightmapName);
}
inline void GlobalNamespace::PerSceneRenderData::g_StartAllScenesPopulateLightmaps(::StringW  fromLightmapName, ::StringW  toLightmapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"g_StartAllScenesPopulateLightmaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromLightmapName, toLightmapName);
}
inline void GlobalNamespace::PerSceneRenderData::_g_AllScenesPopulateLightmaps_OnOneCompleted(::GlobalNamespace::PerSceneRenderData*  perSceneRenderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"_g_AllScenesPopulateLightmaps_OnOneCompleted", {}, {::i2c::type_of<::GlobalNamespace::PerSceneRenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, perSceneRenderData);
}
inline int32_t GlobalNamespace::PerSceneRenderData::get_g_AllScenesPopulatingLightmapsLoadCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"get_g_AllScenesPopulatingLightmapsLoadCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData::StartPopulateLightmaps(::StringW  fromMomentName, ::StringW  toMomentName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"StartPopulateLightmaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromMomentName, toMomentName);
}
inline void GlobalNamespace::PerSceneRenderData::_PopulateLightmaps_OnLoadLightmap(::UnityEngine::Texture2D*  lightmapTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {"_PopulateLightmaps_OnLoadLightmap", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightmapTex);
}
inline void GlobalNamespace::PerSceneRenderData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerSceneRenderData* GlobalNamespace::PerSceneRenderData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerSceneRenderData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerSceneRenderData::PerSceneRenderData()   {
}
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::*)()>(&::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567e204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0._TryGetLightmapOrAsyncLoad_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::_TryGetLightmapOrAsyncLoad_b__0)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x567f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*>(),
                        {"<TryGetLightmapOrAsyncLoad>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData>& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData> const& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PerSceneRenderData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::ResourceRequest*& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::ResourceRequest* const& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_set_request(::UnityEngine::ResourceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::StringW& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get_momentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___momentName;
}
constexpr ::StringW const& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get_momentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___momentName;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_set_momentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___momentName = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>* const& GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::__cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacks = value;
}
inline void GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::_TryGetLightmapOrAsyncLoad_b__0(::UnityEngine::AsyncOperation*  ao)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*>(),
                        {"<TryGetLightmapOrAsyncLoad>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ao);
}
inline ::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0* GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0::PerSceneRenderData___c__DisplayClass27_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::*)()>(&::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567da14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0._GetLightmap_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::_GetLightmap_b__0)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x567efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*>(),
                        {"<GetLightmap>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData>& GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData> const& GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PerSceneRenderData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_get_timeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDay;
}
constexpr ::StringW const& GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_get_timeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDay;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_set_timeOfDay(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDay = value;
}
constexpr ::UnityEngine::ResourceRequest*& GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::ResourceRequest* const& GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::__cordl_internal_set_request(::UnityEngine::ResourceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::_GetLightmap_b__0(::UnityEngine::AsyncOperation*  ao)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*>(),
                        {"<GetLightmap>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ao);
}
inline ::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0* GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0::PerSceneRenderData___c__DisplayClass23_0()   {
}
