#pragma once
// IWYU pragma private; include "Fusion/Protocol/StartRequests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StartRequests)
// Forward declare root types
namespace Fusion::Protocol {
struct StartRequests;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::StartRequests);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::StartRequests, "Fusion.Protocol", "StartRequests");
// [Flags]
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.StartRequests
struct CORDL_TYPE StartRequests {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __StartRequests_Unwrapped
enum struct __StartRequests_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_ConnectToShared = static_cast<uint32_t>(0x2u),
__E_WaitForReflexiveInfo = static_cast<uint32_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StartRequests_Unwrapped () const noexcept {
return static_cast<__StartRequests_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StartRequests() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr StartRequests(uint32_t  value__) noexcept;

/// @brief Field ConnectToShared value: U32(2)
static ::Fusion::Protocol::StartRequests const ConnectToShared;

/// @brief Field None value: U32(0)
static ::Fusion::Protocol::StartRequests const None;

/// @brief Field WaitForReflexiveInfo value: U32(4)
static ::Fusion::Protocol::StartRequests const WaitForReflexiveInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::StartRequests, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::StartRequests) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Protocol
