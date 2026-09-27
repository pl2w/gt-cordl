#pragma once
// IWYU pragma private; include "GlobalNamespace/Campfire.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Campfire)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Campfire;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Campfire*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Campfire*, "", "Campfire");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Campfire
class CORDL_TYPE Campfire : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field baseFire, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseFire, put=__cordl_internal_set_baseFire)) ::UnityW<::UnityEngine::Transform>  baseFire;

/// @brief Field baseMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseMultiplier, put=__cordl_internal_set_baseMultiplier)) float_t  baseMultiplier;

/// @brief Field bottomRange, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottomRange, put=__cordl_internal_set_bottomRange)) float_t  bottomRange;

/// @brief Field h, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_h, put=__cordl_internal_set_h)) float_t  h;

/// @brief Field isActive, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) ::ArrayW<bool>  isActive;

/// @brief Field lastAngleBottom, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngleBottom, put=__cordl_internal_set_lastAngleBottom)) float_t  lastAngleBottom;

/// @brief Field lastAngleMiddle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngleMiddle, put=__cordl_internal_set_lastAngleMiddle)) float_t  lastAngleMiddle;

/// @brief Field lastAngleTop, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngleTop, put=__cordl_internal_set_lastAngleTop)) float_t  lastAngleTop;

/// @brief Field lastTime, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field lastTimeOfDay, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTimeOfDay, put=__cordl_internal_set_lastTimeOfDay)) ::StringW  lastTimeOfDay;

/// @brief Field mat, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_mat, put=__cordl_internal_set_mat)) ::UnityW<::UnityEngine::Material>  mat;

/// @brief Field mergedBottom, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_mergedBottom, put=__cordl_internal_set_mergedBottom)) bool  mergedBottom;

/// @brief Field mergedMiddle, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get_mergedMiddle, put=__cordl_internal_set_mergedMiddle)) bool  mergedMiddle;

/// @brief Field mergedTop, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get_mergedTop, put=__cordl_internal_set_mergedTop)) bool  mergedTop;

/// @brief Field middleFire, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_middleFire, put=__cordl_internal_set_middleFire)) ::UnityW<::UnityEngine::Transform>  middleFire;

/// @brief Field middleMultiplier, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_middleMultiplier, put=__cordl_internal_set_middleMultiplier)) float_t  middleMultiplier;

/// @brief Field middleRange, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_middleRange, put=__cordl_internal_set_middleRange)) float_t  middleRange;

/// @brief Field overrideDayNight, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideDayNight, put=__cordl_internal_set_overrideDayNight)) int32_t  overrideDayNight;

/// @brief Field perlinBottom, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinBottom, put=__cordl_internal_set_perlinBottom)) float_t  perlinBottom;

/// @brief Field perlinMiddle, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinMiddle, put=__cordl_internal_set_perlinMiddle)) float_t  perlinMiddle;

/// @brief Field perlinStepBottom, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinStepBottom, put=__cordl_internal_set_perlinStepBottom)) float_t  perlinStepBottom;

/// @brief Field perlinStepMiddle, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinStepMiddle, put=__cordl_internal_set_perlinStepMiddle)) float_t  perlinStepMiddle;

/// @brief Field perlinStepTop, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinStepTop, put=__cordl_internal_set_perlinStepTop)) float_t  perlinStepTop;

/// @brief Field perlinTop, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinTop, put=__cordl_internal_set_perlinTop)) float_t  perlinTop;

/// @brief Field playDuringRain, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_playDuringRain, put=__cordl_internal_set_playDuringRain)) bool  playDuringRain;

/// @brief Field s, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_s, put=__cordl_internal_set_s)) float_t  s;

/// @brief Field slerp, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_slerp, put=__cordl_internal_set_slerp)) float_t  slerp;

/// @brief Field startingRotationBottom, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingRotationBottom, put=__cordl_internal_set_startingRotationBottom)) float_t  startingRotationBottom;

/// @brief Field startingRotationMiddle, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingRotationMiddle, put=__cordl_internal_set_startingRotationMiddle)) float_t  startingRotationMiddle;

/// @brief Field startingRotationTop, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingRotationTop, put=__cordl_internal_set_startingRotationTop)) float_t  startingRotationTop;

/// @brief Field tempVec, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_tempVec, put=__cordl_internal_set_tempVec)) ::UnityEngine::Vector3  tempVec;

/// @brief Field topFire, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_topFire, put=__cordl_internal_set_topFire)) ::UnityW<::UnityEngine::Transform>  topFire;

/// @brief Field topMultiplier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_topMultiplier, put=__cordl_internal_set_topMultiplier)) float_t  topMultiplier;

/// @brief Field topRange, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_topRange, put=__cordl_internal_set_topRange)) float_t  topRange;

/// @brief Field v, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_v, put=__cordl_internal_set_v)) float_t  v;

