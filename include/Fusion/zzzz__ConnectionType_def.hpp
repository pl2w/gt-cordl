#pragma once
// IWYU pragma private; include "Fusion/ConnectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionType)
// Forward declare root types
namespace Fusion {
struct ConnectionType;
}
// Write type traits
MARK_VAL_T(::Fusion::ConnectionType);
DEFINE_IL2CPP_CLASS(::Fusion::ConnectionType, "Fusion", "ConnectionType");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ConnectionType
struct CORDL_TYPE ConnectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectionType_Unwrapped
enum struct __ConnectionType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Relayed = static_cast<int32_t>(0x1),
__E_Direct = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionType_Unwrapped () const noexcept {
return static_cast<__ConnectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConnectionType(int32_t  value__) noexcept;

/// @brief Field Direct value: I32(2)
static ::Fusion::ConnectionType const Direct;

/// @brief Field None value: I32(0)
static ::Fusion::ConnectionType const None;

/// @brief Field Relayed value: I32(1)
static ::Fusion::ConnectionType const Relayed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ConnectionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::ConnectionType) == 0x4, "Size mismatch!");

} // namespace end def Fusion
