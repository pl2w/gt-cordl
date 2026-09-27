#pragma once
// IWYU pragma private; include "Fusion/Protocol/JoinMessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinMessageType)
// Forward declare root types
namespace Fusion::Protocol {
struct JoinMessageType;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::JoinMessageType);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::JoinMessageType, "Fusion.Protocol", "JoinMessageType");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.JoinMessageType
struct CORDL_TYPE JoinMessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __JoinMessageType_Unwrapped
enum struct __JoinMessageType_Unwrapped : uint8_t {
__E_Request = static_cast<uint8_t>(0x1u),
__E_Confirmation = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinMessageType_Unwrapped () const noexcept {
return static_cast<__JoinMessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinMessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinMessageType(uint8_t  value__) noexcept;

/// @brief Field Confirmation value: U8(2)
static ::Fusion::Protocol::JoinMessageType const Confirmation;

/// @brief Field Request value: U8(1)
static ::Fusion::Protocol::JoinMessageType const Request;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::JoinMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::JoinMessageType) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Protocol