/// @brief Field wasActive, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasActive, put=__cordl_internal_set_wasActive)) bool  wasActive;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Flap, addr 0x57e30f0, size 0x194, virtual false, abstract: false, final false
inline void Flap(::by_ref<float_t>  perlinValue, float_t  perlinStep, ::by_ref<float_t>  lastAngle, ::by_ref<::UnityEngine::Transform*>  flameTransform, float_t  range, float_t  multiplier, ::by_ref<bool>  isMerged) ;

static inline ::GlobalNamespace::Campfire* New_ctor() ;

/// @brief Method OnDisable, addr 0x57e2e2c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57e2e20, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReturnToOff, addr 0x57e3284, size 0x12c, virtual false, abstract: false, final false
inline void ReturnToOff(::by_ref<::UnityEngine::Transform*>  startTransform, float_t  targetAngle, ::by_ref<bool>  isMerged) ;

/// @brief Method SliceUpdate, addr 0x57e2e38, size 0x2b8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x57e2d60, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_baseFire() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_baseFire() ;

constexpr float_t const& __cordl_internal_get_baseMultiplier() const;

constexpr float_t& __cordl_internal_get_baseMultiplier() ;

constexpr float_t const& __cordl_internal_get_bottomRange() const;

constexpr float_t& __cordl_internal_get_bottomRange() ;

constexpr float_t const& __cordl_internal_get_h() const;

constexpr float_t& __cordl_internal_get_h() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_isActive() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_isActive() ;

constexpr float_t const& __cordl_internal_get_lastAngleBottom() const;

constexpr float_t& __cordl_internal_get_lastAngleBottom() ;

constexpr float_t const& __cordl_internal_get_lastAngleMiddle() const;

constexpr float_t& __cordl_internal_get_lastAngleMiddle() ;

constexpr float_t const& __cordl_internal_get_lastAngleTop() const;

constexpr float_t& __cordl_internal_get_lastAngleTop() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr ::StringW const& __cordl_internal_get_lastTimeOfDay() const;

constexpr ::StringW& __cordl_internal_get_lastTimeOfDay() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mat() ;

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

constexpr int32_t const& __cordl_internal_get_overrideDayNight() const;

constexpr int32_t& __cordl_internal_get_overrideDayNight() ;

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

constexpr bool const& __cordl_internal_get_playDuringRain() const;

constexpr bool& __cordl_internal_get_playDuringRain() ;

constexpr float_t const& __cordl_internal_get_s() const;

constexpr float_t& __cordl_internal_get_s() ;

constexpr float_t const& __cordl_internal_get_slerp() const;

constexpr float_t& __cordl_internal_get_slerp() ;

constexpr float_t const& __cordl_internal_get_startingRotationBottom() const;

constexpr float_t& __cordl_internal_get_startingRotationBottom() ;

constexpr float_t const& __cordl_internal_get_startingRotationMiddle() const;

constexpr float_t& __cordl_internal_get_startingRotationMiddle() ;

constexpr float_t const& __cordl_internal_get_startingRotationTop() const;

constexpr float_t& __cordl_internal_get_startingRotationTop() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tempVec() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tempVec() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_topFire() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_topFire() ;

constexpr float_t const& __cordl_internal_get_topMultiplier() const;

constexpr float_t& __cordl_internal_get_topMultiplier() ;

constexpr float_t const& __cordl_internal_get_topRange() const;

constexpr float_t& __cordl_internal_get_topRange() ;

constexpr float_t const& __cordl_internal_get_v() const;

constexpr float_t& __cordl_internal_get_v() ;

constexpr bool const& __cordl_internal_get_wasActive() const;

constexpr bool& __cordl_internal_get_wasActive() ;

