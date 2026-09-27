#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCaptureWwise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioCaptureWwise)
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck {
class ILckAudioSource_AudioDataCallbackDelegate;
}
namespace Liv::Lck {
class ILckAudioSource;
}
namespace Liv::Lck {
class LckAudioCaptureWwise__Start_d__3;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck {
class LckAudioCaptureWwise;
}
namespace Liv::Lck {
class LckAudioCaptureWwise__Start_d__3;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioCaptureWwise*);
MARK_REF_T(::Liv::Lck::LckAudioCaptureWwise__Start_d__3*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioCaptureWwise*, "Liv.Lck", "LckAudioCaptureWwise");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioCaptureWwise__Start_d__3*, "Liv.Lck", "LckAudioCaptureWwise/<Start>d__3");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioCaptureWwise
class CORDL_TYPE LckAudioCaptureWwise : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__3 = ::Liv::Lck::LckAudioCaptureWwise__Start_d__3;

/// @brief Field _audioBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioBuffer, put=__cordl_internal_set__audioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _audioBuffer;

/// @brief Field _captureAudio, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__captureAudio, put=__cordl_internal_set__captureAudio)) bool  _captureAudio;

/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr operator  ::Liv::Lck::ILckAudioSource*() noexcept;

/// @brief Method DisableCapture, addr 0x9cdd958, size 0x98, virtual true, abstract: false, final false
inline void DisableCapture() ;

/// @brief Method EnableCapture, addr 0x9cdd8c0, size 0x98, virtual true, abstract: false, final false
inline void EnableCapture() ;

/// @brief Method GetAudioData, addr 0x9cdda88, size 0x4, virtual true, abstract: false, final true
inline void GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback) ;

/// @brief Method IsCapturing, addr 0x9cdd838, size 0x8, virtual true, abstract: false, final true
inline bool IsCapturing() ;

static inline ::Liv::Lck::LckAudioCaptureWwise* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9cdd9f0, size 0x98, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [IteratorStateMachine(typeof(Liv.Lck.LckAudioCaptureWwise::<Start>d__3))]
/// @brief Method Start, addr 0x9cdd840, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__audioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__audioBuffer() ;

constexpr bool const& __cordl_internal_get__captureAudio() const;

constexpr bool& __cordl_internal_get__captureAudio() ;

constexpr void __cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__captureAudio(bool  value) ;

/// @brief Method .ctor, addr 0x9cdda8c, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* i___Liv__Lck__ILckAudioSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioCaptureWwise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureWwise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioCaptureWwise(LckAudioCaptureWwise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureWwise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioCaptureWwise(LckAudioCaptureWwise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24692};

/// @brief Field _captureAudio, offset: 0x20, size: 0x1, def value: None
 bool  ____captureAudio;

/// @brief Field _audioBuffer, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____audioBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioCaptureWwise, ____captureAudio) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureWwise, ____audioBuffer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioCaptureWwise) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioCaptureWwise/<Start>d__3
class CORDL_TYPE LckAudioCaptureWwise__Start_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9cddb04, size 0x58, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::LckAudioCaptureWwise__Start_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9cddb5c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9cddb64, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9cddb9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9cddb00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9cdd898, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioCaptureWwise__Start_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureWwise__Start_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioCaptureWwise__Start_d__3(LckAudioCaptureWwise__Start_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioCaptureWwise__Start_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioCaptureWwise__Start_d__3(LckAudioCaptureWwise__Start_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24691};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioCaptureWwise__Start_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioCaptureWwise__Start_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioCaptureWwise__Start_d__3) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
