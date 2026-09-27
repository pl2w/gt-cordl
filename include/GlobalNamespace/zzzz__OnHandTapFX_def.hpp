#pragma once
// IWYU pragma private; include "GlobalNamespace/OnHandTapFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/zzzz__StiltID_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnHandTapFX)
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
class HandEffectContext;
}
namespace GlobalNamespace {
template<typename T>
class IFXEffectContext_1;
}
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
struct OnHandTapFX;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnHandTapFX);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnHandTapFX, "", "OnHandTapFX");
// Dependencies GorillaLocomotion.StiltID, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OnHandTapFX
struct CORDL_TYPE OnHandTapFX {
public:
// Declarations
 __declspec(property(get=get_effectContext)) ::GlobalNamespace::HandEffectContext*  effectContext;

 __declspec(property(get=get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  settings;

/// @brief Convert operator to "::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>"
constexpr operator  ::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>*() ;

/// @brief Method get_effectContext, addr 0x58fe4d4, size 0x6c, virtual true, abstract: false, final true
inline ::GlobalNamespace::HandEffectContext* get_effectContext() ;

/// @brief Method get_settings, addr 0x58fe540, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::FXSystemSettings> get_settings() ;

/// @brief Convert to "::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>"
constexpr ::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>* i___GlobalNamespace__IFXEffectContext_1___GlobalNamespace__HandEffectContext__() ;

// Ctor Parameters []
// @brief default ctor
constexpr OnHandTapFX() ;

// Ctor Parameters [CppParam { name: "rig", ty: "::UnityW<::GlobalNamespace::VRRig>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tapDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "isDownTap", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "stiltID", ty: "::GorillaLocomotion::StiltID", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OnHandTapFX(::UnityW<::GlobalNamespace::VRRig>  rig, ::UnityEngine::Vector3  tapDir, bool  isDownTap, bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, int32_t  surfaceIndex, float_t  volume, float_t  speed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field rig, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field tapDir, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  tapDir;

/// @brief Field isDownTap, offset: 0x14, size: 0x1, def value: None
 bool  isDownTap;

/// @brief Field isLeftHand, offset: 0x15, size: 0x1, def value: None
 bool  isLeftHand;

/// @brief Field stiltID, offset: 0x18, size: 0x4, def value: None
 ::GorillaLocomotion::StiltID  stiltID;

/// @brief Field surfaceIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  surfaceIndex;

/// @brief Field volume, offset: 0x20, size: 0x4, def value: None
 float_t  volume;

/// @brief Field speed, offset: 0x24, size: 0x4, def value: None
 float_t  speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnHandTapFX, rig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, tapDir) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, isDownTap) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, isLeftHand) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, stiltID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, surfaceIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, volume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnHandTapFX, speed) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnHandTapFX) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
