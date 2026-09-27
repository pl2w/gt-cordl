#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingPlayerVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingPlayerVector)
namespace GlobalNamespace {
class MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator;
}
namespace GlobalNamespace {
class MatchmakingPlayer;
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
class MatchmakingPlayerVector;
}
namespace GlobalNamespace {
class MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchmakingPlayerVector*);
MARK_REF_T(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchmakingPlayerVector*, "", "MatchmakingPlayerVector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator*, "", "MatchmakingPlayerVector/MatchmakingPlayerVectorEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchmakingPlayerVector
class CORDL_TYPE MatchmakingPlayerVector : public ::System::Object {
public:
// Declarations
using MatchmakingPlayerVectorEnumerator = ::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::MatchmakingPlayer*  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchmakingPlayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchmakingPlayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x55800c8, size 0xe4, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::MatchmakingPlayer*  x) ;

/// @brief Method AddRange, addr 0x5581d94, size 0xe4, virtual false, abstract: false, final false
inline void AddRange(::GlobalNamespace::MatchmakingPlayerVector*  values) ;

/// @brief Method Clear, addr 0x5581c00, size 0xc0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0x5581574, size 0x34, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MatchmakingPlayer*>  array) ;

/// @brief Method CopyTo, addr 0x55817ec, size 0x38, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::GlobalNamespace::MatchmakingPlayer*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x55815a8, size 0x244, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::GlobalNamespace::MatchmakingPlayer*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x557fa70, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x557fb6c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x557fadc, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x5581ac0, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0x55807a8, size 0x98, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::GlobalNamespace::MatchmakingPlayer*  value) ;

/// @brief Method InsertRange, addr 0x5580934, size 0x98, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::GlobalNamespace::MatchmakingPlayerVector*  values) ;

static inline ::GlobalNamespace::MatchmakingPlayerVector* New_ctor() ;

static inline ::GlobalNamespace::MatchmakingPlayerVector* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchmakingPlayer*>*  c) ;

static inline ::GlobalNamespace::MatchmakingPlayerVector* New_ctor(::System::Collections::IEnumerable*  c) ;

static inline ::GlobalNamespace::MatchmakingPlayerVector* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::MatchmakingPlayerVector* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::MatchmakingPlayerVector* New_ctor(::GlobalNamespace::MatchmakingPlayerVector*  other) ;

/// @brief Method RemoveAt, addr 0x5580ac0, size 0x90, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x5580c20, size 0x114, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reverse, addr 0x5581e78, size 0xc0, virtual false, abstract: false, final false
inline void Reverse() ;

/// @brief Method ReverseRange, addr 0x5580e0c, size 0x114, virtual false, abstract: false, final false
inline void ReverseRange(int32_t  index, int32_t  count) ;

/// @brief Method SetRange, addr 0x5580ff8, size 0xc8, virtual false, abstract: false, final false
inline void SetRange(int32_t  index, ::GlobalNamespace::MatchmakingPlayerVector*  values) ;

/// @brief Method ToArray, addr 0x558192c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::MatchmakingPlayer*> ToArray() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5580004, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x55801ac, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchmakingPlayer*>*  c) ;

/// @brief Method .ctor, addr 0x557fcb8, size 0x34c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x557f938, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x5581cc0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x5581b18, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MatchmakingPlayerVector*  other) ;

/// @brief Method _insert, addr 0x5580840, size 0xf4, virtual false, abstract: false, final false
inline void _insert(int32_t  index, ::GlobalNamespace::MatchmakingPlayer*  x) ;

/// @brief Method _insertRange, addr 0x55809cc, size 0xf4, virtual false, abstract: false, final false
inline void _insertRange(int32_t  index, ::GlobalNamespace::MatchmakingPlayerVector*  values) ;

/// @brief Method _removeAt, addr 0x5580b50, size 0xd0, virtual false, abstract: false, final false
inline void _removeAt(int32_t  index) ;

