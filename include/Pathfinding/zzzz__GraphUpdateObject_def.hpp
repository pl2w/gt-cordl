#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphUpdateObject)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateShape;
}
namespace Pathfinding {
struct GraphUpdateStage;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NNConstraint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Pathfinding {
class GraphUpdateObject;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphUpdateObject*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUpdateObject*, "Pathfinding", "GraphUpdateObject");
// Dependencies System.Object, UnityEngine.Bounds
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUpdateObject
class CORDL_TYPE GraphUpdateObject : public ::System::Object {
public:
// Declarations
/// @brief Field addPenalty, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_addPenalty, put=__cordl_internal_set_addPenalty)) int32_t  addPenalty;

/// @brief Field backupData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_backupData, put=__cordl_internal_set_backupData)) ::System::Collections::Generic::List_1<uint32_t>*  backupData;

/// @brief Field backupPositionData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_backupPositionData, put=__cordl_internal_set_backupPositionData)) ::System::Collections::Generic::List_1<::Pathfinding::Int3>*  backupPositionData;

/// @brief Field bounds, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field changedNodes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_changedNodes, put=__cordl_internal_set_changedNodes)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  changedNodes;

/// @brief Field internalStage, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_internalStage, put=__cordl_internal_set_internalStage)) int32_t  internalStage;

/// @brief Field modifyTag, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyTag, put=__cordl_internal_set_modifyTag)) bool  modifyTag;

/// @brief Field modifyWalkability, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyWalkability, put=__cordl_internal_set_modifyWalkability)) bool  modifyWalkability;

/// @brief Field nnConstraint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nnConstraint, put=__cordl_internal_set_nnConstraint)) ::Pathfinding::NNConstraint*  nnConstraint;

/// @brief [Obsolete("Not necessary anymore")]
 __declspec(property(put=set_requiresFloodFill)) bool  requiresFloodFill;

/// @brief Field resetPenaltyOnPhysics, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetPenaltyOnPhysics, put=__cordl_internal_set_resetPenaltyOnPhysics)) bool  resetPenaltyOnPhysics;

/// @brief Field setTag, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_setTag, put=__cordl_internal_set_setTag)) int32_t  setTag;

/// @brief Field setWalkability, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_setWalkability, put=__cordl_internal_set_setWalkability)) bool  setWalkability;

/// @brief Field shape, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::Pathfinding::GraphUpdateShape*  shape;

