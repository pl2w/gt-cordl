#pragma once
// IWYU pragma private; include "Pathfinding/Util/ArrayPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool_1)
// Forward declare root types
namespace Pathfinding::Util {
template<typename T>
class ArrayPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Util::ArrayPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::ArrayPool_1, "Pathfinding.Util", "ArrayPool`1");
// Dependencies System.Collections.Generic.Stack`1<T>, System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.ArrayPool`1<T>
class CORDL_TYPE ArrayPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field exactPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_exactPool, put=setStaticF_exactPool)) ::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>  exactPool;

/// @brief Field pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>  pool;

/// @brief Method Claim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<T> Claim(int32_t  minimumLength) ;

/// @brief Method ClaimWithExactLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<T> ClaimWithExactLength(int32_t  length) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(::by_ref<::ArrayW<T>>  array, bool  allowNonPowerOfTwo) ;

static inline ::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*> getStaticF_exactPool() ;

static inline ::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*> getStaticF_pool() ;

static inline void setStaticF_exactPool(::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>  value) ;

static inline void setStaticF_pool(::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>  value) ;

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

/// @brief Field MaximumExactArrayLength offset 0xffffffff size 0x4
static constexpr int32_t  MaximumExactArrayLength{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
