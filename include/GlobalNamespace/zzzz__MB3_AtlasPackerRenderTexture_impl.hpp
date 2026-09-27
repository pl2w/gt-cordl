#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_AtlasPackerRenderTexture.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_AtlasPackerRenderTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureCombinerRenderTexture_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_AtlasPackerRenderTexture.OnRenderAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::MB3_AtlasPackerRenderTexture::*)(::DigitalOpus::MB::Core::MB3_TextureCombiner*)>(&::GlobalNamespace::MB3_AtlasPackerRenderTexture::OnRenderAtlas)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d72120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>(),
                        {"OnRenderAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_AtlasPackerRenderTexture.OnRenderObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_AtlasPackerRenderTexture::*)()>(&::GlobalNamespace::MB3_AtlasPackerRenderTexture::OnRenderObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d72200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>(),
                        {"OnRenderObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_AtlasPackerRenderTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_AtlasPackerRenderTexture::*)()>(&::GlobalNamespace::MB3_AtlasPackerRenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d7222c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MB_TextureCombinerRenderTexture*& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_fastRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastRenderer;
}
constexpr ::GlobalNamespace::MB_TextureCombinerRenderTexture* const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_fastRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastRenderer;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_fastRenderer(::GlobalNamespace::MB_TextureCombinerRenderTexture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastRenderer = value;
}
constexpr bool& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get__doRenderAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doRenderAtlas;
}
constexpr bool const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get__doRenderAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doRenderAtlas;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set__doRenderAtlas(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doRenderAtlas = value;
}
constexpr int32_t& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr int32_t& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr int32_t const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padding;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_padding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___padding = value;
}
constexpr bool& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_isNormalMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNormalMap;
}
constexpr bool const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_isNormalMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNormalMap;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_isNormalMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNormalMap = value;
}
constexpr bool& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_fixOutOfBoundsUVs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixOutOfBoundsUVs;
}
constexpr bool const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_fixOutOfBoundsUVs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixOutOfBoundsUVs;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_fixOutOfBoundsUVs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixOutOfBoundsUVs = value;
}
constexpr bool& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_considerNonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___considerNonTextureProperties;
}
constexpr bool const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_considerNonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___considerNonTextureProperties;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_considerNonTextureProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___considerNonTextureProperties = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_resultMaterialTextureBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_resultMaterialTextureBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterialTextureBlender = value;
}
constexpr ::ArrayW<::UnityEngine::Rect>& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_rects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rects;
}
constexpr ::ArrayW<::UnityEngine::Rect> const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_rects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rects;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_rects(::ArrayW<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rects = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_tex1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_tex1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_tex1(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex1 = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_textureSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSets;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_textureSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSets;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_textureSets(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureSets = value;
}
constexpr int32_t& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_indexOfTexSetToRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexOfTexSetToRender;
}
constexpr int32_t const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_indexOfTexSetToRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexOfTexSetToRender;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_indexOfTexSetToRender(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexOfTexSetToRender = value;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_texPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyName;
}
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_texPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texPropertyName;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_texPropertyName(::DigitalOpus::MB::Core::ShaderTextureProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texPropertyName = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_testTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_testTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTex;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_testTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testTex = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_testMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_get_testMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testMat;
}
constexpr void GlobalNamespace::MB3_AtlasPackerRenderTexture::__cordl_internal_set_testMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testMat = value;
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::MB3_AtlasPackerRenderTexture::OnRenderAtlas(::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>(),
                        {"OnRenderAtlas", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombiner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, combiner);
}
inline void GlobalNamespace::MB3_AtlasPackerRenderTexture::OnRenderObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>(),
                        {"OnRenderObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_AtlasPackerRenderTexture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_AtlasPackerRenderTexture* GlobalNamespace::MB3_AtlasPackerRenderTexture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_AtlasPackerRenderTexture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_AtlasPackerRenderTexture::MB3_AtlasPackerRenderTexture()   {
}
