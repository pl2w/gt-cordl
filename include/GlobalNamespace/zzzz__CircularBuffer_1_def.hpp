#pragma once
// IWYU pragma private; include "GlobalNamespace/CircularBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CircularBuffer_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class CircularBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CircularBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CircularBuffer_1, "", "CircularBuffer`1");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: CircularBuffer`1<T>
class CORDL_TYPE CircularBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Field <Capacity>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

/// @brief Field <Count>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field backingArray, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_backingArray, put=__cordl_internal_set_backingArray)) ::ArrayW<T>  backingArray;

/// @brief Field lastWriteIdx, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWriteIdx, put=__cordl_internal_set_lastWriteIdx)) int32_t  lastWriteIdx;

/// @brief Field nextWriteIdx, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextWriteIdx, put=__cordl_internal_set_nextWriteIdx)) int32_t  nextWriteIdx;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Last, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Last() ;

static inline ::GlobalNamespace::CircularBuffer_1<T>* New_ctor(int32_t  capacity) ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_backingArray() const;

constexpr ::ArrayW<T>& __cordl_internal_get_backingArray() ;

constexpr int32_t const& __cordl_internal_get_lastWriteIdx() const;

constexpr int32_t& __cordl_internal_get_lastWriteIdx() ;

constexpr int32_t const& __cordl_internal_get_nextWriteIdx() const;

constexpr int32_t& __cordl_internal_get_nextWriteIdx() ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_backingArray(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_lastWriteIdx(int32_t  value) ;

constexpr void __cordl_internal_set_nextWriteIdx(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// [CompilerGenerated]
/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// [CompilerGenerated]
/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  logicalIdx) ;

/// [CompilerGenerated]
/// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CircularBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CircularBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CircularBuffer_1(CircularBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircularBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircularBuffer_1(CircularBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3479};

/// @brief Field backingArray, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___backingArray;

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Capacity>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

/// @brief Field nextWriteIdx, offset: 0x20, size: 0x4, def value: None
 int32_t  ___nextWriteIdx;

/// @brief Field lastWriteIdx, offset: 0x24, size: 0x4, def value: None
 int32_t  ___lastWriteIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