 __declspec(property(get=get_stage)) ::Pathfinding::GraphUpdateStage  stage;

/// @brief Field trackChangedNodes, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_trackChangedNodes, put=__cordl_internal_set_trackChangedNodes)) bool  trackChangedNodes;

/// @brief Field updateErosion, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateErosion, put=__cordl_internal_set_updateErosion)) bool  updateErosion;

/// @brief Field updatePhysics, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatePhysics, put=__cordl_internal_set_updatePhysics)) bool  updatePhysics;

/// @brief Method Apply, addr 0x5e48d24, size 0x88, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::GraphNode*  node) ;

static inline ::Pathfinding::GraphUpdateObject* New_ctor() ;

static inline ::Pathfinding::GraphUpdateObject* New_ctor(::UnityEngine::Bounds  b) ;

/// @brief Method RevertFromBackup, addr 0x5e48984, size 0x3a0, virtual true, abstract: false, final false
inline void RevertFromBackup() ;

/// @brief Method WillUpdateNode, addr 0x5e485f4, size 0x390, virtual true, abstract: false, final false
inline void WillUpdateNode(::Pathfinding::GraphNode*  node) ;

constexpr int32_t const& __cordl_internal_get_addPenalty() const;

constexpr int32_t& __cordl_internal_get_addPenalty() ;

constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_backupData() const;

constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_backupData() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>* const& __cordl_internal_get_backupPositionData() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>*& __cordl_internal_get_backupPositionData() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_changedNodes() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_changedNodes() ;

constexpr int32_t const& __cordl_internal_get_internalStage() const;

constexpr int32_t& __cordl_internal_get_internalStage() ;

constexpr bool const& __cordl_internal_get_modifyTag() const;

constexpr bool& __cordl_internal_get_modifyTag() ;

constexpr bool const& __cordl_internal_get_modifyWalkability() const;

constexpr bool& __cordl_internal_get_modifyWalkability() ;

constexpr ::Pathfinding::NNConstraint* const& __cordl_internal_get_nnConstraint() const;

constexpr ::Pathfinding::NNConstraint*& __cordl_internal_get_nnConstraint() ;

constexpr bool const& __cordl_internal_get_resetPenaltyOnPhysics() const;

constexpr bool& __cordl_internal_get_resetPenaltyOnPhysics() ;

constexpr int32_t const& __cordl_internal_get_setTag() const;

constexpr int32_t& __cordl_internal_get_setTag() ;

constexpr bool const& __cordl_internal_get_setWalkability() const;

constexpr bool& __cordl_internal_get_setWalkability() ;

constexpr ::Pathfinding::GraphUpdateShape* const& __cordl_internal_get_shape() const;

constexpr ::Pathfinding::GraphUpdateShape*& __cordl_internal_get_shape() ;

constexpr bool const& __cordl_internal_get_trackChangedNodes() const;

constexpr bool& __cordl_internal_get_trackChangedNodes() ;

constexpr bool const& __cordl_internal_get_updateErosion() const;

constexpr bool& __cordl_internal_get_updateErosion() ;

constexpr bool const& __cordl_internal_get_updatePhysics() const;

constexpr bool& __cordl_internal_get_updatePhysics() ;

constexpr void __cordl_internal_set_addPenalty(int32_t  value) ;

constexpr void __cordl_internal_set_backupData(::System::Collections::Generic::List_1<uint32_t>*  value) ;

constexpr void __cordl_internal_set_backupPositionData(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_changedNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_internalStage(int32_t  value) ;

constexpr void __cordl_internal_set_modifyTag(bool  value) ;

constexpr void __cordl_internal_set_modifyWalkability(bool  value) ;

constexpr void __cordl_internal_set_nnConstraint(::Pathfinding::NNConstraint*  value) ;

constexpr void __cordl_internal_set_resetPenaltyOnPhysics(bool  value) ;

constexpr void __cordl_internal_set_setTag(int32_t  value) ;

constexpr void __cordl_internal_set_setWalkability(bool  value) ;

constexpr void __cordl_internal_set_shape(::Pathfinding::GraphUpdateShape*  value) ;

constexpr void __cordl_internal_set_trackChangedNodes(bool  value) ;

constexpr void __cordl_internal_set_updateErosion(bool  value) ;

constexpr void __cordl_internal_set_updatePhysics(bool  value) ;

/// @brief Method .ctor, addr 0x5e48dd8, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5e48e1c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Bounds  b) ;

/// @brief Method get_stage, addr 0x5e485cc, size 0x28, virtual false, abstract: false, final false
inline ::Pathfinding::GraphUpdateStage get_stage() ;

/// @brief Method set_requiresFloodFill, addr 0x5e485c8, size 0x4, virtual false, abstract: false, final false
inline void set_requiresFloodFill(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUpdateObject(GraphUpdateObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUpdateObject(GraphUpdateObject const& ) = delete;

/// @brief Field STAGE_ABORTED offset 0xffffffff size 0x4
static constexpr int32_t  STAGE_ABORTED{static_cast<int32_t>(0xfffffffd)};

/// @brief Field STAGE_APPLIED offset 0xffffffff size 0x4
static constexpr int32_t  STAGE_APPLIED{static_cast<int32_t>(0x0)};

/// @brief Field STAGE_CREATED offset 0xffffffff size 0x4
static constexpr int32_t  STAGE_CREATED{static_cast<int32_t>(0xffffffff)};

/// @brief Field STAGE_PENDING offset 0xffffffff size 0x4
static constexpr int32_t  STAGE_PENDING{static_cast<int32_t>(0xfffffffe)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21198};

/// @brief Field bounds, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field updatePhysics, offset: 0x28, size: 0x1, def value: None
 bool  ___updatePhysics;

/// @brief Field resetPenaltyOnPhysics, offset: 0x29, size: 0x1, def value: None
 bool  ___resetPenaltyOnPhysics;

/// @brief Field updateErosion, offset: 0x2a, size: 0x1, def value: None
 bool  ___updateErosion;

/// @brief Field nnConstraint, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::NNConstraint*  ___nnConstraint;

/// @brief Field addPenalty, offset: 0x38, size: 0x4, def value: None
 int32_t  ___addPenalty;

/// @brief Field modifyWalkability, offset: 0x3c, size: 0x1, def value: None
 bool  ___modifyWalkability;

/// @brief Field setWalkability, offset: 0x3d, size: 0x1, def value: None
 bool  ___setWalkability;

/// @brief Field modifyTag, offset: 0x3e, size: 0x1, def value: None
 bool  ___modifyTag;

/// @brief Field setTag, offset: 0x40, size: 0x4, def value: None
 int32_t  ___setTag;

/// @brief Field trackChangedNodes, offset: 0x44, size: 0x1, def value: None
 bool  ___trackChangedNodes;

/// @brief Field changedNodes, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___changedNodes;

/// @brief Field backupData, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint32_t>*  ___backupData;

/// @brief Field backupPositionData, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Int3>*  ___backupPositionData;

/// @brief Field shape, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::GraphUpdateShape*  ___shape;

/// @brief Field internalStage, offset: 0x68, size: 0x4, def value: None
 int32_t  ___internalStage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___bounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___updatePhysics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___resetPenaltyOnPhysics) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___updateErosion) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___nnConstraint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___addPenalty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___modifyWalkability) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___setWalkability) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___modifyTag) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___setTag) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___trackChangedNodes) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___changedNodes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___backupData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___backupPositionData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___shape) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateObject, ___internalStage) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUpdateObject) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding
