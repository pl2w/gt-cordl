#pragma once
// IWYU pragma private; include "MeshBaker_Examples_2017/HackTextureAtlas/MB_CustomizeCharacterGUI.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MeshBaker_Examples_2017/HackTextureAtlas/zzzz__MB_CustomizeCharacterGUI_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBaker_def.hpp"
#include "MeshBaker_Examples_2017/HackTextureAtlas/zzzz__MB_TextureBakerQuickHack_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::*)()>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::Start)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x9dfef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::*)()>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::OnGUI)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x9e003e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI.SetColorInMaterialBakeResultAndBakeMeshBaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::*)(::UnityEngine::Material*, ::UnityEngine::Color)>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::SetColorInMaterialBakeResultAndBakeMeshBaker)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9e00d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"SetColorInMaterialBakeResultAndBakeMeshBaker", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI.BakeMeshBaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::*)()>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::BakeMeshBaker)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e00350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"BakeMeshBaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::*)()>(&::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e00ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_sourceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_sourceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterials;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_sourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_objectsToBeCombined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToBeCombined;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_objectsToBeCombined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToBeCombined;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_objectsToBeCombined(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToBeCombined = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_targetMeshBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMeshBaker;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_targetMeshBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMeshBaker;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_targetMeshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMeshBaker = value;
}
constexpr ::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack>& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_textureBakerQuickHack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBakerQuickHack;
}
constexpr ::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack> const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_textureBakerQuickHack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBakerQuickHack;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_textureBakerQuickHack(::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureBakerQuickHack = value;
}
constexpr ::StringW& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_colorTintPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTintPropertyName;
}
constexpr ::StringW const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_colorTintPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTintPropertyName;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_colorTintPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTintPropertyName = value;
}
constexpr ::StringW& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_albedoTexturePropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___albedoTexturePropertyName;
}
constexpr ::StringW const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_albedoTexturePropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___albedoTexturePropertyName;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_albedoTexturePropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___albedoTexturePropertyName = value;
}
constexpr ::StringW& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_shaderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderName;
}
constexpr ::StringW const& MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_get_shaderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderName;
}
constexpr void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::__cordl_internal_set_shaderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderName = value;
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::SetColorInMaterialBakeResultAndBakeMeshBaker(::UnityEngine::Material*  bodyPartMaterial, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"SetColorInMaterialBakeResultAndBakeMeshBaker", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyPartMaterial, color);
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::BakeMeshBaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {"BakeMeshBaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI* MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*>());
}
// Ctor Parameters []
constexpr ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI::MB_CustomizeCharacterGUI()   {
}
