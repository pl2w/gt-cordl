#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPlatform)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerPlatform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerPlatform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPlatform, "", "PlayerPlatform");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerPlatform
struct CORDL_TYPE PlayerPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerPlatform_Unwrapped
enum struct __PlayerPlatform_Unwrapped : int32_t {
__E_Meta = static_cast<int32_t>(0x0),
__E_Steam = static_cast<int32_t>(0x1),
__E_Sony = static_cast<int32_t>(0x2),
__E_SynthesisVR = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerPlatform_Unwrapped () const noexcept {
return static_cast<__PlayerPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerPlatform(int32_t  value__) noexcept;

/// @brief Field Meta value: I32(0)
static ::GlobalNamespace::PlayerPlatform const Meta;

/// @brief Field Sony value: I32(2)
static ::GlobalNamespace::PlayerPlatform const Sony;

/// @brief Field Steam value: I32(1)
static ::GlobalNamespace::PlayerPlatform const Steam;

/// @brief Field SynthesisVR value: I32(3)
static ::GlobalNamespace::PlayerPlatform const SynthesisVR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPlatform, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPlatform) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
