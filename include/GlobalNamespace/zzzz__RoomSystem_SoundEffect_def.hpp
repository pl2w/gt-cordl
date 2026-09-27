#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_SoundEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystem_SoundEffect)
// Forward declare root types
namespace GlobalNamespace {
struct RoomSystem_SoundEffect;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomSystem_SoundEffect);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_SoundEffect, "", "RoomSystem/SoundEffect");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomSystem/SoundEffect
struct CORDL_TYPE RoomSystem_SoundEffect {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ad69b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  soundID, float_t  soundVolume, bool  _stopCurrentAudio) ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_SoundEffect() ;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stopCurrentAudio", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RoomSystem_SoundEffect(int32_t  id, float_t  volume, bool  stopCurrentAudio) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3394};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 int32_t  id;

/// @brief Field volume, offset: 0x4, size: 0x4, def value: None
 float_t  volume;

/// @brief Field stopCurrentAudio, offset: 0x8, size: 0x1, def value: None
 bool  stopCurrentAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem_SoundEffect, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_SoundEffect, volume) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_SoundEffect, stopCurrentAudio) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem_SoundEffect) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
