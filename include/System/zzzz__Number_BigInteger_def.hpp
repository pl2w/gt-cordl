#pragma once
// IWYU pragma private; include "System/Number_BigInteger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Number_BigInteger___blocks_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number_BigInteger)
namespace GlobalNamespace {
struct BigInteger_Number___blocks_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct Number_BigInteger;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_BigInteger);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_BigInteger, "System", "Number/BigInteger");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Number::BigInteger::<_blocks>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/BigInteger
#pragma pack(push, 1)
struct CORDL_TYPE Number_BigInteger {
public:
// Declarations
using __blocks_e__FixedBuffer = ::GlobalNamespace::BigInteger_Number___blocks_e__FixedBuffer;

/// @brief Field s_Pow10BigNumTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pow10BigNumTable, put=setStaticF_s_Pow10BigNumTable)) ::ArrayW<uint32_t>  s_Pow10BigNumTable;

/// @brief Field s_Pow10BigNumTableIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pow10BigNumTableIndices, put=setStaticF_s_Pow10BigNumTableIndices)) ::ArrayW<int32_t>  s_Pow10BigNumTableIndices;

/// @brief Field s_Pow10UInt32Table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pow10UInt32Table, put=setStaticF_s_Pow10UInt32Table)) ::ArrayW<uint32_t>  s_Pow10UInt32Table;

/// @brief Method Add, addr 0xb9969ac, size 0xc0, virtual false, abstract: false, final false
static inline void Add(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  rhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method Add, addr 0xb99ef6c, size 0xc0, virtual false, abstract: false, final false
inline void Add(uint32_t  value) ;

/// @brief Method AddDivisor, addr 0xb9a5b6c, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t AddDivisor(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, int32_t  lhsStartIndex, ::by_ref<::GlobalNamespace::Number_BigInteger>  rhs) ;

/// @brief Method Compare, addr 0xb996a6c, size 0x60, virtual false, abstract: false, final false
static inline int32_t Compare(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  rhs) ;

/// @brief Method CountSignificantBits, addr 0xb99fd7c, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t CountSignificantBits(::by_ref<::GlobalNamespace::Number_BigInteger>  value) ;

/// @brief Method CountSignificantBits, addr 0xb9a5a34, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t CountSignificantBits(uint32_t  value) ;

/// @brief Method CountSignificantBits, addr 0xb99f2a0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t CountSignificantBits(uint64_t  value) ;

/// @brief Method DivRem, addr 0xb99fe1c, size 0x550, virtual false, abstract: false, final false
static inline void DivRem(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  rhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  quo, ::by_ref<::GlobalNamespace::Number_BigInteger>  rem) ;

/// @brief Method DivRem32, addr 0xb9a5dd0, size 0x14, virtual false, abstract: false, final false
static inline uint32_t DivRem32(uint32_t  value, ::by_ref<uint32_t>  remainder) ;

/// @brief Method DivideGuessTooBig, addr 0xb9a5ad8, size 0x40, virtual false, abstract: false, final false
static inline bool DivideGuessTooBig(uint64_t  q, uint64_t  valHi, uint32_t  valLo, uint32_t  divHi, uint32_t  divLo) ;

/// @brief Method GetBlock, addr 0xb996b68, size 0xc, virtual false, abstract: false, final false
inline uint32_t GetBlock(uint32_t  index) ;

/// @brief Method GetBlocksPointer, addr 0xb9a5dc8, size 0x8, virtual false, abstract: false, final false
inline uint32_t* GetBlocksPointer() ;

/// @brief Method GetLength, addr 0xb9a5de4, size 0x8, virtual false, abstract: false, final false
inline int32_t GetLength() ;

/// @brief Method HeuristicDivide, addr 0xb996b74, size 0x168, virtual false, abstract: false, final false
static inline uint32_t HeuristicDivide(::by_ref<::GlobalNamespace::Number_BigInteger>  dividend, ::by_ref<::GlobalNamespace::Number_BigInteger>  divisor) ;

/// @brief Method IsOne, addr 0xb9a5da4, size 0x24, virtual false, abstract: false, final false
inline bool IsOne() ;

/// @brief Method IsZero, addr 0xb996cdc, size 0x10, virtual false, abstract: false, final false
inline bool IsZero() ;

/// @brief Method Multiply, addr 0xb9a5bb8, size 0x1ec, virtual false, abstract: false, final false
static inline void Multiply(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  rhs, ::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method Multiply, addr 0xb9968a8, size 0x104, virtual false, abstract: false, final false
static inline void Multiply(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, uint32_t  value, ::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method Multiply, addr 0xb9967f0, size 0xb8, virtual false, abstract: false, final false
inline void Multiply(::by_ref<::GlobalNamespace::Number_BigInteger>  value) ;

/// @brief Method Multiply, addr 0xb9a5dec, size 0x68, virtual false, abstract: false, final false
inline void Multiply(uint32_t  value) ;

/// @brief Method Multiply10, addr 0xb996acc, size 0x9c, virtual false, abstract: false, final false
inline void Multiply10() ;

/// @brief Method MultiplyPow10, addr 0xb99651c, size 0x10c, virtual false, abstract: false, final false
inline void MultiplyPow10(uint32_t  exponent) ;

/// @brief Method Pow10, addr 0xb996628, size 0x1c8, virtual false, abstract: false, final false
static inline void Pow10(uint32_t  exponent, ::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method Pow2, addr 0xb996220, size 0x2fc, virtual false, abstract: false, final false
static inline void Pow2(uint32_t  exponent, ::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method SetUInt32, addr 0xb9961b4, size 0x6c, virtual false, abstract: false, final false
static inline void SetUInt32(::by_ref<::GlobalNamespace::Number_BigInteger>  result, uint32_t  value) ;

/// @brief Method SetUInt64, addr 0xb995b14, size 0x7c, virtual false, abstract: false, final false
static inline void SetUInt64(::by_ref<::GlobalNamespace::Number_BigInteger>  result, uint64_t  value) ;

/// @brief Method SetValue, addr 0xb9a5a50, size 0x88, virtual false, abstract: false, final false
static inline void SetValue(::by_ref<::GlobalNamespace::Number_BigInteger>  result, ::by_ref<::GlobalNamespace::Number_BigInteger>  value) ;

/// @brief Method SetZero, addr 0xb99ef28, size 0x8, virtual false, abstract: false, final false
static inline void SetZero(::by_ref<::GlobalNamespace::Number_BigInteger>  result) ;

/// @brief Method ShiftLeft, addr 0xb995b90, size 0x624, virtual false, abstract: false, final false
inline void ShiftLeft(uint32_t  shift) ;

/// @brief Method SubtractDivisor, addr 0xb9a5b18, size 0x54, virtual false, abstract: false, final false
static inline uint32_t SubtractDivisor(::by_ref<::GlobalNamespace::Number_BigInteger>  lhs, int32_t  lhsStartIndex, ::by_ref<::GlobalNamespace::Number_BigInteger>  rhs, uint64_t  q) ;

/// @brief Method ToUInt64, addr 0xb99f5a0, size 0x2c, virtual false, abstract: false, final false
inline uint64_t ToUInt64() ;

static inline ::ArrayW<uint32_t> getStaticF_s_Pow10BigNumTable() ;

static inline ::ArrayW<int32_t> getStaticF_s_Pow10BigNumTableIndices() ;

static inline ::ArrayW<uint32_t> getStaticF_s_Pow10UInt32Table() ;

static inline void setStaticF_s_Pow10BigNumTable(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_s_Pow10BigNumTableIndices(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_Pow10UInt32Table(::ArrayW<uint32_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Number_BigInteger() ;

// Ctor Parameters [CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_blocks", ty: "::GlobalNamespace::BigInteger_Number___blocks_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr Number_BigInteger(int32_t  _length, ::GlobalNamespace::BigInteger_Number___blocks_e__FixedBuffer  _blocks) noexcept;

/// @brief Field BitsForLongestBinaryMantissa offset 0xffffffff size 0x4
static constexpr int32_t  BitsForLongestBinaryMantissa{static_cast<int32_t>(0x432)};

/// @brief Field BitsForLongestDigitSequence offset 0xffffffff size 0x4
static constexpr int32_t  BitsForLongestDigitSequence{static_cast<int32_t>(0x9f8)};

/// @brief Field BitsPerBlock offset 0xffffffff size 0x4
static constexpr int32_t  BitsPerBlock{static_cast<int32_t>(0x20)};

/// @brief Field MaxBits offset 0xffffffff size 0x4
static constexpr int32_t  MaxBits{static_cast<int32_t>(0xe4a)};

/// @brief Field MaxBlockCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxBlockCount{static_cast<int32_t>(0x73)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1d0};

/// @brief Field _length, offset: 0x0, size: 0x4, def value: None
 int32_t  _length;

/// [FixedBuffer(typeof(System.UInt32), 115)]
/// @brief Field _blocks, offset: 0x4, size: 0x1cc, def value: None
 ::GlobalNamespace::BigInteger_Number___blocks_e__FixedBuffer  _blocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_BigInteger, _length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_BigInteger, _blocks) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_BigInteger) == 0x1d0, "Size mismatch!");

} // namespace end def GlobalNamespace
