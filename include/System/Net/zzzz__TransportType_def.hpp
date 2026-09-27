#pragma once
// IWYU pragma private; include "System/Net/TransportType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransportType)
// Forward declare root types
namespace System::Net {
struct TransportType;
}
// Write type traits
MARK_VAL_T(::System::Net::TransportType);
DEFINE_IL2CPP_CLASS(::System::Net::TransportType, "System.Net", "TransportType");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.TransportType
struct CORDL_TYPE TransportType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransportType_Unwrapped
enum struct __TransportType_Unwrapped : int32_t {
__E_Udp = static_cast<int32_t>(0x1),
__E_Connectionless = static_cast<int32_t>(0x1),
__E_Tcp = static_cast<int32_t>(0x2),
__E_ConnectionOriented = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransportType_Unwrapped () const noexcept {
return static_cast<__TransportType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransportType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransportType(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::System::Net::TransportType const All;

/// @brief Field ConnectionOriented value: I32(2)
static ::System::Net::TransportType const ConnectionOriented;

/// @brief Field Connectionless value: I32(1)
static ::System::Net::TransportType const Connectionless;

/// @brief Field Tcp value: I32(2)
static ::System::Net::TransportType const Tcp;

/// @brief Field Udp value: I32(1)
static ::System::Net::TransportType const Udp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10549};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TransportType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::TransportType) == 0x4, "Size mismatch!");

} // namespace end def System::Net
