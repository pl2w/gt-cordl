#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameStateReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IGameStateReceiver)
// Forward declare root types
namespace GlobalNamespace {
class IGameStateReceiver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameStateReceiver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameStateReceiver*, "", "IGameStateReceiver");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameStateReceiver
class CORDL_TYPE IGameStateReceiver {
public:
// Declarations
/// @brief Method GameStateReceiverOnStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GameStateReceiverOnStateChanged(int64_t  oldState, int64_t  newState) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameStateReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameStateReceiver(IGameStateReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
