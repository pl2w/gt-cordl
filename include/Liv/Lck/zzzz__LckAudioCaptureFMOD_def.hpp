#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCaptureFMOD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioCaptureFMOD)
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
class LckAudioCaptureFMOD;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioCaptureFMOD*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioCaptureFMOD*, "Liv.Lck", "LckAudioCaptureFMOD");
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioCaptureFMOD
class CORDL_TYPE LckAudioCaptureFMOD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioBuffer, put=__cordl_internal_set__audioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _audioBuffer;

/// @brief Field _audioThreadLock, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioThreadLock, put=__cordl_internal_set__audioThreadLock)) ::System::Object*  _audioThreadLock;

/// @brief Field _isCapturing, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCapturing, put=__cordl_internal_set__isCapturing)) bool  _isCapturing;

/// @brief Field _tmpAudio, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpAudio, put=__cordl_internal_set__tmpAudio)) ::Liv::Lck::Collections::AudioBuffer*  _tmpAudio;

/// @brief Field _tmpDownmixBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpDownmixBuffer, put=__cordl_internal_set__tmpDownmixBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _tmpDownmixBuffer;

/// @brief Field mObjHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mObjHandle, put=__cordl_internal_set_mObjHandle)) ::System::Runtime::InteropServices::GCHandle  mObjHandle;

/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr operator  ::Liv::Lck::ILckAudioSource*() noexcept;

/// @brief Method DisableCapture, addr 0x9cdca34, size 0x20, virtual true, abstract: false, final true
inline void DisableCapture() ;

/// @brief Method EnableCapture, addr 0x9cdca10, size 0x24, virtual true, abstract: false, final true
inline void EnableCapture() ;

/// @brief Method GetAudioData, addr 0x9cdc920, size 0xf0, virtual true, abstract: false, final true
inline void GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback) ;

/// @brief Method IsCapturing, addr 0x9cdc910, size 0x8, virtual true, abstract: false, final true
inline bool IsCapturing() ;

static inline ::Liv::Lck::LckAudioCaptureFMOD* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9cdc91c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x9cdc918, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__audioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__audioBuffer() ;

constexpr ::System::Object* const& __cordl_internal_get__audioThreadLock() const;

constexpr ::System::Object*& __cordl_internal_get__audioThreadLock() ;

constexpr bool const& __cordl_internal_get__isCapturing() const;

constexpr bool& __cordl_internal_get__isCapturing() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__tmpAudio() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__tmpAudio() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__tmpDownmixBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__tmpDownmixBuffer() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_mObjHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_mObjHandle() ;

constexpr void __cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__audioThreadLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__isCapturing(bool  value) ;

constexpr void __cordl_internal_set__tmpAudio(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__tmpDownmixBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set_mObjHandle(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method .ctor, addr 0x9cdca54, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* i___Liv__Lck__ILckAudioSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioCaptureFMOD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureFMOD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioCaptureFMOD(LckAudioCaptureFMOD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureFMOD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioCaptureFMOD(LckAudioCaptureFMOD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24689};

/// @brief Field channels offset 0xffffffff size 0x4
static constexpr int32_t  channels{static_cast<int32_t>(0x2)};

/// @brief Field mObjHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___mObjHandle;

/// @brief Field _tmpDownmixBuffer, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____tmpDownmixBuffer;

/// @brief Field _tmpAudio, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____tmpAudio;

/// @brief Field _audioBuffer, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____audioBuffer;

/// @brief Field _isCapturing, offset: 0x40, size: 0x1, def value: None
 bool  ____isCapturing;

/// @brief Field _audioThreadLock, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ____audioThreadLock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMOD, ___mObjHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMOD, ____tmpDownmixBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMOD, ____tmpAudio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMOD, ____audioBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMOD, ____isCapturing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureFMOD, ____audioThreadLock) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioCaptureFMOD) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck
