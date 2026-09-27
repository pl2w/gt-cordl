#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator)
namespace GlobalNamespace {
struct BigIntegerCalculator_BitsBuffer;
}
namespace GlobalNamespace {
struct BigIntegerCalculator_FastReducer;
}
// Forward declare root types
namespace System::Numerics {
class BigIntegerCalculator;
}
// Write type traits
MARK_REF_T(::System::Numerics::BigIntegerCalculator*);
DEFINE_IL2CPP_CLASS(::System::Numerics::BigIntegerCalculator*, "System.Numerics", "BigIntegerCalculator");
// Dependencies System.Object
namespace System::Numerics {
// Is value type: false
// CS Name: System.Numerics.BigIntegerCalculator
class CORDL_TYPE BigIntegerCalculator : public ::System::Object {
public:
// Declarations
using BitsBuffer = ::GlobalNamespace::BigIntegerCalculator_BitsBuffer;

using FastReducer = ::GlobalNamespace::BigIntegerCalculator_FastReducer;

/// @brief Field AllocationThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AllocationThreshold, put=setStaticF_AllocationThreshold)) int32_t  AllocationThreshold;

/// @brief Field MultiplyThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MultiplyThreshold, put=setStaticF_MultiplyThreshold)) int32_t  MultiplyThreshold;

/// @brief Field ReducerThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ReducerThreshold, put=setStaticF_ReducerThreshold)) int32_t  ReducerThreshold;

/// @brief Field SquareThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SquareThreshold, put=setStaticF_SquareThreshold)) int32_t  SquareThreshold;

/// @brief Method ActualLength, addr 0xa9fb7ec, size 0x60, virtual false, abstract: false, final false
static inline int32_t ActualLength(::ArrayW<uint32_t>  value) ;

/// @brief Method ActualLength, addr 0xa9fb84c, size 0x5c, virtual false, abstract: false, final false
static inline int32_t ActualLength(::ArrayW<uint32_t>  value, int32_t  length) ;

/// @brief Method Add, addr 0xa9f7fb0, size 0xec, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Add(::ArrayW<uint32_t>  left, ::ArrayW<uint32_t>  right) ;

/// @brief Method Add, addr 0xa9f7ed8, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Add(::ArrayW<uint32_t>  left, uint32_t  right) ;

/// @brief Method Add, addr 0xa9fa304, size 0x84, virtual false, abstract: false, final false
static inline void Add(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength, uint32_t*  bits, int32_t  bitsLength) ;

/// @brief Method AddDivisor, addr 0xa9faae0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t AddDivisor(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength) ;

/// @brief Method AddSelf, addr 0xa9fa388, size 0x6c, virtual false, abstract: false, final false
static inline void AddSelf(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength) ;

/// @brief Method Compare, addr 0xa9f839c, size 0x8c, virtual false, abstract: false, final false
static inline int32_t Compare(::ArrayW<uint32_t>  left, ::ArrayW<uint32_t>  right) ;

/// @brief Method Compare, addr 0xa9fa4e0, size 0x5c, virtual false, abstract: false, final false
static inline int32_t Compare(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength) ;

/// @brief Method CreateCopy, addr 0xa9fa5a4, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> CreateCopy(::ArrayW<uint32_t>  value) ;

/// @brief Method Divide, addr 0xa9f9c40, size 0xdc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Divide(::ArrayW<uint32_t>  left, ::ArrayW<uint32_t>  right) ;

/// @brief Method Divide, addr 0xa9f9b84, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Divide(::ArrayW<uint32_t>  left, uint32_t  right) ;

/// @brief Method Divide, addr 0xa9fa620, size 0x320, virtual false, abstract: false, final false
static inline void Divide(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength, uint32_t*  bits, int32_t  bitsLength) ;

/// @brief Method DivideGuessTooBig, addr 0xa9faa58, size 0x40, virtual false, abstract: false, final false
static inline bool DivideGuessTooBig(uint64_t  q, uint64_t  valHi, uint32_t  valLo, uint32_t  divHi, uint32_t  divLo) ;

/// @brief Method LeadingZeros, addr 0xa9fa9e0, size 0x78, virtual false, abstract: false, final false
static inline int32_t LeadingZeros(uint32_t  value) ;

/// @brief Method Multiply, addr 0xa9f9948, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Multiply(::ArrayW<uint32_t>  left, ::ArrayW<uint32_t>  right) ;

/// @brief Method Multiply, addr 0xa9f97ac, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Multiply(::ArrayW<uint32_t>  left, uint32_t  right) ;

/// @brief Method Multiply, addr 0xa9fbd4c, size 0x4ac, virtual false, abstract: false, final false
static inline void Multiply(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength, uint32_t*  bits, int32_t  bitsLength) ;

/// @brief Method Pow, addr 0xa9f6cc4, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Pow(::ArrayW<uint32_t>  value, ::ArrayW<uint32_t>  power, ::ArrayW<uint32_t>  modulus) ;

/// @brief Method Pow, addr 0xa9f6d90, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Pow(::ArrayW<uint32_t>  value, uint32_t  power, ::ArrayW<uint32_t>  modulus) ;

/// @brief Method Pow, addr 0xa9f6e5c, size 0x98, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Pow(uint32_t  value, ::ArrayW<uint32_t>  power, ::ArrayW<uint32_t>  modulus) ;

/// @brief Method Pow, addr 0xa9f6ef4, size 0x98, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Pow(uint32_t  value, uint32_t  power, ::ArrayW<uint32_t>  modulus) ;

/// @brief Method Pow, addr 0xa9f6a40, size 0x80, virtual false, abstract: false, final false
static inline uint32_t Pow(::ArrayW<uint32_t>  value, ::ArrayW<uint32_t>  power, uint32_t  modulus) ;

/// @brief Method Pow, addr 0xa9f6ac0, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t Pow(::ArrayW<uint32_t>  value, uint32_t  power, uint32_t  modulus) ;

/// @brief Method Pow, addr 0xa9f6b7c, size 0x70, virtual false, abstract: false, final false
static inline uint32_t Pow(uint32_t  value, ::ArrayW<uint32_t>  power, uint32_t  modulus) ;

/// @brief Method Pow, addr 0xa9f6bec, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t Pow(uint32_t  value, uint32_t  power, uint32_t  modulus) ;

/// @brief Method PowCore, addr 0xa9faefc, size 0x128, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> PowCore(::ArrayW<uint32_t>  power, ::ArrayW<uint32_t>  modulus, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value) ;

/// @brief Method PowCore, addr 0xa9fad18, size 0x128, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> PowCore(uint32_t  power, ::ArrayW<uint32_t>  modulus, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value) ;

/// @brief Method PowCore, addr 0xa9fab64, size 0x120, virtual false, abstract: false, final false
static inline uint32_t PowCore(::ArrayW<uint32_t>  power, uint32_t  modulus, uint64_t  value, uint64_t  result) ;

/// @brief Method PowCore, addr 0xa9fab20, size 0x44, virtual false, abstract: false, final false
static inline uint32_t PowCore(uint32_t  power, uint32_t  modulus, uint64_t  value, uint64_t  result) ;

/// @brief Method PowCore, addr 0xa9fb03c, size 0x134, virtual false, abstract: false, final false
static inline void PowCore(::ArrayW<uint32_t>  power, ::ArrayW<uint32_t>  modulus, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  result, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp) ;

/// @brief Method PowCore, addr 0xa9fb2a4, size 0x144, virtual false, abstract: false, final false
static inline void PowCore(::ArrayW<uint32_t>  power, ::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>  reducer, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  result, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp) ;

/// @brief Method PowCore, addr 0xa9fb3e8, size 0x7c, virtual false, abstract: false, final false
static inline void PowCore(uint32_t  power, ::ArrayW<uint32_t>  modulus, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  result, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp) ;

/// @brief Method PowCore, addr 0xa9fb464, size 0x90, virtual false, abstract: false, final false
static inline void PowCore(uint32_t  power, ::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>  reducer, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  result, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp) ;

/// @brief Method Remainder, addr 0xa9fa940, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Remainder(::ArrayW<uint32_t>  left, ::ArrayW<uint32_t>  right) ;

/// @brief Method Remainder, addr 0xa9fa53c, size 0x68, virtual false, abstract: false, final false
static inline uint32_t Remainder(::ArrayW<uint32_t>  left, uint32_t  right) ;

/// @brief Method Square, addr 0xa9f9884, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Square(::ArrayW<uint32_t>  value) ;

/// @brief Method Square, addr 0xa9fb8a8, size 0x3e0, virtual false, abstract: false, final false
static inline void Square(uint32_t*  value, int32_t  valueLength, uint32_t*  bits, int32_t  bitsLength) ;

/// @brief Method Subtract, addr 0xa9f8428, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Subtract(::ArrayW<uint32_t>  left, ::ArrayW<uint32_t>  right) ;

/// @brief Method Subtract, addr 0xa9f82e8, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> Subtract(::ArrayW<uint32_t>  left, uint32_t  right) ;

/// @brief Method Subtract, addr 0xa9fa3f4, size 0x78, virtual false, abstract: false, final false
static inline void Subtract(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength, uint32_t*  bits, int32_t  bitsLength) ;

/// @brief Method SubtractCore, addr 0xa9fbc88, size 0xc4, virtual false, abstract: false, final false
static inline void SubtractCore(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength, uint32_t*  core, int32_t  coreLength) ;

/// @brief Method SubtractDivisor, addr 0xa9faa98, size 0x48, virtual false, abstract: false, final false
static inline uint32_t SubtractDivisor(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength, uint64_t  q) ;

/// @brief Method SubtractSelf, addr 0xa9fa46c, size 0x74, virtual false, abstract: false, final false
static inline void SubtractSelf(uint32_t*  left, int32_t  leftLength, uint32_t*  right, int32_t  rightLength) ;

static inline int32_t getStaticF_AllocationThreshold() ;

static inline int32_t getStaticF_MultiplyThreshold() ;

static inline int32_t getStaticF_ReducerThreshold() ;

static inline int32_t getStaticF_SquareThreshold() ;

static inline void setStaticF_AllocationThreshold(int32_t  value) ;

static inline void setStaticF_MultiplyThreshold(int32_t  value) ;

static inline void setStaticF_ReducerThreshold(int32_t  value) ;

static inline void setStaticF_SquareThreshold(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigIntegerCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BigIntegerCalculator(BigIntegerCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigIntegerCalculator(BigIntegerCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Numerics::BigIntegerCalculator) == 0x10, "Size mismatch!");

} // namespace end def System::Numerics
