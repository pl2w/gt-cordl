#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/UX/TTSSpeakerStatusLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/UX/zzzz__TTSSpeakerObserver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeakerStatusLabel)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerStatusLabel__RefreshUpdater_d__13;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerStatusLabel;
}
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerStatusLabel__RefreshUpdater_d__13;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel*);
MARK_REF_T(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel*, "Meta.WitAi.TTS.UX", "TTSSpeakerStatusLabel");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13*, "Meta.WitAi.TTS.UX", "TTSSpeakerStatusLabel/<RefreshUpdater>d__13");
// Dependencies Meta.WitAi.TTS.UX.TTSSpeakerObserver
namespace Meta::WitAi::TTS::UX {
// Is value type: false
// CS Name: Meta.WitAi.TTS.UX.TTSSpeakerStatusLabel
class CORDL_TYPE TTSSpeakerStatusLabel : public ::Meta::WitAi::TTS::UX::TTSSpeakerObserver {
public:
// Declarations
using _RefreshUpdater_d__13 = ::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13;

/// @brief Field _label, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::UnityEngine::UI::Text>  _label;

/// @brief Field _needsRefresh, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsRefresh, put=__cordl_internal_set__needsRefresh)) bool  _needsRefresh;

/// @brief Field _refreshUpdater, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__refreshUpdater, put=__cordl_internal_set__refreshUpdater)) ::UnityEngine::Coroutine*  _refreshUpdater;

/// @brief Method AppendClipText, addr 0x9e51498, size 0x224, virtual false, abstract: false, final false
inline void AppendClipText(::System::Text::StringBuilder*  status, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  clipKey) ;

static inline ::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e513b4, size 0x44, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e51098, size 0x40, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoadAbort, addr 0x9e51404, size 0xc, virtual true, abstract: false, final false
inline void OnLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnLoadBegin, addr 0x9e513f8, size 0xc, virtual true, abstract: false, final false
inline void OnLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnLoadFailed, addr 0x9e51410, size 0xc, virtual true, abstract: false, final false
inline void OnLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error) ;

/// @brief Method OnLoadSuccess, addr 0x9e5141c, size 0xc, virtual true, abstract: false, final false
inline void OnLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnPlaybackCancelled, addr 0x9e51440, size 0xc, virtual true, abstract: false, final false
inline void OnPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  reason) ;

/// @brief Method OnPlaybackComplete, addr 0x9e5144c, size 0xc, virtual true, abstract: false, final false
inline void OnPlaybackComplete(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnPlaybackReady, addr 0x9e51428, size 0xc, virtual true, abstract: false, final false
inline void OnPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnPlaybackStart, addr 0x9e51434, size 0xc, virtual true, abstract: false, final false
inline void OnPlaybackStart(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RefreshLabel, addr 0x9e510d8, size 0x270, virtual false, abstract: false, final false
inline void RefreshLabel() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.UX.TTSSpeakerStatusLabel::<RefreshUpdater>d__13))]
/// @brief Method RefreshUpdater, addr 0x9e51348, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RefreshUpdater() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__label() ;

constexpr bool const& __cordl_internal_get__needsRefresh() const;

constexpr bool& __cordl_internal_get__needsRefresh() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__refreshUpdater() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__refreshUpdater() ;

constexpr void __cordl_internal_set__label(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__needsRefresh(bool  value) ;

constexpr void __cordl_internal_set__refreshUpdater(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x9e518a4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerStatusLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerStatusLabel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerStatusLabel(TTSSpeakerStatusLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerStatusLabel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerStatusLabel(TTSSpeakerStatusLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29088};

/// [SerializeField]
/// @brief Field _label, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____label;

/// @brief Field _needsRefresh, offset: 0x30, size: 0x1, def value: None
 bool  ____needsRefresh;

/// @brief Field _refreshUpdater, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____refreshUpdater;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel, ____label) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel, ____needsRefresh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel, ____refreshUpdater) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::UX
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::UX {
// Is value type: false
// CS Name: Meta.WitAi.TTS.UX.TTSSpeakerStatusLabel/<RefreshUpdater>d__13
class CORDL_TYPE TTSSpeakerStatusLabel__RefreshUpdater_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e518b8, size 0x64, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e5191c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e51924, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e5195c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e518b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e51458, size 0x28, virtual false, abstract: false, final false
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
constexpr TTSSpeakerStatusLabel__RefreshUpdater_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerStatusLabel__RefreshUpdater_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerStatusLabel__RefreshUpdater_d__13(TTSSpeakerStatusLabel__RefreshUpdater_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerStatusLabel__RefreshUpdater_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerStatusLabel__RefreshUpdater_d__13(TTSSpeakerStatusLabel__RefreshUpdater_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29087};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::UX::TTSSpeakerStatusLabel__RefreshUpdater_d__13) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::UX
