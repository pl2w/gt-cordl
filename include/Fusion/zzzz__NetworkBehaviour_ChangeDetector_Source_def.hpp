#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_Source.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviour_ChangeDetector_Source)
// Forward declare root types
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Source;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source, "Fusion", "NetworkBehaviour/ChangeDetector/Source");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/Source
struct CORDL_TYPE ChangeDetector_NetworkBehaviour_Source {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChangeDetector_NetworkBehaviour_Source_Unwrapped
enum struct __ChangeDetector_NetworkBehaviour_Source_Unwrapped : int32_t {
__E_SimulationState = static_cast<int32_t>(0x0),
__E_SnapshotFrom = static_cast<int32_t>(0x1),
__E_SnapshotTo = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChangeDetector_NetworkBehaviour_Source_Unwrapped () const noexcept {
return static_cast<__ChangeDetector_NetworkBehaviour_Source_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_Source() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChangeDetector_NetworkBehaviour_Source(int32_t  value__) noexcept;

/// @brief Field SimulationState value: I32(0)
static ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source const SimulationState;

/// @brief Field SnapshotFrom value: I32(1)
static ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source const SnapshotFrom;

/// @brief Field SnapshotTo value: I32(2)
static ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source const SnapshotTo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
