#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/AudioClipStreamSampleDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipStreamSampleDelegate)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class AudioClipStreamSampleDelegate;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*, "Meta.Voice.Audio", "AudioClipStreamSampleDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.AudioClipStreamSampleDelegate
class CORDL_TYPE AudioClipStreamSampleDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e6ca8c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length) ;

static inline ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e6c9d8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipStreamSampleDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClipStreamSampleDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipStreamSampleDelegate(AudioClipStreamSampleDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipStreamSampleDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipStreamSampleDelegate(AudioClipStreamSampleDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25509};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Audio::AudioClipStreamSampleDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
