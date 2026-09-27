#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIResourceNode)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class SIResource;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceNode*, "", "SIResourceNode");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceNode
class CORDL_TYPE SIResourceNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeResource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeResource, put=__cordl_internal_set_activeResource)) ::UnityW<::GlobalNamespace::GameEntity>  activeResource;

/// @brief Field resourcePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourcePrefab, put=__cordl_internal_set_resourcePrefab)) ::UnityW<::GlobalNamespace::SIResource>  resourcePrefab;

static inline ::GlobalNamespace::SIResourceNode* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_activeResource() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_activeResource() ;

constexpr ::UnityW<::GlobalNamespace::SIResource> const& __cordl_internal_get_resourcePrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIResource>& __cordl_internal_get_resourcePrefab() ;

constexpr void __cordl_internal_set_activeResource(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_resourcePrefab(::UnityW<::GlobalNamespace::SIResource>  value) ;

/// @brief Method .ctor, addr 0x5aed1e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceNode(SIResourceNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceNode(SIResourceNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{353};

/// @brief Field resourcePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIResource>  ___resourcePrefab;

/// @brief Field activeResource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___activeResource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceNode, ___resourcePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceNode, ___activeResource) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceNode) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
