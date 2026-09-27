#pragma once
// IWYU pragma private; include "GlobalNamespace/UberCombinerAssets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UberCombinerAssets)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class UberCombinerAssets;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UberCombinerAssets*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberCombinerAssets*, "", "UberCombinerAssets");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberCombinerAssets
class CORDL_TYPE UberCombinerAssets : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field MaterialsFolderPath, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaterialsFolderPath, put=__cordl_internal_set_MaterialsFolderPath)) ::StringW  MaterialsFolderPath;

/// @brief Field MeshBakerDefaultCustomizer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MeshBakerDefaultCustomizer, put=__cordl_internal_set_MeshBakerDefaultCustomizer)) ::UnityW<::UnityEngine::Object>  MeshBakerDefaultCustomizer;

/// @brief Field PrefabsFolderPath, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrefabsFolderPath, put=__cordl_internal_set_PrefabsFolderPath)) ::StringW  PrefabsFolderPath;

/// @brief Field ReferenceUberMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReferenceUberMaterial, put=__cordl_internal_set_ReferenceUberMaterial)) ::UnityW<::UnityEngine::Material>  ReferenceUberMaterial;

/// @brief Field ResourcesFolderPath, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResourcesFolderPath, put=__cordl_internal_set_ResourcesFolderPath)) ::StringW  ResourcesFolderPath;

/// @brief Field RootFolderPath, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RootFolderPath, put=__cordl_internal_set_RootFolderPath)) ::StringW  RootFolderPath;

/// @brief Field TextureArrayCapableShader, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TextureArrayCapableShader, put=__cordl_internal_set_TextureArrayCapableShader)) ::UnityW<::UnityEngine::Shader>  TextureArrayCapableShader;

/// @brief Field _materialsFolder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialsFolder, put=__cordl_internal_set__materialsFolder)) ::UnityW<::UnityEngine::Object>  _materialsFolder;

/// @brief Field _prefabsFolder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefabsFolder, put=__cordl_internal_set__prefabsFolder)) ::UnityW<::UnityEngine::Object>  _prefabsFolder;

/// @brief Field _resourcesFolder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__resourcesFolder, put=__cordl_internal_set__resourcesFolder)) ::UnityW<::UnityEngine::Object>  _resourcesFolder;

/// @brief Field _rootFolder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootFolder, put=__cordl_internal_set__rootFolder)) ::UnityW<::UnityEngine::Object>  _rootFolder;

/// @brief Field gInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gInstance, put=setStaticF_gInstance)) ::UnityW<::GlobalNamespace::UberCombinerAssets>  gInstance;

/// @brief Method ClearMaterialAssets, addr 0x5b3d7a4, size 0x4, virtual false, abstract: false, final false
inline void ClearMaterialAssets() ;

/// @brief Method ClearPrefabAssets, addr 0x5b3d7a8, size 0x4, virtual false, abstract: false, final false
inline void ClearPrefabAssets() ;

static inline ::GlobalNamespace::UberCombinerAssets* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b3d79c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x5b3d7a0, size 0x4, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::StringW const& __cordl_internal_get_MaterialsFolderPath() const;

constexpr ::StringW& __cordl_internal_get_MaterialsFolderPath() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_MeshBakerDefaultCustomizer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_MeshBakerDefaultCustomizer() ;

constexpr ::StringW const& __cordl_internal_get_PrefabsFolderPath() const;

constexpr ::StringW& __cordl_internal_get_PrefabsFolderPath() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ReferenceUberMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ReferenceUberMaterial() ;

constexpr ::StringW const& __cordl_internal_get_ResourcesFolderPath() const;

constexpr ::StringW& __cordl_internal_get_ResourcesFolderPath() ;

constexpr ::StringW const& __cordl_internal_get_RootFolderPath() const;

constexpr ::StringW& __cordl_internal_get_RootFolderPath() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_TextureArrayCapableShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_TextureArrayCapableShader() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__materialsFolder() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__materialsFolder() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__prefabsFolder() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__prefabsFolder() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__resourcesFolder() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__resourcesFolder() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__rootFolder() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__rootFolder() ;

constexpr void __cordl_internal_set_MaterialsFolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_MeshBakerDefaultCustomizer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_PrefabsFolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_ReferenceUberMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ResourcesFolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_RootFolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_TextureArrayCapableShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__materialsFolder(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__prefabsFolder(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__resourcesFolder(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rootFolder(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x5b3d7ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::UberCombinerAssets> getStaticF_gInstance() ;

/// @brief Method get_Instance, addr 0x5b3d714, size 0x88, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::UberCombinerAssets> get_Instance() ;

static inline void setStaticF_gInstance(::UnityW<::GlobalNamespace::UberCombinerAssets>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberCombinerAssets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberCombinerAssets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberCombinerAssets(UberCombinerAssets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberCombinerAssets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberCombinerAssets(UberCombinerAssets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3699};

/// [SerializeField]
/// @brief Field _rootFolder, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____rootFolder;

/// [SerializeField]
/// @brief Field _resourcesFolder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____resourcesFolder;

/// [SerializeField]
/// @brief Field _materialsFolder, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____materialsFolder;

/// [SerializeField]
/// @brief Field _prefabsFolder, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____prefabsFolder;

/// [Space]
/// @brief Field MeshBakerDefaultCustomizer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___MeshBakerDefaultCustomizer;

/// @brief Field ReferenceUberMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ReferenceUberMaterial;

/// @brief Field TextureArrayCapableShader, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___TextureArrayCapableShader;

/// [Space]
/// @brief Field RootFolderPath, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___RootFolderPath;

/// @brief Field ResourcesFolderPath, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ResourcesFolderPath;

/// @brief Field MaterialsFolderPath, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___MaterialsFolderPath;

/// @brief Field PrefabsFolderPath, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___PrefabsFolderPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ____rootFolder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ____resourcesFolder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ____materialsFolder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ____prefabsFolder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___MeshBakerDefaultCustomizer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___ReferenceUberMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___TextureArrayCapableShader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___RootFolderPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___ResourcesFolderPath) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___MaterialsFolderPath) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerAssets, ___PrefabsFolderPath) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UberCombinerAssets) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
