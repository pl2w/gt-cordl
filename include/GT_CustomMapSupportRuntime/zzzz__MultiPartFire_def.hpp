#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MultiPartFire.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiPartFire)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MultiPartFire;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MultiPartFire*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MultiPartFire*, "GT_CustomMapSupportRuntime", "MultiPartFire");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MultiPartFire
class CORDL_TYPE MultiPartFire : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field baseFire, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseFire, put=__cordl_internal_set_baseFire)) ::UnityW<::UnityEngine::Transform>  baseFire;

/// @brief Field baseMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseMultiplier, put=__cordl_internal_set_baseMultiplier)) float_t  baseMultiplier;

/// @brief Field bottomRange, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottomRange, put=__cordl_internal_set_bottomRange)) float_t  bottomRange;

/// @brief Field lastAngleBottom, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngleBottom, put=__cordl_internal_set_lastAngleBottom)) float_t  lastAngleBottom;

/// @brief Field lastAngleMiddle, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngleMiddle, put=__cordl_internal_set_lastAngleMiddle)) float_t  lastAngleMiddle;

/// @brief Field lastAngleTop, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngleTop, put=__cordl_internal_set_lastAngleTop)) float_t  lastAngleTop;

/// @brief Field lastTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field mergedBottom, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_mergedBottom, put=__cordl_internal_set_mergedBottom)) bool  mergedBottom;

/// @brief Field mergedMiddle, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_mergedMiddle, put=__cordl_internal_set_mergedMiddle)) bool  mergedMiddle;

/// @brief Field mergedTop, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_mergedTop, put=__cordl_internal_set_mergedTop)) bool  mergedTop;

/// @brief Field middleFire, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_middleFire, put=__cordl_internal_set_middleFire)) ::UnityW<::UnityEngine::Transform>  middleFire;

/// @brief Field middleMultiplier, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_middleMultiplier, put=__cordl_internal_set_middleMultiplier)) float_t  middleMultiplier;

/// @brief Field middleRange, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_middleRange, put=__cordl_internal_set_middleRange)) float_t  middleRange;

/// @brief Field perlinBottom, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinBottom, put=__cordl_internal_set_perlinBottom)) float_t  perlinBottom;

/// @brief Field perlinMiddle, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinMiddle, put=__cordl_internal_set_perlinMiddle)) float_t  perlinMiddle;

/// @brief Field perlinStepBottom, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinStepBottom, put=__cordl_internal_set_perlinStepBottom)) float_t  perlinStepBottom;

/// @brief Field perlinStepMiddle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinStepMiddle, put=__cordl_internal_set_perlinStepMiddle)) float_t  perlinStepMiddle;

/// @brief Field perlinStepTop, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinStepTop, put=__cordl_internal_set_perlinStepTop)) float_t  perlinStepTop;

/// @brief Field perlinTop, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinTop, put=__cordl_internal_set_perlinTop)) float_t  perlinTop;

/// @brief Field slerp, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slerp, put=__cordl_internal_set_slerp)) float_t  slerp;

/// @brief Field tempVec, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_tempVec, put=__cordl_internal_set_tempVec)) ::UnityEngine::Vector3  tempVec;

/// @brief Field topFire, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_topFire, put=__cordl_internal_set_topFire)) ::UnityW<::UnityEngine::Transform>  topFire;

/// @brief Field topMultiplier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_topMultiplier, put=__cordl_internal_set_topMultiplier)) float_t  topMultiplier;

/// @brief Field topRange, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_topRange, put=__cordl_internal_set_topRange)) float_t  topRange;

/// @brief Method Flap, addr 0x9cb7e88, size 0x210, virtual false, abstract: false, final false
inline void Flap(::by_ref<float_t>  perlinValue, float_t  perlinStep, ::by_ref<float_t>  lastAngle, ::by_ref<::UnityEngine::Transform*>  flameTransform, float_t  range, float_t  multiplier, ::by_ref<bool>  isMerged) ;

static inline ::GT_CustomMapSupportRuntime::MultiPartFire* New_ctor() ;

/// @brief Method Start, addr 0x9cb7d7c, size 0x88, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9cb7e04, size 0x84, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_baseFire() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_baseFire() ;

constexpr float_t const& __cordl_internal_get_baseMultiplier() const;

constexpr float_t& __cordl_internal_get_baseMultiplier() ;

constexpr float_t const& __cordl_internal_get_bottomRange() const;

constexpr float_t& __cordl_internal_get_bottomRange() ;

constexpr float_t const& __cordl_internal_get_lastAngleBottom() const;

constexpr float_t& __cordl_internal_get_lastAngleBottom() ;

constexpr float_t const& __cordl_internal_get_lastAngleMiddle() const;

constexpr float_t& __cordl_internal_get_lastAngleMiddle() ;

constexpr float_t const& __cordl_internal_get_lastAngleTop() const;

constexpr float_t& __cordl_internal_get_lastAngleTop() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr bool const& __cordl_internal_get_mergedBottom() const;

constexpr bool& __cordl_internal_get_mergedBottom() ;

constexpr bool const& __cordl_internal_get_mergedMiddle() const;

constexpr bool& __cordl_internal_get_mergedMiddle() ;

constexpr bool const& __cordl_internal_get_mergedTop() const;

constexpr bool& __cordl_internal_get_mergedTop() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_middleFire() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_middleFire() ;

constexpr float_t const& __cordl_internal_get_middleMultiplier() const;

constexpr float_t& __cordl_internal_get_middleMultiplier() ;

constexpr float_t const& __cordl_internal_get_middleRange() const;

constexpr float_t& __cordl_internal_get_middleRange() ;

constexpr float_t const& __cordl_internal_get_perlinBottom() const;

constexpr float_t& __cordl_internal_get_perlinBottom() ;

