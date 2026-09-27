#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/IState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IState)
// Forward declare root types
namespace GorillaTagScripts::AI {
class IState;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::IState*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::IState*, "GorillaTagScripts.AI", "IState");
// Dependencies 
namespace GorillaTagScripts::AI {
// Is value type: false
// CS Name: GorillaTagScripts.AI.IState
class CORDL_TYPE IState {
public:
// Declarations
/// @brief Method OnEnter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnter() ;

/// @brief Method OnExit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnExit() ;

/// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Tick() ;

// Ctor Parameters [CppParam { name: "", ty: "IState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IState(IState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4223};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTagScripts::AI
