#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisUdpCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SynthesisUdpCommand)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SynthesisUdpCommand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynthesisUdpCommand);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisUdpCommand, "", "SynthesisUdpCommand");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynthesisUdpCommand
struct CORDL_TYPE SynthesisUdpCommand {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisUdpCommand() ;

// Ctor Parameters [CppParam { name: "commandName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "EventReceiver", ty: "::UnityEngine::Events::UnityEvent_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "extraArgs", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr SynthesisUdpCommand(::StringW  commandName, ::UnityEngine::Events::UnityEvent_1<::StringW>*  EventReceiver, ::StringW  extraArgs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field commandName, offset: 0x0, size: 0x8, def value: None
 ::StringW  commandName;

/// @brief Field EventReceiver, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  EventReceiver;

/// @brief Field extraArgs, offset: 0x10, size: 0x8, def value: None
 ::StringW  extraArgs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisUdpCommand, commandName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisUdpCommand, EventReceiver) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisUdpCommand, extraArgs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisUdpCommand) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
