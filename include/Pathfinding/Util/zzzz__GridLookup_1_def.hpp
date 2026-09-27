#pragma once
// IWYU pragma private; include "Pathfinding/Util/GridLookup_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GridLookup_1)
namespace Pathfinding::Util {
template<typename T>
class GridLookup_1_Item;
}
namespace Pathfinding::Util {
template<typename T>
class GridLookup_1_Root;
}
namespace Pathfinding {
struct Int2;
}
namespace Pathfinding {
struct IntRect;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace Pathfinding::Util {
template<typename T>
class GridLookup_1;
}
namespace Pathfinding::Util {
template<typename T>
class GridLookup_1_Item;
}
namespace Pathfinding::Util {
template<typename T>
class GridLookup_1_Root;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Util::GridLookup_1);
MARK_GEN_REF_T_PTR(::Pathfinding::Util::GridLookup_1_Item);
MARK_GEN_REF_T_PTR(::Pathfinding::Util::GridLookup_1_Root);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::GridLookup_1, "Pathfinding.Util", "GridLookup`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::GridLookup_1_Item, "Pathfinding.Util", "GridLookup`1/Item");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::GridLookup_1_Root, "Pathfinding.Util", "GridLookup`1/Root");
// Dependencies Pathfinding.Int2, Pathfinding.Util.GridLookup`1::Item<T>, System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.GridLookup`1<T>
class CORDL_TYPE GridLookup_1 : public ::System::Object {
public:
// Declarations
using Item = ::Pathfinding::Util::GridLookup_1_Item<T>;

using Root = ::Pathfinding::Util::GridLookup_1_Root<T>;

