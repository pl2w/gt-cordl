#pragma once
// IWYU pragma private; include "BoingKit/BoingBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingBase_def.hpp"
#include "BoingKit/zzzz__BoingManager_TranslationLockSpace_def.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoingBehavior)
namespace BoingKit {
struct QuaternionSpring;
}
namespace BoingKit {
class SharedBoingParams;
}
namespace BoingKit {
struct Vector3Spring;
}
namespace GlobalNamespace {
struct BoingWork_Output;
}
namespace GlobalNamespace {
struct BoingWork_Params;
}
// Forward declare root types
namespace BoingKit {
class BoingBehavior;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingBehavior*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBehavior*, "BoingKit", "BoingBehavior");
// Dependencies BoingKit.BoingBase, BoingKit.BoingManager::TranslationLockSpace, BoingKit.BoingManager::UpdateMode, BoingKit.BoingWork::Params, UnityEngine.Quaternion, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBehavior
class CORDL_TYPE BoingBehavior : public ::BoingKit::BoingBase {
public:
// Declarations
/// @brief Field CachedPositionLs, offset 0x1c4, size 0xc 
 __declspec(property(get=__cordl_internal_get_CachedPositionLs, put=__cordl_internal_set_CachedPositionLs)) ::UnityEngine::Vector3  CachedPositionLs;

/// @brief Field CachedPositionWs, offset 0x1d0, size 0xc 
 __declspec(property(get=__cordl_internal_get_CachedPositionWs, put=__cordl_internal_set_CachedPositionWs)) ::UnityEngine::Vector3  CachedPositionWs;

/// @brief Field CachedRotationLs, offset 0x1e8, size 0x10 
 __declspec(property(get=__cordl_internal_get_CachedRotationLs, put=__cordl_internal_set_CachedRotationLs)) ::UnityEngine::Quaternion  CachedRotationLs;

/// @brief Field CachedRotationWs, offset 0x1f8, size 0x10 
 __declspec(property(get=__cordl_internal_get_CachedRotationWs, put=__cordl_internal_set_CachedRotationWs)) ::UnityEngine::Quaternion  CachedRotationWs;

/// @brief Field CachedScaleLs, offset 0x218, size 0xc 
 __declspec(property(get=__cordl_internal_get_CachedScaleLs, put=__cordl_internal_set_CachedScaleLs)) ::UnityEngine::Vector3  CachedScaleLs;

/// @brief Field CachedTransformValid, offset 0x1c3, size 0x1 
 __declspec(property(get=__cordl_internal_get_CachedTransformValid, put=__cordl_internal_set_CachedTransformValid)) bool  CachedTransformValid;

/// @brief Field EnablePositionEffect, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnablePositionEffect, put=__cordl_internal_set_EnablePositionEffect)) bool  EnablePositionEffect;

/// @brief Field EnableRotationEffect, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableRotationEffect, put=__cordl_internal_set_EnableRotationEffect)) bool  EnableRotationEffect;

/// @brief Field EnableScaleEffect, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableScaleEffect, put=__cordl_internal_set_EnableScaleEffect)) bool  EnableScaleEffect;

/// @brief Field GlobalReactionUpVector, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_GlobalReactionUpVector, put=__cordl_internal_set_GlobalReactionUpVector)) bool  GlobalReactionUpVector;

/// @brief Field InitRebooted, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get_InitRebooted, put=__cordl_internal_set_InitRebooted)) bool  InitRebooted;

/// @brief Field LockTranslationX, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_LockTranslationX, put=__cordl_internal_set_LockTranslationX)) bool  LockTranslationX;

/// @brief Field LockTranslationY, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_LockTranslationY, put=__cordl_internal_set_LockTranslationY)) bool  LockTranslationY;

/// @brief Field LockTranslationZ, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_LockTranslationZ, put=__cordl_internal_set_LockTranslationZ)) bool  LockTranslationZ;

/// @brief Field Params, offset 0x58, size 0x160 
 __declspec(property(get=__cordl_internal_get_Params, put=__cordl_internal_set_Params)) ::GlobalNamespace::BoingWork_Params  Params;

