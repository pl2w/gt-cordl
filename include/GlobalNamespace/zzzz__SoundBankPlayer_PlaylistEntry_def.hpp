#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankPlayer_PlaylistEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoundBankPlayer_PlaylistEntry)
// Forward declare root types
namespace GlobalNamespace {
struct SoundBankPlayer_PlaylistEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SoundBankPlayer_PlaylistEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundBankPlayer_PlaylistEntry, "", "SoundBankPlayer/PlaylistEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SoundBankPlayer/PlaylistEntry
struct CORDL_TYPE SoundBankPlayer_PlaylistEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SoundBankPlayer_PlaylistEntry() ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SoundBankPlayer_PlaylistEntry(int32_t  index, float_t  volume, float_t  pitch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field index, offset: 0x0, size: 0x4, def value: None
 int32_t  index;

/// @brief Field volume, offset: 0x4, size: 0x4, def value: None
 float_t  volume;

/// @brief Field pitch, offset: 0x8, size: 0x4, def value: None
 float_t  pitch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundBankPlayer_PlaylistEntry, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer_PlaylistEntry, volume) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer_PlaylistEntry, pitch) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundBankPlayer_PlaylistEntry) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
