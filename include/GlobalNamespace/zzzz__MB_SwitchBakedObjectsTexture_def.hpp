#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_SwitchBakedObjectsTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MB_SwitchBakedObjectsTexture)
namespace GlobalNamespace {
class MB3_MeshBaker;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_SwitchBakedObjectsTexture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_SwitchBakedObjectsTexture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_SwitchBakedObjectsTexture*, "", "MB_SwitchBakedObjectsTexture");
// Dependencies UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_SwitchBakedObjectsTexture
class CORDL_TYPE MB_SwitchBakedObjectsTexture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field materials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materials;

/// @brief Field meshBaker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshBaker, put=__cordl_internal_set_meshBaker)) ::UnityW<::GlobalNamespace::MB3_MeshBaker>  meshBaker;

/// @brief Field targetRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  targetRenderer;

static inline ::GlobalNamespace::MB_SwitchBakedObjectsTexture* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfea90, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0x9dfeb40, size 0xc4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9dfec04, size 0x26c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materials() ;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& __cordl_internal_get_meshBaker() const;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& __cordl_internal_get_meshBaker() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr void __cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_meshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x9dfee70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_SwitchBakedObjectsTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_SwitchBakedObjectsTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_SwitchBakedObjectsTexture(MB_SwitchBakedObjectsTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_SwitchBakedObjectsTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_SwitchBakedObjectsTexture(MB_SwitchBakedObjectsTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32366};

/// @brief Field targetRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___targetRenderer;

/// @brief Field materials, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materials;

/// @brief Field meshBaker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_MeshBaker>  ___meshBaker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_SwitchBakedObjectsTexture, ___targetRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SwitchBakedObjectsTexture, ___materials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SwitchBakedObjectsTexture, ___meshBaker) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_SwitchBakedObjectsTexture) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
