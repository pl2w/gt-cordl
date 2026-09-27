#pragma once
// IWYU pragma private; include "GlobalNamespace/PackedPlayModeBuildLogs_RuntimeBuildLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PackedPlayModeBuildLogs_RuntimeBuildLog)
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
struct PackedPlayModeBuildLogs_RuntimeBuildLog;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, "", "PackedPlayModeBuildLogs/RuntimeBuildLog");
// Dependencies UnityEngine.LogType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PackedPlayModeBuildLogs/RuntimeBuildLog
struct CORDL_TYPE PackedPlayModeBuildLogs_RuntimeBuildLog {
public:
// Declarations
/// @brief Method .ctor, addr 0xae4c318, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::LogType  type, ::StringW  message) ;

// Ctor Parameters []
// @brief default ctor
constexpr PackedPlayModeBuildLogs_RuntimeBuildLog() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr PackedPlayModeBuildLogs_RuntimeBuildLog(::UnityEngine::LogType  Type, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::LogType  Type;

/// @brief Field Message, offset: 0x8, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, Message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
