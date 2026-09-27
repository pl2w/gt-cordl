#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLightmapsStorage.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ftLightmapsStorage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ftLightmapsStorage.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ftLightmapsStorage::*)()>(&::GlobalNamespace::ftLightmapsStorage::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f2b008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmapsStorage.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ftLightmapsStorage::*)()>(&::GlobalNamespace::ftLightmapsStorage::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f2b08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmapsStorage.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ftLightmapsStorage::*)()>(&::GlobalNamespace::ftLightmapsStorage::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f2b130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmapsStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ftLightmapsStorage::*)()>(&::GlobalNamespace::ftLightmapsStorage::_ctor)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5f2b184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedRenderers;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedRenderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_nonBakedRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonBakedRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_nonBakedRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonBakedRenderers;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_nonBakedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonBakedRenderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedLights;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedLights;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedLights(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedLights = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedRenderersTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedRenderersTerrain;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedRenderersTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedRenderersTerrain;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedRenderersTerrain(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedRenderersTerrain = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_maps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maps;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_maps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maps;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_maps(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maps = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_masks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_masks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masks;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_masks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masks = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_dirMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirMaps;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_dirMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirMaps;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_dirMaps(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirMaps = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_rnmMaps0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnmMaps0;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_rnmMaps0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnmMaps0;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_rnmMaps0(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnmMaps0 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_rnmMaps1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnmMaps1;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_rnmMaps1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnmMaps1;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_rnmMaps1(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnmMaps1 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_rnmMaps2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnmMaps2;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_rnmMaps2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnmMaps2;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_rnmMaps2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnmMaps2 = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_mapsMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapsMode;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_mapsMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapsMode;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_mapsMode(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapsMode = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedIDs;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedIDs;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedIDs(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedIDs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedScaleOffset;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedScaleOffset;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedScaleOffset(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedScaleOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedVertexColorMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedVertexColorMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedVertexColorMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedVertexColorMesh;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedVertexColorMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedVertexColorMesh = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedLightChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedLightChannels;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedLightChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedLightChannels;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedLightChannels(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedLightChannels = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedIDsTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedIDsTerrain;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedIDsTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedIDsTerrain;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedIDsTerrain(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedIDsTerrain = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedScaleOffsetTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedScaleOffsetTerrain;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_bakedScaleOffsetTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedScaleOffsetTerrain;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_bakedScaleOffsetTerrain(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedScaleOffsetTerrain = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_assetList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assetList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_assetList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assetList;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_assetList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assetList = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_uvOverlapAssetList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvOverlapAssetList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_uvOverlapAssetList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvOverlapAssetList;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_uvOverlapAssetList(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uvOverlapAssetList = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_idremap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idremap;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_idremap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idremap;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_idremap(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idremap = value;
}
constexpr bool& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_usesRealtimeGI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usesRealtimeGI;
}
constexpr bool const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_usesRealtimeGI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usesRealtimeGI;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_usesRealtimeGI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usesRealtimeGI = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_emptyDirectionTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyDirectionTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_emptyDirectionTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyDirectionTex;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_emptyDirectionTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyDirectionTex = value;
}
constexpr bool& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_anyVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyVolumes;
}
constexpr bool const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_anyVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyVolumes;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_anyVolumes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyVolumes = value;
}
constexpr bool& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_compressedVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedVolumes;
}
constexpr bool const& GlobalNamespace::ftLightmapsStorage::__cordl_internal_get_compressedVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedVolumes;
}
constexpr void GlobalNamespace::ftLightmapsStorage::__cordl_internal_set_compressedVolumes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressedVolumes = value;
}
inline void GlobalNamespace::ftLightmapsStorage::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ftLightmapsStorage::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ftLightmapsStorage::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ftLightmapsStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmapsStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ftLightmapsStorage* GlobalNamespace::ftLightmapsStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ftLightmapsStorage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ftLightmapsStorage::ftLightmapsStorage()   {
}
