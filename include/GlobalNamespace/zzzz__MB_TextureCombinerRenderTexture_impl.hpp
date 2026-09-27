#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureCombinerRenderTexture.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureCombinerRenderTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture.DoRenderAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::MB_TextureCombinerRenderTexture::*)(::UnityEngine::GameObject*, int32_t, int32_t, int32_t, ::ArrayW<::UnityEngine::Rect>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int32_t, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::DoRenderAtlas)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x9d6fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"DoRenderAtlas", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rect>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture.OnRenderObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureCombinerRenderTexture::*)()>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::OnRenderObject)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x9d70578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"OnRenderObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture.ConvertRenderTextureToTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, bool, bool, ::DigitalOpus::MB::Core::MB2_LogLevel, ::UnityEngine::Texture2D*)>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::ConvertRenderTextureToTexture2D)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9d7184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"ConvertRenderTextureToTexture2D", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture.ConvertNormalFormatFromUnity_ToStandard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::GlobalNamespace::MB_TextureCombinerRenderTexture::*)(::UnityEngine::Color32)>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::ConvertNormalFormatFromUnity_ToStandard)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d71f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"ConvertNormalFormatFromUnity_ToStandard", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture.YisFlipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB2_LogLevel)>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::YisFlipped)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9d70de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"YisFlipped", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture.CopyScaledAndTiledToAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureCombinerRenderTexture::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, bool)>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::CopyScaledAndTiledToAtlas)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x9d70ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"CopyScaledAndTiledToAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture._printTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::_printTexture)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x9d71bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"_printTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_TextureCombinerRenderTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureCombinerRenderTexture::*)()>(&::GlobalNamespace::MB_TextureCombinerRenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d72110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_mat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_mat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mat;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_mat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mat = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__destinationTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__destinationTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationTexture;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__destinationTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destinationTexture = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_myCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_myCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCamera;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_myCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCamera = value;
}
constexpr int32_t& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padding;
}
constexpr int32_t const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padding;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__padding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____padding = value;
}
constexpr bool& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__isNormalMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNormalMap;
}
constexpr bool const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__isNormalMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNormalMap;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__isNormalMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isNormalMap = value;
}
constexpr bool& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__fixOutOfBoundsUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr bool const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__fixOutOfBoundsUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixOutOfBoundsUVs;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__fixOutOfBoundsUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixOutOfBoundsUVs = value;
}
constexpr bool& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__doRenderAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doRenderAtlas;
}
constexpr bool const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__doRenderAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doRenderAtlas;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__doRenderAtlas(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doRenderAtlas = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_rs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rs;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_rs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rs;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_rs(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rs = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_textureSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSets;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_textureSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSets;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_textureSets(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureSets = value;
}
constexpr int32_t& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_indexOfTexSetToRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexOfTexSetToRender;
}
constexpr int32_t const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_indexOfTexSetToRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexOfTexSetToRender;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_indexOfTexSetToRender(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexOfTexSetToRender = value;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__texPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texPropertyName;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__texPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texPropertyName;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__texPropertyName(::DigitalOpus::MB::Core::ShaderTextureProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____texPropertyName = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__resultMaterialTextureBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultMaterialTextureBlender;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get__resultMaterialTextureBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultMaterialTextureBlender;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set__resultMaterialTextureBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultMaterialTextureBlender = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_targTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_get_targTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targTex;
}
constexpr void GlobalNamespace::MB_TextureCombinerRenderTexture::__cordl_internal_set_targTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targTex = value;
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::MB_TextureCombinerRenderTexture::DoRenderAtlas(::UnityEngine::GameObject*  gameObject, int32_t  width, int32_t  height, int32_t  padding, ::ArrayW<::UnityEngine::Rect>  rss, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  textureSetss, int32_t  indexOfTexSetToRenders, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyname, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender, bool  isNormalMap, bool  fixOutOfBoundsUVs, bool  considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  texCombiner, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"DoRenderAtlas", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rect>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, gameObject, width, height, padding, rss, textureSetss, indexOfTexSetToRenders, texPropertyname, resultMaterialTextureBlender, isNormalMap, fixOutOfBoundsUVs, considerNonTextureProperties, texCombiner, LOG_LEV);
}
inline void GlobalNamespace::MB_TextureCombinerRenderTexture::OnRenderObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"OnRenderObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_TextureCombinerRenderTexture::ConvertRenderTextureToTexture2D(::UnityEngine::RenderTexture*  _destinationTexture, bool  yIsFlipped, bool  doLinearColorSpace, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::UnityEngine::Texture2D*  tempTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"ConvertRenderTextureToTexture2D", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _destinationTexture, yIsFlipped, doLinearColorSpace, LOG_LEVEL, tempTexture);
}
inline ::UnityEngine::Color32 GlobalNamespace::MB_TextureCombinerRenderTexture::ConvertNormalFormatFromUnity_ToStandard(::UnityEngine::Color32  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"ConvertNormalFormatFromUnity_ToStandard", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, c);
}
inline bool GlobalNamespace::MB_TextureCombinerRenderTexture::YisFlipped(::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"YisFlipped", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, LOG_LEVEL);
}
inline void GlobalNamespace::MB_TextureCombinerRenderTexture::CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source, ::UnityEngine::Vector2  obUVoffset, ::UnityEngine::Vector2  obUVscale, ::UnityEngine::Rect  rec, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texturePropertyName, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMatTexBlender, bool  yIsFlipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"CopyScaledAndTiledToAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texSet, source, obUVoffset, obUVscale, rec, texturePropertyName, resultMatTexBlender, yIsFlipped);
}
inline void GlobalNamespace::MB_TextureCombinerRenderTexture::_printTexture(::UnityEngine::Texture2D*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {"_printTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::MB_TextureCombinerRenderTexture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureCombinerRenderTexture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_TextureCombinerRenderTexture* GlobalNamespace::MB_TextureCombinerRenderTexture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TextureCombinerRenderTexture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TextureCombinerRenderTexture::MB_TextureCombinerRenderTexture()   {
}
