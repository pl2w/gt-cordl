#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCaptureFMODAndUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioCaptureFMODAndUnity)
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
class LckAudioCaptureFMODAndUnity;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioCaptureFMODAndUnity*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioCaptureFMODAndUnity*, "Liv.Lck", "LckAudioCaptureFMODAndUnity");
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioCaptureFMODAndUnity
class CORDL_TYPE LckAudioCaptureFMODAndUnity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioThreadLock, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioThreadLock, put=__cordl_internal_set__audioThreadLock)) ::System::Object*  _audioThreadLock;

/// @brief Field _fmodBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__fmodBuffer, put=__cordl_internal_set__fmodBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _fmodBuffer;

/// @brief Field _fmodSampleRate, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__fmodSampleRate, put=__cordl_internal_set__fmodSampleRate)) int32_t  _fmodSampleRate;

/// @brief Field _isCapturing, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCapturing, put=__cordl_internal_set__isCapturing)) bool  _isCapturing;

/// @brief Field _mObjHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mObjHandle, put=__cordl_internal_set__mObjHandle)) ::System::Runtime::InteropServices::GCHandle  _mObjHandle;

/// @brief Field _mixBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixBuffer, put=__cordl_internal_set__mixBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _mixBuffer;

/// @brief Field _tmpAudio, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpAudio, put=__cordl_internal_set__tmpAudio)) ::Liv::Lck::Collections::AudioBuffer*  _tmpAudio;

/// @brief Field _tmpRemixBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpRemixBuffer, put=__cordl_internal_set__tmpRemixBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _tmpRemixBuffer;

/// @brief Field _unityBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__unityBuffer, put=__cordl_internal_set__unityBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _unityBuffer;

/// @brief Field _unitySampleRate, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__unitySampleRate, put=__cordl_internal_set__unitySampleRate)) int32_t  _unitySampleRate;

/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr operator  ::Liv::Lck::ILckAudioSource*() noexcept;

/// @brief Method AppendToBufferAsStereo, addr 0x9cdcd14, size 0x2ac, virtual false, abstract: false, final false
static inline void AppendToBufferAsStereo(::ArrayW<float_t>  sourceAudioBuffer, int32_t  sourceAudioStartIdx, int32_t  sourceAudioLength, int32_t  sourceChannels, ::Liv::Lck::Collections::AudioBuffer*  destBuffer, ::Liv::Lck::Collections::AudioBuffer*  remixBuffer) ;

/// @brief Method DisableCapture, addr 0x9cdd690, size 0x44, virtual true, abstract: false, final true
inline void DisableCapture() ;

/// @brief Method EnableCapture, addr 0x9cdd648, size 0x48, virtual true, abstract: false, final true
inline void EnableCapture() ;

/// @brief Method GetAudioData, addr 0x9cdd3f4, size 0x254, virtual true, abstract: false, final true
inline void GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback) ;

/// @brief Method IsCapturing, addr 0x9cdcb60, size 0x8, virtual true, abstract: false, final true
inline bool IsCapturing() ;

static inline ::Liv::Lck::LckAudioCaptureFMODAndUnity* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x9cdd188, size 0xf8, virtual true, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

/// @brief Method OnDestroy, addr 0x9cdd3f0, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x9cdd280, size 0x170, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryAppendToBuffer, addr 0x9cdcc4c, size 0xc8, virtual false, abstract: false, final false
static inline void TryAppendToBuffer(::Liv::Lck::Collections::AudioBuffer*  srcBuffer, ::Liv::Lck::Collections::AudioBuffer*  destBuffer) ;

/// @brief Method TryAppendToBuffer, addr 0x9cdcb68, size 0xe4, virtual false, abstract: false, final false
static inline void TryAppendToBuffer(::ArrayW<float_t>  srcDataBuffer, int32_t  srcStartIdx, int32_t  srcDataLength, ::Liv::Lck::Collections::AudioBuffer*  destBuffer) ;

constexpr ::System::Object* const& __cordl_internal_get__audioThreadLock() const;

constexpr ::System::Object*& __cordl_internal_get__audioThreadLock() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__fmodBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__fmodBuffer() ;

constexpr int32_t const& __cordl_internal_get__fmodSampleRate() const;

constexpr int32_t& __cordl_internal_get__fmodSampleRate() ;

constexpr bool const& __cordl_internal_get__isCapturing() const;

constexpr bool& __cordl_internal_get__isCapturing() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__mObjHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__mObjHandle() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__mixBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__mixBuffer() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__tmpAudio() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__tmpAudio() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__tmpRemixBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__tmpRemixBuffer() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__unityBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__unityBuffer() ;

constexpr int32_t const& __cordl_internal_get__unitySampleRate() const;

constexpr int32_t& __cordl_internal_get__unitySampleRate() ;

constexpr void __cordl_internal_set__audioThreadLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__fmodBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__fmodSampleRate(int32_t  value) ;

constexpr void __cordl_internal_set__isCapturing(bool  value) ;

constexpr void __cordl_internal_set__mObjHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set__mixBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__tmpAudio(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__tmpRemixBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__unityBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__unitySampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x9cdd6d4, size 0x164, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* i___Liv__Lck__ILckAudioSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioCaptureFMODAndUnity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureFMODAndUnity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioCaptureFMODAndUnity(LckAudioCaptureFMODAndUnity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureFMODAndUnity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioCaptureFMODAndUnity(LckAudioCaptureFMODAndUnity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24690};

/// @brief Field _mObjHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ____mObjHandle;

/// @brief Field _tmpRemixBuffer, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____tmpRemixBuffer;

/// @brief Field _tmpAudio, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____tmpAudio;

/// @brief Field _fmodBuffer, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____fmodBuffer;

/// @brief Field _unityBuffer, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____unityBuffer;

/// @brief Field _mixBuffer, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____mixBuffer;

/// @brief Field _fmodSampleRate, offset: 0x50, size: 0x4, def value: None
 int32_t  ____fmodSampleRate;

/// @brief Field _unitySampleRate, offset: 0x54, size: 0x4, def value: None
 int32_t  ____unitySampleRate;

/// @brief Field _isCapturing, offset: 0x58, size: 0x1, def value: None
 bool  ____isCapturing;

/// @brief Field _audioThreadLock, offset: 0x60, size: 0x8, def value: None
 ::System::Object*  ____audioThreadLock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____mObjHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____tmpRemixBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____tmpAudio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____fmodBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____unityBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____mixBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____fmodSampleRate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____unitySampleRate) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____isCapturing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMODAndUnity, ____audioThreadLock) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioCaptureFMODAndUnity) == 0x68, "Size mismatch!");

} // namespace end def Liv::Lck