constexpr float_t const& __cordl_internal_get_perlinMiddle() const;

constexpr float_t& __cordl_internal_get_perlinMiddle() ;

constexpr float_t const& __cordl_internal_get_perlinStepBottom() const;

constexpr float_t& __cordl_internal_get_perlinStepBottom() ;

constexpr float_t const& __cordl_internal_get_perlinStepMiddle() const;

constexpr float_t& __cordl_internal_get_perlinStepMiddle() ;

constexpr float_t const& __cordl_internal_get_perlinStepTop() const;

constexpr float_t& __cordl_internal_get_perlinStepTop() ;

constexpr float_t const& __cordl_internal_get_perlinTop() const;

constexpr float_t& __cordl_internal_get_perlinTop() ;

constexpr float_t const& __cordl_internal_get_slerp() const;

constexpr float_t& __cordl_internal_get_slerp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tempVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tempVec() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_topFire() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_topFire() ;

constexpr float_t const& __cordl_internal_get_topMultiplier() const;

constexpr float_t& __cordl_internal_get_topMultiplier() ;

constexpr float_t const& __cordl_internal_get_topRange() const;

constexpr float_t& __cordl_internal_get_topRange() ;

constexpr void __cordl_internal_set_baseFire(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_baseMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_bottomRange(float_t  value) ;

constexpr void __cordl_internal_set_lastAngleBottom(float_t  value) ;

constexpr void __cordl_internal_set_lastAngleMiddle(float_t  value) ;

constexpr void __cordl_internal_set_lastAngleTop(float_t  value) ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_mergedBottom(bool  value) ;

constexpr void __cordl_internal_set_mergedMiddle(bool  value) ;

constexpr void __cordl_internal_set_mergedTop(bool  value) ;

constexpr void __cordl_internal_set_middleFire(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_middleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_middleRange(float_t  value) ;

constexpr void __cordl_internal_set_perlinBottom(float_t  value) ;

constexpr void __cordl_internal_set_perlinMiddle(float_t  value) ;

constexpr void __cordl_internal_set_perlinStepBottom(float_t  value) ;

constexpr void __cordl_internal_set_perlinStepMiddle(float_t  value) ;

constexpr void __cordl_internal_set_perlinStepTop(float_t  value) ;

constexpr void __cordl_internal_set_perlinTop(float_t  value) ;

constexpr void __cordl_internal_set_slerp(float_t  value) ;

constexpr void __cordl_internal_set_tempVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_topFire(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_topMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_topRange(float_t  value) ;

/// @brief Method .ctor, addr 0x9cb8098, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiPartFire() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiPartFire", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiPartFire(MultiPartFire && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiPartFire", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiPartFire(MultiPartFire const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30919};

/// @brief Field baseFire, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___baseFire;

/// @brief Field middleFire, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___middleFire;

/// @brief Field topFire, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___topFire;

/// @brief Field baseMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ___baseMultiplier;

/// @brief Field middleMultiplier, offset: 0x3c, size: 0x4, def value: None
 float_t  ___middleMultiplier;

/// @brief Field topMultiplier, offset: 0x40, size: 0x4, def value: None
 float_t  ___topMultiplier;

/// @brief Field bottomRange, offset: 0x44, size: 0x4, def value: None
 float_t  ___bottomRange;

/// @brief Field middleRange, offset: 0x48, size: 0x4, def value: None
 float_t  ___middleRange;

/// @brief Field topRange, offset: 0x4c, size: 0x4, def value: None
 float_t  ___topRange;

/// @brief Field perlinStepBottom, offset: 0x50, size: 0x4, def value: None
 float_t  ___perlinStepBottom;

/// @brief Field perlinStepMiddle, offset: 0x54, size: 0x4, def value: None
 float_t  ___perlinStepMiddle;

/// @brief Field perlinStepTop, offset: 0x58, size: 0x4, def value: None
 float_t  ___perlinStepTop;

/// @brief Field slerp, offset: 0x5c, size: 0x4, def value: None
 float_t  ___slerp;

/// @brief Field lastAngleBottom, offset: 0x60, size: 0x4, def value: None
 float_t  ___lastAngleBottom;

/// @brief Field lastAngleMiddle, offset: 0x64, size: 0x4, def value: None
 float_t  ___lastAngleMiddle;

/// @brief Field lastAngleTop, offset: 0x68, size: 0x4, def value: None
 float_t  ___lastAngleTop;

/// @brief Field perlinBottom, offset: 0x6c, size: 0x4, def value: None
 float_t  ___perlinBottom;

/// @brief Field perlinMiddle, offset: 0x70, size: 0x4, def value: None
 float_t  ___perlinMiddle;

/// @brief Field perlinTop, offset: 0x74, size: 0x4, def value: None
 float_t  ___perlinTop;

/// @brief Field mergedBottom, offset: 0x78, size: 0x1, def value: None
 bool  ___mergedBottom;

/// @brief Field mergedMiddle, offset: 0x79, size: 0x1, def value: None
 bool  ___mergedMiddle;

/// @brief Field mergedTop, offset: 0x7a, size: 0x1, def value: None
 bool  ___mergedTop;

/// @brief Field tempVec, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tempVec;

/// @brief Field lastTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___lastTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___baseFire) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___middleFire) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___topFire) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___baseMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___middleMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___topMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___bottomRange) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___middleRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___topRange) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___perlinStepBottom) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___perlinStepMiddle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___perlinStepTop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___slerp) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___lastAngleBottom) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___lastAngleMiddle) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___lastAngleTop) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___perlinBottom) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___perlinMiddle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___perlinTop) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___mergedBottom) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___mergedMiddle) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___mergedTop) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___tempVec) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MultiPartFire, ___lastTime) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MultiPartFire) == 0x90, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
