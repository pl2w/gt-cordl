#pragma once
// IWYU pragma private; include "GlobalNamespace/AccountAssociationVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccountAssociationVector)
namespace GlobalNamespace {
class AccountAssociationVector_AccountAssociationVectorEnumerator;
}
namespace GlobalNamespace {
class MothershipAccountAssociation;
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
class AccountAssociationVector;
}
namespace GlobalNamespace {
class AccountAssociationVector_AccountAssociationVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AccountAssociationVector*);
MARK_REF_T(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AccountAssociationVector*, "", "AccountAssociationVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator*, "", "AccountAssociationVector/AccountAssociationVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: AccountAssociationVector
class CORDL_TYPE AccountAssociationVector : public ::System::Object {
public:
// Declarations
using AccountAssociationVectorEnumerator = ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MothershipAccountAssociation*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x52555fc, size 0x114, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::MothershipAccountAssociation*  x) ;

/// @brief Method AddRange, addr 0x52573d0, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::AccountAssociationVector*  values) ;

/// @brief Method Clear, addr 0x525722c, size 0xc8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x5256b8c, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>  array) ;

/// @brief Method CopyTo, addr 0x5256e04, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x5256bc0, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipAccountAssociation*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x5254f9c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5255098, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5255008, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x52570e4, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x5255d48, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  value) ;

/// @brief Method InsertRange, addr 0x5255f04, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values) ;

static inline ::GlobalNamespace::AccountAssociationVector* New_ctor() ;

static inline ::GlobalNamespace::AccountAssociationVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*  c) ;

static inline ::GlobalNamespace::AccountAssociationVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::AccountAssociationVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::AccountAssociationVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::AccountAssociationVector* New_ctor(::GlobalNamespace::AccountAssociationVector*  other) ;

/// @brief Method RemoveAt, addr 0x5256098, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x5256200, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x52574bc, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x52563f4, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x52565e8, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values) ;

/// @brief Method ToArray, addr 0x5256f50, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MothershipAccountAssociation*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5255530, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5255710, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>*  c) ;

/// @brief Method .ctor, addr 0x52551e4, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x5254e64, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x52572f4, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x525713c, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AccountAssociationVector*  other) ;

/// @brief Method _insert, addr 0x5255de0, size 0x124, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  x) ;

/// @brief Method _insertRange, addr 0x5255f9c, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values) ;

/// @brief Method _removeAt, addr 0x5256128, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x5256314, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x5256508, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x52566b0, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::AccountAssociationVector*  values) ;

/// @brief Method capacity, addr 0x52567b0, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x5256ab0, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x5254ec4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AccountAssociationVector*  obj) ;

/// @brief Method get_Capacity, addr 0x52567ac, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x5255a88, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x5256aac, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x52559fc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x5255a04, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x5256b84, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x5255a0c, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipAccountAssociation* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x5255a8c, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipAccountAssociation* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x5256e3c, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipAccountAssociation* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<MothershipAccountAssociation>.GetEnumerator, addr 0x5256fd0, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>* global::System_Collections_Generic_IEnumerable_MothershipAccountAssociation__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x525708c, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipAccountAssociation*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipAccountAssociation__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x52569d4, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x5256884, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x5255ba0, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  value) ;

/// @brief Method setitem, addr 0x5255c24, size 0x124, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::MothershipAccountAssociation*  val) ;

/// @brief Method size, addr 0x5256900, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x5254f04, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AccountAssociationVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccountAssociationVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccountAssociationVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccountAssociationVector(AccountAssociationVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccountAssociationVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccountAssociationVector(AccountAssociationVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8768};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AccountAssociationVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountAssociationVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AccountAssociationVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AccountAssociationVector/AccountAssociationVectorEnumerator
class CORDL_TYPE AccountAssociationVector_AccountAssociationVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MothershipAccountAssociation*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::AccountAssociationVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52577b4, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x52576a4, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator* New_ctor(::GlobalNamespace::AccountAssociationVector*  collection) ;

/// @brief Method Reset, addr 0x525771c, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::AccountAssociationVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::AccountAssociationVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::AccountAssociationVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x5257028, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AccountAssociationVector*  collection) ;

/// @brief Method get_Current, addr 0x5257584, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MothershipAccountAssociation* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x52576a0, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipAccountAssociation*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipAccountAssociation__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccountAssociationVector_AccountAssociationVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccountAssociationVector_AccountAssociationVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccountAssociationVector_AccountAssociationVectorEnumerator(AccountAssociationVector_AccountAssociationVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccountAssociationVector_AccountAssociationVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccountAssociationVector_AccountAssociationVectorEnumerator(AccountAssociationVector_AccountAssociationVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8767};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::AccountAssociationVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AccountAssociationVector_AccountAssociationVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
