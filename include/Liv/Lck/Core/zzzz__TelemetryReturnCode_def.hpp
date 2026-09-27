#pragma once
// IWYU pragma private; include "Liv/Lck/Core/TelemetryReturnCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryReturnCode)
// Forward declare root types
namespace Liv::Lck::Core {
struct TelemetryReturnCode;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::TelemetryReturnCode);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::TelemetryReturnCode, "Liv.Lck.Core", "TelemetryReturnCode");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.TelemetryReturnCode
struct CORDL_TYPE TelemetryReturnCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __TelemetryReturnCode_Unwrapped
enum struct __TelemetryReturnCode_Unwrapped : uint32_t {
__E_Ok = static_cast<uint32_t>(0x0u),
__E_Panic = static_cast<uint32_t>(0x1u),
__E_FailedToClearContext = static_cast<uint32_t>(0x2u),
__E_FailedToSetContext = static_cast<uint32_t>(0x3u),
__E_FailedToRetrieveState = static_cast<uint32_t>(0x4u),
__E_FailedToDeserializeContext = static_cast<uint32_t>(0x5u),
__E_InvalidArgument = static_cast<uint32_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TelemetryReturnCode_Unwrapped () const noexcept {
return static_cast<__TelemetryReturnCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TelemetryReturnCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr TelemetryReturnCode(uint32_t  value__) noexcept;

/// @brief Field FailedToClearContext value: U32(2)
static ::Liv::Lck::Core::TelemetryReturnCode const FailedToClearContext;

/// @brief Field FailedToDeserializeContext value: U32(5)
static ::Liv::Lck::Core::TelemetryReturnCode const FailedToDeserializeContext;

/// @brief Field FailedToRetrieveState value: U32(4)
static ::Liv::Lck::Core::TelemetryReturnCode const FailedToRetrieveState;

/// @brief Field FailedToSetContext value: U32(3)
static ::Liv::Lck::Core::TelemetryReturnCode const FailedToSetContext;

/// @brief Field InvalidArgument value: U32(6)
static ::Liv::Lck::Core::TelemetryReturnCode const InvalidArgument;

/// @brief Field Ok value: U32(0)
static ::Liv::Lck::Core::TelemetryReturnCode const Ok;

/// @brief Field Panic value: U32(1)
static ::Liv::Lck::Core::TelemetryReturnCode const Panic;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::TelemetryReturnCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::TelemetryReturnCode) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core
