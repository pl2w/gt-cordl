#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckTelemetryContextType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckTelemetryContextType)
// Forward declare root types
namespace Liv::Lck::Core {
struct LckTelemetryContextType;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::LckTelemetryContextType);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckTelemetryContextType, "Liv.Lck.Core", "LckTelemetryContextType");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.LckTelemetryContextType
struct CORDL_TYPE LckTelemetryContextType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __LckTelemetryContextType_Unwrapped
enum struct __LckTelemetryContextType_Unwrapped : uint32_t {
__E_RecordingContext = static_cast<uint32_t>(0x0u),
__E_StreamingContext = static_cast<uint32_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckTelemetryContextType_Unwrapped () const noexcept {
return static_cast<__LckTelemetryContextType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckTelemetryContextType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckTelemetryContextType(uint32_t  value__) noexcept;

/// @brief Field RecordingContext value: U32(0)
static ::Liv::Lck::Core::LckTelemetryContextType const RecordingContext;

/// @brief Field StreamingContext value: U32(1)
static ::Liv::Lck::Core::LckTelemetryContextType const StreamingContext;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckTelemetryContextType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckTelemetryContextType) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core
