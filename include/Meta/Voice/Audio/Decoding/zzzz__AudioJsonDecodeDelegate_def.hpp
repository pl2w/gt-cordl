#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioJsonDecodeDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AudioJsonDecodeDelegate)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioJsonDecodeDelegate;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*, "Meta.Voice.Audio.Decoding", "AudioJsonDecodeDelegate");
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioJsonDecodeDelegate
class CORDL_TYPE AudioJsonDecodeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e6e0a0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  jsonNode) ;

static inline ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e6df98, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioJsonDecodeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioJsonDecodeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioJsonDecodeDelegate(AudioJsonDecodeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioJsonDecodeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioJsonDecodeDelegate(AudioJsonDecodeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
