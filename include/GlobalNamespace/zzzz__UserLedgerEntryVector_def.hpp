#pragma once
// IWYU pragma private; include "GlobalNamespace/UserLedgerEntryVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserLedgerEntryVector)
namespace GlobalNamespace {
class MothershipUserLedgerEntry;
}
namespace GlobalNamespace {
class UserLedgerEntryVector_UserLedgerEntryVectorEnumerator;
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
class UserLedgerEntryVector;
}
namespace GlobalNamespace {
class UserLedgerEntryVector_UserLedgerEntryVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UserLedgerEntryVector*);
MARK_REF_T(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserLedgerEntryVector*, "", "UserLedgerEntryVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator*, "", "UserLedgerEntryVector/UserLedgerEntryVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UserLedgerEntryVector
class CORDL_TYPE UserLedgerEntryVector : public ::System::Object {
public:
// Declarations
using UserLedgerEntryVectorEnumerator = ::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MothershipUserLedgerEntry*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipUserLedgerEntry*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipUserLedgerEntry*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x53b052c, size 0xf0, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::MothershipUserLedgerEntry*  x) ;

/// @brief Method AddRange, addr 0x53b2294, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::UserLedgerEntryVector*  values) ;

/// @brief Method Clear, addr 0x53b20f0, size 0xc8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x53b1a50, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipUserLedgerEntry*>  array) ;

/// @brief Method CopyTo, addr 0x53b1cc8, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipUserLedgerEntry*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x53b1a84, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipUserLedgerEntry*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x53afecc, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x53affc8, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x53aff38, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x53b1fa8, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x53b0c30, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::MothershipUserLedgerEntry*  value) ;

/// @brief Method InsertRange, addr 0x53b0dc8, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::UserLedgerEntryVector*  values) ;

static inline ::GlobalNamespace::UserLedgerEntryVector* New_ctor() ;

static inline ::GlobalNamespace::UserLedgerEntryVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipUserLedgerEntry*>*  c) ;

static inline ::GlobalNamespace::UserLedgerEntryVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::UserLedgerEntryVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::UserLedgerEntryVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::UserLedgerEntryVector* New_ctor(::GlobalNamespace::UserLedgerEntryVector*  other) ;

/// @brief Method RemoveAt, addr 0x53b0f5c, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x53b10c4, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x53b2380, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x53b12b8, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x53b14ac, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::UserLedgerEntryVector*  values) ;

/// @brief Method ToArray, addr 0x53b1e14, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MothershipUserLedgerEntry*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53b0460, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53b061c, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipUserLedgerEntry*>*  c) ;

/// @brief Method .ctor, addr 0x53b0114, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x53afd94, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x53b21b8, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x53b2000, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::UserLedgerEntryVector*  other) ;

/// @brief Method _insert, addr 0x53b0cc8, size 0x100, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::MothershipUserLedgerEntry*  x) ;

/// @brief Method _insertRange, addr 0x53b0e60, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::UserLedgerEntryVector*  values) ;

/// @brief Method _removeAt, addr 0x53b0fec, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x53b11d8, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x53b13cc, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x53b1574, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::UserLedgerEntryVector*  values) ;

/// @brief Method capacity, addr 0x53b1674, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x53b1974, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x53afdf4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UserLedgerEntryVector*  obj) ;

/// @brief Method get_Capacity, addr 0x53b1670, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x53b0994, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x53b1970, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x53b0908, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x53b0910, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x53b1a48, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x53b0918, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipUserLedgerEntry* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x53b0998, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipUserLedgerEntry* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x53b1d00, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipUserLedgerEntry* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<MothershipUserLedgerEntry>.GetEnumerator, addr 0x53b1e94, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipUserLedgerEntry*>* global::System_Collections_Generic_IEnumerable_MothershipUserLedgerEntry__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x53b1f50, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipUserLedgerEntry*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipUserLedgerEntry*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipUserLedgerEntry__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x53b1898, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x53b1748, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x53b0aac, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::MothershipUserLedgerEntry*  value) ;

/// @brief Method setitem, addr 0x53b0b30, size 0x100, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::MothershipUserLedgerEntry*  val) ;

/// @brief Method size, addr 0x53b17c4, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x53afe34, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UserLedgerEntryVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserLedgerEntryVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserLedgerEntryVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserLedgerEntryVector(UserLedgerEntryVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserLedgerEntryVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserLedgerEntryVector(UserLedgerEntryVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9731};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserLedgerEntryVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserLedgerEntryVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserLedgerEntryVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UserLedgerEntryVector/UserLedgerEntryVectorEnumerator
class CORDL_TYPE UserLedgerEntryVector_UserLedgerEntryVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MothershipUserLedgerEntry*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::UserLedgerEntryVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipUserLedgerEntry*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipUserLedgerEntry*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x53b2678, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x53b2568, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator* New_ctor(::GlobalNamespace::UserLedgerEntryVector*  collection) ;

/// @brief Method Reset, addr 0x53b25e0, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::UserLedgerEntryVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::UserLedgerEntryVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::UserLedgerEntryVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x53b1eec, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::UserLedgerEntryVector*  collection) ;

/// @brief Method get_Current, addr 0x53b2448, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MothershipUserLedgerEntry* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x53b2564, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipUserLedgerEntry*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipUserLedgerEntry*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipUserLedgerEntry__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserLedgerEntryVector_UserLedgerEntryVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserLedgerEntryVector_UserLedgerEntryVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserLedgerEntryVector_UserLedgerEntryVectorEnumerator(UserLedgerEntryVector_UserLedgerEntryVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserLedgerEntryVector_UserLedgerEntryVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserLedgerEntryVector_UserLedgerEntryVectorEnumerator(UserLedgerEntryVector_UserLedgerEntryVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9730};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::UserLedgerEntryVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserLedgerEntryVector_UserLedgerEntryVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
