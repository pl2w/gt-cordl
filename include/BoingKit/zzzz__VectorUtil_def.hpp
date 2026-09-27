#pragma once
// IWYU pragma private; include "BoingKit/VectorUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VectorUtil)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace BoingKit {
class VectorUtil;
}
// Write type traits
MARK_REF_T(::BoingKit::VectorUtil*);
DEFINE_IL2CPP_CLASS(::BoingKit::VectorUtil*, "BoingKit", "VectorUtil");
// Dependencies System.Object, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.VectorUtil
class CORDL_TYPE VectorUtil : public ::System::Object {
public:
// Declarations
/// @brief Field Max, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_Max, put=setStaticF_Max)) ::UnityEngine::Vector3  Max;

/// @brief Field Min, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_Min, put=setStaticF_Min)) ::UnityEngine::Vector3  Min;

/// @brief Method ClampBend, addr 0x5e245bc, size 0x310, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClampBend(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  reference, float_t  maxBendAngle) ;

/// @brief Method ClampLength, addr 0x5e249fc, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClampLength(::UnityEngine::Vector3  v, float_t  minLen, float_t  maxLen) ;

/// @brief Method ComponentWiseAbs, addr 0x5e2e7fc, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComponentWiseAbs(::UnityEngine::Vector3  v) ;

/// @brief Method ComponentWiseDiv, addr 0x5e2e80c, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComponentWiseDiv(::UnityEngine::Vector3  num, ::UnityEngine::Vector3  den) ;

/// @brief Method ComponentWiseDivSafe, addr 0x5e24940, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComponentWiseDivSafe(::UnityEngine::Vector3  num, ::UnityEngine::Vector3  den) ;

/// @brief Method ComponentWiseMult, addr 0x5e249ec, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComponentWiseMult(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method FindOrthogonal, addr 0x5e260dc, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FindOrthogonal(::UnityEngine::Vector3  v) ;

/// @brief Method FormOrthogonalBasis, addr 0x5e2dfac, size 0xbc, virtual false, abstract: false, final false
static inline void FormOrthogonalBasis(::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b) ;

/// @brief Method GetClosestPointOnSegment, addr 0x5e25ecc, size 0x210, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetClosestPointOnSegment(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  segA, ::UnityEngine::Vector3  segB) ;

/// @brief Method MaxComponent, addr 0x5e2e7e8, size 0x14, virtual false, abstract: false, final false
static inline float_t MaxComponent(::UnityEngine::Vector3  v) ;

/// @brief Method MinComponent, addr 0x5e25ca4, size 0x14, virtual false, abstract: false, final false
static inline float_t MinComponent(::UnityEngine::Vector3  v) ;

static inline ::BoingKit::VectorUtil* New_ctor() ;

/// @brief Method NormalizeSafe, addr 0x5e24450, size 0x16c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 NormalizeSafe(::UnityEngine::Vector4  v, ::UnityEngine::Vector4  fallback) ;

/// @brief Method Rotate2D, addr 0x5e2df4c, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Rotate2D(::UnityEngine::Vector3  v, float_t  angle) ;

/// @brief Method Slerp, addr 0x5e2e068, size 0x1e4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method TriLerp, addr 0x5e2e4e8, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TriLerp(::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz) ;

/// @brief Method TriLerp, addr 0x5e2e374, size 0x174, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TriLerp(::by_ref<::UnityEngine::Vector3>  v000, ::by_ref<::UnityEngine::Vector3>  v001, ::by_ref<::UnityEngine::Vector3>  v010, ::by_ref<::UnityEngine::Vector3>  v011, ::by_ref<::UnityEngine::Vector3>  v100, ::by_ref<::UnityEngine::Vector3>  v101, ::by_ref<::UnityEngine::Vector3>  v110, ::by_ref<::UnityEngine::Vector3>  v111, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz) ;

/// @brief Method TriLerp, addr 0x5e2e24c, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TriLerp(::by_ref<::UnityEngine::Vector3>  v000, ::by_ref<::UnityEngine::Vector3>  v001, ::by_ref<::UnityEngine::Vector3>  v010, ::by_ref<::UnityEngine::Vector3>  v011, ::by_ref<::UnityEngine::Vector3>  v100, ::by_ref<::UnityEngine::Vector3>  v101, ::by_ref<::UnityEngine::Vector3>  v110, ::by_ref<::UnityEngine::Vector3>  v111, float_t  tx, float_t  ty, float_t  tz) ;

/// @brief Method TriLerp, addr 0x5e2e6c8, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 TriLerp(::by_ref<::UnityEngine::Vector4>  min, ::by_ref<::UnityEngine::Vector4>  max, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz) ;

/// @brief Method TriLerp, addr 0x5e2e5d0, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 TriLerp(::by_ref<::UnityEngine::Vector4>  v000, ::by_ref<::UnityEngine::Vector4>  v001, ::by_ref<::UnityEngine::Vector4>  v010, ::by_ref<::UnityEngine::Vector4>  v011, ::by_ref<::UnityEngine::Vector4>  v100, ::by_ref<::UnityEngine::Vector4>  v101, ::by_ref<::UnityEngine::Vector4>  v110, ::by_ref<::UnityEngine::Vector4>  v111, bool  lerpX, bool  lerpY, bool  lerpZ, float_t  tx, float_t  ty, float_t  tz) ;

/// @brief Method .ctor, addr 0x5e2e81c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_Max() ;

static inline ::UnityEngine::Vector3 getStaticF_Min() ;

static inline void setStaticF_Max(::UnityEngine::Vector3  value) ;

static inline void setStaticF_Min(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorUtil(VectorUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorUtil(VectorUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::VectorUtil) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
