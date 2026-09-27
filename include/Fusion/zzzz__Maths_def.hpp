#pragma once
// IWYU pragma private; include "Fusion/Maths.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Maths)
namespace GlobalNamespace {
struct Maths_FastAbs2;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Fusion {
class Maths;
}
// Write type traits
MARK_REF_T(::Fusion::Maths*);
DEFINE_IL2CPP_CLASS(::Fusion::Maths*, "Fusion", "Maths");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Maths
class CORDL_TYPE Maths : public ::System::Object {
public:
// Declarations
using FastAbs2 = ::GlobalNamespace::Maths_FastAbs2;

/// @brief Field DeBruijnLookupLong, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeBruijnLookupLong, put=setStaticF_DeBruijnLookupLong)) ::ArrayW<int32_t>  DeBruijnLookupLong;

/// @brief Field _debruijnTable32, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__debruijnTable32, put=setStaticF__debruijnTable32)) ::ArrayW<uint8_t>  _debruijnTable32;

/// @brief Field _debruijnTable64, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__debruijnTable64, put=setStaticF__debruijnTable64)) ::ArrayW<uint8_t>  _debruijnTable64;

/// @brief Method BitScanReverse, addr 0x5f3ee74, size 0xe8, virtual false, abstract: false, final false
static inline int32_t BitScanReverse(int64_t  v) ;

/// @brief Method BitScanReverse, addr 0x5f3edd4, size 0xa0, virtual false, abstract: false, final false
static inline int32_t BitScanReverse(uint32_t  v) ;

/// @brief Method BitScanReverse, addr 0x5f3ef5c, size 0xb8, virtual false, abstract: false, final false
static inline int32_t BitScanReverse(uint64_t  v) ;

/// @brief Method BytesRequiredForBits, addr 0x5f3eac0, size 0xc, virtual false, abstract: false, final false
static inline int32_t BytesRequiredForBits(int32_t  b) ;

/// @brief Method Clamp, addr 0x5f3ec70, size 0x14, virtual false, abstract: false, final false
static inline double_t Clamp(double_t  v, double_t  min, double_t  max) ;

/// @brief Method Clamp, addr 0x5f3ec5c, size 0x14, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  v, int32_t  min, int32_t  max) ;

/// @brief Method Clamp01, addr 0x5f3ec84, size 0x1c, virtual false, abstract: false, final false
static inline double_t Clamp01(double_t  v) ;

/// @brief Method Clamp01, addr 0x5f3eca0, size 0x1c, virtual false, abstract: false, final false
static inline float_t Clamp01(float_t  v) ;

/// @brief Method CountSetBits, addr 0x5f3ec10, size 0x14, virtual false, abstract: false, final false
static inline int32_t CountSetBits(uint64_t  x) ;

/// @brief Method Lerp, addr 0x5f3ed48, size 0x8c, virtual false, abstract: false, final false
static inline double_t Lerp(double_t  a, double_t  b, double_t  t) ;

/// @brief Method Lerp, addr 0x5f3ecbc, size 0x8c, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method PrintBits, addr 0x5f3eacc, size 0x144, virtual false, abstract: false, final false
static inline ::StringW PrintBits(uint8_t*  data, int32_t  count) ;

/// @brief Method QuaternionCompress, addr 0x5f3e8ac, size 0x108, virtual false, abstract: false, final false
static inline uint32_t QuaternionCompress(::UnityEngine::Quaternion  rot) ;

/// @brief Method QuaternionDecompress, addr 0x5f3e9b4, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion QuaternionDecompress(uint32_t  buffer) ;

/// @brief Method SizeOfBits, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t SizeOfBits() ;

/// @brief Method ZigZagDecode, addr 0x5f3ec30, size 0x10, virtual false, abstract: false, final false
static inline int32_t ZigZagDecode(int32_t  i) ;

/// @brief Method ZigZagDecode, addr 0x5f3ec4c, size 0x10, virtual false, abstract: false, final false
static inline int64_t ZigZagDecode(int64_t  i) ;

/// @brief Method ZigZagEncode, addr 0x5f3ec24, size 0xc, virtual false, abstract: false, final false
static inline int32_t ZigZagEncode(int32_t  i) ;

/// @brief Method ZigZagEncode, addr 0x5f3ec40, size 0xc, virtual false, abstract: false, final false
static inline int64_t ZigZagEncode(int64_t  i) ;

static inline ::ArrayW<int32_t> getStaticF_DeBruijnLookupLong() ;

static inline ::ArrayW<uint8_t> getStaticF__debruijnTable32() ;

static inline ::ArrayW<uint8_t> getStaticF__debruijnTable64() ;

static inline void setStaticF_DeBruijnLookupLong(::ArrayW<int32_t>  value) ;

static inline void setStaticF__debruijnTable32(::ArrayW<uint8_t>  value) ;

static inline void setStaticF__debruijnTable64(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Maths() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Maths", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Maths(Maths && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Maths", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Maths(Maths const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Maths) == 0x10, "Size mismatch!");

} // namespace end def Fusion
