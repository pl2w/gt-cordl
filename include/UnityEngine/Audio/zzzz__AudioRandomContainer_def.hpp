#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
CORDL_MODULE_EXPORT(AudioRandomContainer)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioRandomContainer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::AudioRandomContainer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioRandomContainer*, "UnityEngine.Audio", "AudioRandomContainer");
// [NativeHeader("Modules/Audio/Public/AudioRandomContainer.h")]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Audio.AudioResource
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioRandomContainer
class CORDL_TYPE AudioRandomContainer : public ::UnityEngine::Audio::AudioResource {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRandomContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRandomContainer(AudioRandomContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRandomContainer(AudioRandomContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31550};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioRandomContainer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
