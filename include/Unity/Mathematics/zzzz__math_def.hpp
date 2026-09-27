#pragma once
// IWYU pragma private; include "Unity/Mathematics/math.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(math)
namespace GlobalNamespace {
struct math_LongDoubleUnion;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class math;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::math*);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
// [Il2CppEagerStaticClassConstruction]
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.math
class CORDL_TYPE math : public ::System::Object {
public:
// Declarations
using LongDoubleUnion = ::GlobalNamespace::math_LongDoubleUnion;

/// @brief Method abs, addr 0xb05a4c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3  x) ;

/// @brief Method abs, addr 0xb05a4d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4  x) ;

/// @brief Method abs, addr 0xb05a488, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3  x) ;

/// @brief Method abs, addr 0xb05a4b8, size 0x8, virtual false, abstract: false, final false
static inline float_t abs(float_t  x) ;

/// @brief Method abs, addr 0xb05a47c, size 0xc, virtual false, abstract: false, final false
static inline int32_t abs(int32_t  x) ;

/// @brief Method acos, addr 0xb05a7f8, size 0x64, virtual false, abstract: false, final false
static inline float_t acos(float_t  x) ;

/// @brief Method all, addr 0xb05bd34, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool2  x) ;

/// @brief Method all, addr 0xb05bd48, size 0x18, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool3  x) ;

/// @brief Method all, addr 0xb05bd60, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool4  x) ;

/// @brief Method any, addr 0xb05bce0, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool2  x) ;

/// @brief Method any, addr 0xb05bcf0, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool3  x) ;

/// @brief Method any, addr 0xb05bd04, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool4  x) ;

/// @brief Method any, addr 0xb05bd14, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float3  x) ;

/// @brief Method asdouble, addr 0xb059cec, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(uint64_t  x) ;

/// @brief Method asfloat, addr 0xb059cbc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3  x) ;

/// @brief Method asfloat, addr 0xb059cd0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4  x) ;

/// @brief Method asfloat, addr 0xb059cb4, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(uint32_t  x) ;

/// @brief Method asint, addr 0xb059c54, size 0x8, virtual false, abstract: false, final false
static inline int32_t asint(float_t  x) ;

/// @brief Method asuint, addr 0xb059c74, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2  x) ;

/// @brief Method asuint, addr 0xb059c5c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2  x) ;

/// @brief Method asuint, addr 0xb059c84, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3  x) ;

/// @brief Method asuint, addr 0xb059c60, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3  x) ;

/// @brief Method asuint, addr 0xb059c98, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4  x) ;

/// @brief Method asuint, addr 0xb059c68, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4  x) ;

/// @brief Method asuint, addr 0xb059c6c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t asuint(float_t  x) ;

/// @brief Method atan, addr 0xb05a5f4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2  x) ;

/// @brief Method atan, addr 0xb05a590, size 0x64, virtual false, abstract: false, final false
static inline float_t atan(float_t  x) ;

/// @brief Method back, addr 0xb05c468, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 back() ;

/// @brief Method ceil, addr 0xb05acc8, size 0x5c, virtual false, abstract: false, final false
static inline float_t ceil(float_t  x) ;

/// @brief Method ceillog2, addr 0xb05c230, size 0x38, virtual false, abstract: false, final false
static inline int32_t ceillog2(int32_t  x) ;

/// @brief Method ceilpow2, addr 0xb05c188, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceilpow2, addr 0xb05c168, size 0x20, virtual false, abstract: false, final false
static inline int32_t ceilpow2(int32_t  x) ;

/// @brief Method ceilpow2, addr 0xb05c210, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ceilpow2(uint32_t  x) ;

/// @brief Method chgsign, addr 0xb05c3cc, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method clamp, addr 0xb05a1e4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2  valueToClamp, ::Unity::Mathematics::float2  lowerBound, ::Unity::Mathematics::float2  upperBound) ;

/// @brief Method clamp, addr 0xb05a228, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3  valueToClamp, ::Unity::Mathematics::float3  lowerBound, ::Unity::Mathematics::float3  upperBound) ;

/// @brief Method clamp, addr 0xb05a2a0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4  valueToClamp, ::Unity::Mathematics::float4  lowerBound, ::Unity::Mathematics::float4  upperBound) ;

/// @brief Method clamp, addr 0xb05a314, size 0x30, virtual false, abstract: false, final false
static inline double_t clamp(double_t  valueToClamp, double_t  lowerBound, double_t  upperBound) ;

/// @brief Method clamp, addr 0xb05a1b4, size 0x30, virtual false, abstract: false, final false
static inline float_t clamp(float_t  valueToClamp, float_t  lowerBound, float_t  upperBound) ;

/// @brief Method clamp, addr 0xb05a18c, size 0x14, virtual false, abstract: false, final false
static inline int32_t clamp(int32_t  valueToClamp, int32_t  lowerBound, int32_t  upperBound) ;

/// @brief Method clamp, addr 0xb05a1a0, size 0x14, virtual false, abstract: false, final false
static inline uint32_t clamp(uint32_t  valueToClamp, uint32_t  lowerBound, uint32_t  upperBound) ;

/// @brief Method cos, addr 0xb05a704, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3  x) ;

/// @brief Method cos, addr 0xb05a6a0, size 0x64, virtual false, abstract: false, final false
static inline float_t cos(float_t  x) ;

/// @brief Method countbits, addr 0xb05c010, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(uint64_t  x) ;

/// @brief Method cross, addr 0xb05ba9c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method csum, addr 0xb05c30c, size 0xc, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float3  x) ;

/// @brief Method csum, addr 0xb05c2d8, size 0xc, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint2  x) ;

/// @brief Method csum, addr 0xb05c2e4, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint3  x) ;

/// @brief Method csum, addr 0xb05c2f4, size 0x18, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint4  x) ;

/// @brief Method degrees, addr 0xb05c2c8, size 0x10, virtual false, abstract: false, final false
static inline float_t degrees(float_t  x) ;

/// @brief Method determinant, addr 0xb05947c, size 0x10, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float2x2  m) ;

/// @brief Method determinant, addr 0xb0595c8, size 0x54, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float3x3  m) ;

/// @brief Method determinant, addr 0xb059868, size 0xe8, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float4x4  m) ;

/// @brief Method distance, addr 0xb05b98c, size 0x98, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distancesq, addr 0xb05ba30, size 0x18, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distancesq, addr 0xb05ba48, size 0x24, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distancesq, addr 0xb05ba6c, size 0x30, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distancesq, addr 0xb05ba24, size 0xc, virtual false, abstract: false, final false
static inline float_t distancesq(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0xb05c9d8, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method dot, addr 0xb05a4e4, size 0x10, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method dot, addr 0xb05a4f4, size 0x18, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method dot, addr 0xb05a50c, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method down, addr 0xb05c448, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 down() ;

/// @brief Method f16tof32, addr 0xb05c318, size 0x58, virtual false, abstract: false, final false
static inline float_t f16tof32(uint32_t  x) ;

/// @brief Method f32tof16, addr 0xb05c370, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t f32tof16(float_t  x) ;

/// @brief Method float2, addr 0xb059440, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  x, float_t  y) ;

/// @brief Method float2x2, addr 0xb059478, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method float3, addr 0xb0594f0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  v) ;

/// @brief Method float3, addr 0xb0594e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, float_t  y, float_t  z) ;

/// @brief Method float3, addr 0xb0594e8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method float3, addr 0xb0594ec, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2  xy, float_t  z) ;

/// @brief Method float3x3, addr 0xb059544, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method float3x3, addr 0xb059574, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method float3x3, addr 0xb05c498, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method float4, addr 0xb0596cc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  v) ;

/// @brief Method float4, addr 0xb0596bc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0xb0596c0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0xb0596c4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0xb0596c8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3  xyz, float_t  w) ;

/// @brief Method float4x4, addr 0xb05973c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) ;

/// @brief Method float4x4, addr 0xb059768, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method floor, addr 0xb05aa10, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2  x) ;

/// @brief Method floor, addr 0xb05aaa0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3  x) ;

/// @brief Method floor, addr 0xb05ab6c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4  x) ;

/// @brief Method floor, addr 0xb05ac6c, size 0x5c, virtual false, abstract: false, final false
static inline double_t floor(double_t  x) ;

/// @brief Method floor, addr 0xb05a9b4, size 0x5c, virtual false, abstract: false, final false
static inline float_t floor(float_t  x) ;

/// @brief Method floorlog2, addr 0xb05c268, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(int32_t  x) ;

/// @brief Method forward, addr 0xb05c458, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward() ;

/// @brief Method frac, addr 0xb05b054, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2  x) ;

/// @brief Method frac, addr 0xb05affc, size 0x58, virtual false, abstract: false, final false
static inline float_t frac(float_t  x) ;

/// @brief Method hash, addr 0xb05d148, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hash, addr 0xb05920c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2  v) ;

/// @brief Method hash, addr 0xb059244, size 0x54, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3  v) ;

/// @brief Method hash, addr 0xb059298, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4  v) ;

/// @brief Method hash, addr 0xb0592e0, size 0x160, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hash, addr 0xb059444, size 0x34, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2  v) ;

/// @brief Method hash, addr 0xb05948c, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hash, addr 0xb0594fc, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3  v) ;

/// @brief Method hash, addr 0xb05961c, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hash, addr 0xb0596dc, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4  v) ;

/// @brief Method hash, addr 0xb059950, size 0x12c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hash, addr 0xb059a7c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half2  v) ;

/// @brief Method hash, addr 0xb059ab4, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half3  v) ;

/// @brief Method hash, addr 0xb059b00, size 0x68, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half4  v) ;

/// @brief Method hash, addr 0xb059b74, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2  v) ;

/// @brief Method hash, addr 0xb059ba4, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3  v) ;

/// @brief Method hash, addr 0xb059bfc, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4  v) ;

/// @brief Method hash, addr 0xb05d1b4, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2  v) ;

/// @brief Method hash, addr 0xb05d1f4, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3  v) ;

/// @brief Method hash, addr 0xb05d25c, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4  v) ;

/// @brief Method int2, addr 0xb059b68, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  x, int32_t  y) ;

/// @brief Method int4, addr 0xb059be4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method inverse, addr 0xb05c9a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion  q) ;

/// @brief Method isfinite, addr 0xb059d0c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3  x) ;

/// @brief Method isfinite, addr 0xb059cf4, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(float_t  x) ;

/// @brief Method isinf, addr 0xb059d48, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3  x) ;

/// @brief Method isnan, addr 0xb059d9c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3  x) ;

/// @brief Method isnan, addr 0xb059ddc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4  x) ;

/// @brief Method isnan, addr 0xb059d84, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(float_t  x) ;

/// @brief Method left, addr 0xb05c478, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 left() ;

/// @brief Method length, addr 0xb05b7dc, size 0x64, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float2  x) ;

/// @brief Method length, addr 0xb05b840, size 0x78, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float3  x) ;

/// @brief Method length, addr 0xb05b8b8, size 0x84, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float4  x) ;

/// @brief Method lengthsq, addr 0xb05c9f8, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::quaternion  q) ;

/// @brief Method lengthsq, addr 0xb05b944, size 0x10, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float2  x) ;

/// @brief Method lengthsq, addr 0xb05b954, size 0x18, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float3  x) ;

/// @brief Method lengthsq, addr 0xb05b96c, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float4  x) ;

/// @brief Method lengthsq, addr 0xb05b93c, size 0x8, virtual false, abstract: false, final false
static inline float_t lengthsq(float_t  x) ;

/// @brief Method lerp, addr 0xb05a100, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, float_t  t) ;

/// @brief Method lerp, addr 0xb05a11c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  t) ;

/// @brief Method lerp, addr 0xb05a144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, float_t  t) ;

/// @brief Method lerp, addr 0xb05a0f0, size 0x10, virtual false, abstract: false, final false
static inline float_t lerp(float_t  start, float_t  end, float_t  t) ;

/// @brief Method log, addr 0xb05b204, size 0x64, virtual false, abstract: false, final false
static inline float_t log(float_t  x) ;

/// @brief Method log2, addr 0xb05b2d4, size 0x64, virtual false, abstract: false, final false
static inline double_t log2(double_t  x) ;

/// @brief Method log2, addr 0xb05b268, size 0x6c, virtual false, abstract: false, final false
static inline float_t log2(float_t  x) ;

/// @brief Method lzcnt, addr 0xb05c024, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int32_t  x) ;

/// @brief Method lzcnt, addr 0xb05c060, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint32_t  x) ;

/// @brief Method max, addr 0xb05a008, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method max, addr 0xb05a038, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method max, addr 0xb05a07c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method max, addr 0xb059f8c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method max, addr 0xb059fac, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method max, addr 0xb05a0d4, size 0x1c, virtual false, abstract: false, final false
static inline double_t max(double_t  x, double_t  y) ;

/// @brief Method max, addr 0xb059fec, size 0x1c, virtual false, abstract: false, final false
static inline float_t max(float_t  x, float_t  y) ;

/// @brief Method max, addr 0xb059f80, size 0xc, virtual false, abstract: false, final false
static inline int32_t max(int32_t  x, int32_t  y) ;

/// @brief Method max, addr 0xb059fe0, size 0xc, virtual false, abstract: false, final false
static inline int64_t max(int64_t  x, int64_t  y) ;

/// @brief Method max, addr 0xb059fd4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t max(uint32_t  x, uint32_t  y) ;

/// @brief Method min, addr 0xb059e98, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method min, addr 0xb059ec8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method min, addr 0xb059f0c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method min, addr 0xb059e3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method min, addr 0xb059f64, size 0x1c, virtual false, abstract: false, final false
static inline double_t min(double_t  x, double_t  y) ;

/// @brief Method min, addr 0xb059e7c, size 0x1c, virtual false, abstract: false, final false
static inline float_t min(float_t  x, float_t  y) ;

/// @brief Method min, addr 0xb059e30, size 0xc, virtual false, abstract: false, final false
static inline int32_t min(int32_t  x, int32_t  y) ;

/// @brief Method min, addr 0xb059e70, size 0xc, virtual false, abstract: false, final false
static inline int64_t min(int64_t  x, int64_t  y) ;

/// @brief Method min, addr 0xb059e64, size 0xc, virtual false, abstract: false, final false
static inline uint32_t min(uint32_t  x, uint32_t  y) ;

/// @brief Method mul, addr 0xb05c588, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0xb05cb94, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method mul, addr 0xb05c5d0, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0xb05c6d4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0xb05c708, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0xb05cb20, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method nlerp, addr 0xb05cc8c, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method normalize, addr 0xb05b4f0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2  x) ;

/// @brief Method normalize, addr 0xb05b564, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3  x) ;

/// @brief Method normalize, addr 0xb05b5f0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4  x) ;

/// @brief Method normalizesafe, addr 0xb05b68c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0xb05b724, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0xb05ca18, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q) ;

/// @brief Method pow, addr 0xb05b194, size 0x70, virtual false, abstract: false, final false
static inline float_t pow(float_t  x, float_t  y) ;

/// @brief Method project, addr 0xb05beb4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB) ;

/// @brief Method quaternion, addr 0xb05c7b4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0xb05c7b0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4  value) ;

/// @brief Method quaternion, addr 0xb05c7ac, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method radians, addr 0xb05c2b0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3  x) ;

/// @brief Method radians, addr 0xb05c2a0, size 0x10, virtual false, abstract: false, final false
static inline float_t radians(float_t  x) ;

/// @brief Method rcp, addr 0xb05b0f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2  x) ;

/// @brief Method rcp, addr 0xb05b0ec, size 0xc, virtual false, abstract: false, final false
static inline float_t rcp(float_t  x) ;

/// @brief Method right, addr 0xb05c488, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 right() ;

/// @brief Method rotate, addr 0xb0597c8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method rotate, addr 0xb05cc10, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method round, addr 0xb05adec, size 0x210, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3  x) ;

/// @brief Method round, addr 0xb05ad24, size 0xc8, virtual false, abstract: false, final false
static inline float_t round(float_t  x) ;

/// @brief Method rsqrt, addr 0xb05b494, size 0x5c, virtual false, abstract: false, final false
static inline float_t rsqrt(float_t  x) ;

/// @brief Method saturate, addr 0xb05a37c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2  x) ;

/// @brief Method saturate, addr 0xb05a3bc, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3  x) ;

/// @brief Method saturate, addr 0xb05a42c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4  x) ;

/// @brief Method saturate, addr 0xb05a344, size 0x38, virtual false, abstract: false, final false
static inline float_t saturate(float_t  x) ;

/// @brief Method select, addr 0xb05bde8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, bool  test) ;

/// @brief Method select, addr 0xb05be24, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0xb05bdf8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, bool  test) ;

/// @brief Method select, addr 0xb05be40, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0xb05be0c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, bool  test) ;

/// @brief Method select, addr 0xb05bd80, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0xb05bd98, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0xb05bdbc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0xb05bd74, size 0xc, virtual false, abstract: false, final false
static inline uint32_t select(uint32_t  falseValue, uint32_t  trueValue, bool  test) ;

/// @brief Method sign, addr 0xb05b124, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3  x) ;

/// @brief Method sign, addr 0xb05b160, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4  x) ;

/// @brief Method sign, addr 0xb05b108, size 0x1c, virtual false, abstract: false, final false
static inline float_t sign(float_t  x) ;

/// @brief Method sin, addr 0xb05a8c0, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3  x) ;

/// @brief Method sin, addr 0xb05a85c, size 0x64, virtual false, abstract: false, final false
static inline float_t sin(float_t  x) ;

/// @brief Method sincos, addr 0xb05bfac, size 0x64, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float3  x, ::by_ref<::Unity::Mathematics::float3>  s, ::by_ref<::Unity::Mathematics::float3>  c) ;

/// @brief Method sincos, addr 0xb05bef0, size 0xbc, virtual false, abstract: false, final false
static inline void sincos(float_t  x, ::by_ref<float_t>  s, ::by_ref<float_t>  c) ;

/// @brief Method slerp, addr 0xb05cdfc, size 0x34c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method smoothstep, addr 0xb05bb1c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2  xMin, ::Unity::Mathematics::float2  xMax, ::Unity::Mathematics::float2  x) ;

/// @brief Method smoothstep, addr 0xb05bb84, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3  xMin, ::Unity::Mathematics::float3  xMax, ::Unity::Mathematics::float3  x) ;

/// @brief Method smoothstep, addr 0xb05bc48, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4  xMin, ::Unity::Mathematics::float4  xMax, ::Unity::Mathematics::float4  x) ;

/// @brief Method smoothstep, addr 0xb05bac4, size 0x58, virtual false, abstract: false, final false
static inline float_t smoothstep(float_t  xMin, float_t  xMax, float_t  x) ;

/// @brief Method sqrt, addr 0xb05b394, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method sqrt, addr 0xb05b338, size 0x5c, virtual false, abstract: false, final false
static inline float_t sqrt(float_t  x) ;

/// @brief Method step, addr 0xb05be64, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3  threshold, ::Unity::Mathematics::float3  x) ;

/// @brief Method step, addr 0xb05be88, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4  threshold, ::Unity::Mathematics::float4  x) ;

/// @brief Method tan, addr 0xb05a52c, size 0x64, virtual false, abstract: false, final false
static inline float_t tan(float_t  x) ;

/// @brief Method transform, addr 0xb059810, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method transpose, addr 0xb059598, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3  v) ;

/// @brief Method tzcnt, addr 0xb05c09c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(int32_t  x) ;

/// @brief Method tzcnt, addr 0xb05c0d8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint32_t  x) ;

/// @brief Method tzcnt, addr 0xb05c114, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint64_t  x) ;

/// @brief Method uint2, addr 0xb05d1a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  x, uint32_t  y) ;

/// @brief Method uint3, addr 0xb05d1e4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method uint4, addr 0xb05d24c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(int32_t  v) ;

/// @brief Method uint4, addr 0xb05d234, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

/// @brief Method unlerp, addr 0xb05a17c, size 0x10, virtual false, abstract: false, final false
static inline float_t unlerp(float_t  start, float_t  end, float_t  x) ;

/// @brief Method up, addr 0xb05c438, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 up() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr math() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
math(math && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
math(math const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
