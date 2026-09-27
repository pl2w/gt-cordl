#pragma once
// IWYU pragma private; include "Pathfinding/BlockManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__BlockManager_BlockMode_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlockManager)
namespace GlobalNamespace {
struct BlockManager_BlockMode;
}
namespace Pathfinding {
class BlockManager_TraversalProvider;
}
namespace Pathfinding {
class BlockManager___c__DisplayClass6_0;
}
namespace Pathfinding {
class BlockManager___c__DisplayClass7_0;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class ITraversalProvider;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class SingleNodeBlocker;
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
class BlockManager;
}
namespace Pathfinding {
class BlockManager_TraversalProvider;
}
namespace Pathfinding {
class BlockManager___c__DisplayClass6_0;
}
namespace Pathfinding {
class BlockManager___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::BlockManager*);
MARK_REF_T(::Pathfinding::BlockManager_TraversalProvider*);
MARK_REF_T(::Pathfinding::BlockManager___c__DisplayClass6_0*);
MARK_REF_T(::Pathfinding::BlockManager___c__DisplayClass7_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::BlockManager*, "Pathfinding", "BlockManager");
DEFINE_IL2CPP_CLASS(::Pathfinding::BlockManager_TraversalProvider*, "Pathfinding", "BlockManager/TraversalProvider");
DEFINE_IL2CPP_CLASS(::Pathfinding::BlockManager___c__DisplayClass6_0*, "Pathfinding", "BlockManager/<>c__DisplayClass6_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::BlockManager___c__DisplayClass7_0*, "Pathfinding", "BlockManager/<>c__DisplayClass7_0");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_block_manager.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.BlockManager
class CORDL_TYPE BlockManager : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using BlockMode = ::GlobalNamespace::BlockManager_BlockMode;

using TraversalProvider = ::Pathfinding::BlockManager_TraversalProvider;

using __c__DisplayClass6_0 = ::Pathfinding::BlockManager___c__DisplayClass6_0;

using __c__DisplayClass7_0 = ::Pathfinding::BlockManager___c__DisplayClass7_0;

/// @brief Field blocked, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocked, put=__cordl_internal_set_blocked)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>*  blocked;

/// @brief Method InternalBlock, addr 0x5eb28a4, size 0x158, virtual false, abstract: false, final false
inline void InternalBlock(::Pathfinding::GraphNode*  node, ::Pathfinding::SingleNodeBlocker*  blocker) ;

/// @brief Method InternalUnblock, addr 0x5eb2a04, size 0x158, virtual false, abstract: false, final false
inline void InternalUnblock(::Pathfinding::GraphNode*  node, ::Pathfinding::SingleNodeBlocker*  blocker) ;

static inline ::Pathfinding::BlockManager* New_ctor() ;

/// @brief Method NodeContainsAnyExcept, addr 0x5eb2780, size 0x124, virtual false, abstract: false, final false
inline bool NodeContainsAnyExcept(::Pathfinding::GraphNode*  node, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector) ;

/// @brief Method NodeContainsAnyOf, addr 0x5eb2668, size 0x118, virtual false, abstract: false, final false
inline bool NodeContainsAnyOf(::Pathfinding::GraphNode*  node, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector) ;

/// @brief Method Start, addr 0x5eb2590, size 0xd8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>* const& __cordl_internal_get_blocked() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>*& __cordl_internal_get_blocked() ;

constexpr void __cordl_internal_set_blocked(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>*  value) ;

/// @brief Method .ctor, addr 0x5eb2b64, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlockManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlockManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BlockManager(BlockManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlockManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlockManager(BlockManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21407};

/// @brief Field blocked, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>*  ___blocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::BlockManager, ___blocked) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::BlockManager) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.BlockManager/<>c__DisplayClass7_0
class CORDL_TYPE BlockManager___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::BlockManager>  __4__this;

/// @brief Field blocker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocker, put=__cordl_internal_set_blocker)) ::UnityW<::Pathfinding::SingleNodeBlocker>  blocker;

/// @brief Field node, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::Pathfinding::GraphNode*  node;

static inline ::Pathfinding::BlockManager___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <InternalUnblock>b__0, addr 0x5eb2f68, size 0x124, virtual false, abstract: false, final false
inline void _InternalUnblock_b__0() ;

constexpr ::UnityW<::Pathfinding::BlockManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::BlockManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& __cordl_internal_get_blocker() const;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& __cordl_internal_get_blocker() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_node() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_node() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::BlockManager>  value) ;

constexpr void __cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value) ;

constexpr void __cordl_internal_set_node(::Pathfinding::GraphNode*  value) ;

/// @brief Method .ctor, addr 0x5eb2b5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlockManager___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlockManager___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BlockManager___c__DisplayClass7_0(BlockManager___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlockManager___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlockManager___c__DisplayClass7_0(BlockManager___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21406};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Pathfinding::BlockManager>  _____4__this;

/// @brief Field node, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___node;

/// @brief Field blocker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::SingleNodeBlocker>  ___blocker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::BlockManager___c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BlockManager___c__DisplayClass7_0, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BlockManager___c__DisplayClass7_0, ___blocker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::BlockManager___c__DisplayClass7_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.BlockManager/<>c__DisplayClass6_0
class CORDL_TYPE BlockManager___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::BlockManager>  __4__this;

