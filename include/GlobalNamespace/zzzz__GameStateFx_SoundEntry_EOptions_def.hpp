#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_SoundEntry_EOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameStateFx_SoundEntry_EOptions)
// Forward declare root types
namespace GlobalNamespace {
struct SoundEntry_GameStateFx_EOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SoundEntry_GameStateFx_EOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundEntry_GameStateFx_EOptions, "", "GameStateFx/SoundEntry/EOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/SoundEntry/EOptions
struct CORDL_TYPE SoundEntry_GameStateFx_EOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SoundEntry_GameStateFx_EOptions_Unwrapped
enum struct __SoundEntry_GameStateFx_EOptions_Unwrapped : int32_t {
__E_Source = static_cast<int32_t>(0x1),
__E_Sound = static_cast<int32_t>(0x2),
__E_Volume = static_cast<int32_t>(0x4),
__E_Pitch = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SoundEntry_GameStateFx_EOptions_Unwrapped () const noexcept {
return static_cast<__SoundEntry_GameStateFx_EOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SoundEntry_GameStateFx_EOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SoundEntry_GameStateFx_EOptions(int32_t  value__) noexcept;

/// @brief Field Pitch value: I32(8)
static ::GlobalNamespace::SoundEntry_GameStateFx_EOptions const Pitch;

/// @brief Field Sound value: I32(2)
static ::GlobalNamespace::SoundEntry_GameStateFx_EOptions const Sound;

/// @brief Field Source value: I32(1)
static ::GlobalNamespace::SoundEntry_GameStateFx_EOptions const Source;

/// @brief Field Volume value: I32(4)
static ::GlobalNamespace::SoundEntry_GameStateFx_EOptions const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundEntry_GameStateFx_EOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundEntry_GameStateFx_EOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
