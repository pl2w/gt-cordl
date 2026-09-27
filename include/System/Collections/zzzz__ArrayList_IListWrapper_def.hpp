#pragma once
// IWYU pragma private; include "System/Collections/ArrayList_IListWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList_IListWrapper)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayList_IListWrapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArrayList_IListWrapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArrayList_IListWrapper*, "System.Collections", "ArrayList/IListWrapper");
// [DefaultMember("Item")]
// Dependencies System.Collections.ArrayList
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Collections.ArrayList/IListWrapper
class CORDL_TYPE ArrayList_IListWrapper : public ::System::Collections::ArrayList {
public:
// Declarations
 __declspec(property(put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field _list, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__list, put=__cordl_internal_set__list)) ::System::Collections::IList*  _list;

/// @brief Method Add, addr 0xa26b630, size 0xbc, virtual true, abstract: false, final false
inline int32_t Add(::System::Object*  obj) ;

/// @brief Method AddRange, addr 0xa26b6ec, size 0x48, virtual true, abstract: false, final false
inline void AddRange(::System::Collections::ICollection*  c) ;

/// @brief Method Clear, addr 0xa26b734, size 0x164, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0xa26b898, size 0x6c, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method Contains, addr 0xa26b904, size 0xac, virtual true, abstract: false, final false
inline bool Contains(::System::Object*  obj) ;

/// @brief Method CopyTo, addr 0xa26b9b0, size 0xb8, virtual true, abstract: false, final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method CopyTo, addr 0xa26ba68, size 0x334, virtual true, abstract: false, final false
inline void CopyTo(int32_t  index, ::System::Array*  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method GetEnumerator, addr 0xa26bd9c, size 0xa0, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method IndexOf, addr 0xa26be3c, size 0xac, virtual true, abstract: false, final false
inline int32_t IndexOf(::System::Object*  value) ;

/// @brief Method Insert, addr 0xa26bee8, size 0xcc, virtual true, abstract: false, final false
inline void Insert(int32_t  index, ::System::Object*  obj) ;

/// @brief Method InsertRange, addr 0xa26bfb4, size 0x3c8, virtual true, abstract: false, final false
inline void InsertRange(int32_t  index, ::System::Collections::ICollection*  c) ;

static inline ::GlobalNamespace::ArrayList_IListWrapper* New_ctor(::System::Collections::IList*  list) ;

/// @brief Method Remove, addr 0xa26c37c, size 0x40, virtual true, abstract: false, final false
inline void Remove(::System::Object*  value) ;

/// @brief Method RemoveAt, addr 0xa26c3bc, size 0xbc, virtual true, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0xa26c478, size 0x218, virtual true, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Sort, addr 0xa26c690, size 0x2b8, virtual true, abstract: false, final false
inline void Sort(int32_t  index, int32_t  count, ::System::Collections::IComparer*  comparer) ;

/// @brief Method ToArray, addr 0xa26c948, size 0x174, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> ToArray() ;

/// @brief Method ToArray, addr 0xa26cabc, size 0x1a8, virtual true, abstract: false, final false
inline ::System::Array* ToArray(::System::Type*  type) ;

constexpr ::System::Collections::IList* const& __cordl_internal_get__list() const;

constexpr ::System::Collections::IList*& __cordl_internal_get__list() ;

constexpr void __cordl_internal_set__list(::System::Collections::IList*  value) ;

/// @brief Method .ctor, addr 0xa26a0bc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IList*  list) ;

/// @brief Method get_Count, addr 0xa26b188, size 0xa4, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsFixedSize, addr 0xa26b2d0, size 0xa4, virtual true, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0xa26b22c, size 0xa4, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0xa26b374, size 0xa4, virtual true, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0xa26b418, size 0xa8, virtual true, abstract: false, final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Method get_SyncRoot, addr 0xa26b58c, size 0xa4, virtual true, abstract: false, final false
inline ::System::Object* get_SyncRoot() ;

/// @brief Method set_Capacity, addr 0xa26b0f8, size 0x90, virtual true, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0xa26b4c0, size 0xcc, virtual true, abstract: false, final false
inline void set_Item(int32_t  index, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayList_IListWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayList_IListWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayList_IListWrapper(ArrayList_IListWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayList_IListWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayList_IListWrapper(ArrayList_IListWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6847};

/// @brief Field _list, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::IList*  ____list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArrayList_IListWrapper, ____list) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArrayList_IListWrapper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
