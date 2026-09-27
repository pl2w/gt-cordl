#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterialMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MetaXRAcousticMaterialMapping)
namespace GlobalNamespace {
class MetaXRAcousticMaterialMapping_Pair;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterialMapping___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterialProperties;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticMaterialMapping;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterialMapping_Pair;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterialMapping___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMaterialMapping*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterialMapping*, "", "MetaXRAcousticMaterialMapping");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*, "", "MetaXRAcousticMaterialMapping/Pair");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0*, "", "MetaXRAcousticMaterialMapping/<>c__DisplayClass0_0");
// Dependencies MetaXRAcousticMaterialMapping::Pair, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMaterialMapping
class CORDL_TYPE MetaXRAcousticMaterialMapping : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Pair = ::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair;

using __c__DisplayClass0_0 = ::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0;

/// @brief Field fallbackMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallbackMaterial, put=__cordl_internal_set_fallbackMaterial)) ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  fallbackMaterial;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>  instance;

/// @brief Field mapping, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapping, put=__cordl_internal_set_mapping)) ::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>  mapping;

static inline ::GlobalNamespace::MetaXRAcousticMaterialMapping* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> const& __cordl_internal_get_fallbackMaterial() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>& __cordl_internal_get_fallbackMaterial() ;

constexpr ::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*> const& __cordl_internal_get_mapping() const;

constexpr ::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>& __cordl_internal_get_mapping() ;

constexpr void __cordl_internal_set_fallbackMaterial(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  value) ;

constexpr void __cordl_internal_set_mapping(::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>  value) ;

/// @brief Method .ctor, addr 0x9ea9780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method findAcousticMaterial, addr 0x9ea5e10, size 0x144, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> findAcousticMaterial(::UnityEngine::PhysicsMaterial*  pmat) ;

static inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping> getStaticF_instance() ;

/// @brief Method get_Instance, addr 0x9ea5ccc, size 0x144, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping> get_Instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialMapping>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterialMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMaterialMapping(MetaXRAcousticMaterialMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMaterialMapping(MetaXRAcousticMaterialMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29933};

/// [HideInInspector]
/// [SerializeField]
/// @brief Field mapping, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*>  ___mapping;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("Acoustic material to apply when there is no physics material.")]
/// @brief Field fallbackMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  ___fallbackMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialMapping, ___mapping) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialMapping, ___fallbackMaterial) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterialMapping) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMaterialMapping/<>c__DisplayClass0_0
class CORDL_TYPE MetaXRAcousticMaterialMapping___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field pmat, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pmat, put=__cordl_internal_set_pmat)) ::UnityW<::UnityEngine::PhysicsMaterial>  pmat;

static inline ::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0* New_ctor() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_pmat() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_pmat() ;

constexpr void __cordl_internal_set_pmat(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

/// @brief Method .ctor, addr 0x9ea9778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <findAcousticMaterial>b__0, addr 0x9ea9790, size 0x20, virtual false, abstract: false, final false
inline bool _findAcousticMaterial_b__0(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair*  pair) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterialMapping___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialMapping___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMaterialMapping___c__DisplayClass0_0(MetaXRAcousticMaterialMapping___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialMapping___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMaterialMapping___c__DisplayClass0_0(MetaXRAcousticMaterialMapping___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29932};

/// @brief Field pmat, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___pmat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0, ___pmat) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterialMapping___c__DisplayClass0_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMaterialMapping/Pair
class CORDL_TYPE MetaXRAcousticMaterialMapping_Pair : public ::System::Object {
public:
// Declarations
/// @brief Field acousticMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_acousticMaterial, put=__cordl_internal_set_acousticMaterial)) ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  acousticMaterial;

/// @brief Field physicMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_physicMaterial, put=__cordl_internal_set_physicMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  physicMaterial;

static inline ::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> const& __cordl_internal_get_acousticMaterial() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>& __cordl_internal_get_acousticMaterial() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_physicMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_physicMaterial() ;

constexpr void __cordl_internal_set_acousticMaterial(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  value) ;

constexpr void __cordl_internal_set_physicMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

/// @brief Method .ctor, addr 0x9ea9788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterialMapping_Pair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialMapping_Pair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMaterialMapping_Pair(MetaXRAcousticMaterialMapping_Pair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialMapping_Pair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMaterialMapping_Pair(MetaXRAcousticMaterialMapping_Pair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29931};

/// [SerializeField]
/// @brief Field physicMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___physicMaterial;

/// [SerializeField]
/// @brief Field acousticMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  ___acousticMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair, ___physicMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair, ___acousticMaterial) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterialMapping_Pair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
