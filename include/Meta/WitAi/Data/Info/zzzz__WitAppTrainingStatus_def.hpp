#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitAppTrainingStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitAppTrainingStatus)
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitAppTrainingStatus;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitAppTrainingStatus);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitAppTrainingStatus, "Meta.WitAi.Data.Info", "WitAppTrainingStatus");
// Dependencies 
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitAppTrainingStatus
struct CORDL_TYPE WitAppTrainingStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WitAppTrainingStatus_Unwrapped
enum struct __WitAppTrainingStatus_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Done = static_cast<int32_t>(0x1),
__E_Scheduled = static_cast<int32_t>(0x2),
__E_Ongoing = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WitAppTrainingStatus_Unwrapped () const noexcept {
return static_cast<__WitAppTrainingStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WitAppTrainingStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WitAppTrainingStatus(int32_t  value__) noexcept;

/// @brief Field Done value: I32(1)
static ::Meta::WitAi::Data::Info::WitAppTrainingStatus const Done;

/// @brief Field Ongoing value: I32(3)
static ::Meta::WitAi::Data::Info::WitAppTrainingStatus const Ongoing;

/// @brief Field Scheduled value: I32(2)
static ::Meta::WitAi::Data::Info::WitAppTrainingStatus const Scheduled;

/// @brief Field Unknown value: I32(0)
static ::Meta::WitAi::Data::Info::WitAppTrainingStatus const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppTrainingStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitAppTrainingStatus) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info
