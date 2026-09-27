#pragma once
// IWYU pragma private; include "Pathfinding/GraphModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphModifier)
namespace GlobalNamespace {
struct GraphModifier_EventType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding {
class GraphModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphModifier*, "Pathfinding", "GraphModifier");
// [ExecuteInEditMode]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphModifier
class CORDL_TYPE GraphModifier : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using EventType = ::GlobalNamespace::GraphModifier_EventType;

/// @brief Field next, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::UnityW<::Pathfinding::GraphModifier>  next;

/// @brief Field prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::UnityW<::Pathfinding::GraphModifier>  prev;

/// @brief Field root, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_root, put=setStaticF_root)) ::UnityW<::Pathfinding::GraphModifier>  root;

/// @brief Field uniqueID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_uniqueID, put=__cordl_internal_set_uniqueID)) uint64_t  uniqueID;

/// @brief Field usedIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_usedIDs, put=setStaticF_usedIDs)) ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>*  usedIDs;

/// @brief Method AddToLinkedList, addr 0x5e57a7c, size 0x110, virtual false, abstract: false, final false
inline void AddToLinkedList() ;

/// @brief Method Awake, addr 0x5e57cb8, size 0x1c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ConfigureUniqueID, addr 0x5e57b8c, size 0x128, virtual false, abstract: false, final false
inline void ConfigureUniqueID() ;

/// @brief Method FindAllModifiers, addr 0x5e574b8, size 0x128, virtual false, abstract: false, final false
static inline void FindAllModifiers() ;

/// @brief Method GetModifiersOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetModifiersOfType() ;

static inline ::Pathfinding::GraphModifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e57cd4, size 0x80, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5e57cb4, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e57898, size 0x20, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGraphsPostUpdate, addr 0x5e57d68, size 0x4, virtual true, abstract: false, final false
inline void OnGraphsPostUpdate() ;

/// @brief Method OnGraphsPreUpdate, addr 0x5e57d64, size 0x4, virtual true, abstract: false, final false
inline void OnGraphsPreUpdate() ;

/// @brief Method OnLatePostScan, addr 0x5e57d5c, size 0x4, virtual true, abstract: false, final false
inline void OnLatePostScan() ;

/// @brief Method OnPostCacheLoad, addr 0x5e57d60, size 0x4, virtual true, abstract: false, final false
inline void OnPostCacheLoad() ;

/// @brief Method OnPostScan, addr 0x5e57d54, size 0x4, virtual true, abstract: false, final false
inline void OnPostScan() ;

/// @brief Method OnPreScan, addr 0x5e57d58, size 0x4, virtual true, abstract: false, final false
inline void OnPreScan() ;

/// @brief Method RemoveFromLinkedList, addr 0x5e578b8, size 0x1c4, virtual false, abstract: false, final false
inline void RemoveFromLinkedList() ;

/// @brief Method Reset, addr 0x5e57d6c, size 0xc0, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method TriggerEvent, addr 0x5e575e0, size 0x2b8, virtual false, abstract: false, final false
static inline void TriggerEvent(::GlobalNamespace::GraphModifier_EventType  type) ;

constexpr ::UnityW<::Pathfinding::GraphModifier> const& __cordl_internal_get_next() const;

constexpr ::UnityW<::Pathfinding::GraphModifier>& __cordl_internal_get_next() ;

constexpr ::UnityW<::Pathfinding::GraphModifier> const& __cordl_internal_get_prev() const;

constexpr ::UnityW<::Pathfinding::GraphModifier>& __cordl_internal_get_prev() ;

constexpr uint64_t const& __cordl_internal_get_uniqueID() const;

constexpr uint64_t& __cordl_internal_get_uniqueID() ;

constexpr void __cordl_internal_set_next(::UnityW<::Pathfinding::GraphModifier>  value) ;

constexpr void __cordl_internal_set_prev(::UnityW<::Pathfinding::GraphModifier>  value) ;

constexpr void __cordl_internal_set_uniqueID(uint64_t  value) ;

/// @brief Method .ctor, addr 0x5e57e2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Pathfinding::GraphModifier> getStaticF_root() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>* getStaticF_usedIDs() ;

static inline void setStaticF_root(::UnityW<::Pathfinding::GraphModifier>  value) ;

static inline void setStaticF_usedIDs(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphModifier(GraphModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphModifier(GraphModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21245};

/// @brief Field prev, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::GraphModifier>  ___prev;

/// @brief Field next, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::GraphModifier>  ___next;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field uniqueID, offset: 0x38, size: 0x8, def value: None
 uint64_t  ___uniqueID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphModifier, ___prev) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphModifier, ___next) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphModifier, ___uniqueID) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphModifier) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