/// @brief Method _removeRange, addr 0x5580d34, size 0xd8, virtual false, abstract: false, final false
inline void _removeRange(int32_t  index, int32_t  count) ;

/// @brief Method _reverseRange, addr 0x5580f20, size 0xd8, virtual false, abstract: false, final false
inline void _reverseRange(int32_t  index, int32_t  count) ;

/// @brief Method _setRange, addr 0x55810c0, size 0xf4, virtual false, abstract: false, final false
inline void _setRange(int32_t  index, ::GlobalNamespace::MatchmakingPlayerVector*  values) ;

/// @brief Method capacity, addr 0x55811b8, size 0xcc, virtual false, abstract: false, final false
inline uint32_t capacity() ;

/// @brief Method empty, addr 0x55814a0, size 0xcc, virtual false, abstract: false, final false
inline bool empty() ;

/// @brief Method getCPtr, addr 0x557f998, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MatchmakingPlayerVector*  obj) ;

/// @brief Method get_Capacity, addr 0x55811b4, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x5580524, size 0x4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x558149c, size 0x4, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize, addr 0x5580498, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x55804a0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x558156c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x55804a8, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingPlayer* get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x5580528, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingPlayer* getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x5581824, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingPlayer* getitemcopy(int32_t  index) ;

/// @brief Method global::System.Collections.Generic.IEnumerable<MatchmakingPlayer>.GetEnumerator, addr 0x55819ac, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchmakingPlayer*>* global::System_Collections_Generic_IEnumerable_MatchmakingPlayer__GetEnumerator() ;

/// @brief Method global::System.Collections.IEnumerable.GetEnumerator, addr 0x5581a68, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* global::System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchmakingPlayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchmakingPlayer*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MatchmakingPlayer__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method reserve, addr 0x55813cc, size 0xd0, virtual false, abstract: false, final false
inline void reserve(uint32_t  n) ;

/// @brief Method set_Capacity, addr 0x5581284, size 0x7c, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Item, addr 0x5580630, size 0x84, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::MatchmakingPlayer*  value) ;

/// @brief Method setitem, addr 0x55806b4, size 0xf4, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::GlobalNamespace::MatchmakingPlayer*  val) ;

/// @brief Method size, addr 0x5581300, size 0xcc, virtual false, abstract: false, final false
inline uint32_t size() ;

/// @brief Method swigRelease, addr 0x557f9d8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MatchmakingPlayerVector*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingPlayerVector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerVector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingPlayerVector(MatchmakingPlayerVector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerVector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingPlayerVector(MatchmakingPlayerVector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9290};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchmakingPlayerVector, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingPlayerVector, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchmakingPlayerVector) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchmakingPlayerVector/MatchmakingPlayerVectorEnumerator
class CORDL_TYPE MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MatchmakingPlayer*  Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::GlobalNamespace::MatchmakingPlayerVector*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

 __declspec(property(get=global::System_Collections_IEnumerator_get_Current)) ::System::Object*  global::System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchmakingPlayer*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchmakingPlayer*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5582168, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x5582058, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator* New_ctor(::GlobalNamespace::MatchmakingPlayerVector*  collection) ;

/// @brief Method Reset, addr 0x55820d0, size 0x98, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::MatchmakingPlayerVector* const& __cordl_internal_get_collectionRef() const;

constexpr ::GlobalNamespace::MatchmakingPlayerVector*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::GlobalNamespace::MatchmakingPlayerVector*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x5581a04, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MatchmakingPlayerVector*  collection) ;

/// @brief Method get_Current, addr 0x5581f38, size 0x11c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MatchmakingPlayer* get_Current() ;

/// @brief Method global::System.Collections.IEnumerator.get_Current, addr 0x5582054, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* global::System_Collections_IEnumerator_get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchmakingPlayer*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchmakingPlayer*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MatchmakingPlayer__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator(MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator(MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9289};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::MatchmakingPlayerVector*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchmakingPlayerVector_MatchmakingPlayerVectorEnumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
