#pragma once
// IWYU pragma private; include "Fusion/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
namespace Fusion {
template<typename T>
class RingBuffer_1__GetEnumerator_d__29;
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
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
template<typename T>
class RingBuffer_1;
}
namespace Fusion {
template<typename T>
class RingBuffer_1__GetEnumerator_d__29;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::RingBuffer_1);
MARK_GEN_REF_T_PTR(::Fusion::RingBuffer_1__GetEnumerator_d__29);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::RingBuffer_1, "Fusion", "RingBuffer`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::RingBuffer_1__GetEnumerator_d__29, "Fusion", "RingBuffer`1/<GetEnumerator>d__29");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.RingBuffer`1<T>
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__29 = ::Fusion::RingBuffer_1__GetEnumerator_d__29<T>;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<T>  _buffer;

/// @brief Field _count, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _front, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__front, put=__cordl_internal_set__front)) int32_t  _front;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Back, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> Back() ;

/// @brief Method BackIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t BackIndex() ;

/// @brief Method BackMut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> BackMut() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Decrement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Decrement(int32_t  index) ;

/// @brief Method Front, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> Front() ;

/// @brief Method FrontIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FrontIndex() ;

/// @brief Method FrontMut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> FrontMut() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> Get(int32_t  index) ;

/// [IteratorStateMachine(typeof(Fusion.RingBuffer`1::<GetEnumerator>d__29<T>))]
/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method GetMut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> GetMut(int32_t  index) ;

/// @brief Method Increment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Increment(int32_t  index) ;

/// @brief Method InternalIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t InternalIndex(int32_t  index) ;

static inline ::Fusion::RingBuffer_1<T>* New_ctor(int32_t  capacity) ;

static inline ::Fusion::RingBuffer_1<T>* New_ctor(int32_t  capacity, ::ArrayW<T>  items) ;

/// @brief Method PopBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T PopBack() ;

/// @brief Method PopFront, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T PopFront() ;

/// @brief Method PushBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PushBack(T  item) ;

/// @brief Method PushFront, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PushFront(T  item) ;

/// @brief Method SpanOne, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<T> SpanOne() ;

/// @brief Method SpanTwo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<T> SpanTwo() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowIfEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ThrowIfEmpty(::StringW  message) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> ToArray() ;

/// @brief Method ToArraySegments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>* ToArraySegments() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr int32_t const& __cordl_internal_get__front() const;

constexpr int32_t& __cordl_internal_get__front() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__front(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::ArrayW<T>  items) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsFull() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19095};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____buffer;

/// @brief Field _front, offset: 0x18, size: 0x4, def value: None
 int32_t  ____front;

/// @brief Field _count, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.ArraySegment`1<T>, System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.RingBuffer`1/<GetEnumerator>d__29<T>
class CORDL_TYPE RingBuffer_1__GetEnumerator_d__29 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Fusion::RingBuffer_1<T>*  __4__this;

/// @brief Field <>s__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>*  __s__2;

/// @brief Field <i>5__4, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__4, put=__cordl_internal_set__i_5__4)) int32_t  _i_5__4;

/// @brief Field <segment>5__3, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__segment_5__3, put=__cordl_internal_set__segment_5__3)) ::System::ArraySegment_1<T>  _segment_5__3;

/// @brief Field <segments>5__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__segments_5__1, put=__cordl_internal_set__segments_5__1)) ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*  _segments_5__1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::RingBuffer_1__GetEnumerator_d__29<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr T const& __cordl_internal_get___2__current() const;

constexpr T& __cordl_internal_get___2__current() ;

constexpr ::Fusion::RingBuffer_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::Fusion::RingBuffer_1<T>*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>* const& __cordl_internal_get___s__2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>*& __cordl_internal_get___s__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__4() const;

constexpr int32_t& __cordl_internal_get__i_5__4() ;

constexpr ::System::ArraySegment_1<T> const& __cordl_internal_get__segment_5__3() const;

constexpr ::System::ArraySegment_1<T>& __cordl_internal_get__segment_5__3() ;

constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>* const& __cordl_internal_get__segments_5__1() const;

constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*& __cordl_internal_get__segments_5__1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___4__this(::Fusion::RingBuffer_1<T>*  value) ;

constexpr void __cordl_internal_set___s__2(::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>*  value) ;

constexpr void __cordl_internal_set__i_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__segment_5__3(::System::ArraySegment_1<T>  value) ;

constexpr void __cordl_internal_set__segments_5__1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1__GetEnumerator_d__29() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1__GetEnumerator_d__29", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1__GetEnumerator_d__29(RingBuffer_1__GetEnumerator_d__29 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1__GetEnumerator_d__29", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1__GetEnumerator_d__29(RingBuffer_1__GetEnumerator_d__29 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19094};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Fusion::RingBuffer_1<T>*  _____4__this;

/// @brief Field <segments>5__1, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*  ____segments_5__1;

/// @brief Field <>s__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>*  _____s__2;

/// @brief Field <segment>5__3, offset: 0x38, size: 0x10, def value: None
 ::System::ArraySegment_1<T>  ____segment_5__3;

/// @brief Field <i>5__4, offset: 0x48, size: 0x4, def value: None
 int32_t  ____i_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
