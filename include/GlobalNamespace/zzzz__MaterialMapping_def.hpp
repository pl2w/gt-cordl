#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderGroup_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MaterialMapping)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialMapping;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialMapping*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialMapping*, "", "MaterialMapping");
// Dependencies ShaderGroup, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialMapping
class CORDL_TYPE MaterialMapping : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::MaterialMapping>  instance;

/// @brief Field map, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::ArrayW<::GlobalNamespace::ShaderGroup>  map;

/// @brief Field materialDirectory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_materialDirectory, put=setStaticF_materialDirectory)) ::StringW  materialDirectory;

/// @brief Field mirrorMat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorMat, put=__cordl_internal_set_mirrorMat)) ::UnityW<::UnityEngine::Material>  mirrorMat;

/// @brief Field mirrorTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorTexture, put=__cordl_internal_set_mirrorTexture)) ::UnityW<::UnityEngine::RenderTexture>  mirrorTexture;

/// @brief Field path, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_path, put=setStaticF_path)) ::StringW  path;

/// @brief Method CleanUpData, addr 0x5b3fc6c, size 0x4, virtual false, abstract: false, final false
inline void CleanUpData() ;

static inline ::GlobalNamespace::MaterialMapping* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::ShaderGroup> const& __cordl_internal_get_map() const;

constexpr ::ArrayW<::GlobalNamespace::ShaderGroup>& __cordl_internal_get_map() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mirrorMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mirrorMat() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_mirrorTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_mirrorTexture() ;

constexpr void __cordl_internal_set_map(::ArrayW<::GlobalNamespace::ShaderGroup>  value) ;

constexpr void __cordl_internal_set_mirrorMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_mirrorTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x5b3fc70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MaterialMapping> getStaticF_instance() ;

static inline ::StringW getStaticF_materialDirectory() ;

static inline ::StringW getStaticF_path() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::MaterialMapping>  value) ;

static inline void setStaticF_materialDirectory(::StringW  value) ;

static inline void setStaticF_path(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialMapping(MaterialMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialMapping(MaterialMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3713};

/// @brief Field map, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderGroup>  ___map;

/// @brief Field mirrorMat, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mirrorMat;

/// @brief Field mirrorTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___mirrorTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialMapping, ___map) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialMapping, ___mirrorMat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialMapping, ___mirrorTexture) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialMapping) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
