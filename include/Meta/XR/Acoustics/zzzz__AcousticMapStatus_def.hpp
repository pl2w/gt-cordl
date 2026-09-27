#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/AcousticMapStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AcousticMapStatus)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct AcousticMapStatus;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::AcousticMapStatus);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::AcousticMapStatus, "Meta.XR.Acoustics", "AcousticMapStatus");
// [Flags]
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.AcousticMapStatus
struct CORDL_TYPE AcousticMapStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __AcousticMapStatus_Unwrapped
enum struct __AcousticMapStatus_Unwrapped : uint32_t {
__E_EMPTY = static_cast<uint32_t>(0x0u),
__E_MAPPED = static_cast<uint32_t>(0x1u),
__E_READY = static_cast<uint32_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AcousticMapStatus_Unwrapped () const noexcept {
return static_cast<__AcousticMapStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AcousticMapStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr AcousticMapStatus(uint32_t  value__) noexcept;

/// @brief Field EMPTY value: U32(0)
static ::Meta::XR::Acoustics::AcousticMapStatus const EMPTY;

/// @brief Field MAPPED value: U32(1)
static ::Meta::XR::Acoustics::AcousticMapStatus const MAPPED;

/// @brief Field READY value: U32(3)
static ::Meta::XR::Acoustics::AcousticMapStatus const READY;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::AcousticMapStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::AcousticMapStatus) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
