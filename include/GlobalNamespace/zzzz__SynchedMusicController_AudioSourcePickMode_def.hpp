#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController_AudioSourcePickMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynchedMusicController_AudioSourcePickMode)
// Forward declare root types
namespace GlobalNamespace {
struct SynchedMusicController_AudioSourcePickMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynchedMusicController_AudioSourcePickMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynchedMusicController_AudioSourcePickMode, "", "SynchedMusicController/AudioSourcePickMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynchedMusicController/AudioSourcePickMode
struct CORDL_TYPE SynchedMusicController_AudioSourcePickMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SynchedMusicController_AudioSourcePickMode_Unwrapped
enum struct __SynchedMusicController_AudioSourcePickMode_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Shuffle = static_cast<int32_t>(0x1),
__E_Specific = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SynchedMusicController_AudioSourcePickMode_Unwrapped () const noexcept {
return static_cast<__SynchedMusicController_AudioSourcePickMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SynchedMusicController_AudioSourcePickMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SynchedMusicController_AudioSourcePickMode(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode const All;

/// @brief Field Shuffle value: I32(1)
static ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode const Shuffle;

/// @brief Field Specific value: I32(2)
static ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode const Specific;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynchedMusicController_AudioSourcePickMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynchedMusicController_AudioSourcePickMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
