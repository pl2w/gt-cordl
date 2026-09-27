#pragma once
// IWYU pragma private; include "Fusion/Protocol/SyncType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncType)
// Forward declare root types
namespace Fusion::Protocol {
struct SyncType;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::SyncType);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::SyncType, "Fusion.Protocol", "SyncType");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.SyncType
struct CORDL_TYPE SyncType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SyncType_Unwrapped
enum struct __SyncType_Unwrapped : uint8_t {
__E_Request = static_cast<uint8_t>(0x1u),
__E_Response = static_cast<uint8_t>(0x2u),
__E_Override = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SyncType_Unwrapped () const noexcept {
return static_cast<__SyncType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SyncType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr SyncType(uint8_t  value__) noexcept;

/// @brief Field Override value: U8(3)
static ::Fusion::Protocol::SyncType const Override;

/// @brief Field Request value: U8(1)
static ::Fusion::Protocol::SyncType const Request;

/// @brief Field Response value: U8(2)
static ::Fusion::Protocol::SyncType const Response;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::SyncType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::SyncType) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Protocol
