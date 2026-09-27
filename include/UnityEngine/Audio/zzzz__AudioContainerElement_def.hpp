#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioContainerElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioContainerElement)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioContainerElement;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::AudioContainerElement*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioContainerElement*, "UnityEngine.Audio", "AudioContainerElement");
// [NativeHeader("Modules/Audio/Public/AudioContainerElement.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioContainerElement
class CORDL_TYPE AudioContainerElement : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioContainerElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioContainerElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioContainerElement(AudioContainerElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioContainerElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioContainerElement(AudioContainerElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioContainerElement) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
