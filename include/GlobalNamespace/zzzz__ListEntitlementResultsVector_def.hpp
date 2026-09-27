#pragma once
// IWYU pragma private; include "GlobalNamespace/ListEntitlementResultsVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListEntitlementResultsVector)
namespace GlobalNamespace {
class ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator;
}
namespace GlobalNamespace {
class MothershipEntitlementCatalogItem;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class ListEntitlementResultsVector;
}
namespace GlobalNamespace {
class ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListEntitlementResultsVector*);
MARK_REF_T(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListEntitlementResultsVector*, "", "ListEntitlementResultsVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator*, "", "ListEntitlementResultsVector/ListEntitlementResultsVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListEntitlementResultsVector
class CORDL_TYPE ListEntitlementResultsVector : public ::System::Object {
public:
// Declarations
using ListEntitlementResultsVectorEnumerator = ::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MothershipEntitlementCatalogItem*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x5458610, size 0xf0, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::MothershipEntitlementCatalogItem*  x) ;

/// @brief Method AddRange, addr 0x545a378, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::ListEntitlementResultsVector*  values) ;

/// @brief Method Clear, addr 0x545a1d4, size 0xc8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x5459b34, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipEntitlementCatalogItem*>  array) ;

/// @brief Method CopyTo, addr 0x5459dac, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipEntitlementCatalogItem*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x5459b68, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipEntitlementCatalogItem*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x5457fb0, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x54580ac, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x545801c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x545a08c, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x5458d14, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::MothershipEntitlementCatalogItem*  value) ;

/// @brief Method InsertRange, addr 0x5458eac, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::ListEntitlementResultsVector*  values) ;

static inline ::GlobalNamespace::ListEntitlementResultsVector* New_ctor() ;

static inline ::GlobalNamespace::ListEntitlementResultsVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>*  c) ;

static inline ::GlobalNamespace::ListEntitlementResultsVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::ListEntitlementResultsVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::ListEntitlementResultsVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::ListEntitlementResultsVector* New_ctor(::GlobalNamespace::ListEntitlementResultsVector*  other) ;

/// @brief Method RemoveAt, addr 0x5459040, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x54591a8, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x545a464, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x545939c, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x5459590, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::ListEntitlementResultsVector*  values) ;

/// @brief Method ToArray, addr 0x5459ef8, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MothershipEntitlementCatalogItem*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5458544, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5458700, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>*  c) ;

/// @brief Method .ctor, addr 0x54581f8, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x5457dec, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x545a29c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x545a0e4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ListEntitlementResultsVector*  other) ;

/// @brief Method _insert, addr 0x5458dac, size 0x100, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::MothershipEntitlementCatalogItem*  x) ;

/// @brief Method _insertRange, addr 0x5458f44, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::ListEntitlementResultsVector*  values) ;

/// @brief Method _removeAt, addr 0x54590d0, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x54592bc, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x54594b0, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x5459658, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::ListEntitlementResultsVector*  values) ;

/// @brief Method capacity, addr 0x5459758, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x5459a58, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x5457ca4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListEntitlementResultsVector*  obj) ;

/// @brief Method get_Capacity, addr 0x5459754, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x5458a78, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x5459a54, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x54589ec, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x54589f4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x5459b2c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x54589fc, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x5458a7c, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x5459de4, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<MothershipEntitlementCatalogItem>.GetEnumerator, addr 0x5459f78, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>* global::System_Collections_Generic_IEnumerable_MothershipEntitlementCatalogItem__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x545a034, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipEntitlementCatalogItem__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x545997c, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x545982c, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x5458b90, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::MothershipEntitlementCatalogItem*  value) ;

/// @brief Method setitem, addr 0x5458c14, size 0x100, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::MothershipEntitlementCatalogItem*  val) ;

/// @brief Method size, addr 0x54598a8, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x5457f18, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListEntitlementResultsVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListEntitlementResultsVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListEntitlementResultsVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListEntitlementResultsVector(ListEntitlementResultsVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListEntitlementResultsVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListEntitlementResultsVector(ListEntitlementResultsVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9178};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListEntitlementResultsVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListEntitlementResultsVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListEntitlementResultsVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListEntitlementResultsVector/ListEntitlementResultsVectorEnumerator
class CORDL_TYPE ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MothershipEntitlementCatalogItem*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::ListEntitlementResultsVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x545a75c, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x545a64c, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator* New_ctor(::GlobalNamespace::ListEntitlementResultsVector*  collection) ;

/// @brief Method Reset, addr 0x545a6c4, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::ListEntitlementResultsVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::ListEntitlementResultsVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::ListEntitlementResultsVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x5459fd0, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ListEntitlementResultsVector*  collection) ;

/// @brief Method get_Current, addr 0x545a52c, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x545a648, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipEntitlementCatalogItem*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipEntitlementCatalogItem__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator(ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator(ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9177};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ListEntitlementResultsVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListEntitlementResultsVector_ListEntitlementResultsVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
