#pragma once
// IWYU pragma private; include "GlobalNamespace/StringVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringVector)
namespace GlobalNamespace {
class StringVector_StringVectorEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class StringVector;
}
namespace GlobalNamespace {
class StringVector_StringVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StringVector*);
MARK_REF_T(::GlobalNamespace::StringVector_StringVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringVector*, "", "StringVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringVector_StringVectorEnumerator*, "", "StringVector/StringVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringVector
class CORDL_TYPE StringVector : public ::System::Object {
public:
// Declarations
using StringVectorEnumerator = ::GlobalNamespace::StringVector_StringVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IList_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x534954c, size 0xd8, virtual true, abstract: false, final true
inline void Add(::StringW  x) ;

/// @brief Method AddRange, addr 0x534b1fc, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::StringVector*  values) ;

/// @brief Method Clear, addr 0x534b058, size 0xc8, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x534b3b0, size 0xe4, virtual true, abstract: false, final true
inline bool Contains(::StringW  value) ;

/// @brief Method CopyTo, addr 0x534a9e8, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::StringW>  array) ;

/// @brief Method CopyTo, addr 0x534ac60, size 0x38, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::StringW>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x534aa1c, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::StringW>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x5348f0c, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5349010, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5348f7c, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x534af10, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector_StringVectorEnumerator* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x534b494, size 0xe4, virtual true, abstract: false, final true
inline int32_t IndexOf(::StringW  value) ;

/// @brief Method Insert, addr 0x5349be8, size 0x98, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::StringW  value) ;

/// @brief Method InsertRange, addr 0x5349d60, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::StringVector*  values) ;

/// @brief Method LastIndexOf, addr 0x534b578, size 0xe4, virtual false, abstract: false, final false
inline int32_t LastIndexOf(::StringW  value) ;

static inline ::GlobalNamespace::StringVector* New_ctor() ;

static inline ::GlobalNamespace::StringVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>*  c) ;

static inline ::GlobalNamespace::StringVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::StringVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::StringVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::StringVector* New_ctor(::GlobalNamespace::StringVector*  other) ;

/// @brief Method Remove, addr 0x534b65c, size 0xe4, virtual true, abstract: false, final true
inline bool Remove(::StringW  value) ;

/// @brief Method RemoveAt, addr 0x5349ef4, size 0x90, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x534a05c, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x534b2e8, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x534a250, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x534a444, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::StringVector*  values) ;

/// @brief Method ToArray, addr 0x534ad7c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5349480, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5349624, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>*  c) ;

/// @brief Method .ctor, addr 0x534915c, size 0x324, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x5335f1c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x534b120, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x534af68, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::StringVector*  other) ;

/// @brief Method _insert, addr 0x5349c80, size 0xe0, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::StringW  x) ;

/// @brief Method _insertRange, addr 0x5349df8, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::StringVector*  values) ;

/// @brief Method _removeAt, addr 0x5349f84, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x534a170, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x534a364, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x534a50c, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::StringVector*  values) ;

/// @brief Method capacity, addr 0x534a60c, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x534a90c, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x5335dd4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::StringVector*  obj) ;

/// @brief Method get_Capacity, addr 0x534a608, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x534999c, size 0x4, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x534a908, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x5349910, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x5349918, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x534a9e0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x5349920, size 0x7c, virtual true, abstract: false, final true
inline ::StringW get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x53499a0, size 0xe4, virtual false, abstract: false, final false
inline ::StringW getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x534ac98, size 0xe4, virtual false, abstract: false, final false
inline ::StringW getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x534adfc, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* global::System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x534aeb8, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* i___System__Collections__Generic__ICollection_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::StringW>"
constexpr ::System::Collections::Generic::IList_1<::StringW>* i___System__Collections__Generic__IList_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x534a830, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x534a6e0, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x5349a84, size 0x84, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::StringW  value) ;

/// @brief Method setitem, addr 0x5349b08, size 0xe0, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::StringW  val) ;

/// @brief Method size, addr 0x534a75c, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x5348e74, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::StringVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringVector(StringVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringVector(StringVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9570};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringVector/StringVectorEnumerator
class CORDL_TYPE StringVector_StringVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::StringW  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::StringVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x534b928, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x534b818, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::StringVector_StringVectorEnumerator* New_ctor(::GlobalNamespace::StringVector*  collection) ;

/// @brief Method Reset, addr 0x534b890, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::StringVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::StringVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::StringVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x534ae54, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::StringVector*  collection) ;

/// @brief Method get_Current, addr 0x534b740, size 0xd4, virtual true, abstract: false, final true
inline ::StringW get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x534b814, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringVector_StringVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringVector_StringVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringVector_StringVectorEnumerator(StringVector_StringVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringVector_StringVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringVector_StringVectorEnumerator(StringVector_StringVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9569};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::StringVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringVector_StringVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringVector_StringVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringVector_StringVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringVector_StringVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringVector_StringVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