 __declspec(property(get=get_AllItems)) ::Pathfinding::Util::GridLookup_1_Root<T>*  AllItems;

/// @brief Field all, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_all, put=__cordl_internal_set_all)) ::Pathfinding::Util::GridLookup_1_Root<T>*  all;

/// @brief Field cells, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cells, put=__cordl_internal_set_cells)) ::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*>  cells;

/// @brief Field itemPool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemPool, put=__cordl_internal_set_itemPool)) ::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  itemPool;

/// @brief Field rootLookup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootLookup, put=__cordl_internal_set_rootLookup)) ::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>*  rootLookup;

/// @brief Field size, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::Pathfinding::Int2  size;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GridLookup_1_Root<T>* Add(T  item, ::Pathfinding::IntRect  bounds) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetRoot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GridLookup_1_Root<T>* GetRoot(T  item) ;

/// @brief Method Move, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Move(T  item, ::Pathfinding::IntRect  bounds) ;

static inline ::Pathfinding::Util::GridLookup_1<T>* New_ctor(::Pathfinding::Int2  size) ;

/// @brief Method QueryRect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
requires(::cordl_internals::type_constraint<U, T> && ::cordl_internals::reference_type_constraint<U>)
inline ::System::Collections::Generic::List_1<U>* QueryRect(::Pathfinding::IntRect  r) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(T  item) ;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& __cordl_internal_get_all() const;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& __cordl_internal_get_all() ;

constexpr ::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*> const& __cordl_internal_get_cells() const;

constexpr ::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*>& __cordl_internal_get_cells() ;

constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>* const& __cordl_internal_get_itemPool() const;

constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*& __cordl_internal_get_itemPool() ;

constexpr ::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>* const& __cordl_internal_get_rootLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>*& __cordl_internal_get_rootLookup() ;

constexpr ::Pathfinding::Int2 const& __cordl_internal_get_size() const;

constexpr ::Pathfinding::Int2& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_all(::Pathfinding::Util::GridLookup_1_Root<T>*  value) ;

constexpr void __cordl_internal_set_cells(::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*>  value) ;

constexpr void __cordl_internal_set_itemPool(::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  value) ;

constexpr void __cordl_internal_set_rootLookup(::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>*  value) ;

constexpr void __cordl_internal_set_size(::Pathfinding::Int2  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Int2  size) ;

/// @brief Method get_AllItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GridLookup_1_Root<T>* get_AllItems() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridLookup_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridLookup_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridLookup_1(GridLookup_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridLookup_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridLookup_1(GridLookup_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21474};

/// @brief Field size, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Int2  ___size;

/// @brief Field cells, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Util::GridLookup_1_Item<T>*>  ___cells;

/// @brief Field all, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1_Root<T>*  ___all;

/// @brief Field rootLookup, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<T,::Pathfinding::Util::GridLookup_1_Root<T>*>*  ___rootLookup;

/// @brief Field itemPool, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  ___itemPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
// Dependencies Pathfinding.IntRect, System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.GridLookup`1/Root<T>
class CORDL_TYPE GridLookup_1_Root : public ::System::Object {
public:
// Declarations
/// @brief Field flag, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_flag, put=__cordl_internal_set_flag)) bool  flag;

/// @brief Field items, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  items;

/// @brief Field next, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Pathfinding::Util::GridLookup_1_Root<T>*  next;

/// @brief Field obj, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_obj, put=__cordl_internal_set_obj)) T  obj;

/// @brief Field prev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Pathfinding::Util::GridLookup_1_Root<T>*  prev;

/// @brief Field previousBounds, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_previousBounds, put=__cordl_internal_set_previousBounds)) ::Pathfinding::IntRect  previousBounds;

static inline ::Pathfinding::Util::GridLookup_1_Root<T>* New_ctor() ;

constexpr bool const& __cordl_internal_get_flag() const;

constexpr bool& __cordl_internal_get_flag() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>* const& __cordl_internal_get_items() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*& __cordl_internal_get_items() ;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& __cordl_internal_get_next() const;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& __cordl_internal_get_next() ;

constexpr T const& __cordl_internal_get_obj() const;

constexpr T& __cordl_internal_get_obj() ;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& __cordl_internal_get_prev() const;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& __cordl_internal_get_prev() ;

constexpr ::Pathfinding::IntRect const& __cordl_internal_get_previousBounds() const;

constexpr ::Pathfinding::IntRect& __cordl_internal_get_previousBounds() ;

constexpr void __cordl_internal_set_flag(bool  value) ;

constexpr void __cordl_internal_set_items(::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  value) ;

constexpr void __cordl_internal_set_next(::Pathfinding::Util::GridLookup_1_Root<T>*  value) ;

constexpr void __cordl_internal_set_obj(T  value) ;

constexpr void __cordl_internal_set_prev(::Pathfinding::Util::GridLookup_1_Root<T>*  value) ;

constexpr void __cordl_internal_set_previousBounds(::Pathfinding::IntRect  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridLookup_1_Root() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridLookup_1_Root", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridLookup_1_Root(GridLookup_1_Root && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridLookup_1_Root", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridLookup_1_Root(GridLookup_1_Root const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21473};

/// @brief Field obj, offset: 0x10, size: 0x8, def value: None
 T  ___obj;

/// @brief Field next, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1_Root<T>*  ___next;

/// @brief Field prev, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1_Root<T>*  ___prev;

/// @brief Field previousBounds, offset: 0x28, size: 0x10, def value: None
 ::Pathfinding::IntRect  ___previousBounds;

/// @brief Field items, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Util::GridLookup_1_Item<T>*>*  ___items;

/// @brief Field flag, offset: 0x40, size: 0x1, def value: None
 bool  ___flag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
// Dependencies System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.GridLookup`1/Item<T>
class CORDL_TYPE GridLookup_1_Item : public ::System::Object {
public:
// Declarations
/// @brief Field next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Pathfinding::Util::GridLookup_1_Item<T>*  next;

/// @brief Field prev, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Pathfinding::Util::GridLookup_1_Item<T>*  prev;

/// @brief Field root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::Pathfinding::Util::GridLookup_1_Root<T>*  root;

static inline ::Pathfinding::Util::GridLookup_1_Item<T>* New_ctor() ;

constexpr ::Pathfinding::Util::GridLookup_1_Item<T>* const& __cordl_internal_get_next() const;

constexpr ::Pathfinding::Util::GridLookup_1_Item<T>*& __cordl_internal_get_next() ;

constexpr ::Pathfinding::Util::GridLookup_1_Item<T>* const& __cordl_internal_get_prev() const;

constexpr ::Pathfinding::Util::GridLookup_1_Item<T>*& __cordl_internal_get_prev() ;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>* const& __cordl_internal_get_root() const;

constexpr ::Pathfinding::Util::GridLookup_1_Root<T>*& __cordl_internal_get_root() ;

constexpr void __cordl_internal_set_next(::Pathfinding::Util::GridLookup_1_Item<T>*  value) ;

constexpr void __cordl_internal_set_prev(::Pathfinding::Util::GridLookup_1_Item<T>*  value) ;

constexpr void __cordl_internal_set_root(::Pathfinding::Util::GridLookup_1_Root<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridLookup_1_Item() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridLookup_1_Item", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridLookup_1_Item(GridLookup_1_Item && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridLookup_1_Item", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridLookup_1_Item(GridLookup_1_Item const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21472};

/// @brief Field root, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1_Root<T>*  ___root;

/// @brief Field prev, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1_Item<T>*  ___prev;

/// @brief Field next, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Util::GridLookup_1_Item<T>*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
