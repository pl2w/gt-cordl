#pragma once
// IWYU pragma private; include "UnityEngine/AudioReverbZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioReverbZone)
// Forward declare root types
namespace UnityEngine {
class AudioReverbZone;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioReverbZone*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioReverbZone*, "UnityEngine", "AudioReverbZone");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Audio/Public/AudioReverbZone.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioReverbZone
class CORDL_TYPE AudioReverbZone : public ::UnityEngine::Behaviour {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReverbZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReverbZone(AudioReverbZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReverbZone(AudioReverbZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioReverbZone) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
