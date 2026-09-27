#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourListScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SimulationBehaviourListScope)
namespace Fusion {
class SimulationBehaviourUpdater_BehaviourList;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Fusion {
struct SimulationBehaviourListScope;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationBehaviourListScope);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviourListScope, "Fusion", "SimulationBehaviourListScope");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationBehaviourListScope
struct CORDL_TYPE SimulationBehaviourListScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x5f86d74, size 0x28, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x5f86d44, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SimulationBehaviourUpdater_BehaviourList*  list) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviourListScope() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::Fusion::SimulationBehaviourUpdater_BehaviourList*", modifiers: "", def_value: None, comment: None }]
constexpr SimulationBehaviourListScope(::Fusion::SimulationBehaviourUpdater_BehaviourList*  _list) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _list, offset: 0x0, size: 0x8, def value: None
 ::Fusion::SimulationBehaviourUpdater_BehaviourList*  _list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationBehaviourListScope, _list) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationBehaviourListScope) == 0x8, "Size mismatch!");

} // namespace end def Fusion
