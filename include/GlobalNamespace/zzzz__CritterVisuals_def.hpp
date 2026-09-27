#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CritterAppearance_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CritterVisuals)
namespace GlobalNamespace {
struct CritterAppearance;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CritterVisuals;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterVisuals*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterVisuals*, "", "CritterVisuals");
// Dependencies CritterAppearance, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterVisuals
class CORDL_TYPE CritterVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Appearance)) ::GlobalNamespace::CritterAppearance  Appearance;

/// @brief Field _appearance, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__appearance, put=__cordl_internal_set__appearance)) ::GlobalNamespace::CritterAppearance  _appearance;

/// @brief Field bodyRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyRoot, put=__cordl_internal_set_bodyRoot)) ::UnityW<::UnityEngine::Transform>  bodyRoot;

/// @brief Field critterType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_critterType, put=__cordl_internal_set_critterType)) int32_t  critterType;

/// @brief Field hatRoot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatRoot, put=__cordl_internal_set_hatRoot)) ::UnityW<::UnityEngine::Transform>  hatRoot;

/// @brief Field hats, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_hats, put=__cordl_internal_set_hats)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  hats;

/// @brief Field myMeshFilter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myMeshFilter, put=__cordl_internal_set_myMeshFilter)) ::UnityW<::UnityEngine::MeshFilter>  myMeshFilter;

/// @brief Field myRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRenderer, put=__cordl_internal_set_myRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  myRenderer;

/// @brief Method ApplyMaterial, addr 0x56f8bd4, size 0x18, virtual false, abstract: false, final false
inline void ApplyMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method ApplyMesh, addr 0x56f8bbc, size 0x18, virtual false, abstract: false, final false
inline void ApplyMesh(::UnityEngine::Mesh*  newMesh) ;

static inline ::GlobalNamespace::CritterVisuals* New_ctor() ;

/// @brief Method SetAppearance, addr 0x56f8a30, size 0x18c, virtual false, abstract: false, final false
inline void SetAppearance(::GlobalNamespace::CritterAppearance  appearance) ;

constexpr ::GlobalNamespace::CritterAppearance const& __cordl_internal_get__appearance() const;

constexpr ::GlobalNamespace::CritterAppearance& __cordl_internal_get__appearance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyRoot() ;

constexpr int32_t const& __cordl_internal_get_critterType() const;

constexpr int32_t& __cordl_internal_get_critterType() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hatRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hatRoot() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_hats() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_hats() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_myMeshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_myMeshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_myRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_myRenderer() ;

constexpr void __cordl_internal_set__appearance(::GlobalNamespace::CritterAppearance  value) ;

constexpr void __cordl_internal_set_bodyRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_critterType(int32_t  value) ;

constexpr void __cordl_internal_set_hatRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hats(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_myMeshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x56f8bec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Appearance, addr 0x56f8a24, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::CritterAppearance get_Appearance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterVisuals(CritterVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterVisuals(CritterVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{130};

/// @brief Field critterType, offset: 0x20, size: 0x4, def value: None
 int32_t  ___critterType;

/// [Header("Visuals")]
/// @brief Field bodyRoot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___bodyRoot;

/// @brief Field myRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___myRenderer;

/// @brief Field myMeshFilter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___myMeshFilter;

/// @brief Field hatRoot, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hatRoot;

/// @brief Field hats, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___hats;

/// @brief Field _appearance, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::CritterAppearance  ____appearance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterVisuals, ___critterType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterVisuals, ___bodyRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterVisuals, ___myRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterVisuals, ___myMeshFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterVisuals, ___hatRoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterVisuals, ___hats) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterVisuals, ____appearance) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterVisuals) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
