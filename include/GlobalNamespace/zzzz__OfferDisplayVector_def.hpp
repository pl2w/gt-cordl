#pragma once
// IWYU pragma private; include "GlobalNamespace/OfferDisplayVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OfferDisplayVector)
namespace GlobalNamespace {
class OfferDisplayVector_OfferDisplayVectorEnumerator;
}
namespace GlobalNamespace {
class OfferDisplay;
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
class OfferDisplayVector;
}
namespace GlobalNamespace {
class OfferDisplayVector_OfferDisplayVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OfferDisplayVector*);
MARK_REF_T(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OfferDisplayVector*, "", "OfferDisplayVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator*, "", "OfferDisplayVector/OfferDisplayVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: OfferDisplayVector
class CORDL_TYPE OfferDisplayVector : public ::System::Object {
public:
// Declarations
using OfferDisplayVectorEnumerator = ::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::OfferDisplay*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OfferDisplay*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OfferDisplay*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x52e7988, size 0x110, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::OfferDisplay*  x) ;

/// @brief Method AddRange, addr 0x52e9748, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::OfferDisplayVector*  values) ;

/// @brief Method Clear, addr 0x52e95a4, size 0xc8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x52e8f08, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::OfferDisplay*>  array) ;

/// @brief Method CopyTo, addr 0x52e9180, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::OfferDisplay*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x52e8f3c, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::OfferDisplay*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x52e7328, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52e7424, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52e7394, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x52e945c, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x52e80c8, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::OfferDisplay*  value) ;

/// @brief Method InsertRange, addr 0x52e8280, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::OfferDisplayVector*  values) ;

static inline ::GlobalNamespace::OfferDisplayVector* New_ctor() ;

static inline ::GlobalNamespace::OfferDisplayVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OfferDisplay*>*  c) ;

static inline ::GlobalNamespace::OfferDisplayVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::OfferDisplayVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::OfferDisplayVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::OfferDisplayVector* New_ctor(::GlobalNamespace::OfferDisplayVector*  other) ;

/// @brief Method RemoveAt, addr 0x52e8414, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x52e857c, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x52e9834, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x52e8770, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x52e8964, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::OfferDisplayVector*  values) ;

/// @brief Method ToArray, addr 0x52e92c8, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OfferDisplay*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52e78bc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52e7a98, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OfferDisplay*>*  c) ;

/// @brief Method .ctor, addr 0x52e7570, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x52e71f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x52e966c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x52e94b4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OfferDisplayVector*  other) ;

/// @brief Method _insert, addr 0x52e8160, size 0x120, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::OfferDisplay*  x) ;

/// @brief Method _insertRange, addr 0x52e8318, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::OfferDisplayVector*  values) ;

/// @brief Method _removeAt, addr 0x52e84a4, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x52e8690, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x52e8884, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x52e8a2c, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::OfferDisplayVector*  values) ;

/// @brief Method capacity, addr 0x52e8b2c, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x52e8e2c, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x52e7250, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::OfferDisplayVector*  obj) ;

/// @brief Method get_Capacity, addr 0x52e8b28, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x52e7e10, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x52e8e28, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x52e7d84, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x52e7d8c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x52e8f00, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x52e7d94, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferDisplay* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x52e7e14, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferDisplay* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x52e91b8, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferDisplay* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<OfferDisplay>.GetEnumerator, addr 0x52e9348, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::OfferDisplay*>* global::System_Collections_Generic_IEnumerable_OfferDisplay__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x52e9404, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OfferDisplay*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OfferDisplay*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__OfferDisplay__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x52e8d50, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x52e8c00, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x52e7f24, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::OfferDisplay*  value) ;

/// @brief Method setitem, addr 0x52e7fa8, size 0x120, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::OfferDisplay*  val) ;

/// @brief Method size, addr 0x52e8c7c, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x52e7290, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::OfferDisplayVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OfferDisplayVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OfferDisplayVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OfferDisplayVector(OfferDisplayVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OfferDisplayVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OfferDisplayVector(OfferDisplayVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9412};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OfferDisplayVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferDisplayVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OfferDisplayVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OfferDisplayVector/OfferDisplayVectorEnumerator
class CORDL_TYPE OfferDisplayVector_OfferDisplayVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::OfferDisplay*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::OfferDisplayVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::OfferDisplay*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::OfferDisplay*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52e9b2c, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x52e9a1c, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator* New_ctor(::GlobalNamespace::OfferDisplayVector*  collection) ;

/// @brief Method Reset, addr 0x52e9a94, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::OfferDisplayVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::OfferDisplayVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::OfferDisplayVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x52e93a0, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OfferDisplayVector*  collection) ;

/// @brief Method get_Current, addr 0x52e98fc, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::OfferDisplay* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x52e9a18, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::OfferDisplay*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::OfferDisplay*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__OfferDisplay__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OfferDisplayVector_OfferDisplayVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OfferDisplayVector_OfferDisplayVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OfferDisplayVector_OfferDisplayVectorEnumerator(OfferDisplayVector_OfferDisplayVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OfferDisplayVector_OfferDisplayVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OfferDisplayVector_OfferDisplayVectorEnumerator(OfferDisplayVector_OfferDisplayVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9411};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::OfferDisplayVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OfferDisplayVector_OfferDisplayVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
