#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardDisplayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELeaderboardDisplayType)
// Forward declare root types
namespace Viveport::Internal {
struct ELeaderboardDisplayType;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::ELeaderboardDisplayType);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::ELeaderboardDisplayType, "Viveport.Internal", "ELeaderboardDisplayType");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.ELeaderboardDisplayType
struct CORDL_TYPE ELeaderboardDisplayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELeaderboardDisplayType_Unwrapped
enum struct __ELeaderboardDisplayType_Unwrapped : int32_t {
__E_k_ELeaderboardDisplayTypeNone = static_cast<int32_t>(0x0),
__E_k_ELeaderboardDisplayTypeNumeric = static_cast<int32_t>(0x1),
__E_k_ELeaderboardDisplayTypeTimeSeconds = static_cast<int32_t>(0x2),
__E_k_ELeaderboardDisplayTypeTimeMilliSeconds = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELeaderboardDisplayType_Unwrapped () const noexcept {
return static_cast<__ELeaderboardDisplayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELeaderboardDisplayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ELeaderboardDisplayType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELeaderboardDisplayTypeNone value: I32(0)
static ::Viveport::Internal::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeNone;

/// @brief Field k_ELeaderboardDisplayTypeNumeric value: I32(1)
static ::Viveport::Internal::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeNumeric;

/// @brief Field k_ELeaderboardDisplayTypeTimeMilliSeconds value: I32(3)
static ::Viveport::Internal::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeTimeMilliSeconds;

/// @brief Field k_ELeaderboardDisplayTypeTimeSeconds value: I32(2)
static ::Viveport::Internal::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeTimeSeconds;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::ELeaderboardDisplayType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::ELeaderboardDisplayType) == 0x4, "Size mismatch!");

} // namespace end def Viveport::Internal
