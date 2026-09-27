#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace GlobalNamespace {
struct BigInteger_Sign;
}
namespace Mono::Math {
class BigInteger_Kernel;
}
namespace Mono::Math {
class BigInteger_ModulusRing;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Math {
class BigInteger_Kernel;
}
namespace Mono::Math {
class BigInteger_ModulusRing;
}
// Write type traits
MARK_REF_T(::Mono::Math::BigInteger*);
MARK_REF_T(::Mono::Math::BigInteger_Kernel*);
MARK_REF_T(::Mono::Math::BigInteger_ModulusRing*);
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger*, "Mono.Math", "BigInteger");
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger_Kernel*, "Mono.Math", "BigInteger/Kernel");
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger_ModulusRing*, "Mono.Math", "BigInteger/ModulusRing");
// Dependencies System.Object
namespace Mono::Math {
// Is value type: false
// CS Name: Mono.Math.BigInteger
class CORDL_TYPE BigInteger : public ::System::Object {
public:
// Declarations
using Sign = ::GlobalNamespace::BigInteger_Sign;

using Kernel = ::Mono::Math::BigInteger_Kernel;

using ModulusRing = ::Mono::Math::BigInteger_ModulusRing;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint32_t>  data;

/// @brief Field length, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) uint32_t  length;

/// @brief Field rng, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rng, put=setStaticF_rng)) ::System::Security::Cryptography::RandomNumberGenerator*  rng;

/// @brief Field smallPrimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_smallPrimes, put=setStaticF_smallPrimes)) ::ArrayW<uint32_t>  smallPrimes;

/// @brief Method BitCount, addr 0xa109988, size 0x6c, virtual false, abstract: false, final false
inline int32_t BitCount() ;

/// @brief Method Clear, addr 0xa10a1cc, size 0x54, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Equals, addr 0xa10a27c, size 0x12c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GeneratePseudoPrime, addr 0xa10ac04, size 0x6c, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* GeneratePseudoPrime(int32_t  bits) ;

/// @brief Method GenerateRandom, addr 0xa10992c, size 0x5c, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t  bits) ;

/// @brief Method GenerateRandom, addr 0xa1097cc, size 0x160, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t  bits, ::System::Security::Cryptography::RandomNumberGenerator*  rng) ;

/// @brief Method GetBytes, addr 0xa109b80, size 0x13c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method GetHashCode, addr 0xa10a220, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Incr2, addr 0xa10ac78, size 0x9c, virtual false, abstract: false, final false
inline void Incr2() ;

/// @brief Method LowestSetBit, addr 0xa109b04, size 0x7c, virtual false, abstract: false, final false
inline int32_t LowestSetBit() ;

/// @brief Method ModInverse, addr 0xa10a3a8, size 0x4, virtual false, abstract: false, final false
inline ::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger*  modulus) ;

/// @brief Method ModPow, addr 0xa10a988, size 0x78, virtual false, abstract: false, final false
inline ::Mono::Math::BigInteger* ModPow(::Mono::Math::BigInteger*  exp, ::Mono::Math::BigInteger*  n) ;

static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger*  bi) ;

/// @brief [CLSCompliant(false)]
static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger*  bi, uint32_t  len) ;

static inline ::Mono::Math::BigInteger* New_ctor(::ArrayW<uint8_t>  inData) ;

/// @brief [CLSCompliant(false)]
static inline ::Mono::Math::BigInteger* New_ctor(::GlobalNamespace::BigInteger_Sign  sign, uint32_t  len) ;

/// @brief [CLSCompliant(false)]
static inline ::Mono::Math::BigInteger* New_ctor(uint32_t  ui) ;

/// @brief Method Normalize, addr 0xa108268, size 0x5c, virtual false, abstract: false, final false
inline void Normalize() ;

/// [CLSCompliant(false)]
/// @brief Method SetBit, addr 0xa109a88, size 0x8, virtual false, abstract: false, final false
inline void SetBit(uint32_t  bitNum) ;

/// [CLSCompliant(false)]
/// @brief Method SetBit, addr 0xa109a90, size 0x74, virtual false, abstract: false, final false
inline void SetBit(uint32_t  bitNum, bool  value) ;

/// @brief Method TestBit, addr 0xa1099f4, size 0x94, virtual false, abstract: false, final false
inline bool TestBit(int32_t  bitNum) ;

/// @brief Method ToString, addr 0xa10a274, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xa109ee4, size 0x58, virtual false, abstract: false, final false
inline ::StringW ToString(uint32_t  radix) ;

/// [CLSCompliant(false)]
/// @brief Method ToString, addr 0xa109f3c, size 0x220, virtual false, abstract: false, final false
inline ::StringW ToString(uint32_t  radix, ::StringW  characterSet) ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_data() ;