constexpr void __cordl_internal_set_baseFire(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_baseMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_bottomRange(float_t  value) ;

constexpr void __cordl_internal_set_h(float_t  value) ;

constexpr void __cordl_internal_set_isActive(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_lastAngleBottom(float_t  value) ;

constexpr void __cordl_internal_set_lastAngleMiddle(float_t  value) ;

constexpr void __cordl_internal_set_lastAngleTop(float_t  value) ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_lastTimeOfDay(::StringW  value) ;

constexpr void __cordl_internal_set_mat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_mergedBottom(bool  value) ;

constexpr void __cordl_internal_set_mergedMiddle(bool  value) ;

constexpr void __cordl_internal_set_mergedTop(bool  value) ;

constexpr void __cordl_internal_set_middleFire(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_middleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_middleRange(float_t  value) ;

constexpr void __cordl_internal_set_overrideDayNight(int32_t  value) ;

constexpr void __cordl_internal_set_perlinBottom(float_t  value) ;

constexpr void __cordl_internal_set_perlinMiddle(float_t  value) ;

constexpr void __cordl_internal_set_perlinStepBottom(float_t  value) ;

constexpr void __cordl_internal_set_perlinStepMiddle(float_t  value) ;

constexpr void __cordl_internal_set_perlinStepTop(float_t  value) ;

constexpr void __cordl_internal_set_perlinTop(float_t  value) ;

constexpr void __cordl_internal_set_playDuringRain(bool  value) ;

constexpr void __cordl_internal_set_s(float_t  value) ;

constexpr void __cordl_internal_set_slerp(float_t  value) ;

constexpr void __cordl_internal_set_startingRotationBottom(float_t  value) ;

constexpr void __cordl_internal_set_startingRotationMiddle(float_t  value) ;

constexpr void __cordl_internal_set_startingRotationTop(float_t  value) ;

constexpr void __cordl_internal_set_tempVec(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_topFire(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_topMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_topRange(float_t  value) ;

constexpr void __cordl_internal_set_v(float_t  value) ;

constexpr void __cordl_internal_set_wasActive(bool  value) ;

/// @brief Method .ctor, addr 0x57e33b0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Campfire() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Campfire", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Campfire(Campfire && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Campfire", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Campfire(Campfire const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1650};

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

/// @brief Field lastAngleBottom, offset: 0x50, size: 0x4, def value: None
 float_t  ___lastAngleBottom;

/// @brief Field lastAngleMiddle, offset: 0x54, size: 0x4, def value: None
 float_t  ___lastAngleMiddle;

/// @brief Field lastAngleTop, offset: 0x58, size: 0x4, def value: None
 float_t  ___lastAngleTop;

/// @brief Field perlinStepBottom, offset: 0x5c, size: 0x4, def value: None
 float_t  ___perlinStepBottom;

/// @brief Field perlinStepMiddle, offset: 0x60, size: 0x4, def value: None
 float_t  ___perlinStepMiddle;

/// @brief Field perlinStepTop, offset: 0x64, size: 0x4, def value: None
 float_t  ___perlinStepTop;

/// @brief Field perlinBottom, offset: 0x68, size: 0x4, def value: None
 float_t  ___perlinBottom;

/// @brief Field perlinMiddle, offset: 0x6c, size: 0x4, def value: None
 float_t  ___perlinMiddle;

/// @brief Field perlinTop, offset: 0x70, size: 0x4, def value: None
 float_t  ___perlinTop;

/// @brief Field startingRotationBottom, offset: 0x74, size: 0x4, def value: None
 float_t  ___startingRotationBottom;

/// @brief Field startingRotationMiddle, offset: 0x78, size: 0x4, def value: None
 float_t  ___startingRotationMiddle;

/// @brief Field startingRotationTop, offset: 0x7c, size: 0x4, def value: None
 float_t  ___startingRotationTop;

/// @brief Field slerp, offset: 0x80, size: 0x4, def value: None
 float_t  ___slerp;

/// @brief Field mergedBottom, offset: 0x84, size: 0x1, def value: None
 bool  ___mergedBottom;

/// @brief Field mergedMiddle, offset: 0x85, size: 0x1, def value: None
 bool  ___mergedMiddle;

/// @brief Field mergedTop, offset: 0x86, size: 0x1, def value: None
 bool  ___mergedTop;

/// @brief Field lastTimeOfDay, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___lastTimeOfDay;

/// @brief Field mat, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mat;

/// @brief Field h, offset: 0x98, size: 0x4, def value: None
 float_t  ___h;

/// @brief Field s, offset: 0x9c, size: 0x4, def value: None
 float_t  ___s;

/// @brief Field v, offset: 0xa0, size: 0x4, def value: None
 float_t  ___v;

/// @brief Field overrideDayNight, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___overrideDayNight;

/// @brief Field tempVec, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tempVec;

/// @brief Field isActive, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<bool>  ___isActive;

/// @brief Field wasActive, offset: 0xc0, size: 0x1, def value: None
 bool  ___wasActive;

/// @brief Field lastTime, offset: 0xc4, size: 0x4, def value: None
 float_t  ___lastTime;

/// @brief Field playDuringRain, offset: 0xc8, size: 0x1, def value: None
 bool  ___playDuringRain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Campfire, ___baseFire) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___middleFire) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___topFire) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___baseMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___middleMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___topMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___bottomRange) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___middleRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___topRange) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___lastAngleBottom) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___lastAngleMiddle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___lastAngleTop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___perlinStepBottom) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___perlinStepMiddle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___perlinStepTop) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___perlinBottom) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___perlinMiddle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___perlinTop) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___startingRotationBottom) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___startingRotationMiddle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___startingRotationTop) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___slerp) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___mergedBottom) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___mergedMiddle) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___mergedTop) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___lastTimeOfDay) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___mat) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___h) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___s) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___v) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___overrideDayNight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___tempVec) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___isActive) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___wasActive) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___lastTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Campfire, ___playDuringRain) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Campfire) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
