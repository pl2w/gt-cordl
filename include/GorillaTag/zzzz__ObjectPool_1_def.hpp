#pragma once
// IWYU pragma private; include "GorillaTag/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace GorillaTag {
template<typename T>
class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::ObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::ObjectPool_1, "GorillaTag", "ObjectPool`1");
// Dependencies System.Object
namespace GorillaTag {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field maxInstances, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxInstances, put=__cordl_internal_set_maxInstances)) int32_t  maxInstances;

/// @brief Field pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::System::Collections::Generic::Stack_1<T>*  pool;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T CreateInstance() ;

/// @brief Method InitializePool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitializePool(int32_t  initialAmount, int32_t  maxAmount) ;

static inline ::GorillaTag::ObjectPool_1<T>* New_ctor() ;

static inline ::GorillaTag::ObjectPool_1<T>* New_ctor(int32_t  amount) ;

static inline ::GorillaTag::ObjectPool_1<T>* New_ctor(int32_t  initialAmount, int32_t  maxAmount) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Return(T  instance) ;

/// @brief Method Take, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Take() ;

constexpr int32_t const& __cordl_internal_get_maxInstances() const;

constexpr int32_t& __cordl_internal_get_maxInstances() ;

constexpr ::System::Collections::Generic::Stack_1<T>* const& __cordl_internal_get_pool() const;

constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get_pool() ;

constexpr void __cordl_internal_set_maxInstances(int32_t  value) ;

constexpr void __cordl_internal_set_pool(::System::Collections::Generic::Stack_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  amount) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialAmount, int32_t  maxAmount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4667};

/// @brief Field pool, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<T>*  ___pool;

/// @brief Field maxInstances, offset: 0x18, size: 0x4, def value: None
 int32_t  ___maxInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag
