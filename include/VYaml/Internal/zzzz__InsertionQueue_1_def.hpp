#pragma once
// IWYU pragma private; include "VYaml/Internal/InsertionQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InsertionQueue_1)
// Forward declare root types
namespace VYaml::Internal {
template<typename T>
class InsertionQueue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Internal::InsertionQueue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Internal::InsertionQueue_1, "VYaml.Internal", "InsertionQueue`1");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Internal.InsertionQueue`1<T>
class CORDL_TYPE InsertionQueue_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Field <Count>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field array, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::ArrayW<T>  array;

/// @brief Field headIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_headIndex, put=__cordl_internal_set_headIndex)) int32_t  headIndex;

/// @brief Field tailIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_tailIndex, put=__cordl_internal_set_tailIndex)) int32_t  tailIndex;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  item) ;

/// @brief Method Grow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Grow() ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Insert(int32_t  posTo, T  item) ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNext(::by_ref<int32_t>  index) ;

static inline ::VYaml::Internal::InsertionQueue_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek() ;

/// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method ThrowForEmptyQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ThrowForEmptyQueue() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_array() const;

constexpr ::ArrayW<T>& __cordl_internal_get_array() ;

constexpr int32_t const& __cordl_internal_get_headIndex() const;

constexpr int32_t& __cordl_internal_get_headIndex() ;

constexpr int32_t const& __cordl_internal_get_tailIndex() const;

constexpr int32_t& __cordl_internal_get_tailIndex() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_array(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_headIndex(int32_t  value) ;

constexpr void __cordl_internal_set_tailIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// [CompilerGenerated]
/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsertionQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsertionQueue_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsertionQueue_1(InsertionQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsertionQueue_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsertionQueue_1(InsertionQueue_1 const& ) = delete;

/// @brief Field GrowFactor offset 0xffffffff size 0x4
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field MinimumGrow offset 0xffffffff size 0x4
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29029};

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// @brief Field array, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___array;

/// @brief Field headIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___headIndex;

/// @brief Field tailIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___tailIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Internal
