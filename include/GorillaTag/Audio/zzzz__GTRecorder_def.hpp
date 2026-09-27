#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTRecorder)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GorillaTag::Audio {
class GTMicWrapper;
}
namespace GorillaTag::Audio {
class GTRecorder__DoTestEcho_d__14;
}
namespace Photon::Voice::Unity {
class MicWrapper;
}
namespace Photon::Voice::Unity {
class VoiceLogger;
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
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GorillaTag::Audio {
class GTRecorder;
}
namespace GorillaTag::Audio {
class GTRecorder__DoTestEcho_d__14;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::GTRecorder*);
MARK_REF_T(::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTRecorder*, "GorillaTag.Audio", "GTRecorder");
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*, "GorillaTag.Audio", "GTRecorder/<DoTestEcho>d__14");
// Dependencies Photon.Voice.Unity.Recorder
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTRecorder
class CORDL_TYPE GTRecorder : public ::Photon::Voice::Unity::Recorder {
public:
// Declarations
using _DoTestEcho_d__14 = ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14;

/// @brief Field AllowPitchAdjustment, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowPitchAdjustment, put=__cordl_internal_set_AllowPitchAdjustment)) bool  AllowPitchAdjustment;

/// @brief Field AllowVolumeAdjustment, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowVolumeAdjustment, put=__cordl_internal_set_AllowVolumeAdjustment)) bool  AllowVolumeAdjustment;

/// @brief Field DebugEchoLength, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_DebugEchoLength, put=__cordl_internal_set_DebugEchoLength)) float_t  DebugEchoLength;

/// @brief Field PitchAdjustment, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_PitchAdjustment, put=__cordl_internal_set_PitchAdjustment)) float_t  PitchAdjustment;

 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

/// @brief Field VolumeAdjustment, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_VolumeAdjustment, put=__cordl_internal_set_VolumeAdjustment)) float_t  VolumeAdjustment;

/// @brief Field <PostTickRunning>k__BackingField, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Field _micWrapper, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__micWrapper, put=__cordl_internal_set__micWrapper)) ::GorillaTag::Audio::GTMicWrapper*  _micWrapper;

/// @brief Field _testEchoCoroutine, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__testEchoCoroutine, put=__cordl_internal_set__testEchoCoroutine)) ::UnityEngine::Coroutine*  _testEchoCoroutine;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method CreateMicWrapper, addr 0x5d51228, size 0xb4, virtual true, abstract: false, final false
inline ::Photon::Voice::Unity::MicWrapper* CreateMicWrapper(::StringW  micDev, int32_t  samplingRateInt, ::Photon::Voice::Unity::VoiceLogger*  logger) ;

/// [IteratorStateMachine(typeof(GorillaTag.Audio.GTRecorder::<DoTestEcho>d__14))]
/// @brief Method DoTestEcho, addr 0x5d512dc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoTestEcho() ;

static inline ::GorillaTag::Audio::GTRecorder* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d511bc, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d51150, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostTick, addr 0x5d51370, size 0x2c, virtual true, abstract: false, final true
inline void PostTick() ;

constexpr bool const& __cordl_internal_get_AllowPitchAdjustment() const;

constexpr bool& __cordl_internal_get_AllowPitchAdjustment() ;

constexpr bool const& __cordl_internal_get_AllowVolumeAdjustment() const;

constexpr bool& __cordl_internal_get_AllowVolumeAdjustment() ;

constexpr float_t const& __cordl_internal_get_DebugEchoLength() const;

constexpr float_t& __cordl_internal_get_DebugEchoLength() ;

constexpr float_t const& __cordl_internal_get_PitchAdjustment() const;

constexpr float_t& __cordl_internal_get_PitchAdjustment() ;

constexpr float_t const& __cordl_internal_get_VolumeAdjustment() const;

constexpr float_t& __cordl_internal_get_VolumeAdjustment() ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr ::GorillaTag::Audio::GTMicWrapper* const& __cordl_internal_get__micWrapper() const;

constexpr ::GorillaTag::Audio::GTMicWrapper*& __cordl_internal_get__micWrapper() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__testEchoCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__testEchoCoroutine() ;

constexpr void __cordl_internal_set_AllowPitchAdjustment(bool  value) ;

constexpr void __cordl_internal_set_AllowVolumeAdjustment(bool  value) ;

constexpr void __cordl_internal_set_DebugEchoLength(float_t  value) ;

constexpr void __cordl_internal_set_PitchAdjustment(float_t  value) ;

constexpr void __cordl_internal_set_VolumeAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__micWrapper(::GorillaTag::Audio::GTMicWrapper*  value) ;

constexpr void __cordl_internal_set__testEchoCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x5d5139c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x5d51140, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x5d51148, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTRecorder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTRecorder(GTRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTRecorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTRecorder(GTRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4790};

/// @brief Field AllowPitchAdjustment, offset: 0xe8, size: 0x1, def value: None
 bool  ___AllowPitchAdjustment;

/// @brief Field PitchAdjustment, offset: 0xec, size: 0x4, def value: None
 float_t  ___PitchAdjustment;

/// @brief Field AllowVolumeAdjustment, offset: 0xf0, size: 0x1, def value: None
 bool  ___AllowVolumeAdjustment;

/// @brief Field VolumeAdjustment, offset: 0xf4, size: 0x4, def value: None
 float_t  ___VolumeAdjustment;

/// @brief Field DebugEchoLength, offset: 0xf8, size: 0x4, def value: None
 float_t  ___DebugEchoLength;

/// @brief Field _micWrapper, offset: 0x100, size: 0x8, def value: None
 ::GorillaTag::Audio::GTMicWrapper*  ____micWrapper;

/// @brief Field _testEchoCoroutine, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____testEchoCoroutine;

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0x110, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ___AllowPitchAdjustment) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ___PitchAdjustment) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ___AllowVolumeAdjustment) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ___VolumeAdjustment) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ___DebugEchoLength) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ____micWrapper) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ____testEchoCoroutine) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder, ____PostTickRunning_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::GTRecorder) == 0x118, "Size mismatch!");

} // namespace end def GorillaTag::Audio
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTRecorder/<DoTestEcho>d__14
class CORDL_TYPE GTRecorder__DoTestEcho_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Audio::GTRecorder>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d5140c, size 0x11c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d51528, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d51530, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d51568, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d51408, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Audio::GTRecorder>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d51348, size 0x28, virtual false, abstract: false, final false
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
constexpr GTRecorder__DoTestEcho_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTRecorder__DoTestEcho_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTRecorder__DoTestEcho_d__14(GTRecorder__DoTestEcho_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTRecorder__DoTestEcho_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTRecorder__DoTestEcho_d__14(GTRecorder__DoTestEcho_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4789};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::GTRecorder>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Audio
