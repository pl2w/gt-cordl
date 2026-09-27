#pragma once
// IWYU pragma private; include "GlobalNamespace/MuteDataVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MuteDataVector)
namespace GlobalNamespace {
class MothershipMuteData;
}
namespace GlobalNamespace {
class MuteDataVector_MuteDataVectorEnumerator;
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
class MuteDataVector;
}
namespace GlobalNamespace {
class MuteDataVector_MuteDataVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MuteDataVector*);
MARK_REF_T(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MuteDataVector*, "", "MuteDataVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator*, "", "MuteDataVector/MuteDataVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MuteDataVector
class CORDL_TYPE MuteDataVector : public ::System::Object {
public:
// Declarations
using MuteDataVectorEnumerator = ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MothershipMuteData*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x52d5344, size 0xf0, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::MothershipMuteData*  x) ;

/// @brief Method AddRange, addr 0x52d70ac, size 0xec, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::MuteDataVector*  values) ;

/// @brief Method Clear, addr 0x52d6f08, size 0xc8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x52d6868, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipMuteData*>  array) ;

/// @brief Method CopyTo, addr 0x52d6ae0, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MothershipMuteData*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x52d689c, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MothershipMuteData*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x52d4ce4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52d4de0, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52d4d50, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x52d6dc0, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x52d5a48, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::MothershipMuteData*  value) ;

/// @brief Method InsertRange, addr 0x52d5be0, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values) ;

static inline ::GlobalNamespace::MuteDataVector* New_ctor() ;

static inline ::GlobalNamespace::MuteDataVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*  c) ;

static inline ::GlobalNamespace::MuteDataVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::MuteDataVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::MuteDataVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::MuteDataVector* New_ctor(::GlobalNamespace::MuteDataVector*  other) ;

/// @brief Method RemoveAt, addr 0x52d5d74, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x52d5edc, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x52d7198, size 0xc8, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x52d60d0, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x52d62c4, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values) ;

/// @brief Method ToArray, addr 0x52d6c2c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MothershipMuteData*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52d5278, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52d5434, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>*  c) ;

/// @brief Method .ctor, addr 0x52d4f2c, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x52d4924, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x52d6fd0, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x52d6e18, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MuteDataVector*  other) ;

/// @brief Method _insert, addr 0x52d5ae0, size 0x100, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::MothershipMuteData*  x) ;

/// @brief Method _insertRange, addr 0x52d5c78, size 0xfc, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values) ;

/// @brief Method _removeAt, addr 0x52d5e04, size 0xd8, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x52d5ff0, size 0xe0, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x52d61e4, size 0xe0, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x52d638c, size 0xfc, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::MuteDataVector*  values) ;

/// @brief Method capacity, addr 0x52d648c, size 0xd4, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x52d678c, size 0xd4, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x52d47dc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MuteDataVector*  obj) ;

/// @brief Method get_Capacity, addr 0x52d6488, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x52d57ac, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x52d6788, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x52d5720, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x52d5728, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x52d6860, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x52d5730, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipMuteData* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x52d57b0, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipMuteData* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x52d6b18, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipMuteData* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<MothershipMuteData>.GetEnumerator, addr 0x52d6cac, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>* global::System_Collections_Generic_IEnumerable_MothershipMuteData__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x52d6d68, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MothershipMuteData*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MothershipMuteData__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x52d66b0, size 0xd8, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x52d6560, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x52d58c4, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::MothershipMuteData*  value) ;

/// @brief Method setitem, addr 0x52d5948, size 0x100, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::MothershipMuteData*  val) ;

/// @brief Method size, addr 0x52d65dc, size 0xd4, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x52d4c4c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MuteDataVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MuteDataVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MuteDataVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MuteDataVector(MuteDataVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MuteDataVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MuteDataVector(MuteDataVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9392};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MuteDataVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MuteDataVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MuteDataVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MuteDataVector/MuteDataVectorEnumerator
class CORDL_TYPE MuteDataVector_MuteDataVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MothershipMuteData*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::MuteDataVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52d7490, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x52d7380, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator* New_ctor(::GlobalNamespace::MuteDataVector*  collection) ;

/// @brief Method Reset, addr 0x52d73f8, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::MuteDataVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::MuteDataVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::MuteDataVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x52d6d04, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MuteDataVector*  collection) ;

/// @brief Method get_Current, addr 0x52d7260, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MothershipMuteData* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x52d737c, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MothershipMuteData*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MothershipMuteData__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MuteDataVector_MuteDataVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MuteDataVector_MuteDataVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MuteDataVector_MuteDataVectorEnumerator(MuteDataVector_MuteDataVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MuteDataVector_MuteDataVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MuteDataVector_MuteDataVectorEnumerator(MuteDataVector_MuteDataVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9391};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MuteDataVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MuteDataVector_MuteDataVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
