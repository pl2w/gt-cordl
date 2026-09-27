#pragma once
// IWYU pragma private; include "Fusion/FusionUnityLoggerBase_LogContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__LogFlags_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FusionUnityLoggerBase_LogContext)
namespace Fusion {
class ILogSource;
}
namespace Fusion {
struct LogFlags;
}
// Forward declare root types
namespace GlobalNamespace {
struct FusionUnityLoggerBase_LogContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionUnityLoggerBase_LogContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionUnityLoggerBase_LogContext, "Fusion", "FusionUnityLoggerBase/LogContext");
// [IsReadOnly]
// Dependencies Fusion.LogFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.FusionUnityLoggerBase/LogContext
struct CORDL_TYPE FusionUnityLoggerBase_LogContext {
public:
// Declarations
/// @brief Method .ctor, addr 0x5f461b4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::StringW  prefix, ::Fusion::ILogSource*  source, ::Fusion::LogFlags  flags) ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionUnityLoggerBase_LogContext() ;

// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Source", ty: "::Fusion::ILogSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "::Fusion::LogFlags", modifiers: "", def_value: None, comment: None }]
constexpr FusionUnityLoggerBase_LogContext(::StringW  Message, ::Fusion::ILogSource*  Source, ::StringW  Prefix, ::Fusion::LogFlags  Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Message, offset: 0x0, size: 0x8, def value: None
 ::StringW  Message;

/// @brief Field Source, offset: 0x8, size: 0x8, def value: None
 ::Fusion::ILogSource*  Source;

/// @brief Field Prefix, offset: 0x10, size: 0x8, def value: None
 ::StringW  Prefix;

/// @brief Field Flags, offset: 0x18, size: 0x4, def value: None
 ::Fusion::LogFlags  Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionUnityLoggerBase_LogContext, Message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionUnityLoggerBase_LogContext, Source) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionUnityLoggerBase_LogContext, Prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionUnityLoggerBase_LogContext, Flags) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionUnityLoggerBase_LogContext) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