constexpr uint32_t const& __cordl_internal_get_length() const;

constexpr uint32_t& __cordl_internal_get_length() ;

constexpr void __cordl_internal_set_data(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_length(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa107e64, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::Mono::Math::BigInteger*  bi) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa107f4c, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::Mono::Math::BigInteger*  bi, uint32_t  len) ;

/// @brief Method .ctor, addr 0xa108034, size 0x234, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  inData) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa107de4, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BigInteger_Sign  sign, uint32_t  len) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa1082c4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(uint32_t  ui) ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng() ;

static inline ::ArrayW<uint32_t> getStaticF_smallPrimes() ;

/// @brief Method get_Rng, addr 0xa109720, size 0xac, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng() ;

/// @brief Method op_Addition, addr 0xa108450, size 0xd0, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Addition(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_Division, addr 0xa109124, size 0x28, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_Equality, addr 0xa109d28, size 0xb0, virtual false, abstract: false, final false
static inline bool op_Equality(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// [CLSCompliant(false)]
/// @brief Method op_Equality, addr 0xa108520, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::Mono::Math::BigInteger*  bi1, uint32_t  ui) ;

/// @brief Method op_GreaterThan, addr 0xa109e88, size 0x18, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_GreaterThanOrEqual, addr 0xa109eb4, size 0x18, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_Implicit, addr 0xa1083ac, size 0xa4, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(int32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method op_Implicit, addr 0xa108354, size 0x58, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(uint32_t  value) ;

/// @brief Method op_Inequality, addr 0xa109dd8, size 0xb0, virtual false, abstract: false, final false
static inline bool op_Inequality(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// [CLSCompliant(false)]
/// @brief Method op_Inequality, addr 0xa109cbc, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Mono::Math::BigInteger*  bi1, uint32_t  ui) ;

/// @brief Method op_LeftShift, addr 0xa1093d8, size 0x4, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger*  bi1, int32_t  shiftVal) ;

/// @brief Method op_LessThan, addr 0xa109ea0, size 0x14, virtual false, abstract: false, final false
static inline bool op_LessThan(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_LessThanOrEqual, addr 0xa109ecc, size 0x18, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_Modulus, addr 0xa108c2c, size 0x2c, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Modulus(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// [CLSCompliant(false)]
/// @brief Method op_Modulus, addr 0xa108bc4, size 0x4, virtual false, abstract: false, final false
static inline uint32_t op_Modulus(::Mono::Math::BigInteger*  bi, uint32_t  ui) ;

/// @brief Method op_Multiply, addr 0xa10914c, size 0x1a8, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method op_RightShift, addr 0xa1095ac, size 0x4, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger*  bi1, int32_t  shiftVal) ;

/// @brief Method op_Subtraction, addr 0xa10876c, size 0x168, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

static inline void setStaticF_smallPrimes(::ArrayW<uint32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigInteger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BigInteger(BigInteger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigInteger(BigInteger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27895};

/// @brief Field length, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___length;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Math::BigInteger, ___length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Math::BigInteger, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Math::BigInteger) == 0x20, "Size mismatch!");

} // namespace end def Mono::Math
// Dependencies System.Object
namespace Mono::Math {
// Is value type: false
// CS Name: Mono.Math.BigInteger/Kernel
class CORDL_TYPE BigInteger_Kernel : public ::System::Object {
public:
// Declarations
/// @brief Method AddSameSign, addr 0xa10858c, size 0x1e0, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* AddSameSign(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method Compare, addr 0xa1088d4, size 0x144, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BigInteger_Sign Compare(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method DwordDivMod, addr 0xa10b74c, size 0x1a0, virtual false, abstract: false, final false
static inline ::ArrayW<::Mono::Math::BigInteger*> DwordDivMod(::Mono::Math::BigInteger*  n, uint32_t  d) ;

/// @brief Method DwordMod, addr 0xa108bc8, size 0x64, virtual false, abstract: false, final false
static inline uint32_t DwordMod(::Mono::Math::BigInteger*  n, uint32_t  d) ;

/// @brief Method LeftShift, addr 0xa1093dc, size 0x1d0, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger*  bi, int32_t  n) ;

/// @brief Method MinusEq, addr 0xa10b11c, size 0x104, virtual false, abstract: false, final false
static inline void MinusEq(::Mono::Math::BigInteger*  big, ::Mono::Math::BigInteger*  small) ;

/// @brief Method Multiply, addr 0xa1092f4, size 0xe4, virtual false, abstract: false, final false
static inline void Multiply(::ArrayW<uint32_t>  x, uint32_t  xOffset, uint32_t  xLen, ::ArrayW<uint32_t>  y, uint32_t  yOffset, uint32_t  yLen, ::ArrayW<uint32_t>  d, uint32_t  dOffset) ;

/// @brief Method MultiplyMod2p32pmod, addr 0xa10b00c, size 0x110, virtual false, abstract: false, final false
static inline void MultiplyMod2p32pmod(::ArrayW<uint32_t>  x, int32_t  xOffset, int32_t  xLen, ::ArrayW<uint32_t>  y, int32_t  yOffest, int32_t  yLen, ::ArrayW<uint32_t>  d, int32_t  dOffset, int32_t  mod) ;

/// @brief Method PlusEq, addr 0xa10b220, size 0x18c, virtual false, abstract: false, final false
static inline void PlusEq(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

/// @brief Method RightShift, addr 0xa1095b0, size 0x170, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger*  bi, int32_t  n) ;

/// @brief Method SingleByteDivideInPlace, addr 0xa10a15c, size 0x70, virtual false, abstract: false, final false
static inline uint32_t SingleByteDivideInPlace(::Mono::Math::BigInteger*  n, uint32_t  d) ;

/// @brief Method Subtract, addr 0xa108a18, size 0x1ac, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger*  big, ::Mono::Math::BigInteger*  small) ;

/// @brief Method modInverse, addr 0xa10a3ac, size 0x5dc, virtual false, abstract: false, final false
static inline ::Mono::Math::BigInteger* modInverse(::Mono::Math::BigInteger*  bi, ::Mono::Math::BigInteger*  modulus) ;

/// @brief Method modInverse, addr 0xa10b8ec, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t modInverse(::Mono::Math::BigInteger*  bi, uint32_t  modulus) ;

/// @brief Method multiByteDivide, addr 0xa108c58, size 0x4cc, virtual false, abstract: false, final false
static inline ::ArrayW<::Mono::Math::BigInteger*> multiByteDivide(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigInteger_Kernel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigInteger_Kernel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BigInteger_Kernel(BigInteger_Kernel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger_Kernel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigInteger_Kernel(BigInteger_Kernel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Math::BigInteger_Kernel) == 0x10, "Size mismatch!");

} // namespace end def Mono::Math
// Dependencies System.Object
namespace Mono::Math {
// Is value type: false
// CS Name: Mono.Math.BigInteger/ModulusRing
class CORDL_TYPE BigInteger_ModulusRing : public ::System::Object {
public:
// Declarations
/// @brief Field constant, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_constant, put=__cordl_internal_set_constant)) ::Mono::Math::BigInteger*  constant;

/// @brief Field mod, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mod, put=__cordl_internal_set_mod)) ::Mono::Math::BigInteger*  mod;

/// @brief Method BarrettReduction, addr 0xa10adb4, size 0x258, virtual false, abstract: false, final false
inline void BarrettReduction(::Mono::Math::BigInteger*  x) ;

/// @brief Method Difference, addr 0xa10b528, size 0x1b4, virtual false, abstract: false, final false
inline ::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger*  a, ::Mono::Math::BigInteger*  b) ;

/// @brief Method Multiply, addr 0xa10b3ac, size 0x17c, virtual false, abstract: false, final false
inline ::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger*  a, ::Mono::Math::BigInteger*  b) ;

static inline ::Mono::Math::BigInteger_ModulusRing* New_ctor(::Mono::Math::BigInteger*  modulus) ;

/// @brief Method Pow, addr 0xa10ab00, size 0x104, virtual false, abstract: false, final false
inline ::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger*  a, ::Mono::Math::BigInteger*  k) ;

/// [CLSCompliant(false)]
/// @brief Method Pow, addr 0xa10b6dc, size 0x70, virtual false, abstract: false, final false
inline ::Mono::Math::BigInteger* Pow(uint32_t  b, ::Mono::Math::BigInteger*  exp) ;

constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_constant() const;

constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_constant() ;

constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_mod() const;

constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_mod() ;

constexpr void __cordl_internal_set_constant(::Mono::Math::BigInteger*  value) ;

constexpr void __cordl_internal_set_mod(::Mono::Math::BigInteger*  value) ;

/// @brief Method .ctor, addr 0xa10aa00, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Mono::Math::BigInteger*  modulus) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigInteger_ModulusRing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigInteger_ModulusRing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BigInteger_ModulusRing(BigInteger_ModulusRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger_ModulusRing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigInteger_ModulusRing(BigInteger_ModulusRing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27893};

/// @brief Field mod, offset: 0x10, size: 0x8, def value: None
 ::Mono::Math::BigInteger*  ___mod;

/// @brief Field constant, offset: 0x18, size: 0x8, def value: None
 ::Mono::Math::BigInteger*  ___constant;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Math::BigInteger_ModulusRing, ___mod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Math::BigInteger_ModulusRing, ___constant) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Math::BigInteger_ModulusRing) == 0x20, "Size mismatch!");

} // namespace end def Mono::Math
