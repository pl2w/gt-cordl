#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_SimulationPhase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner_SimulationPhase)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_SimulationPhase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_SimulationPhase);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_SimulationPhase, "Fusion", "NetworkRunner/SimulationPhase");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/SimulationPhase
struct CORDL_TYPE NetworkRunner_SimulationPhase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkRunner_SimulationPhase_Unwrapped
enum struct __NetworkRunner_SimulationPhase_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Update = static_cast<int32_t>(0x1),
__E_Render = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkRunner_SimulationPhase_Unwrapped () const noexcept {
return static_cast<__NetworkRunner_SimulationPhase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_SimulationPhase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_SimulationPhase(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::NetworkRunner_SimulationPhase const None;

/// @brief Field Render value: I32(2)
static ::GlobalNamespace::NetworkRunner_SimulationPhase const Render;

/// @brief Field Update value: I32(1)
static ::GlobalNamespace::NetworkRunner_SimulationPhase const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_SimulationPhase, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_SimulationPhase) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
