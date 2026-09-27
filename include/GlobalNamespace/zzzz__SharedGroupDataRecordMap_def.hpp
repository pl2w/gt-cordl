#pragma once
// IWYU pragma private; include "GlobalNamespace/SharedGroupDataRecordMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedGroupDataRecordMap)
namespace GlobalNamespace {
class SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator;
}
namespace GlobalNamespace {
class SharedGroupDataRecord;
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
class SharedGroupDataRecordMap;
}
namespace GlobalNamespace {
class SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SharedGroupDataRecordMap*);
MARK_REF_T(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedGroupDataRecordMap*, "", "SharedGroupDataRecordMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator*, "", "SharedGroupDataRecordMap/SharedGroupDataRecordMapEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SharedGroupDataRecordMap
class CORDL_TYPE SharedGroupDataRecordMap : public ::System::Object {
public:
// Declarations
using SharedGroupDataRecordMapEnumerator = ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::SharedGroupDataRecord*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<::GlobalNamespace::SharedGroupDataRecord*>*  Values;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x5339b20, size 0xfc, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  item) ;

/// @brief Method Add, addr 0x5339c1c, size 0xfc, virtual true, abstract: false, final true
inline void Add(::StringW  key, ::GlobalNamespace::SharedGroupDataRecord*  val) ;

/// @brief Method Clear, addr 0x533a668, size 0xc8, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x5339d90, size 0x68, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  item) ;

/// @brief Method ContainsKey, addr 0x5338e18, size 0xe4, virtual true, abstract: false, final true
inline bool ContainsKey(::StringW  key) ;

/// @brief Method CopyTo, addr 0x5339edc, size 0x8, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>  array) ;

/// @brief Method CopyTo, addr 0x5339ee4, size 0x35c, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>  array, int32_t  arrayIndex) ;

/// @brief Method Dispose, addr 0x5338b1c, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5338c20, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5338b8c, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x5339840, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator* GetEnumerator() ;

static inline ::GlobalNamespace::SharedGroupDataRecordMap* New_ctor() ;

static inline ::GlobalNamespace::SharedGroupDataRecordMap* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::SharedGroupDataRecordMap* New_ctor(::GlobalNamespace::SharedGroupDataRecordMap*  other) ;

/// @brief Method Remove, addr 0x5339d18, size 0x78, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  item) ;

/// @brief Method Remove, addr 0x5339df8, size 0xe4, virtual true, abstract: false, final true
inline bool Remove(::StringW  key) ;

/// @brief Method TryGetValue, addr 0x533910c, size 0x5c, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  key, ::by_ref<::GlobalNamespace::SharedGroupDataRecord*>  value) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x533a3d8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53389e4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x533a4a4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SharedGroupDataRecordMap*  other) ;

/// @brief Method create_iterator_begin, addr 0x533938c, size 0xd4, virtual false, abstract: false, final false
inline ::System::IntPtr create_iterator_begin() ;

/// @brief Method destroy_iterator, addr 0x5339544, size 0xd8, virtual false, abstract: false, final false
inline void destroy_iterator(::System::IntPtr  swigiterator) ;

/// @brief Method empty, addr 0x533a594, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x5338a44, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SharedGroupDataRecordMap*  obj) ;

/// @brief Method get_Count, addr 0x5339168, size 0x4, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x5339240, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x5338d6c, size 0xac, virtual true, abstract: false, final true
inline ::GlobalNamespace::SharedGroupDataRecord* get_Item(::StringW  key) ;

/// @brief Method get_Keys, addr 0x5339248, size 0x144, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

/// @brief Method get_Values, addr 0x533961c, size 0x224, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::GlobalNamespace::SharedGroupDataRecord*>* get_Values() ;

/// @brief Method get_next_key, addr 0x5339460, size 0xe4, virtual false, abstract: false, final false
inline ::StringW get_next_key(::System::IntPtr  swigiterator) ;

/// @brief Method getitem, addr 0x5338efc, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::SharedGroupDataRecord* getitem(::StringW  key) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,SharedGroupDataRecord>>.GetEnumerator, addr 0x533a240, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* global::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_SharedGroupDataRecord___GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x533a380, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SharedGroupDataRecord___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>* i___System__Collections__Generic__IDictionary_2___StringW___GlobalNamespace__SharedGroupDataRecord__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SharedGroupDataRecord___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Item, addr 0x533900c, size 0x4, virtual true, abstract: false, final true
inline void set_Item(::StringW  key, ::GlobalNamespace::SharedGroupDataRecord*  value) ;

/// @brief Method setitem, addr 0x5339010, size 0xfc, virtual false, abstract: false, final false
inline void setitem(::StringW  key, ::GlobalNamespace::SharedGroupDataRecord*  x) ;

/// @brief Method size, addr 0x533916c, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x5338a84, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SharedGroupDataRecordMap*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedGroupDataRecordMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedGroupDataRecordMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedGroupDataRecordMap(SharedGroupDataRecordMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedGroupDataRecordMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedGroupDataRecordMap(SharedGroupDataRecordMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9541};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedGroupDataRecordMap) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SharedGroupDataRecordMap/SharedGroupDataRecordMapEnumerator
class CORDL_TYPE SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::SharedGroupDataRecordMap*  collectionRef;

/// @brief Field currentIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Field keyCollection, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyCollection, put=__cordl_internal_set_keyCollection)) ::System::Collections::Generic::IList_1<::StringW>*  keyCollection;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x533a82c, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x53399ac, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator* New_ctor(::GlobalNamespace::SharedGroupDataRecordMap*  collection) ;

/// @brief Method Reset, addr 0x533a794, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::SharedGroupDataRecordMap* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::SharedGroupDataRecordMap*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr ::System::Collections::Generic::IList_1<::StringW>* const& __cordl_internal_get_keyCollection() const;

constexpr ::System::Collections::Generic::IList_1<::StringW>*& __cordl_internal_get_keyCollection() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::SharedGroupDataRecordMap*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

constexpr void __cordl_internal_set_keyCollection(::System::Collections::Generic::IList_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x533a298, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SharedGroupDataRecordMap*  collection) ;

/// @brief Method get_Current, addr 0x5339898, size 0x114, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*> get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x533a730, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::SharedGroupDataRecord*>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__SharedGroupDataRecord___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator(SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator(SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9540};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::SharedGroupDataRecordMap*  ___collectionRef;

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
static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator, ___keyCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator, ___currentIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator, ___currentObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator, ___currentSize) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedGroupDataRecordMap_SharedGroupDataRecordMapEnumerator) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
