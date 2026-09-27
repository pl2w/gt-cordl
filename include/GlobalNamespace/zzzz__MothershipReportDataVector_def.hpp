#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipReportDataVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipReportDataVector)
namespace GlobalNamespace {
class MothershipReportDataVector_MothershipReportDataVectorEnumerator;
}
namespace GlobalNamespace {
class MothershipReportData;
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
class MothershipReportDataVector;
}
namespace GlobalNamespace {
class MothershipReportDataVector_MothershipReportDataVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipReportDataVector*);
MARK_REF_T(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipReportDataVector*, "", "MothershipReportDataVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator*, "", "MothershipReportDataVector/MothershipReportDataVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipReportDataVector
class CORDL_TYPE MothershipReportDataVector : public ::System::Object {
public:
// Declarations
using MothershipReportDataVectorEnumerator = ::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MothershipReportData*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipReportData*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipReportData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x52b79a8, size 0xec, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::MothershipReportData*  x) ;

/// @brief Method AddRange, addr 0x52b96fc, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::MothershipReportDataVector*  values) ;

/// @brief Method Clear, addr 0x52b9558, size 0xc8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x52b8ebc, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipReportData*>  array) ;

/// @brief Method CopyTo, addr 0x52b9134, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipReportData*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x52b8ef0, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipReportData*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x52b7348, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52b7444, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52b73b4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x52b9410, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x52b80a0, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::MothershipReportData*  value) ;

/// @brief Method InsertRange, addr 0x52b8234, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::MothershipReportDataVector*  values) ;

static inline ::GlobalNamespace::MothershipReportDataVector* New_ctor() ;

static inline ::GlobalNamespace::MothershipReportDataVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipReportData*>*  c) ;

static inline ::GlobalNamespace::MothershipReportDataVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::MothershipReportDataVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::MothershipReportDataVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::MothershipReportDataVector* New_ctor(::GlobalNamespace::MothershipReportDataVector*  other) ;

/// @brief Method RemoveAt, addr 0x52b83c8, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x52b8530, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x52b97e8, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x52b8724, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x52b8918, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::MothershipReportDataVector*  values) ;

/// @brief Method ToArray, addr 0x52b927c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MothershipReportData*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b78dc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b7a94, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipReportData*>*  c) ;

/// @brief Method .ctor, addr 0x52b7590, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x52b7210, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x52b9620, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x52b9468, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipReportDataVector*  other) ;

/// @brief Method _insert, addr 0x52b8138, size 0xfc, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::MothershipReportData*  x) ;

/// @brief Method _insertRange, addr 0x52b82cc, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::MothershipReportDataVector*  values) ;

/// @brief Method _removeAt, addr 0x52b8458, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x52b8644, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x52b8838, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x52b89e0, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::MothershipReportDataVector*  values) ;

/// @brief Method capacity, addr 0x52b8ae0, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x52b8de0, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x52b7270, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipReportDataVector*  obj) ;

/// @brief Method get_Capacity, addr 0x52b8adc, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x52b7e0c, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x52b8ddc, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x52b7d80, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x52b7d88, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x52b8eb4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x52b7d90, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipReportData* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x52b7e10, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipReportData* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x52b916c, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipReportData* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<MothershipReportData>.GetEnumerator, addr 0x52b92fc, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipReportData*>* global::System_Collections_Generic_IEnumerable_MothershipReportData__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x52b93b8, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipReportData*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipReportData*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipReportData__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x52b8d04, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x52b8bb4, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x52b7f20, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::MothershipReportData*  value) ;

/// @brief Method setitem, addr 0x52b7fa4, size 0xfc, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::MothershipReportData*  val) ;

/// @brief Method size, addr 0x52b8c30, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x52b72b0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipReportDataVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipReportDataVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipReportDataVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipReportDataVector(MothershipReportDataVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipReportDataVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipReportDataVector(MothershipReportDataVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9358};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipReportDataVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipReportDataVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipReportDataVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipReportDataVector/MothershipReportDataVectorEnumerator
class CORDL_TYPE MothershipReportDataVector_MothershipReportDataVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MothershipReportData*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::MothershipReportDataVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipReportData*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipReportData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52b9ae0, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x52b99d0, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator* New_ctor(::GlobalNamespace::MothershipReportDataVector*  collection) ;

/// @brief Method Reset, addr 0x52b9a48, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::MothershipReportDataVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::MothershipReportDataVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::MothershipReportDataVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x52b9354, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipReportDataVector*  collection) ;

/// @brief Method get_Current, addr 0x52b98b0, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MothershipReportData* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x52b99cc, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipReportData*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipReportData*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipReportData__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipReportDataVector_MothershipReportDataVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipReportDataVector_MothershipReportDataVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipReportDataVector_MothershipReportDataVectorEnumerator(MothershipReportDataVector_MothershipReportDataVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipReportDataVector_MothershipReportDataVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipReportDataVector_MothershipReportDataVectorEnumerator(MothershipReportDataVector_MothershipReportDataVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9357};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MothershipReportDataVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipReportDataVector_MothershipReportDataVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
