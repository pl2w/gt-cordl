#pragma once
// IWYU pragma private; include "GlobalNamespace/UberCombinerAssets.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__UberCombinerAssets_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UberCombinerAssets.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::UberCombinerAssets> (*)()>(&::GlobalNamespace::UberCombinerAssets::get_Instance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b3d714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberCombinerAssets.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberCombinerAssets::*)()>(&::GlobalNamespace::UberCombinerAssets::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3d79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberCombinerAssets.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberCombinerAssets::*)()>(&::GlobalNamespace::UberCombinerAssets::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberCombinerAssets.ClearMaterialAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberCombinerAssets::*)()>(&::GlobalNamespace::UberCombinerAssets::ClearMaterialAssets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3d7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"ClearMaterialAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberCombinerAssets.ClearPrefabAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberCombinerAssets::*)()>(&::GlobalNamespace::UberCombinerAssets::ClearPrefabAssets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"ClearPrefabAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UberCombinerAssets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UberCombinerAssets::*)()>(&::GlobalNamespace::UberCombinerAssets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3d7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__rootFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootFolder;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__rootFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootFolder;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set__rootFolder(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootFolder = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__resourcesFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourcesFolder;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__resourcesFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourcesFolder;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set__resourcesFolder(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resourcesFolder = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__materialsFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialsFolder;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__materialsFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialsFolder;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set__materialsFolder(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialsFolder = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__prefabsFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabsFolder;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get__prefabsFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabsFolder;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set__prefabsFolder(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefabsFolder = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_MeshBakerDefaultCustomizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshBakerDefaultCustomizer;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_MeshBakerDefaultCustomizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshBakerDefaultCustomizer;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_MeshBakerDefaultCustomizer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MeshBakerDefaultCustomizer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_ReferenceUberMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReferenceUberMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_ReferenceUberMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReferenceUberMaterial;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_ReferenceUberMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReferenceUberMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_TextureArrayCapableShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextureArrayCapableShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_TextureArrayCapableShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextureArrayCapableShader;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_TextureArrayCapableShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TextureArrayCapableShader = value;
}
constexpr ::StringW& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_RootFolderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootFolderPath;
}
constexpr ::StringW const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_RootFolderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootFolderPath;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_RootFolderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RootFolderPath = value;
}
constexpr ::StringW& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_ResourcesFolderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourcesFolderPath;
}
constexpr ::StringW const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_ResourcesFolderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourcesFolderPath;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_ResourcesFolderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResourcesFolderPath = value;
}
constexpr ::StringW& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_MaterialsFolderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialsFolderPath;
}
constexpr ::StringW const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_MaterialsFolderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialsFolderPath;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_MaterialsFolderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaterialsFolderPath = value;
}
constexpr ::StringW& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_PrefabsFolderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabsFolderPath;
}
constexpr ::StringW const& GlobalNamespace::UberCombinerAssets::__cordl_internal_get_PrefabsFolderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabsFolderPath;
}
constexpr void GlobalNamespace::UberCombinerAssets::__cordl_internal_set_PrefabsFolderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrefabsFolderPath = value;
}
inline void GlobalNamespace::UberCombinerAssets::setStaticF_gInstance(::UnityW<::GlobalNamespace::UberCombinerAssets>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::UberCombinerAssets>, "gInstance", ::GlobalNamespace::UberCombinerAssets*>(std::forward<::UnityW<::GlobalNamespace::UberCombinerAssets>>(value));
}
inline ::UnityW<::GlobalNamespace::UberCombinerAssets> GlobalNamespace::UberCombinerAssets::getStaticF_gInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::UberCombinerAssets>, "gInstance", ::GlobalNamespace::UberCombinerAssets*>();
}
inline ::UnityW<::GlobalNamespace::UberCombinerAssets> GlobalNamespace::UberCombinerAssets::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::UberCombinerAssets>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::UberCombinerAssets::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UberCombinerAssets::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UberCombinerAssets::ClearMaterialAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"ClearMaterialAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UberCombinerAssets::ClearPrefabAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {"ClearPrefabAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UberCombinerAssets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UberCombinerAssets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UberCombinerAssets* GlobalNamespace::UberCombinerAssets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UberCombinerAssets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UberCombinerAssets::UberCombinerAssets()   {
}
