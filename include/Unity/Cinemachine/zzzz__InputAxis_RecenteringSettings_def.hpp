#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis_RecenteringSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InputAxis_RecenteringSettings)
// Forward declare root types
namespace GlobalNamespace {
struct InputAxis_RecenteringSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputAxis_RecenteringSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputAxis_RecenteringSettings, "Unity.Cinemachine", "InputAxis/RecenteringSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.InputAxis/RecenteringSettings
struct CORDL_TYPE InputAxis_RecenteringSettings {
public:
// Declarations
/// @brief Method Validate, addr 0xaeb7dfc, size 0x14, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Default, addr 0xaeb8278, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputAxis_RecenteringSettings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAxis_RecenteringSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Wait", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr InputAxis_RecenteringSettings(bool  Enabled, float_t  Wait, float_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [Tooltip("If set, will enable automatic re-centering of the axis")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("If no user input has been detected on the axis for this many seconds, re-centering will begin.")]
/// @brief Field Wait, offset: 0x4, size: 0x4, def value: None
 float_t  Wait;

/// [Tooltip("How long it takes to reach center once re-centering has started.")]
/// @brief Field Time, offset: 0x8, size: 0x4, def value: None
 float_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringSettings, Wait) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringSettings, Time) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputAxis_RecenteringSettings) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
