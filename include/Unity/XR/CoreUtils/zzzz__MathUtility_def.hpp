#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/MathUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtility)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class MathUtility;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::MathUtility*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::MathUtility*, "Unity.XR.CoreUtils", "MathUtility");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.MathUtility
class CORDL_TYPE MathUtility : public ::System::Object {
public:
// Declarations
/// @brief Field EpsilonScaled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EpsilonScaled, put=setStaticF_EpsilonScaled)) float_t  EpsilonScaled;

/// @brief Method Approximately, addr 0xb3f85d8, size 0x80, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method ApproximatelyZero, addr 0xb3f8658, size 0x78, virtual false, abstract: false, final false
static inline bool ApproximatelyZero(float_t  a) ;

/// @brief Method Clamp, addr 0xb3f86d0, size 0x20, virtual false, abstract: false, final false
static inline double_t Clamp(double_t  input, double_t  min, double_t  max) ;

/// @brief Method FirstActiveFlagIndex, addr 0xb3f89d4, size 0x28, virtual false, abstract: false, final false
static inline int32_t FirstActiveFlagIndex(int32_t  value) ;

/// [Extension]
/// @brief Method IsAxisAligned, addr 0xb3f8844, size 0x17c, virtual false, abstract: false, final false
static inline bool IsAxisAligned(::UnityEngine::Vector3  v) ;

/// @brief Method IsPositivePowerOfTwo, addr 0xb3f89c0, size 0x14, virtual false, abstract: false, final false
static inline bool IsPositivePowerOfTwo(int32_t  value) ;

/// [Extension]
/// @brief Method IsUndefined, addr 0xb3f8830, size 0x14, virtual false, abstract: false, final false
static inline bool IsUndefined(float_t  value) ;

/// @brief Method ShortestAngleDistance, addr 0xb3f86f0, size 0xa0, virtual false, abstract: false, final false
static inline double_t ShortestAngleDistance(double_t  start, double_t  end, double_t  halfMax, double_t  max) ;

/// @brief Method ShortestAngleDistance, addr 0xb3f8790, size 0xa0, virtual false, abstract: false, final false
static inline float_t ShortestAngleDistance(float_t  start, float_t  end, float_t  halfMax, float_t  max) ;

static inline float_t getStaticF_EpsilonScaled() ;

static inline void setStaticF_EpsilonScaled(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtility(MathUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtility(MathUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30421};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::MathUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
