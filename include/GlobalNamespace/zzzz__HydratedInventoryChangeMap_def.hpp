#pragma once
// IWYU pragma private; include "GlobalNamespace/HydratedInventoryChangeMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HydratedInventoryChangeMap)
namespace GlobalNamespace {
class HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator;
}
namespace GlobalNamespace {
class MothershipHydratedInventoryChange;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class HydratedInventoryChangeMap;
}
namespace GlobalNamespace {
class HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HydratedInventoryChangeMap*);
MARK_REF_T(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HydratedInventoryChangeMap*, "", "HydratedInventoryChangeMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator*, "", "HydratedInventoryChangeMap/HydratedInventoryChangeMapEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydratedInventoryChangeMap
class CORDL_TYPE HydratedInventoryChangeMap : public ::System::Object {
public:
// Declarations
using HydratedInventoryChangeMapEnumerator = ::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MothershipHydratedInventoryChange*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipHydratedInventoryChange*>*  Values;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x5436dec, size 0xfc, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>  item) ;

/// @brief Method Add, addr 0x5436ee8, size 0x100, virtual true, abstract: false, final true
inline void Add(::StringW  key, ::GlobalNamespace::MothershipHydratedInventoryChange*  val) ;

/// @brief Method Clear, addr 0x5437938, size 0xc8, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x5437060, size 0x68, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>  item) ;

/// @brief Method ContainsKey, addr 0x54360dc, size 0xe4, virtual true, abstract: false, final true
inline bool ContainsKey(::StringW  key) ;

/// @brief Method CopyTo, addr 0x54371ac, size 0x8, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>  array) ;

/// @brief Method CopyTo, addr 0x54371b4, size 0x35c, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>  array, int32_t  arrayIndex) ;

/// @brief Method Dispose, addr 0x5435de0, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5435ee4, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5435e50, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x5436b0c, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator* GetEnumerator() ;

static inline ::GlobalNamespace::HydratedInventoryChangeMap* New_ctor() ;

static inline ::GlobalNamespace::HydratedInventoryChangeMap* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::HydratedInventoryChangeMap* New_ctor(::GlobalNamespace::HydratedInventoryChangeMap*  other) ;

/// @brief Method Remove, addr 0x5436fe8, size 0x78, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>  item) ;

/// @brief Method Remove, addr 0x54370c8, size 0xe4, virtual true, abstract: false, final true
inline bool Remove(::StringW  key) ;

/// @brief Method TryGetValue, addr 0x54363d8, size 0x5c, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  key, ::by_ref<::GlobalNamespace::MothershipHydratedInventoryChange*>  value) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x54376a8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5435ca8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x5437774, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HydratedInventoryChangeMap*  other) ;

/// @brief Method create_iterator_begin, addr 0x5436658, size 0xd4, virtual false, abstract: false, final false
inline ::System::IntPtr create_iterator_begin() ;

/// @brief Method destroy_iterator, addr 0x5436810, size 0xd8, virtual false, abstract: false, final false
inline void destroy_iterator(::System::IntPtr  swigiterator) ;

/// @brief Method empty, addr 0x5437864, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x5435d08, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::HydratedInventoryChangeMap*  obj) ;

/// @brief Method get_Count, addr 0x5436434, size 0x4, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x543650c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x5436030, size 0xac, virtual true, abstract: false, final true
inline ::GlobalNamespace::MothershipHydratedInventoryChange* get_Item(::StringW  key) ;

/// @brief Method get_Keys, addr 0x5436514, size 0x144, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

/// @brief Method get_Values, addr 0x54368e8, size 0x224, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::GlobalNamespace::MothershipHydratedInventoryChange*>* get_Values() ;

/// @brief Method get_next_key, addr 0x543672c, size 0xe4, virtual false, abstract: false, final false
inline ::StringW get_next_key(::System::IntPtr  swigiterator) ;

/// @brief Method getitem, addr 0x54361c0, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipHydratedInventoryChange* getitem(::StringW  key) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,MothershipHydratedInventoryChange>>.GetEnumerator, addr 0x5437510, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>* global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_MothershipHydratedInventoryChange___GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x5437650, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipHydratedInventoryChange___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>* i___System__Collections__Generic__IDictionary_2___StringW___GlobalNamespace__MothershipHydratedInventoryChange__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipHydratedInventoryChange___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Item, addr 0x54362d4, size 0x4, virtual true, abstract: false, final true
inline void set_Item(::StringW  key, ::GlobalNamespace::MothershipHydratedInventoryChange*  value) ;

/// @brief Method setitem, addr 0x54362d8, size 0x100, virtual false, abstract: false, final false
inline void setitem(::StringW  key, ::GlobalNamespace::MothershipHydratedInventoryChange*  x) ;

/// @brief Method size, addr 0x5436438, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x5435d48, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::HydratedInventoryChangeMap*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HydratedInventoryChangeMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HydratedInventoryChangeMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HydratedInventoryChangeMap(HydratedInventoryChangeMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HydratedInventoryChangeMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HydratedInventoryChangeMap(HydratedInventoryChangeMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9125};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HydratedInventoryChangeMap) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydratedInventoryChangeMap/HydratedInventoryChangeMapEnumerator
class CORDL_TYPE HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::HydratedInventoryChangeMap*  collectionRef;

/// @brief Field currentIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Field keyCollection, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyCollection, put=__cordl_internal_set_keyCollection)) ::System::Collections::Generic::IList_1<::StringW>*  keyCollection;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5437afc, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x5436c78, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator* New_ctor(::GlobalNamespace::HydratedInventoryChangeMap*  collection) ;

/// @brief Method Reset, addr 0x5437a64, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::HydratedInventoryChangeMap* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::HydratedInventoryChangeMap*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr ::System::Collections::Generic::IList_1<::StringW>* const& __cordl_internal_get_keyCollection() const;

constexpr ::System::Collections::Generic::IList_1<::StringW>*& __cordl_internal_get_keyCollection() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::HydratedInventoryChangeMap*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

constexpr void __cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5437568, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HydratedInventoryChangeMap*  collection) ;

/// @brief Method get_Current, addr 0x5436b64, size 0x114, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*> get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x5437a00, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::MothershipHydratedInventoryChange*>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__MothershipHydratedInventoryChange___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator(HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator(HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9124};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::HydratedInventoryChangeMap*  ___collectionRef;

/// @brief Field keyCollection, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::StringW>*  ___keyCollection;

/// @brief Field currentIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x30, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator, ___keyCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator, ___currentIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator, ___currentObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator, ___currentSize) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HydratedInventoryChangeMap_HydratedInventoryChangeMapEnumerator) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
