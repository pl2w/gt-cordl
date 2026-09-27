#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/UnityAudioSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/zzzz__BaseAudioSystem_2_def.hpp"
CORDL_MODULE_EXPORT(UnityAudioSystem)
namespace Meta::Voice::Audio {
class RawAudioClipStream;
}
namespace Meta::Voice::Audio {
class UnityAudioPlayer;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class UnityAudioSystem;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::UnityAudioSystem*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::UnityAudioSystem*, "Meta.Voice.Audio", "UnityAudioSystem");
// Dependencies Meta.Voice.Audio.BaseAudioSystem`2<TAudioClipStream, TAudioPlayer>
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.UnityAudioSystem
class CORDL_TYPE UnityAudioSystem : public ::Meta::Voice::Audio::BaseAudioSystem_2<::Meta::Voice::Audio::RawAudioClipStream*,::UnityW<::Meta::Voice::Audio::UnityAudioPlayer>> {
public:
// Declarations
static inline ::Meta::Voice::Audio::UnityAudioSystem* New_ctor() ;

/// @brief Method .ctor, addr 0x9e6df50, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAudioSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAudioSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAudioSystem(UnityAudioSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAudioSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAudioSystem(UnityAudioSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25518};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Audio::UnityAudioSystem) == 0x40, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
