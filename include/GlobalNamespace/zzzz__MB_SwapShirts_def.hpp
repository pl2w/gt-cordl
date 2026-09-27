#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_SwapShirts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MB_SwapShirts)
namespace GlobalNamespace {
class MB3_MeshBaker;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_SwapShirts;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_SwapShirts*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_SwapShirts*, "", "MB_SwapShirts");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_SwapShirts
class CORDL_TYPE MB_SwapShirts : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clothingAndBodyPartsBareTorso, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clothingAndBodyPartsBareTorso, put=__cordl_internal_set_clothingAndBodyPartsBareTorso)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  clothingAndBodyPartsBareTorso;

/// @brief Field clothingAndBodyPartsBareTorsoDamagedArm, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clothingAndBodyPartsBareTorsoDamagedArm, put=__cordl_internal_set_clothingAndBodyPartsBareTorsoDamagedArm)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  clothingAndBodyPartsBareTorsoDamagedArm;

/// @brief Field clothingAndBodyPartsHoodie, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_clothingAndBodyPartsHoodie, put=__cordl_internal_set_clothingAndBodyPartsHoodie)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  clothingAndBodyPartsHoodie;

/// @brief Field meshBaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshBaker, put=__cordl_internal_set_meshBaker)) ::UnityW<::GlobalNamespace::MB3_MeshBaker>  meshBaker;

/// @brief Method ChangeOutfit, addr 0x9dfc6a4, size 0x5e4, virtual false, abstract: false, final false
inline void ChangeOutfit(::ArrayW<::UnityEngine::Renderer*>  outfit) ;

static inline ::GlobalNamespace::MB_SwapShirts* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfc4c4, size 0x1e0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0x9dfc398, size 0x12c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_clothingAndBodyPartsBareTorso() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_clothingAndBodyPartsBareTorso() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_clothingAndBodyPartsBareTorsoDamagedArm() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_clothingAndBodyPartsBareTorsoDamagedArm() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_clothingAndBodyPartsHoodie() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_clothingAndBodyPartsHoodie() ;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& __cordl_internal_get_meshBaker() const;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& __cordl_internal_get_meshBaker() ;

constexpr void __cordl_internal_set_clothingAndBodyPartsBareTorso(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_clothingAndBodyPartsBareTorsoDamagedArm(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_clothingAndBodyPartsHoodie(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_meshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value) ;

/// @brief Method .ctor, addr 0x9dfcc88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_SwapShirts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_SwapShirts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_SwapShirts(MB_SwapShirts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_SwapShirts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_SwapShirts(MB_SwapShirts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32357};

/// @brief Field meshBaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_MeshBaker>  ___meshBaker;

/// @brief Field clothingAndBodyPartsBareTorso, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___clothingAndBodyPartsBareTorso;

/// @brief Field clothingAndBodyPartsBareTorsoDamagedArm, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___clothingAndBodyPartsBareTorsoDamagedArm;

/// @brief Field clothingAndBodyPartsHoodie, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___clothingAndBodyPartsHoodie;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_SwapShirts, ___meshBaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SwapShirts, ___clothingAndBodyPartsBareTorso) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SwapShirts, ___clothingAndBodyPartsBareTorsoDamagedArm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SwapShirts, ___clothingAndBodyPartsHoodie) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_SwapShirts) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
