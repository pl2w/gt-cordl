#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AttributeSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeSource)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct AttributeSource;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::AttributeSource);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AttributeSource, "PlayFab.MultiplayerModels", "AttributeSource");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.AttributeSource
struct CORDL_TYPE AttributeSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AttributeSource_Unwrapped
enum struct __AttributeSource_Unwrapped : int32_t {
__E_User = static_cast<int32_t>(0x0),
__E_PlayerEntity = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeSource_Unwrapped () const noexcept {
return static_cast<__AttributeSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AttributeSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AttributeSource(int32_t  value__) noexcept;

/// @brief Field PlayerEntity value: I32(1)
static ::PlayFab::MultiplayerModels::AttributeSource const PlayerEntity;

/// @brief Field User value: I32(0)
static ::PlayFab::MultiplayerModels::AttributeSource const User;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AttributeSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AttributeSource) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
