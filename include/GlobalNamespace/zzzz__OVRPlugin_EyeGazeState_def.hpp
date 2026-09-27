#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EyeGazeState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_EyeGazeState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_EyeGazeState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_EyeGazeState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_EyeGazeState, "", "OVRPlugin/EyeGazeState");
// Dependencies OVRPlugin::Bool, OVRPlugin::Posef
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/EyeGazeState
struct CORDL_TYPE OVRPlugin_EyeGazeState {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method get_IsValid, addr 0xa60f6e8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_EyeGazeState() ;

// Ctor Parameters [CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_EyeGazeState(::GlobalNamespace::OVRPlugin_Posef  Pose, float_t  Confidence, ::GlobalNamespace::OVRPlugin_Bool  _isValid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12175};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Pose, offset: 0x0, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  Pose;

/// @brief Field Confidence, offset: 0x1c, size: 0x4, def value: None
 float_t  Confidence;

/// @brief Field _isValid, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  _isValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazeState, Pose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazeState, Confidence) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazeState, _isValid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_EyeGazeState) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