 __declspec(property(get=get_PositionSpring, put=set_PositionSpring)) ::BoingKit::Vector3Spring  PositionSpring;

/// @brief Field PositionSpringDirty, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_PositionSpringDirty, put=__cordl_internal_set_PositionSpringDirty)) bool  PositionSpringDirty;

/// @brief Field RenderPositionWs, offset 0x1dc, size 0xc 
 __declspec(property(get=__cordl_internal_get_RenderPositionWs, put=__cordl_internal_set_RenderPositionWs)) ::UnityEngine::Vector3  RenderPositionWs;

/// @brief Field RenderRotationWs, offset 0x208, size 0x10 
 __declspec(property(get=__cordl_internal_get_RenderRotationWs, put=__cordl_internal_set_RenderRotationWs)) ::UnityEngine::Quaternion  RenderRotationWs;

/// @brief Field RenderScaleLs, offset 0x224, size 0xc 
 __declspec(property(get=__cordl_internal_get_RenderScaleLs, put=__cordl_internal_set_RenderScaleLs)) ::UnityEngine::Vector3  RenderScaleLs;

 __declspec(property(get=get_RotationSpring, put=set_RotationSpring)) ::BoingKit::QuaternionSpring  RotationSpring;

/// @brief Field RotationSpringDirty, offset 0x1c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_RotationSpringDirty, put=__cordl_internal_set_RotationSpringDirty)) bool  RotationSpringDirty;

