#pragma once
// IWYU pragma private; include "Fusion/RunnerAOIGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RunnerAOIGizmos)
// Forward declare root types
namespace Fusion {
class RunnerAOIGizmos;
}
// Write type traits
MARK_REF_T(::Fusion::RunnerAOIGizmos*);
DEFINE_IL2CPP_CLASS(::Fusion::RunnerAOIGizmos*, "Fusion", "RunnerAOIGizmos");
// [RequireComponent(typeof(Fusion.NetworkRunner))]
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)8)]
// [DisallowMultipleComponent]
// Dependencies Fusion.SimulationBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RunnerAOIGizmos
class CORDL_TYPE RunnerAOIGizmos : public ::Fusion::SimulationBehaviour {
public:
// Declarations
static inline ::Fusion::RunnerAOIGizmos* New_ctor() ;

/// @brief Method .ctor, addr 0x60f4c08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunnerAOIGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunnerAOIGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RunnerAOIGizmos(RunnerAOIGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunnerAOIGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunnerAOIGizmos(RunnerAOIGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RunnerAOIGizmos) == 0x48, "Size mismatch!");

} // namespace end def Fusion
