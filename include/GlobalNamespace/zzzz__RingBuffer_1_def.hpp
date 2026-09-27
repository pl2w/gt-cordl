#pragma once
// IWYU pragma private; include "GlobalNamespace/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class RingBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::RingBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::RingBuffer_1, "", "RingBuffer`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: RingBuffer`1<T>
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Field _capacity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__capacity, put=__cordl_internal_set__capacity)) int32_t  _capacity;

/// @brief Field _head, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) int32_t  _head;

/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::ArrayW<T>  _items;

/// @brief Field _size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Field _tail, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tail, put=__cordl_internal_set__tail)) int32_t  _tail;

/// @brief Method AsSegment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<T> AsSegment() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::RingBuffer_1<T>* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::RingBuffer_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method PeekFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> PeekFirst() ;

/// @brief Method PeekLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> PeekLast() ;

/// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Pop() ;

/// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Push(T  item) ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(int32_t  i, ::by_ref<T>  item) ;

/// @brief Method TryPop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryPop(::by_ref<T>  item) ;

constexpr int32_t const& __cordl_internal_get__capacity() const;

constexpr int32_t& __cordl_internal_get__capacity() ;

constexpr int32_t const& __cordl_internal_get__head() const;

constexpr int32_t& __cordl_internal_get__head() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__items() const;

constexpr ::ArrayW<T>& __cordl_internal_get__items() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr int32_t const& __cordl_internal_get__tail() const;

constexpr int32_t& __cordl_internal_get__tail() ;

constexpr void __cordl_internal_set__capacity(int32_t  value) ;

constexpr void __cordl_internal_set__head(int32_t  value) ;

constexpr void __cordl_internal_set__items(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

constexpr void __cordl_internal_set__tail(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsFull() ;

/// @brief Method get_Size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Size() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2838};

/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____items;

/// @brief Field _head, offset: 0x18, size: 0x4, def value: None
 int32_t  ____head;

/// @brief Field _tail, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____tail;

/// @brief Field _size, offset: 0x20, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _capacity, offset: 0x24, size: 0x4, def value: None
 int32_t  ____capacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
