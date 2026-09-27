#pragma once
// IWYU pragma private; include "GlobalNamespace/EMainScreenStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EMainScreenStatus)
// Forward declare root types
namespace GlobalNamespace {
struct EMainScreenStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EMainScreenStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EMainScreenStatus, "", "EMainScreenStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EMainScreenStatus
struct CORDL_TYPE EMainScreenStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EMainScreenStatus_Unwrapped
enum struct __EMainScreenStatus_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Updated = static_cast<int32_t>(0x1),
__E_Declined = static_cast<int32_t>(0x2),
__E_Pending = static_cast<int32_t>(0x3),
__E_Timedout = static_cast<int32_t>(0x4),
__E_Setup = static_cast<int32_t>(0x5),
__E_Previous = static_cast<int32_t>(0x6),
__E_Missing = static_cast<int32_t>(0x7),
__E_FullControl = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EMainScreenStatus_Unwrapped () const noexcept {
return static_cast<__EMainScreenStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EMainScreenStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EMainScreenStatus(int32_t  value__) noexcept;

/// @brief Field Declined value: I32(2)
static ::GlobalNamespace::EMainScreenStatus const Declined;

/// @brief Field FullControl value: I32(8)
static ::GlobalNamespace::EMainScreenStatus const FullControl;

/// @brief Field Missing value: I32(7)
static ::GlobalNamespace::EMainScreenStatus const Missing;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EMainScreenStatus const None;

/// @brief Field Pending value: I32(3)
static ::GlobalNamespace::EMainScreenStatus const Pending;

/// @brief Field Previous value: I32(6)
static ::GlobalNamespace::EMainScreenStatus const Previous;

/// @brief Field Setup value: I32(5)
static ::GlobalNamespace::EMainScreenStatus const Setup;

/// @brief Field Timedout value: I32(4)
static ::GlobalNamespace::EMainScreenStatus const Timedout;

/// @brief Field Updated value: I32(1)
static ::GlobalNamespace::EMainScreenStatus const Updated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2861};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EMainScreenStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EMainScreenStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
