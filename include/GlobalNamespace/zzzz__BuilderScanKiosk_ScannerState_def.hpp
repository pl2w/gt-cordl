#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderScanKiosk_ScannerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderScanKiosk_ScannerState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderScanKiosk_ScannerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderScanKiosk_ScannerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderScanKiosk_ScannerState, "", "BuilderScanKiosk/ScannerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderScanKiosk/ScannerState
struct CORDL_TYPE BuilderScanKiosk_ScannerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderScanKiosk_ScannerState_Unwrapped
enum struct __BuilderScanKiosk_ScannerState_Unwrapped : int32_t {
__E_IDLE = static_cast<int32_t>(0x0),
__E_CONFIRMATION = static_cast<int32_t>(0x1),
__E_SAVING = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderScanKiosk_ScannerState_Unwrapped () const noexcept {
return static_cast<__BuilderScanKiosk_ScannerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderScanKiosk_ScannerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderScanKiosk_ScannerState(int32_t  value__) noexcept;

/// @brief Field CONFIRMATION value: I32(1)
static ::GlobalNamespace::BuilderScanKiosk_ScannerState const CONFIRMATION;

/// @brief Field IDLE value: I32(0)
static ::GlobalNamespace::BuilderScanKiosk_ScannerState const IDLE;

/// @brief Field SAVING value: I32(2)
static ::GlobalNamespace::BuilderScanKiosk_ScannerState const SAVING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1632};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk_ScannerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderScanKiosk_ScannerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
