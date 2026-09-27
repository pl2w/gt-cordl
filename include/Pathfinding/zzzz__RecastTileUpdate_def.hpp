#pragma once
// IWYU pragma private; include "Pathfinding/RecastTileUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RecastTileUpdate)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Pathfinding {
class RecastTileUpdate;
}
// Write type traits
MARK_REF_T(::Pathfinding::RecastTileUpdate*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastTileUpdate*, "Pathfinding", "RecastTileUpdate");
// [AddComponentMenu("Pathfinding/Navmesh/RecastTileUpdate")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_recast_tile_update.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastTileUpdate
class CORDL_TYPE RecastTileUpdate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnNeedUpdates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnNeedUpdates, put=setStaticF_OnNeedUpdates)) ::System::Action_1<::UnityEngine::Bounds>*  OnNeedUpdates;

static inline ::Pathfinding::RecastTileUpdate* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e6b640, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ScheduleUpdate, addr 0x5e6b49c, size 0x1a4, virtual false, abstract: false, final false
inline void ScheduleUpdate() ;

/// @brief Method Start, addr 0x5e6b498, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x5e6b644, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnNeedUpdates, addr 0x5e6b300, size 0xcc, virtual false, abstract: false, final false
static inline void add_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>*  value) ;

static inline ::System::Action_1<::UnityEngine::Bounds>* getStaticF_OnNeedUpdates() ;

/// [CompilerGenerated]
/// @brief Method remove_OnNeedUpdates, addr 0x5e6b3cc, size 0xcc, virtual false, abstract: false, final false
static inline void remove_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>*  value) ;

static inline void setStaticF_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastTileUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastTileUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastTileUpdate(RecastTileUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastTileUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastTileUpdate(RecastTileUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::RecastTileUpdate) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
