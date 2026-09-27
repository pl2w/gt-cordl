#pragma once
// IWYU pragma private; include "System/ComponentModel/ListSortDescriptionCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListSortDescriptionCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class ListSortDescription;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ListSortDescriptionCollection;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ListSortDescriptionCollection*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ListSortDescriptionCollection*, "System.ComponentModel", "ListSortDescriptionCollection");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ListSortDescriptionCollection
class CORDL_TYPE ListSortDescriptionCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::System::ComponentModel::ListSortDescription*  Item[];

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

/// @brief Field _sorts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sorts, put=__cordl_internal_set__sorts)) ::System::Collections::ArrayList*  _sorts;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Method Contains, addr 0xad5b6a0, size 0xac, virtual true, abstract: false, final true
inline bool Contains(::System::Object*  value) ;

/// @brief Method CopyTo, addr 0xad5b908, size 0x20, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method IndexOf, addr 0xad5b74c, size 0xac, virtual true, abstract: false, final true
inline int32_t IndexOf(::System::Object*  value) ;

static inline ::System::ComponentModel::ListSortDescriptionCollection* New_ctor() ;

static inline ::System::ComponentModel::ListSortDescriptionCollection* New_ctor(::ArrayW<::System::ComponentModel::ListSortDescription*>  sorts) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0xad5b8fc, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0xad5b904, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xad5b928, size 0x20, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add, addr 0xad5b608, size 0x4c, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0xad5b654, size 0x4c, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Insert, addr 0xad5b7f8, size 0x4c, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0xad5b844, size 0x4c, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0xad5b890, size 0x4c, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0xad5b5a8, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0xad5b5b0, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0xad5b5b8, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0xad5b5bc, size 0x4c, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__sorts() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get__sorts() ;

constexpr void __cordl_internal_set__sorts(::System::Collections::ArrayList*  value) ;

/// @brief Method .ctor, addr 0xad5b380, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad5b3ec, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::ComponentModel::ListSortDescription*>  sorts) ;

/// @brief Method get_Count, addr 0xad5b8dc, size 0x20, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xad5b4c4, size 0x98, virtual false, abstract: false, final false
inline ::System::ComponentModel::ListSortDescription* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Method set_Item, addr 0xad5b55c, size 0x4c, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::System::ComponentModel::ListSortDescription*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListSortDescriptionCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListSortDescriptionCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListSortDescriptionCollection(ListSortDescriptionCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListSortDescriptionCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListSortDescriptionCollection(ListSortDescriptionCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10201};

/// @brief Field _sorts, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ____sorts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ListSortDescriptionCollection, ____sorts) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ListSortDescriptionCollection) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
