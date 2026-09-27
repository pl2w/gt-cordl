#pragma once
// IWYU pragma private; include "PlayFab/Internal/ApiProcessingEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApiProcessingEventType)
// Forward declare root types
namespace PlayFab::Internal {
struct ApiProcessingEventType;
}
// Write type traits
MARK_VAL_T(::PlayFab::Internal::ApiProcessingEventType);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::ApiProcessingEventType, "PlayFab.Internal", "ApiProcessingEventType");
// Dependencies 
namespace PlayFab::Internal {
// Is value type: true
// CS Name: PlayFab.Internal.ApiProcessingEventType
struct CORDL_TYPE ApiProcessingEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApiProcessingEventType_Unwrapped
enum struct __ApiProcessingEventType_Unwrapped : int32_t {
__E_Pre = static_cast<int32_t>(0x0),
__E_Post = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApiProcessingEventType_Unwrapped () const noexcept {
return static_cast<__ApiProcessingEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApiProcessingEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ApiProcessingEventType(int32_t  value__) noexcept;

/// @brief Field Post value: I32(1)
static ::PlayFab::Internal::ApiProcessingEventType const Post;

/// @brief Field Pre value: I32(0)
static ::PlayFab::Internal::ApiProcessingEventType const Pre;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::ApiProcessingEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::ApiProcessingEventType) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::Internal
