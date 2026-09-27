#pragma once
// IWYU pragma private; include "Liv/Lck/ILckAudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ILckAudioSource)
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck {
class ILckAudioSource_AudioDataCallbackDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck {
class ILckAudioSource;
}
namespace Liv::Lck {
class ILckAudioSource_AudioDataCallbackDelegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckAudioSource*);
MARK_REF_T(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckAudioSource*, "Liv.Lck", "ILckAudioSource");
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*, "Liv.Lck", "ILckAudioSource/AudioDataCallbackDelegate");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckAudioSource
class CORDL_TYPE ILckAudioSource {
public:
// Declarations
using AudioDataCallbackDelegate = ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate;

/// @brief Method DisableCapture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DisableCapture() ;

/// @brief Method EnableCapture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EnableCapture() ;

/// @brief Method GetAudioData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback) ;

/// @brief Method IsCapturing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsCapturing() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckAudioSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckAudioSource(ILckAudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24679};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
// Dependencies System.MulticastDelegate
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckAudioSource/AudioDataCallbackDelegate
class CORDL_TYPE ILckAudioSource_AudioDataCallbackDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9cdc488, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Liv::Lck::Collections::AudioBuffer*  audioBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9cdc4a8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9cdc474, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Liv::Lck::Collections::AudioBuffer*  audioBuffer) ;

static inline ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9cdc36c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ILckAudioSource_AudioDataCallbackDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ILckAudioSource_AudioDataCallbackDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ILckAudioSource_AudioDataCallbackDelegate(ILckAudioSource_AudioDataCallbackDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ILckAudioSource_AudioDataCallbackDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckAudioSource_AudioDataCallbackDelegate(ILckAudioSource_AudioDataCallbackDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24678};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck
