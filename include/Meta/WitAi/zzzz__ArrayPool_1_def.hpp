#pragma once
// IWYU pragma private; include "Meta/WitAi/ArrayPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool_1)
namespace Meta::WitAi {
template<typename TElementType>
class ArrayPool_1___c__DisplayClass3_0;
}
// Forward declare root types
namespace Meta::WitAi {
template<typename TElementType>
class ArrayPool_1;
}
namespace Meta::WitAi {
template<typename TElementType>
class ArrayPool_1___c__DisplayClass3_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::ArrayPool_1);
MARK_GEN_REF_T_PTR(::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::ArrayPool_1, "Meta.WitAi", "ArrayPool`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0, "Meta.WitAi", "ArrayPool`1/<>c__DisplayClass3_0");
// Dependencies Meta.WitAi.ObjectPool`1<T>
namespace Meta::WitAi {
// cpp template
template<typename TElementType>
// Is value type: false
// CS Name: Meta.WitAi.ArrayPool`1<TElementType>
class CORDL_TYPE ArrayPool_1 : public ::Meta::WitAi::ObjectPool_1<::ArrayW<TElementType>> {
public:
// Declarations
using __c__DisplayClass3_0 = ::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>;

/// @brief Field <Capacity>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

static inline ::Meta::WitAi::ArrayPool_1<TElementType>* New_ctor(int32_t  capacity, int32_t  preload) ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, int32_t  preload) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1(ArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1(ArrayPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30978};

/// [CompilerGenerated]
/// @brief Field <Capacity>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// cpp template
template<typename TElementType>
// Is value type: false
// CS Name: Meta.WitAi.ArrayPool`1/<>c__DisplayClass3_0<TElementType>
class CORDL_TYPE ArrayPool_1___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field capacity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_capacity, put=__cordl_internal_set_capacity)) int32_t  capacity;

static inline ::Meta::WitAi::ArrayPool_1___c__DisplayClass3_0<TElementType>* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_capacity() const;

constexpr int32_t& __cordl_internal_get_capacity() ;

constexpr void __cordl_internal_set_capacity(int32_t  value) ;

/// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<TElementType> __ctor_b__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPool_1___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool_1___c__DisplayClass3_0(ArrayPool_1___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool_1___c__DisplayClass3_0(ArrayPool_1___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30977};

/// @brief Field capacity, offset: 0x10, size: 0x4, def value: None
 int32_t  ___capacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
