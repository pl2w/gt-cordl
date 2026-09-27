#pragma once
// IWYU pragma private; include "Fusion/SimulationMessagePtr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SimulationMessagePtr)
namespace Fusion {
struct SimulationMessage;
}
// Forward declare root types
namespace Fusion {
struct SimulationMessagePtr;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessagePtr);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessagePtr, "Fusion", "SimulationMessagePtr");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessagePtr
struct CORDL_TYPE SimulationMessagePtr {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessagePtr() ;

// Ctor Parameters [CppParam { name: "Message", ty: "::Fusion::SimulationMessage*", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessagePtr(::Fusion::SimulationMessage*  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Message, offset: 0x0, size: 0x8, def value: None
 ::Fusion::SimulationMessage*  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationMessagePtr, Message) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationMessagePtr) == 0x8, "Size mismatch!");

} // namespace end def Fusion
