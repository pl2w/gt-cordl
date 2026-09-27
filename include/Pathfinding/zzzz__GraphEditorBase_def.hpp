#pragma once
// IWYU pragma private; include "Pathfinding/GraphEditorBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphEditorBase)
namespace Pathfinding {
class NavGraph;
}
// Forward declare root types
namespace Pathfinding {
class GraphEditorBase;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphEditorBase*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphEditorBase*, "Pathfinding", "GraphEditorBase");
// [JsonOptIn]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphEditorBase
class CORDL_TYPE GraphEditorBase : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::Pathfinding::NavGraph*  target;

static inline ::Pathfinding::GraphEditorBase* New_ctor() ;

constexpr ::Pathfinding::NavGraph* const& __cordl_internal_get_target() const;

constexpr ::Pathfinding::NavGraph*& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::Pathfinding::NavGraph*  value) ;

/// @brief Method .ctor, addr 0x5e574b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphEditorBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphEditorBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphEditorBase(GraphEditorBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphEditorBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphEditorBase(GraphEditorBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21243};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::NavGraph*  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphEditorBase, ___target) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphEditorBase) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
