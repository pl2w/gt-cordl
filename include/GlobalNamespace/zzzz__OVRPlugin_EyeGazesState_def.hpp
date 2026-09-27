#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EyeGazesState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_EyeGazeState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_EyeGazesState)
namespace GlobalNamespace {
struct OVRPlugin_EyeGazeState;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_EyeGazesState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_EyeGazesState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_EyeGazesState, "", "OVRPlugin/EyeGazesState");
// Dependencies OVRPlugin::EyeGazeState
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/EyeGazesState
struct CORDL_TYPE OVRPlugin_EyeGazesState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_EyeGazesState() ;

// Ctor Parameters [CppParam { name: "EyeGazes", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_EyeGazeState>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_EyeGazesState(::ArrayW<::GlobalNamespace::OVRPlugin_EyeGazeState>  EyeGazes, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field EyeGazes, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_EyeGazeState>  EyeGazes;

/// @brief Field Time, offset: 0x8, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazesState, EyeGazes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazesState, Time) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_EyeGazesState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
