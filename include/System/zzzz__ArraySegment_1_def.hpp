#pragma once
// IWYU pragma private; include "System/ArraySegment_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySegment_1)
namespace GlobalNamespace {
template<typename T>
struct ArraySegment_1_Enumerator;
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
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::ArraySegment_1);
DEFINE_IL2CPP_GEN_CLASS(::System::ArraySegment_1, "System", "ArraySegment`1");
// [DefaultMember("Item")]
// [IsReadOnly]
// Dependencies 
namespace System {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.ArraySegment`1<T>
struct CORDL_TYPE ArraySegment_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::ArraySegment_1_Enumerator<T>;

 __declspec(property(get=get_Array)) ::ArrayW<T>  Array;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Offset)) int32_t  Offset;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_Generic_IList_T__get_Item, put=System_Collections_Generic_IList_T__set_Item)) T  System_Collections_Generic_IList_T__Item[];

 __declspec(property(get=System_Collections_Generic_IReadOnlyList_T__get_Item)) T  System_Collections_Generic_IReadOnlyList_T__Item[];

/// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__Empty_k__BackingField, put=setStaticF__Empty_k__BackingField)) ::System::ArraySegment_1<T>  _Empty_k__BackingField;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<T>  destination, int32_t  destinationIndex) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Equals(::System::ArraySegment_1<T>  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::ArraySegment_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_T__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<T>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_T__Contains(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_T__Remove(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IList<T>.IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IList_T__IndexOf(T  item) ;

/// @brief Method System.Collections.Generic.IList<T>.Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_T__Insert(int32_t  index, T  item) ;

/// @brief Method System.Collections.Generic.IList<T>.RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_T__RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<T>.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<T>.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_T__set_Item(int32_t  index, T  value) ;

/// @brief Method System.Collections.Generic.IReadOnlyList<T>.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IReadOnlyList_T__get_Item(int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowInvalidOperationIfDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ThrowInvalidOperationIfDefault() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  array) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  array, int32_t  offset, int32_t  count) ;

static inline ::System::ArraySegment_1<T> getStaticF__Empty_k__BackingField() ;

/// @brief Method get_Array, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> get_Array() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<T> get_Empty() ;

/// @brief Method get_Offset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Offset() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
constexpr ::System::Collections::Generic::IList_1<T>* i___System__Collections__Generic__IList_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<T> op_Implicit___System__ArraySegment_1_T_(::ArrayW<T>  array) ;

static inline void setStaticF__Empty_k__BackingField(::System::ArraySegment_1<T>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArraySegment_1() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ArraySegment_1(::ArrayW<T>  _array, int32_t  _offset, int32_t  _count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _array, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<T>  _array;

/// @brief Field _offset, offset: 0x8, size: 0x4, def value: None
 int32_t  _offset;

/// @brief Field _count, offset: 0xc, size: 0x4, def value: None
 int32_t  _count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
