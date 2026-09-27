#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshMaterialReplacer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MeshMaterialReplacer)
namespace GameObjectScheduling {
class MeshMaterialReplacement;
}
// Forward declare root types
namespace GlobalNamespace {
class MeshMaterialReplacer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MeshMaterialReplacer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshMaterialReplacer*, "", "MeshMaterialReplacer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MeshMaterialReplacer
class CORDL_TYPE MeshMaterialReplacer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field meshMaterialReplacement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshMaterialReplacement, put=__cordl_internal_set_meshMaterialReplacement)) ::UnityW<::GameObjectScheduling::MeshMaterialReplacement>  meshMaterialReplacement;

static inline ::GlobalNamespace::MeshMaterialReplacer* New_ctor() ;

/// @brief Method Start, addr 0x56d1f04, size 0x110, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GameObjectScheduling::MeshMaterialReplacement> const& __cordl_internal_get_meshMaterialReplacement() const;

constexpr ::UnityW<::GameObjectScheduling::MeshMaterialReplacement>& __cordl_internal_get_meshMaterialReplacement() ;

constexpr void __cordl_internal_set_meshMaterialReplacement(::UnityW<::GameObjectScheduling::MeshMaterialReplacement>  value) ;

/// @brief Method .ctor, addr 0x56d2014, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshMaterialReplacer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshMaterialReplacer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshMaterialReplacer(MeshMaterialReplacer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshMaterialReplacer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshMaterialReplacer(MeshMaterialReplacer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1059};

/// [SerializeField]
/// @brief Field meshMaterialReplacement, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::MeshMaterialReplacement>  ___meshMaterialReplacement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshMaterialReplacer, ___meshMaterialReplacement) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshMaterialReplacer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
