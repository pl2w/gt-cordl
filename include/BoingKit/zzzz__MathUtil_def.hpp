#pragma once
// IWYU pragma private; include "BoingKit/MathUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtil)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace BoingKit {
class MathUtil;
}
// Write type traits
MARK_REF_T(::BoingKit::MathUtil*);
DEFINE_IL2CPP_CLASS(::BoingKit::MathUtil*, "BoingKit", "MathUtil");
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.MathUtil
class CORDL_TYPE MathUtil : public ::System::Object {
public:
// Declarations
/// @brief Field Deg2Rad, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Deg2Rad, put=setStaticF_Deg2Rad)) float_t  Deg2Rad;

/// @brief Field Epsilon, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Epsilon, put=setStaticF_Epsilon)) float_t  Epsilon;

/// @brief Field HalfPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HalfPi, put=setStaticF_HalfPi)) float_t  HalfPi;

/// @brief Field Pi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Pi, put=setStaticF_Pi)) float_t  Pi;

/// @brief Field QuaterPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_QuaterPi, put=setStaticF_QuaterPi)) float_t  QuaterPi;

/// @brief Field Rad2Deg, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Rad2Deg, put=setStaticF_Rad2Deg)) float_t  Rad2Deg;

/// @brief Field SixthPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SixthPi, put=setStaticF_SixthPi)) float_t  SixthPi;

/// @brief Field Sqrt2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Sqrt2, put=setStaticF_Sqrt2)) float_t  Sqrt2;

/// @brief Field Sqrt2Inv, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Sqrt2Inv, put=setStaticF_Sqrt2Inv)) float_t  Sqrt2Inv;

/// @brief Field Sqrt3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Sqrt3, put=setStaticF_Sqrt3)) float_t  Sqrt3;

/// @brief Field Sqrt3Inv, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Sqrt3Inv, put=setStaticF_Sqrt3Inv)) float_t  Sqrt3Inv;

/// @brief Field TwoPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TwoPi, put=setStaticF_TwoPi)) float_t  TwoPi;

/// @brief Method AcosSafe, addr 0x5e2bb24, size 0x1c, virtual false, abstract: false, final false
static inline float_t AcosSafe(float_t  x) ;

/// @brief Method AsinSafe, addr 0x5e2bb08, size 0x1c, virtual false, abstract: false, final false
static inline float_t AsinSafe(float_t  x) ;

/// @brief Method InvSafe, addr 0x5e248cc, size 0x74, virtual false, abstract: false, final false
static inline float_t InvSafe(float_t  x) ;

/// @brief Method Modulo, addr 0x5e2becc, size 0x28, virtual false, abstract: false, final false
static inline float_t Modulo(float_t  a, float_t  b) ;

/// @brief Method Modulo, addr 0x5e2bef4, size 0x14, virtual false, abstract: false, final false
static inline int32_t Modulo(int32_t  a, int32_t  b) ;

static inline ::BoingKit::MathUtil* New_ctor() ;

/// @brief Method PointLineDist, addr 0x5e2bb40, size 0xa8, virtual false, abstract: false, final false
static inline float_t PointLineDist(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  linePos, ::UnityEngine::Vector2  lineDir) ;

/// @brief Method PointSegmentDist, addr 0x5e2bbe8, size 0x124, virtual false, abstract: false, final false
static inline float_t PointSegmentDist(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  segmentPosA, ::UnityEngine::Vector2  segmentPosB) ;

/// @brief Method Remainder, addr 0x5e2beb0, size 0x10, virtual false, abstract: false, final false
static inline float_t Remainder(float_t  a, float_t  b) ;

/// @brief Method Remainder, addr 0x5e2bec0, size 0xc, virtual false, abstract: false, final false
static inline int32_t Remainder(int32_t  a, int32_t  b) ;

/// @brief Method Seek, addr 0x5e2bd30, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Seek(::UnityEngine::Vector2  current, ::UnityEngine::Vector2  target, float_t  maxDelta) ;

/// @brief Method Seek, addr 0x5e2bd0c, size 0x24, virtual false, abstract: false, final false
static inline float_t Seek(float_t  current, float_t  target, float_t  maxDelta) ;

/// @brief Method .ctor, addr 0x5e2bf08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_Deg2Rad() ;

static inline float_t getStaticF_Epsilon() ;

static inline float_t getStaticF_HalfPi() ;

static inline float_t getStaticF_Pi() ;

static inline float_t getStaticF_QuaterPi() ;

static inline float_t getStaticF_Rad2Deg() ;

static inline float_t getStaticF_SixthPi() ;

static inline float_t getStaticF_Sqrt2() ;

static inline float_t getStaticF_Sqrt2Inv() ;

static inline float_t getStaticF_Sqrt3() ;

static inline float_t getStaticF_Sqrt3Inv() ;

static inline float_t getStaticF_TwoPi() ;

static inline void setStaticF_Deg2Rad(float_t  value) ;

static inline void setStaticF_Epsilon(float_t  value) ;

static inline void setStaticF_HalfPi(float_t  value) ;

static inline void setStaticF_Pi(float_t  value) ;

static inline void setStaticF_QuaterPi(float_t  value) ;

static inline void setStaticF_Rad2Deg(float_t  value) ;

static inline void setStaticF_SixthPi(float_t  value) ;

static inline void setStaticF_Sqrt2(float_t  value) ;

static inline void setStaticF_Sqrt2Inv(float_t  value) ;

static inline void setStaticF_Sqrt3(float_t  value) ;

static inline void setStaticF_Sqrt3Inv(float_t  value) ;

static inline void setStaticF_TwoPi(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtil(MathUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtil(MathUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::MathUtil) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
