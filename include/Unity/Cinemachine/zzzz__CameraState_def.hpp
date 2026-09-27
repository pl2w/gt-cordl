#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraState_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_CustomBlendableItems_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CameraState)
namespace GlobalNamespace {
struct CameraState_BlendHints;
}
namespace GlobalNamespace {
struct CameraState_CustomBlendableItems;
}
namespace GlobalNamespace {
struct CustomBlendableItems_CameraState_Item;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct CameraState;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::CameraState);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraState, "Unity.Cinemachine", "CameraState");
// Dependencies Unity.Cinemachine.CameraState::BlendHints, Unity.Cinemachine.CameraState::CustomBlendableItems, Unity.Cinemachine.LensSettings, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.CameraState
struct CORDL_TYPE CameraState {
public:
// Declarations
using BlendHints = ::GlobalNamespace::CameraState_BlendHints;

using CustomBlendableItems = ::GlobalNamespace::CameraState_CustomBlendableItems;

/// @brief Field kNoPoint, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_kNoPoint, put=setStaticF_kNoPoint)) ::UnityEngine::Vector3  kNoPoint;

/// @brief Method AddCustomBlendable, addr 0xaeab438, size 0x260, virtual false, abstract: false, final false
inline void AddCustomBlendable(::GlobalNamespace::CustomBlendableItems_CameraState_Item  b) ;

/// @brief Method ApplyPosBlendHint, addr 0xaeac780, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ApplyPosBlendHint(::UnityEngine::Vector3  posA, ::GlobalNamespace::CameraState_BlendHints  hintA, ::UnityEngine::Vector3  posB, ::GlobalNamespace::CameraState_BlendHints  hintB, ::UnityEngine::Vector3  original, ::UnityEngine::Vector3  blended) ;

/// @brief Method ApplyRotBlendHint, addr 0xaeac7c0, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ApplyRotBlendHint(::UnityEngine::Quaternion  rotA, ::GlobalNamespace::CameraState_BlendHints  hintA, ::UnityEngine::Quaternion  rotB, ::GlobalNamespace::CameraState_BlendHints  hintB, ::UnityEngine::Quaternion  original, ::UnityEngine::Quaternion  blended) ;

/// @brief Method InterpolateFOV, addr 0xaeac888, size 0xf0, virtual false, abstract: false, final false
static inline float_t InterpolateFOV(float_t  fovA, float_t  fovB, float_t  dA, float_t  dB, float_t  t) ;

/// @brief Method InterpolatePosition, addr 0xaeac978, size 0x2b8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InterpolatePosition(::UnityEngine::Vector3  posA, ::UnityEngine::Vector3  pivotA, ::UnityEngine::Vector3  posB, ::UnityEngine::Vector3  pivotB, float_t  t, ::GlobalNamespace::CameraState_BlendHints  blendHint, ::UnityEngine::Vector3  up) ;

/// @brief Method Lerp, addr 0xaeab8f4, size 0xdb4, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::CameraState Lerp(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::CameraState>  stateA, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::CameraState>  stateB, float_t  t) ;

static inline ::UnityEngine::Vector3 getStaticF_kNoPoint() ;

/// @brief Method get_Default, addr 0xaeab0dc, size 0x2b0, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::CameraState get_Default() ;

static inline void setStaticF_kNoPoint(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CameraState() ;

// Ctor Parameters [CppParam { name: "Lens", ty: "::Unity::Cinemachine::LensSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReferenceUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReferenceLookAt", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "RawPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "RawOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationDampingBypass", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShotQuality", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionCorrection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "OrientationCorrection", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "BlendHint", ty: "::GlobalNamespace::CameraState_BlendHints", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomBlendables", ty: "::GlobalNamespace::CameraState_CustomBlendableItems", modifiers: "", def_value: None, comment: None }]
constexpr CameraState(::Unity::Cinemachine::LensSettings  Lens, ::UnityEngine::Vector3  ReferenceUp, ::UnityEngine::Vector3  ReferenceLookAt, ::UnityEngine::Vector3  RawPosition, ::UnityEngine::Quaternion  RawOrientation, ::UnityEngine::Quaternion  RotationDampingBypass, float_t  ShotQuality, ::UnityEngine::Vector3  PositionCorrection, ::UnityEngine::Quaternion  OrientationCorrection, ::GlobalNamespace::CameraState_BlendHints  BlendHint, ::GlobalNamespace::CameraState_CustomBlendableItems  CustomBlendables) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x110};

/// @brief Field Lens, offset: 0x0, size: 0x58, def value: None
 ::Unity::Cinemachine::LensSettings  Lens;

/// @brief Field ReferenceUp, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ReferenceUp;

/// @brief Field ReferenceLookAt, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ReferenceLookAt;

/// @brief Field RawPosition, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  RawPosition;

/// @brief Field RawOrientation, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  RawOrientation;

/// @brief Field RotationDampingBypass, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  RotationDampingBypass;

/// @brief Field ShotQuality, offset: 0x9c, size: 0x4, def value: None
 float_t  ShotQuality;

/// @brief Field PositionCorrection, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  PositionCorrection;

/// @brief Field OrientationCorrection, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Quaternion  OrientationCorrection;

/// @brief Field BlendHint, offset: 0xbc, size: 0x4, def value: None
 ::GlobalNamespace::CameraState_BlendHints  BlendHint;

/// @brief Field CustomBlendables, offset: 0xc0, size: 0x50, def value: None
 ::GlobalNamespace::CameraState_CustomBlendableItems  CustomBlendables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraState, Lens) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, ReferenceUp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, ReferenceLookAt) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, RawPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, RawOrientation) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, RotationDampingBypass) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, ShotQuality) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, PositionCorrection) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, OrientationCorrection) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, BlendHint) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraState, CustomBlendables) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraState) == 0x110, "Size mismatch!");

} // namespace end def Unity::Cinemachine
