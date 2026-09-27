#pragma once
// IWYU pragma private; include "Fusion/Protocol/JoinRequests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinRequests)
// Forward declare root types
namespace Fusion::Protocol {
struct JoinRequests;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::JoinRequests);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::JoinRequests, "Fusion.Protocol", "JoinRequests");
// [Flags]
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.JoinRequests
struct CORDL_TYPE JoinRequests {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __JoinRequests_Unwrapped
enum struct __JoinRequests_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_NetworkConfig = static_cast<uint32_t>(0x2u),
__E_ReflexiveInfo = static_cast<uint32_t>(0x4u),
__E_DisableNATPunch = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinRequests_Unwrapped () const noexcept {
return static_cast<__JoinRequests_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinRequests() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinRequests(uint32_t  value__) noexcept;

/// @brief Field DisableNATPunch value: U32(8)
static ::Fusion::Protocol::JoinRequests const DisableNATPunch;

/// @brief Field NetworkConfig value: U32(2)
static ::Fusion::Protocol::JoinRequests const NetworkConfig;

/// @brief Field None value: U32(0)
static ::Fusion::Protocol::JoinRequests const None;

/// @brief Field ReflexiveInfo value: U32(4)
static ::Fusion::Protocol::JoinRequests const ReflexiveInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::JoinRequests, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::JoinRequests) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Protocol
