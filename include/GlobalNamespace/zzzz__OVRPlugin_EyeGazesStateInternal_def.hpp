#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EyeGazesStateInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_EyeGazeState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_EyeGazesStateInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_EyeGazesStateInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal, "", "OVRPlugin/EyeGazesStateInternal");
// Dependencies OVRPlugin::EyeGazeState
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/EyeGazesStateInternal
struct CORDL_TYPE OVRPlugin_EyeGazesStateInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_EyeGazesStateInternal() ;

// Ctor Parameters [CppParam { name: "EyeGazes_0", ty: "::GlobalNamespace::OVRPlugin_EyeGazeState", modifiers: "", def_value: None, comment: None }, CppParam { name: "EyeGazes_1", ty: "::GlobalNamespace::OVRPlugin_EyeGazeState", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_EyeGazesStateInternal(::GlobalNamespace::OVRPlugin_EyeGazeState  EyeGazes_0, ::GlobalNamespace::OVRPlugin_EyeGazeState  EyeGazes_1, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field EyeGazes_0, offset: 0x0, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_EyeGazeState  EyeGazes_0;

/// @brief Field EyeGazes_1, offset: 0x24, size: 0x24, def value: None
 ::GlobalNamespace::OVRPlugin_EyeGazeState  EyeGazes_1;

/// @brief Field Time, offset: 0x48, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal, EyeGazes_0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal, EyeGazes_1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal, Time) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
