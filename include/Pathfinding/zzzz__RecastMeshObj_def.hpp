#pragma once
// IWYU pragma private; include "Pathfinding/RecastMeshObj.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecastMeshObj)
namespace Pathfinding {
class RecastBBTree;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace Pathfinding {
class RecastMeshObj;
}
// Write type traits
MARK_REF_T(::Pathfinding::RecastMeshObj*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastMeshObj*, "Pathfinding", "RecastMeshObj");
// [AddComponentMenu("Pathfinding/Navmesh/RecastMeshObj")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_recast_mesh_obj.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour, UnityEngine.Bounds
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastMeshObj
class CORDL_TYPE RecastMeshObj : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field _dynamic, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__dynamic, put=__cordl_internal_set__dynamic)) bool  _dynamic;

/// @brief Field area, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) int32_t  area;

/// @brief Field bounds, offset 0x24, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field dynamic, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_dynamic, put=__cordl_internal_set_dynamic)) bool  dynamic;

/// @brief Field dynamicMeshObjs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dynamicMeshObjs, put=setStaticF_dynamicMeshObjs)) ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  dynamicMeshObjs;

/// @brief Field registered, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_registered, put=__cordl_internal_set_registered)) bool  registered;

/// @brief Field tree, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tree, put=setStaticF_tree)) ::Pathfinding::RecastBBTree*  tree;

/// @brief Method GetAllInBounds, addr 0x5e9c1b0, size 0x588, virtual false, abstract: false, final false
static inline void GetAllInBounds(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  buffer, ::UnityEngine::Bounds  bounds) ;

/// @brief Method GetBounds, addr 0x5e9bc84, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetCollider, addr 0x5e9cc7c, size 0x48, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> GetCollider() ;

/// @brief Method GetMeshFilter, addr 0x5e9ccc4, size 0x48, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshFilter> GetMeshFilter() ;

static inline ::Pathfinding::RecastMeshObj* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e9cd0c, size 0x108, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e9cc78, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecalculateBounds, addr 0x5e9c738, size 0x214, virtual false, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method Register, addr 0x5e9c94c, size 0x32c, virtual false, abstract: false, final false
inline void Register() ;

constexpr bool const& __cordl_internal_get__dynamic() const;

constexpr bool& __cordl_internal_get__dynamic() ;

constexpr int32_t const& __cordl_internal_get_area() const;

constexpr int32_t& __cordl_internal_get_area() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr bool const& __cordl_internal_get_dynamic() const;

constexpr bool& __cordl_internal_get_dynamic() ;

constexpr bool const& __cordl_internal_get_registered() const;

constexpr bool& __cordl_internal_get_registered() ;

constexpr void __cordl_internal_set__dynamic(bool  value) ;

constexpr void __cordl_internal_set_area(int32_t  value) ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_dynamic(bool  value) ;

constexpr void __cordl_internal_set_registered(bool  value) ;

/// @brief Method .ctor, addr 0x5e9ce14, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>* getStaticF_dynamicMeshObjs() ;

static inline ::Pathfinding::RecastBBTree* getStaticF_tree() ;

static inline void setStaticF_dynamicMeshObjs(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  value) ;

static inline void setStaticF_tree(::Pathfinding::RecastBBTree*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastMeshObj() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastMeshObj", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastMeshObj(RecastMeshObj && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastMeshObj", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastMeshObj(RecastMeshObj const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21356};

/// [HideInInspector]
/// @brief Field bounds, offset: 0x24, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

/// @brief Field dynamic, offset: 0x3c, size: 0x1, def value: None
 bool  ___dynamic;

/// @brief Field area, offset: 0x40, size: 0x4, def value: None
 int32_t  ___area;

/// @brief Field _dynamic, offset: 0x44, size: 0x1, def value: None
 bool  ____dynamic;

/// @brief Field registered, offset: 0x45, size: 0x1, def value: None
 bool  ___registered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastMeshObj, ___bounds) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastMeshObj, ___dynamic) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastMeshObj, ___area) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastMeshObj, ____dynamic) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastMeshObj, ___registered) == 0x45, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastMeshObj) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
