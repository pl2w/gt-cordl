#pragma once
// IWYU pragma private; include "CjLib/MathUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MathUtil)
// Forward declare root types
namespace CjLib {
class MathUtil;
}
// Write type traits
MARK_REF_T(::CjLib::MathUtil*);
DEFINE_IL2CPP_CLASS(::CjLib::MathUtil*, "CjLib", "MathUtil");
// Dependencies System.Object
namespace CjLib {
// Is value type: false
// CS Name: CjLib.MathUtil
class CORDL_TYPE MathUtil : public ::System::Object {
public:
// Declarations
/// @brief Field Deg2Rad, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Deg2Rad, put=setStaticF_Deg2Rad)) float_t  Deg2Rad;

/// @brief Field Epsilon, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Epsilon, put=setStaticF_Epsilon)) float_t  Epsilon;

/// @brief Field EpsilonComp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EpsilonComp, put=setStaticF_EpsilonComp)) float_t  EpsilonComp;

/// @brief Field FifthPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FifthPi, put=setStaticF_FifthPi)) float_t  FifthPi;

/// @brief Field HalfPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HalfPi, put=setStaticF_HalfPi)) float_t  HalfPi;

/// @brief Field Pi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Pi, put=setStaticF_Pi)) float_t  Pi;

/// @brief Field QuarterPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_QuarterPi, put=setStaticF_QuarterPi)) float_t  QuarterPi;

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

/// @brief Field ThirdPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ThirdPi, put=setStaticF_ThirdPi)) float_t  ThirdPi;

/// @brief Field TwoPi, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TwoPi, put=setStaticF_TwoPi)) float_t  TwoPi;

/// @brief Method AcosSafe, addr 0x5e0c440, size 0x1c, virtual false, abstract: false, final false
static inline float_t AcosSafe(float_t  x) ;

/// @brief Method AsinSafe, addr 0x5e0c424, size 0x1c, virtual false, abstract: false, final false
static inline float_t AsinSafe(float_t  x) ;

/// @brief Method CatmullRom, addr 0x5e0c45c, size 0x6c, virtual false, abstract: false, final false
static inline float_t CatmullRom(float_t  p0, float_t  p1, float_t  p2, float_t  p3, float_t  t) ;

static inline ::CjLib::MathUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x5e0c4c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_Deg2Rad() ;

static inline float_t getStaticF_Epsilon() ;

static inline float_t getStaticF_EpsilonComp() ;

static inline float_t getStaticF_FifthPi() ;

static inline float_t getStaticF_HalfPi() ;

static inline float_t getStaticF_Pi() ;

static inline float_t getStaticF_QuarterPi() ;

static inline float_t getStaticF_Rad2Deg() ;

static inline float_t getStaticF_SixthPi() ;

static inline float_t getStaticF_Sqrt2() ;

static inline float_t getStaticF_Sqrt2Inv() ;

static inline float_t getStaticF_Sqrt3() ;

static inline float_t getStaticF_Sqrt3Inv() ;

static inline float_t getStaticF_ThirdPi() ;

static inline float_t getStaticF_TwoPi() ;

static inline void setStaticF_Deg2Rad(float_t  value) ;

static inline void setStaticF_Epsilon(float_t  value) ;

static inline void setStaticF_EpsilonComp(float_t  value) ;

static inline void setStaticF_FifthPi(float_t  value) ;

static inline void setStaticF_HalfPi(float_t  value) ;

static inline void setStaticF_Pi(float_t  value) ;

static inline void setStaticF_QuarterPi(float_t  value) ;

static inline void setStaticF_Rad2Deg(float_t  value) ;

static inline void setStaticF_SixthPi(float_t  value) ;

static inline void setStaticF_Sqrt2(float_t  value) ;

static inline void setStaticF_Sqrt2Inv(float_t  value) ;

static inline void setStaticF_Sqrt3(float_t  value) ;

static inline void setStaticF_Sqrt3Inv(float_t  value) ;

static inline void setStaticF_ThirdPi(float_t  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CjLib::MathUtil) == 0x10, "Size mismatch!");

} // namespace end def CjLib