/// @brief Field blocker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocker, put=__cordl_internal_set_blocker)) ::UnityW<::Pathfinding::SingleNodeBlocker>  blocker;

/// @brief Field node, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::Pathfinding::GraphNode*  node;

static inline ::Pathfinding::BlockManager___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <InternalBlock>b__0, addr 0x5eb2df8, size 0x170, virtual false, abstract: false, final false
inline void _InternalBlock_b__0() ;

constexpr ::UnityW<::Pathfinding::BlockManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::BlockManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& __cordl_internal_get_blocker() const;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& __cordl_internal_get_blocker() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_node() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_node() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::BlockManager>  value) ;

constexpr void __cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value) ;

constexpr void __cordl_internal_set_node(::Pathfinding::GraphNode*  value) ;

/// @brief Method .ctor, addr 0x5eb29fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlockManager___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlockManager___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BlockManager___c__DisplayClass6_0(BlockManager___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlockManager___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlockManager___c__DisplayClass6_0(BlockManager___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21405};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Pathfinding::BlockManager>  _____4__this;

/// @brief Field node, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___node;

/// @brief Field blocker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::SingleNodeBlocker>  ___blocker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::BlockManager___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BlockManager___c__DisplayClass6_0, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BlockManager___c__DisplayClass6_0, ___blocker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::BlockManager___c__DisplayClass6_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies Pathfinding.BlockManager::BlockMode, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.BlockManager/TraversalProvider
class CORDL_TYPE BlockManager_TraversalProvider : public ::System::Object {
public:
// Declarations
/// @brief Field <mode>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode_k__BackingField, put=__cordl_internal_set__mode_k__BackingField)) ::GlobalNamespace::BlockManager_BlockMode  _mode_k__BackingField;

/// @brief Field blockManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockManager, put=__cordl_internal_set_blockManager)) ::UnityW<::Pathfinding::BlockManager>  blockManager;

 __declspec(property(get=get_mode, put=set_mode)) ::GlobalNamespace::BlockManager_BlockMode  mode;

/// @brief Field selector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector;

/// @brief Convert operator to "::Pathfinding::ITraversalProvider"
constexpr operator  ::Pathfinding::ITraversalProvider*() noexcept;

/// @brief Method CanTraverse, addr 0x5eb2d14, size 0x98, virtual true, abstract: false, final true
inline bool CanTraverse(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node) ;

/// @brief Method GetTraversalCost, addr 0x5eb2dac, size 0x4c, virtual true, abstract: false, final true
inline uint32_t GetTraversalCost(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node) ;

static inline ::Pathfinding::BlockManager_TraversalProvider* New_ctor(::Pathfinding::BlockManager*  blockManager, ::GlobalNamespace::BlockManager_BlockMode  mode, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector) ;

constexpr ::GlobalNamespace::BlockManager_BlockMode const& __cordl_internal_get__mode_k__BackingField() const;

constexpr ::GlobalNamespace::BlockManager_BlockMode& __cordl_internal_get__mode_k__BackingField() ;

constexpr ::UnityW<::Pathfinding::BlockManager> const& __cordl_internal_get_blockManager() const;

constexpr ::UnityW<::Pathfinding::BlockManager>& __cordl_internal_get_blockManager() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>* const& __cordl_internal_get_selector() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*& __cordl_internal_get_selector() ;

constexpr void __cordl_internal_set__mode_k__BackingField(::GlobalNamespace::BlockManager_BlockMode  value) ;

constexpr void __cordl_internal_set_blockManager(::UnityW<::Pathfinding::BlockManager>  value) ;

constexpr void __cordl_internal_set_selector(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  value) ;

/// @brief Method .ctor, addr 0x5eb2bfc, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::BlockManager*  blockManager, ::GlobalNamespace::BlockManager_BlockMode  mode, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector) ;

/// [CompilerGenerated]
/// @brief Method get_mode, addr 0x5eb2bec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BlockManager_BlockMode get_mode() ;

/// @brief Convert to "::Pathfinding::ITraversalProvider"
constexpr ::Pathfinding::ITraversalProvider* i___Pathfinding__ITraversalProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_mode, addr 0x5eb2bf4, size 0x8, virtual false, abstract: false, final false
inline void set_mode(::GlobalNamespace::BlockManager_BlockMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlockManager_TraversalProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlockManager_TraversalProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BlockManager_TraversalProvider(BlockManager_TraversalProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlockManager_TraversalProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlockManager_TraversalProvider(BlockManager_TraversalProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21404};

/// @brief Field blockManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Pathfinding::BlockManager>  ___blockManager;

/// [CompilerGenerated]
/// @brief Field <mode>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::BlockManager_BlockMode  ____mode_k__BackingField;

/// @brief Field selector, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  ___selector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::BlockManager_TraversalProvider, ___blockManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BlockManager_TraversalProvider, ____mode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BlockManager_TraversalProvider, ___selector) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::BlockManager_TraversalProvider) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
