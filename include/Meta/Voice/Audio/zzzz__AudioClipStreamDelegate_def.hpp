#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/AudioClipStreamDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AudioClipStreamDelegate)
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class AudioClipStreamDelegate;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::AudioClipStreamDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::AudioClipStreamDelegate*, "Meta.Voice.Audio", "AudioClipStreamDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.AudioClipStreamDelegate
class CORDL_TYPE AudioClipStreamDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e6c9c4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::Voice::Audio::IAudioClipStream*  clipStream) ;

static inline ::Meta::Voice::Audio::AudioClipStreamDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e6c8bc, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipStreamDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClipStreamDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipStreamDelegate(AudioClipStreamDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipStreamDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipStreamDelegate(AudioClipStreamDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25508};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Audio::AudioClipStreamDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
