#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicArray_1)
namespace GlobalNamespace {
template<typename T>
struct DynamicArray_1_Iterator;
}
namespace GlobalNamespace {
template<typename T>
struct DynamicArray_1_RangeEnumerable;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine::Rendering {
template<typename T>
class DynamicArray_1_SortComparer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template<typename T>
class DynamicArray_1;
}
namespace UnityEngine::Rendering {
template<typename T>
class DynamicArray_1_SortComparer;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::DynamicArray_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::DynamicArray_1_SortComparer);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::DynamicArray_1, "UnityEngine.Rendering", "DynamicArray`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::DynamicArray_1_SortComparer, "UnityEngine.Rendering", "DynamicArray`1/SortComparer");
// [DefaultMember("Item")]
// [DebuggerDisplay("Size = {size} Capacity = {capacity}")]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicArray`1<T>
class CORDL_TYPE DynamicArray_1 : public ::System::Object {
public:
// Declarations
using Iterator = ::GlobalNamespace::DynamicArray_1_Iterator<T>;

using RangeEnumerable = ::GlobalNamespace::DynamicArray_1_RangeEnumerable<T>;

using SortComparer = ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Field <size>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__size_k__BackingField, put=__cordl_internal_set__size_k__BackingField)) int32_t  _size_k__BackingField;

 __declspec(property(get=get_capacity)) int32_t  capacity;

/// @brief Field m_Array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Array, put=__cordl_internal_set_m_Array)) ::ArrayW<T>  m_Array;

 __declspec(property(get=get_size, put=set_size)) int32_t  size;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Add(/* [IsReadOnly] */ ::by_ref<T>  value) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(::UnityEngine::Rendering::DynamicArray_1<T>*  array) ;

/// @brief Method BumpVersion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BumpVersion() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(::System::Predicate_1<T>*  match) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(int32_t  startIndex, int32_t  count, ::System::Predicate_1<T>*  match) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::DynamicArray_1_Iterator<T> GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, int32_t  index) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item, int32_t  index, int32_t  count) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Insert(int32_t  index, T  item) ;

static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor() ;

static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(int32_t  capacity, bool  resize) ;

static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(::UnityEngine::Rendering::DynamicArray_1<T>*  deepCopy) ;

static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(int32_t  size) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(T  item) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reserve(int32_t  newCapacity, bool  keepContent) ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  newSize, bool  keepContent) ;

/// @brief Method ResizeAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResizeAndClear(int32_t  newSize) ;

/// @brief Method SubRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::DynamicArray_1_RangeEnumerable<T> SubRange(int32_t  first, int32_t  numItems) ;

constexpr int32_t const& __cordl_internal_get__size_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__size_k__BackingField() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_m_Array() const;

constexpr ::ArrayW<T>& __cordl_internal_get_m_Array() ;

constexpr void __cordl_internal_set__size_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_Array(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, bool  resize) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::DynamicArray_1<T>*  deepCopy) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Item(int32_t  index) ;

/// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// [CompilerGenerated]
/// @brief Method get_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_size() ;

/// [Obsolete("This is deprecated because it returns an incorrect value. It may returns an array with elements beyond the size. Please use Span/ReadOnly if you want safe raw access to the DynamicArray memory.", false)]
/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<T> op_Implicit___ArrayW_T_(::UnityEngine::Rendering::DynamicArray_1<T>*  array) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(::UnityEngine::Rendering::DynamicArray_1<T>*  array) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Span_1<T> op_Implicit___System__Span_1_T_(::UnityEngine::Rendering::DynamicArray_1<T>*  array) ;

/// [CompilerGenerated]
/// @brief Method set_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_size(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicArray_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicArray_1(DynamicArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicArray_1(DynamicArray_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16620};

/// @brief Field m_Array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___m_Array;

/// [CompilerGenerated]
/// @brief Field <size>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____size_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicArray`1/SortComparer<T>
class CORDL_TYPE DynamicArray_1_SortComparer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  x, T  y, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Invoke(T  x, T  y) ;

static inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicArray_1_SortComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1_SortComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicArray_1_SortComparer(DynamicArray_1_SortComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1_SortComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicArray_1_SortComparer(DynamicArray_1_SortComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16619};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
