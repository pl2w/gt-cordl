#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternalTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageInternalTypes)
// Forward declare root types
namespace Fusion {
struct SimulationMessageInternalTypes;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageInternalTypes);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageInternalTypes, "Fusion", "SimulationMessageInternalTypes");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageInternalTypes
struct CORDL_TYPE SimulationMessageInternalTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationMessageInternalTypes_Unwrapped
enum struct __SimulationMessageInternalTypes_Unwrapped : int32_t {
__E_SharedModeSetAlwaysInterested = static_cast<int32_t>(0x3),
__E_SharedModeRequestStateAuthority = static_cast<int32_t>(0x4),
__E_SetPlayerObject = static_cast<int32_t>(0x6),
__E_SetAreaOfInterest = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationMessageInternalTypes_Unwrapped () const noexcept {
return static_cast<__SimulationMessageInternalTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageInternalTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageInternalTypes(int32_t  value__) noexcept;

/// @brief Field SetAreaOfInterest value: I32(7)
static ::Fusion::SimulationMessageInternalTypes const SetAreaOfInterest;

/// @brief Field SetPlayerObject value: I32(6)
static ::Fusion::SimulationMessageInternalTypes const SetPlayerObject;

/// @brief Field SharedModeRequestStateAuthority value: I32(4)
static ::Fusion::SimulationMessageInternalTypes const SharedModeRequestStateAuthority;

/// @brief Field SharedModeSetAlwaysInterested value: I32(3)
static ::Fusion::SimulationMessageInternalTypes const SharedModeSetAlwaysInterested;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationMessageInternalTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationMessageInternalTypes) == 0x4, "Size mismatch!");

} // namespace end def Fusion
