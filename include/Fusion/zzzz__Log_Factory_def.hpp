#pragma once
// IWYU pragma private; include "Fusion/Log_Factory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__LogSettings_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Log_Factory)
namespace Fusion {
class DebugLogStream;
}
namespace Fusion {
struct LogLevel;
}
namespace Fusion {
struct LogSettings;
}
namespace Fusion {
class LogStream;
}
namespace Fusion {
class Log_CreateLogStreamDelegate;
}
namespace Fusion {
struct TraceChannels;
}
namespace Fusion {
class TraceLogStream;
}
// Forward declare root types
namespace GlobalNamespace {
struct Log_Factory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Log_Factory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Log_Factory, "Fusion", "Log/Factory");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// Dependencies Fusion.LogSettings
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Log/Factory
struct CORDL_TYPE Log_Factory {
public:
// Declarations
/// @brief Method Init, addr 0x5f44cec, size 0x134, virtual false, abstract: false, final false
inline void Init(::by_ref<::Fusion::DebugLogStream*>  stream, ::Fusion::TraceChannels  channel) ;

/// @brief Method Init, addr 0x5f44e20, size 0xa0, virtual false, abstract: false, final false
inline void Init(::by_ref<::Fusion::LogStream*>  stream, ::Fusion::LogLevel  logLevel) ;

/// @brief Method Init, addr 0x5f44bb8, size 0x134, virtual false, abstract: false, final false
inline void Init(::by_ref<::Fusion::TraceLogStream*>  stream, ::Fusion::TraceChannels  channel) ;

/// @brief Method .ctor, addr 0x5f448e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LogSettings  settings, ::Fusion::Log_CreateLogStreamDelegate*  streamFactory) ;

// Ctor Parameters []
// @brief default ctor
constexpr Log_Factory() ;

// Ctor Parameters [CppParam { name: "StreamFactory", ty: "::Fusion::Log_CreateLogStreamDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Settings", ty: "::Fusion::LogSettings", modifiers: "", def_value: None, comment: None }]
constexpr Log_Factory(::Fusion::Log_CreateLogStreamDelegate*  StreamFactory, ::Fusion::LogSettings  Settings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field StreamFactory, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Log_CreateLogStreamDelegate*  StreamFactory;

/// @brief Field Settings, offset: 0x8, size: 0x8, def value: None
 ::Fusion::LogSettings  Settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Log_Factory, StreamFactory) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Log_Factory, Settings) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Log_Factory) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
