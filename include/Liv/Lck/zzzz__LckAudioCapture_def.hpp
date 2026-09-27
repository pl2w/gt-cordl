#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioCapture)
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck {
class ILckAudioSource_AudioDataCallbackDelegate;
}
namespace Liv::Lck {
class ILckAudioSource;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck {
class LckAudioCapture;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioCapture*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioCapture*, "Liv.Lck", "LckAudioCapture");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioCapture
class CORDL_TYPE LckAudioCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioBuffer, put=__cordl_internal_set__audioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _audioBuffer;

/// @brief Field _audioThreadLock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioThreadLock, put=__cordl_internal_set__audioThreadLock)) ::System::Object*  _audioThreadLock;

/// @brief Field _captureAudio, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__captureAudio, put=__cordl_internal_set__captureAudio)) bool  _captureAudio;

/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr operator  ::Liv::Lck::ILckAudioSource*() noexcept;

/// @brief Method DisableCapture, addr 0x9cdc5d0, size 0x28, virtual true, abstract: false, final true
inline void DisableCapture() ;

/// @brief Method EnableCapture, addr 0x9cdc5a4, size 0x2c, virtual true, abstract: false, final true
inline void EnableCapture() ;

/// @brief Method GetAudioData, addr 0x9cdc4b4, size 0xf0, virtual true, abstract: false, final true
inline void GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback) ;

/// @brief Method IsCapturing, addr 0x9cdc5f8, size 0x8, virtual true, abstract: false, final true
inline bool IsCapturing() ;

static inline ::Liv::Lck::LckAudioCapture* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x9cdc600, size 0x178, virtual true, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__audioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__audioBuffer() ;

constexpr ::System::Object* const& __cordl_internal_get__audioThreadLock() const;

constexpr ::System::Object*& __cordl_internal_get__audioThreadLock() ;

constexpr bool const& __cordl_internal_get__captureAudio() const;

constexpr bool& __cordl_internal_get__captureAudio() ;

constexpr void __cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__audioThreadLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__captureAudio(bool  value) ;

/// @brief Method .ctor, addr 0x9cdc85c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* i___Liv__Lck__ILckAudioSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCapture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioCapture(LckAudioCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCapture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioCapture(LckAudioCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24688};

/// @brief Field _captureAudio, offset: 0x20, size: 0x1, def value: None
 bool  ____captureAudio;

/// @brief Field _audioBuffer, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____audioBuffer;

/// @brief Field _audioThreadLock, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ____audioThreadLock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioCapture, ____captureAudio) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCapture, ____audioBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCapture, ____audioThreadLock) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioCapture) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck
