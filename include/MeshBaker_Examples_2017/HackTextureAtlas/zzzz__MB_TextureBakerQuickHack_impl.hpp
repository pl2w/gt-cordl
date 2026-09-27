#pragma once
// IWYU pragma private; include "MeshBaker_Examples_2017/HackTextureAtlas/MB_TextureBakerQuickHack.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MeshBaker_Examples_2017/HackTextureAtlas/zzzz__MB_TextureBakerQuickHack_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack.CreateAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::*)(::ArrayW<::UnityEngine::Material*>)>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::CreateAtlas)> {
  constexpr static std::size_t size = 0x114c;
  constexpr static std::size_t addrs = 0x9dff204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*>(),
                        {"CreateAtlas", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::*)()>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e00ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_colorTintPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTintPropertyName;
}
constexpr ::StringW const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_colorTintPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTintPropertyName;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_colorTintPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTintPropertyName = value;
}
constexpr ::StringW& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_albedoTexturePropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___albedoTexturePropertyName;
}
constexpr ::StringW const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_albedoTexturePropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___albedoTexturePropertyName;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_albedoTexturePropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___albedoTexturePropertyName = value;
}
constexpr ::StringW& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_shaderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderName;
}
constexpr ::StringW const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_shaderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderName;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_shaderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderName = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_sourceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_sourceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_sourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterials = value;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_materialBakeResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialBakeResult;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_materialBakeResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialBakeResult;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_materialBakeResult(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialBakeResult = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_atlasMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_atlasMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasMaterial;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_atlasMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_atlasTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_get_atlasTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasTexture;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::__cordl_internal_set_atlasTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasTexture = value;
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::CreateAtlas(::ArrayW<::UnityEngine::Material*>  passedInSourceMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*>(),
                        {"CreateAtlas", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passedInSourceMaterials);
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack* MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*>());
}
// Ctor Parameters []
constexpr ::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack::MB_TextureBakerQuickHack()   {
}