 __declspec(property(get=get_ScaleSpring, put=set_ScaleSpring)) ::BoingKit::Vector3Spring  ScaleSpring;

/// @brief Field ScaleSpringDirty, offset 0x1c2, size 0x1 
 __declspec(property(get=__cordl_internal_get_ScaleSpringDirty, put=__cordl_internal_set_ScaleSpringDirty)) bool  ScaleSpringDirty;

/// @brief Field SharedParams, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharedParams, put=__cordl_internal_set_SharedParams)) ::UnityW<::BoingKit::SharedBoingParams>  SharedParams;

/// @brief Field TranslationLockSpace, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_TranslationLockSpace, put=__cordl_internal_set_TranslationLockSpace)) ::GlobalNamespace::BoingManager_TranslationLockSpace  TranslationLockSpace;

/// @brief Field TwoDDistanceCheck, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwoDDistanceCheck, put=__cordl_internal_set_TwoDDistanceCheck)) bool  TwoDDistanceCheck;

/// @brief Field TwoDPositionInfluence, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwoDPositionInfluence, put=__cordl_internal_set_TwoDPositionInfluence)) bool  TwoDPositionInfluence;

/// @brief Field TwoDRotationInfluence, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwoDRotationInfluence, put=__cordl_internal_set_TwoDRotationInfluence)) bool  TwoDRotationInfluence;

/// @brief Field UpdateMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateMode, put=__cordl_internal_set_UpdateMode)) ::GlobalNamespace::BoingManager_UpdateMode  UpdateMode;

/// @brief Method Execute, addr 0x5e11e20, size 0x68, virtual false, abstract: false, final false
inline void Execute(float_t  dt) ;

/// @brief Method GatherOutput, addr 0x5e12098, size 0xdc, virtual false, abstract: false, final false
inline void GatherOutput(::by_ref<::GlobalNamespace::BoingWork_Output>  o) ;

static inline ::BoingKit::BoingBehavior* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e11914, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e118f8, size 0x14, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PrepareExecute, addr 0x5e11c84, size 0x8, virtual true, abstract: false, final false
inline void PrepareExecute() ;

/// @brief Method PrepareExecute, addr 0x5e11c8c, size 0x194, virtual false, abstract: false, final false
inline void PrepareExecute(bool  accumulateEffectors) ;

/// @brief Method PullResults, addr 0x5e11e88, size 0x8, virtual false, abstract: false, final false
inline void PullResults() ;

/// @brief Method PullResults, addr 0x5e11e90, size 0x208, virtual false, abstract: false, final false
inline void PullResults(::by_ref<::GlobalNamespace::BoingWork_Params>  p) ;

/// @brief Method Reboot, addr 0x5e11708, size 0x1f0, virtual true, abstract: false, final false
inline void Reboot() ;

/// @brief Method Register, addr 0x5e11920, size 0x54, virtual true, abstract: false, final false
inline void Register() ;

/// @brief Method Restore, addr 0x5e12174, size 0x2b4, virtual true, abstract: false, final false
inline void Restore() ;

/// @brief Method Start, addr 0x5e1190c, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Unregister, addr 0x5e11a5c, size 0x54, virtual true, abstract: false, final false
inline void Unregister() ;

/// @brief Method UpdateFlags, addr 0x5e11b98, size 0xec, virtual false, abstract: false, final false
inline void UpdateFlags() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CachedPositionLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CachedPositionLs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CachedPositionWs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CachedPositionWs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_CachedRotationLs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_CachedRotationLs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_CachedRotationWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_CachedRotationWs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CachedScaleLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CachedScaleLs() ;

constexpr bool const& __cordl_internal_get_CachedTransformValid() const;

constexpr bool& __cordl_internal_get_CachedTransformValid() ;

constexpr bool const& __cordl_internal_get_EnablePositionEffect() const;

constexpr bool& __cordl_internal_get_EnablePositionEffect() ;

constexpr bool const& __cordl_internal_get_EnableRotationEffect() const;

constexpr bool& __cordl_internal_get_EnableRotationEffect() ;

constexpr bool const& __cordl_internal_get_EnableScaleEffect() const;

constexpr bool& __cordl_internal_get_EnableScaleEffect() ;

constexpr bool const& __cordl_internal_get_GlobalReactionUpVector() const;

constexpr bool& __cordl_internal_get_GlobalReactionUpVector() ;

constexpr bool const& __cordl_internal_get_InitRebooted() const;

constexpr bool& __cordl_internal_get_InitRebooted() ;

constexpr bool const& __cordl_internal_get_LockTranslationX() const;

constexpr bool& __cordl_internal_get_LockTranslationX() ;

constexpr bool const& __cordl_internal_get_LockTranslationY() const;

constexpr bool& __cordl_internal_get_LockTranslationY() ;

constexpr bool const& __cordl_internal_get_LockTranslationZ() const;

constexpr bool& __cordl_internal_get_LockTranslationZ() ;

constexpr ::GlobalNamespace::BoingWork_Params const& __cordl_internal_get_Params() const;

constexpr ::GlobalNamespace::BoingWork_Params& __cordl_internal_get_Params() ;

constexpr bool const& __cordl_internal_get_PositionSpringDirty() const;

constexpr bool& __cordl_internal_get_PositionSpringDirty() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RenderPositionWs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RenderPositionWs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RenderRotationWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RenderRotationWs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RenderScaleLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RenderScaleLs() ;

constexpr bool const& __cordl_internal_get_RotationSpringDirty() const;

constexpr bool& __cordl_internal_get_RotationSpringDirty() ;

constexpr bool const& __cordl_internal_get_ScaleSpringDirty() const;

constexpr bool& __cordl_internal_get_ScaleSpringDirty() ;

constexpr ::UnityW<::BoingKit::SharedBoingParams> const& __cordl_internal_get_SharedParams() const;

constexpr ::UnityW<::BoingKit::SharedBoingParams>& __cordl_internal_get_SharedParams() ;

constexpr ::GlobalNamespace::BoingManager_TranslationLockSpace const& __cordl_internal_get_TranslationLockSpace() const;

constexpr ::GlobalNamespace::BoingManager_TranslationLockSpace& __cordl_internal_get_TranslationLockSpace() ;

constexpr bool const& __cordl_internal_get_TwoDDistanceCheck() const;

constexpr bool& __cordl_internal_get_TwoDDistanceCheck() ;

constexpr bool const& __cordl_internal_get_TwoDPositionInfluence() const;

constexpr bool& __cordl_internal_get_TwoDPositionInfluence() ;

constexpr bool const& __cordl_internal_get_TwoDRotationInfluence() const;

constexpr bool& __cordl_internal_get_TwoDRotationInfluence() ;

constexpr ::GlobalNamespace::BoingManager_UpdateMode const& __cordl_internal_get_UpdateMode() const;

constexpr ::GlobalNamespace::BoingManager_UpdateMode& __cordl_internal_get_UpdateMode() ;

constexpr void __cordl_internal_set_CachedPositionLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_CachedPositionWs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_CachedRotationLs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_CachedRotationWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_CachedScaleLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_CachedTransformValid(bool  value) ;

constexpr void __cordl_internal_set_EnablePositionEffect(bool  value) ;

constexpr void __cordl_internal_set_EnableRotationEffect(bool  value) ;

constexpr void __cordl_internal_set_EnableScaleEffect(bool  value) ;

constexpr void __cordl_internal_set_GlobalReactionUpVector(bool  value) ;

constexpr void __cordl_internal_set_InitRebooted(bool  value) ;

constexpr void __cordl_internal_set_LockTranslationX(bool  value) ;

constexpr void __cordl_internal_set_LockTranslationY(bool  value) ;

constexpr void __cordl_internal_set_LockTranslationZ(bool  value) ;

constexpr void __cordl_internal_set_Params(::GlobalNamespace::BoingWork_Params  value) ;

constexpr void __cordl_internal_set_PositionSpringDirty(bool  value) ;

constexpr void __cordl_internal_set_RenderPositionWs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RenderRotationWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_RenderScaleLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotationSpringDirty(bool  value) ;

constexpr void __cordl_internal_set_ScaleSpringDirty(bool  value) ;

constexpr void __cordl_internal_set_SharedParams(::UnityW<::BoingKit::SharedBoingParams>  value) ;

constexpr void __cordl_internal_set_TranslationLockSpace(::GlobalNamespace::BoingManager_TranslationLockSpace  value) ;

constexpr void __cordl_internal_set_TwoDDistanceCheck(bool  value) ;

constexpr void __cordl_internal_set_TwoDPositionInfluence(bool  value) ;

constexpr void __cordl_internal_set_TwoDRotationInfluence(bool  value) ;

constexpr void __cordl_internal_set_UpdateMode(::GlobalNamespace::BoingManager_UpdateMode  value) ;

/// @brief Method .ctor, addr 0x5e11698, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PositionSpring, addr 0x5e11620, size 0x10, virtual false, abstract: false, final false
inline ::BoingKit::Vector3Spring get_PositionSpring() ;

/// @brief Method get_RotationSpring, addr 0x5e11648, size 0x10, virtual false, abstract: false, final false
inline ::BoingKit::QuaternionSpring get_RotationSpring() ;

/// @brief Method get_ScaleSpring, addr 0x5e11670, size 0x10, virtual false, abstract: false, final false
inline ::BoingKit::Vector3Spring get_ScaleSpring() ;

/// @brief Method set_PositionSpring, addr 0x5e11630, size 0x18, virtual false, abstract: false, final false
inline void set_PositionSpring(::BoingKit::Vector3Spring  value) ;

/// @brief Method set_RotationSpring, addr 0x5e11658, size 0x18, virtual false, abstract: false, final false
inline void set_RotationSpring(::BoingKit::QuaternionSpring  value) ;

/// @brief Method set_ScaleSpring, addr 0x5e11680, size 0x18, virtual false, abstract: false, final false
inline void set_ScaleSpring(::BoingKit::Vector3Spring  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBehavior() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBehavior", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBehavior(BoingBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBehavior", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBehavior(BoingBehavior const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5163};

/// @brief Field UpdateMode, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::BoingManager_UpdateMode  ___UpdateMode;

/// @brief Field TwoDDistanceCheck, offset: 0x48, size: 0x1, def value: None
 bool  ___TwoDDistanceCheck;

/// @brief Field TwoDPositionInfluence, offset: 0x49, size: 0x1, def value: None
 bool  ___TwoDPositionInfluence;

/// @brief Field TwoDRotationInfluence, offset: 0x4a, size: 0x1, def value: None
 bool  ___TwoDRotationInfluence;

/// @brief Field EnablePositionEffect, offset: 0x4b, size: 0x1, def value: None
 bool  ___EnablePositionEffect;

/// @brief Field EnableRotationEffect, offset: 0x4c, size: 0x1, def value: None
 bool  ___EnableRotationEffect;

/// @brief Field EnableScaleEffect, offset: 0x4d, size: 0x1, def value: None
 bool  ___EnableScaleEffect;

/// @brief Field GlobalReactionUpVector, offset: 0x4e, size: 0x1, def value: None
 bool  ___GlobalReactionUpVector;

/// @brief Field TranslationLockSpace, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::BoingManager_TranslationLockSpace  ___TranslationLockSpace;

/// @brief Field LockTranslationX, offset: 0x54, size: 0x1, def value: None
 bool  ___LockTranslationX;

/// @brief Field LockTranslationY, offset: 0x55, size: 0x1, def value: None
 bool  ___LockTranslationY;

/// @brief Field LockTranslationZ, offset: 0x56, size: 0x1, def value: None
 bool  ___LockTranslationZ;

/// @brief Field Params, offset: 0x58, size: 0x160, def value: None
 ::GlobalNamespace::BoingWork_Params  ___Params;

/// @brief Field SharedParams, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::BoingKit::SharedBoingParams>  ___SharedParams;

/// @brief Field PositionSpringDirty, offset: 0x1c0, size: 0x1, def value: None
 bool  ___PositionSpringDirty;

/// @brief Field RotationSpringDirty, offset: 0x1c1, size: 0x1, def value: None
 bool  ___RotationSpringDirty;

/// @brief Field ScaleSpringDirty, offset: 0x1c2, size: 0x1, def value: None
 bool  ___ScaleSpringDirty;

/// @brief Field CachedTransformValid, offset: 0x1c3, size: 0x1, def value: None
 bool  ___CachedTransformValid;

/// @brief Field CachedPositionLs, offset: 0x1c4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CachedPositionLs;

/// @brief Field CachedPositionWs, offset: 0x1d0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CachedPositionWs;

/// @brief Field RenderPositionWs, offset: 0x1dc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RenderPositionWs;

/// @brief Field CachedRotationLs, offset: 0x1e8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___CachedRotationLs;

/// @brief Field CachedRotationWs, offset: 0x1f8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___CachedRotationWs;

/// @brief Field RenderRotationWs, offset: 0x208, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___RenderRotationWs;

/// @brief Field CachedScaleLs, offset: 0x218, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CachedScaleLs;

/// @brief Field RenderScaleLs, offset: 0x224, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RenderScaleLs;

/// @brief Field InitRebooted, offset: 0x230, size: 0x1, def value: None
 bool  ___InitRebooted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBehavior, ___UpdateMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___TwoDDistanceCheck) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___TwoDPositionInfluence) == 0x49, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___TwoDRotationInfluence) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___EnablePositionEffect) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___EnableRotationEffect) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___EnableScaleEffect) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___GlobalReactionUpVector) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___TranslationLockSpace) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___LockTranslationX) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___LockTranslationY) == 0x55, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___LockTranslationZ) == 0x56, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___Params) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___SharedParams) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___PositionSpringDirty) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___RotationSpringDirty) == 0x1c1, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___ScaleSpringDirty) == 0x1c2, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___CachedTransformValid) == 0x1c3, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___CachedPositionLs) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___CachedPositionWs) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___RenderPositionWs) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___CachedRotationLs) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___CachedRotationWs) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___RenderRotationWs) == 0x208, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___CachedScaleLs) == 0x218, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___RenderScaleLs) == 0x224, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBehavior, ___InitRebooted) == 0x230, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBehavior) == 0x238, "Size mismatch!");

} // namespace end def BoingKit
