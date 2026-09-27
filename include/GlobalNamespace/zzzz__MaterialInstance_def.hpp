#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MaterialInstance)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialInstance*, "", "MaterialInstance");
// [HelpURL("https://docs.microsoft.com/windows/mixed-reality/mrtk-unity/features/rendering/material-instance")]
// [ExecuteAlways]
// [RequireComponent(typeof(UnityEngine.Renderer))]
// [AddComponentMenu("Scripts/MRTK/Core/MaterialInstance")]
// Dependencies UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialInstance
class CORDL_TYPE MaterialInstance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CacheSharedMaterialsFromRenderer, put=set_CacheSharedMaterialsFromRenderer)) bool  CacheSharedMaterialsFromRenderer;

 __declspec(property(get=get_CachedRenderer)) ::UnityW<::UnityEngine::Renderer>  CachedRenderer;

 __declspec(property(get=get_CachedRendererSharedMaterials, put=set_CachedRendererSharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  CachedRendererSharedMaterials;

 __declspec(property(get=get_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_Materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  Materials;

/// @brief Field cacheSharedMaterialsFromRenderer, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_cacheSharedMaterialsFromRenderer, put=__cordl_internal_set_cacheSharedMaterialsFromRenderer)) bool  cacheSharedMaterialsFromRenderer;

/// @brief Field cachedRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedRenderer, put=__cordl_internal_set_cachedRenderer)) ::UnityW<::UnityEngine::Renderer>  cachedRenderer;

/// @brief Field cachedSharedMaterials, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedSharedMaterials, put=__cordl_internal_set_cachedSharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  cachedSharedMaterials;

/// @brief Field defaultMaterials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterials, put=__cordl_internal_set_defaultMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  defaultMaterials;

/// @brief Field initialized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field instanceMaterials, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceMaterials, put=__cordl_internal_set_instanceMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  instanceMaterials;

/// @brief Field materialOwners, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialOwners, put=__cordl_internal_set_materialOwners)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*  materialOwners;

/// @brief Field materialsInstanced, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_materialsInstanced, put=__cordl_internal_set_materialsInstanced)) bool  materialsInstanced;

/// @brief Method AcquireInstances, addr 0x5a1dd44, size 0x98, virtual false, abstract: false, final false
inline void AcquireInstances() ;

/// @brief Method AcquireMaterial, addr 0x5a1dc7c, size 0xc8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> AcquireMaterial(::UnityEngine::Object*  owner, bool  instance) ;

/// @brief Method AcquireMaterials, addr 0x5a1dddc, size 0xdc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> AcquireMaterials(::UnityEngine::Object*  owner, bool  instance) ;

/// @brief Method Awake, addr 0x5a1e2bc, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateInstances, addr 0x5a1e664, size 0xb8, virtual false, abstract: false, final false
inline void CreateInstances() ;

/// @brief Method DestroyMaterials, addr 0x5a1e388, size 0x58, virtual false, abstract: false, final false
static inline void DestroyMaterials(::ArrayW<::UnityEngine::Material*>  materials) ;

/// @brief Method DestroySafe, addr 0x5a1df78, size 0xb8, virtual false, abstract: false, final false
static inline void DestroySafe(::UnityEngine::Object*  toDestroy) ;

/// @brief Method HasValidMaterial, addr 0x5a1e3e0, size 0xb4, virtual false, abstract: false, final false
static inline bool HasValidMaterial(::ArrayW<::UnityEngine::Material*>  materials) ;

/// @brief Method Initialize, addr 0x5a1e2c0, size 0xc4, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method InstanceMaterials, addr 0x5a1e71c, size 0x274, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Material>> InstanceMaterials(::ArrayW<::UnityEngine::Material*>  source) ;

/// @brief Method IsInstanceMaterial, addr 0x5a1e990, size 0xa8, virtual false, abstract: false, final false
static inline bool IsInstanceMaterial(::UnityEngine::Material*  material) ;

/// @brief Method MaterialsMatch, addr 0x5a1e494, size 0x1d0, virtual false, abstract: false, final false
static inline bool MaterialsMatch(::ArrayW<::UnityEngine::Material*>  a, ::ArrayW<::UnityEngine::Material*>  b) ;

static inline ::GlobalNamespace::MaterialInstance* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a1e384, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReleaseMaterial, addr 0x5a1deb8, size 0xc0, virtual false, abstract: false, final false
inline void ReleaseMaterial(::UnityEngine::Object*  owner, bool  autoDestroy) ;

/// @brief Method RestoreRenderer, addr 0x5a1e030, size 0x98, virtual false, abstract: false, final false
inline void RestoreRenderer() ;

constexpr bool const& __cordl_internal_get_cacheSharedMaterialsFromRenderer() const;

constexpr bool& __cordl_internal_get_cacheSharedMaterialsFromRenderer() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_cachedRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_cachedRenderer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_cachedSharedMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_cachedSharedMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_defaultMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_defaultMaterials() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_instanceMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_instanceMaterials() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_materialOwners() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_materialOwners() ;

constexpr bool const& __cordl_internal_get_materialsInstanced() const;

constexpr bool& __cordl_internal_get_materialsInstanced() ;

constexpr void __cordl_internal_set_cacheSharedMaterialsFromRenderer(bool  value) ;

constexpr void __cordl_internal_set_cachedRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_cachedSharedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_defaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_instanceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_materialOwners(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_materialsInstanced(bool  value) ;

/// @brief Method .ctor, addr 0x5a1ea38, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CacheSharedMaterialsFromRenderer, addr 0x5a1e0e0, size 0x8, virtual false, abstract: false, final false
inline bool get_CacheSharedMaterialsFromRenderer() ;

/// @brief Method get_CachedRenderer, addr 0x5a1e148, size 0xcc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_CachedRenderer() ;

/// @brief Method get_CachedRendererSharedMaterials, addr 0x5a1e214, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> get_CachedRendererSharedMaterials() ;

/// @brief Method get_Material, addr 0x5a1e0c8, size 0xc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_Materials, addr 0x5a1e0d4, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> get_Materials() ;

/// @brief Method set_CacheSharedMaterialsFromRenderer, addr 0x5a1e0e8, size 0x60, virtual false, abstract: false, final false
inline void set_CacheSharedMaterialsFromRenderer(bool  value) ;

/// @brief Method set_CachedRendererSharedMaterials, addr 0x5a1e274, size 0x48, virtual false, abstract: false, final false
inline void set_CachedRendererSharedMaterials(::ArrayW<::UnityEngine::Material*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialInstance(MaterialInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialInstance(MaterialInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2829};

/// @brief Field instancePostfix offset 0xffffffff size 0x8
static constexpr ::ConstString  instancePostfix{u" (Instance)"};

/// @brief Field cachedRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___cachedRenderer;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field defaultMaterials, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___defaultMaterials;

/// @brief Field instanceMaterials, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___instanceMaterials;

/// @brief Field cachedSharedMaterials, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___cachedSharedMaterials;

/// @brief Field initialized, offset: 0x40, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field materialsInstanced, offset: 0x41, size: 0x1, def value: None
 bool  ___materialsInstanced;

/// [SerializeField]
/// [Tooltip("Whether to use a cached copy of cachedRenderer.sharedMaterials or call sharedMaterials on the Renderer directly. Enabling the option will lead to better performance but you must turn it off before modifying sharedMaterials of the Renderer.")]
/// @brief Field cacheSharedMaterialsFromRenderer, offset: 0x42, size: 0x1, def value: None
 bool  ___cacheSharedMaterialsFromRenderer;

/// @brief Field materialOwners, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*  ___materialOwners;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___cachedRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___defaultMaterials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___instanceMaterials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___cachedSharedMaterials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___initialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___materialsInstanced) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___cacheSharedMaterialsFromRenderer) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInstance, ___materialOwners) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialInstance) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
