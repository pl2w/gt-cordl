#pragma once
// IWYU pragma private; include "Fusion/LogSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogSettings)
namespace Fusion {
struct LogLevel;
}
namespace Fusion {
struct TraceChannels;
}
// Forward declare root types
namespace Fusion {
struct LogSettings;
}
// Write type traits
MARK_VAL_T(::Fusion::LogSettings);
DEFINE_IL2CPP_CLASS(::Fusion::LogSettings, "Fusion", "LogSettings");
// Dependencies Fusion.LogLevel, Fusion.TraceChannels
namespace Fusion {
// Is value type: true
// CS Name: Fusion.LogSettings
struct CORDL_TYPE LogSettings {
public:
// Declarations
/// @brief Method .ctor, addr 0x5f448d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LogLevel  level, ::Fusion::TraceChannels  traceChannels) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogSettings() ;

// Ctor Parameters [CppParam { name: "Level", ty: "::Fusion::LogLevel", modifiers: "", def_value: None, comment: None }, CppParam { name: "TraceChannels", ty: "::Fusion::TraceChannels", modifiers: "", def_value: None, comment: None }]
constexpr LogSettings(::Fusion::LogLevel  Level, ::Fusion::TraceChannels  TraceChannels) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Level, offset: 0x0, size: 0x4, def value: None
 ::Fusion::LogLevel  Level;

/// @brief Field TraceChannels, offset: 0x4, size: 0x4, def value: None
 ::Fusion::TraceChannels  TraceChannels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LogSettings, Level) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LogSettings, TraceChannels) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Fusion::LogSettings) == 0x8, "Size mismatch!");

} // namespace end def Fusion
