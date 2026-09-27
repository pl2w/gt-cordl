#pragma once
// IWYU pragma private; include "Pathfinding/LayerGridGraphUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
CORDL_MODULE_EXPORT(LayerGridGraphUpdate)
// Forward declare root types
namespace Pathfinding {
class LayerGridGraphUpdate;
}
// Write type traits
MARK_REF_T(::Pathfinding::LayerGridGraphUpdate*);
DEFINE_IL2CPP_CLASS(::Pathfinding::LayerGridGraphUpdate*, "Pathfinding", "LayerGridGraphUpdate");
// Dependencies Pathfinding.GraphUpdateObject
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.LayerGridGraphUpdate
class CORDL_TYPE LayerGridGraphUpdate : public ::Pathfinding::GraphUpdateObject {
public:
// Declarations
/// @brief Field preserveExistingNodes, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_preserveExistingNodes, put=__cordl_internal_set_preserveExistingNodes)) bool  preserveExistingNodes;

/// @brief Field recalculateNodes, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_recalculateNodes, put=__cordl_internal_set_recalculateNodes)) bool  recalculateNodes;

static inline ::Pathfinding::LayerGridGraphUpdate* New_ctor() ;

constexpr bool const& __cordl_internal_get_preserveExistingNodes() const;

constexpr bool& __cordl_internal_get_preserveExistingNodes() ;

constexpr bool const& __cordl_internal_get_recalculateNodes() const;

constexpr bool& __cordl_internal_get_recalculateNodes() ;

constexpr void __cordl_internal_set_preserveExistingNodes(bool  value) ;

constexpr void __cordl_internal_set_recalculateNodes(bool  value) ;

/// @brief Method .ctor, addr 0x5e7ce80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerGridGraphUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraphUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerGridGraphUpdate(LayerGridGraphUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerGridGraphUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerGridGraphUpdate(LayerGridGraphUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21313};

/// @brief Field recalculateNodes, offset: 0x6c, size: 0x1, def value: None
 bool  ___recalculateNodes;

/// @brief Field preserveExistingNodes, offset: 0x6d, size: 0x1, def value: None
 bool  ___preserveExistingNodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::LayerGridGraphUpdate, ___recalculateNodes) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::LayerGridGraphUpdate, ___preserveExistingNodes) == 0x6d, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::LayerGridGraphUpdate) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding
