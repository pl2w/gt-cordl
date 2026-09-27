#pragma once
// IWYU pragma private; include "Fusion/Simulation_TargetObjectVerificationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_TargetObjectVerificationResult)
// Forward declare root types
namespace GlobalNamespace {
struct Simulation_TargetObjectVerificationResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Simulation_TargetObjectVerificationResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_TargetObjectVerificationResult, "Fusion", "Simulation/TargetObjectVerificationResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/TargetObjectVerificationResult
struct CORDL_TYPE Simulation_TargetObjectVerificationResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Simulation_TargetObjectVerificationResult_Unwrapped
enum struct __Simulation_TargetObjectVerificationResult_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_TargetNotInterestedInObject = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Simulation_TargetObjectVerificationResult_Unwrapped () const noexcept {
return static_cast<__Simulation_TargetObjectVerificationResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Simulation_TargetObjectVerificationResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Simulation_TargetObjectVerificationResult(int32_t  value__) noexcept;

/// @brief Field Ok value: I32(0)
static ::GlobalNamespace::Simulation_TargetObjectVerificationResult const Ok;

/// @brief Field TargetNotInterestedInObject value: I32(1)
static ::GlobalNamespace::Simulation_TargetObjectVerificationResult const TargetNotInterestedInObject;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Simulation_TargetObjectVerificationResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Simulation_TargetObjectVerificationResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
