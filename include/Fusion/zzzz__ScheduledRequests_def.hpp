#pragma once
// IWYU pragma private; include "Fusion/ScheduledRequests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledRequests)
// Forward declare root types
namespace Fusion {
struct ScheduledRequests;
}
// Write type traits
MARK_VAL_T(::Fusion::ScheduledRequests);
DEFINE_IL2CPP_CLASS(::Fusion::ScheduledRequests, "Fusion", "ScheduledRequests");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ScheduledRequests
struct CORDL_TYPE ScheduledRequests {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ScheduledRequests_Unwrapped
enum struct __ScheduledRequests_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_ReflexiveInfo = static_cast<uint32_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScheduledRequests_Unwrapped () const noexcept {
return static_cast<__ScheduledRequests_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScheduledRequests() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScheduledRequests(uint32_t  value__) noexcept;

/// @brief Field None value: U32(0)
static ::Fusion::ScheduledRequests const None;

/// @brief Field ReflexiveInfo value: U32(2)
static ::Fusion::ScheduledRequests const ReflexiveInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ScheduledRequests, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::ScheduledRequests) == 0x4, "Size mismatch!");

} // namespace end def Fusion
