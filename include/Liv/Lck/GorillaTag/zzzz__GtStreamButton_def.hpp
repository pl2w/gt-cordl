#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtStreamButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GtStreamButton)
namespace GlobalNamespace {
struct GtStreamButton_State;
}
namespace GlobalNamespace {
struct GtStreamButton__ResetAfterError_d__25;
}
namespace GlobalNamespace {
struct GtStreamButton__WaitForTriggerExitOrDelay_d__28;
}
namespace Liv::Lck::GorillaTag {
class GtStreamButton__StoppingAnimationVisual_d__21;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtStreamButton;
}
namespace Liv::Lck::GorillaTag {
class GtStreamButton__StoppingAnimationVisual_d__21;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtStreamButton*);
MARK_REF_T(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtStreamButton*, "Liv.Lck.GorillaTag", "GtStreamButton");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*, "Liv.Lck.GorillaTag", "GtStreamButton/<StoppingAnimationVisual>d__21");
// Dependencies Liv.Lck.GorillaTag.GtStreamButton::State, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtStreamButton
class CORDL_TYPE GtStreamButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GtStreamButton_State;

using _ResetAfterError_d__25 = ::GlobalNamespace::GtStreamButton__ResetAfterError_d__25;

using _WaitForTriggerExitOrDelay_d__28 = ::GlobalNamespace::GtStreamButton__WaitForTriggerExitOrDelay_d__28;

using _StoppingAnimationVisual_d__21 = ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21;

/// @brief Field _audioController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _defaultColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__defaultColor, put=__cordl_internal_set__defaultColor)) ::UnityEngine::Color  _defaultColor;

/// @brief Field _defaultLocalPosition, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _isDisabled, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _label, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _state, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::GtStreamButton_State  _state;

/// @brief Field _streamingColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__streamingColor, put=__cordl_internal_set__streamingColor)) ::UnityEngine::Color  _streamingColor;

/// @brief Field _streamingController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamingController, put=__cordl_internal_set__streamingController)) ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  _streamingController;

/// @brief Field _visualsTrans, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

static inline ::Liv::Lck::GorillaTag::GtStreamButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d2d608, size 0x1a8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [ContextMenu("test error")]
/// @brief Method OnError, addr 0x9d2d340, size 0x48, virtual false, abstract: false, final false
inline void OnError() ;

/// @brief Method OnStreamingStarted, addr 0x9d2d460, size 0x58, virtual false, abstract: false, final false
inline void OnStreamingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnStreamingStopped, addr 0x9d2d4b8, size 0x78, virtual false, abstract: false, final false
inline void OnStreamingStopped(::Liv::Lck::LckResult*  result) ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GtStreamButton::<ResetAfterError>d__25))]
/// @brief Method ResetAfterError, addr 0x9d2d388, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResetAfterError() ;

/// @brief Method SetDefaultColor, addr 0x9d2d054, size 0x90, virtual false, abstract: false, final false
inline void SetDefaultColor(::UnityEngine::Color  color) ;

/// @brief Method SetDisabled, addr 0x9d2d318, size 0x28, virtual false, abstract: false, final false
inline void SetDisabled(bool  isDisabled) ;

/// @brief Method SetStoppingAnimationValue, addr 0x9d2d174, size 0x110, virtual false, abstract: false, final false
inline void SetStoppingAnimationValue(float_t  value) ;

/// @brief Method SetStreamingColor, addr 0x9d2d0e4, size 0x90, virtual false, abstract: false, final false
inline void SetStreamingColor(::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0x9d2c908, size 0x1c8, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(Liv.Lck.GorillaTag.GtStreamButton::<StoppingAnimationVisual>d__21))]
/// @brief Method StoppingAnimationVisual, addr 0x9d2d284, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StoppingAnimationVisual() ;

/// @brief Method TapEnded, addr 0x9d2d8dc, size 0x98, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method TapStarted, addr 0x9d2d7b0, size 0x12c, virtual false, abstract: false, final false
inline void TapStarted() ;

/// @brief Method Update, addr 0x9d2cd20, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateStreamDurationText, addr 0x9d2cd3c, size 0x318, virtual false, abstract: false, final false
inline void UpdateStreamDurationText() ;

/// @brief Method UpdateVisualState, addr 0x9d2cad0, size 0x250, virtual false, abstract: false, final false
inline void UpdateVisualState() ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GtStreamButton::<WaitForTriggerExitOrDelay>d__28))]
/// @brief Method WaitForTriggerExitOrDelay, addr 0x9d2d530, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForTriggerExitOrDelay() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultLocalPosition() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::GlobalNamespace::GtStreamButton_State const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::GtStreamButton_State& __cordl_internal_get__state() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__streamingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__streamingColor() ;

constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController> const& __cordl_internal_get__streamingController() const;

constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController>& __cordl_internal_get__streamingController() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::GtStreamButton_State  value) ;

constexpr void __cordl_internal_set__streamingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__streamingController(::UnityW<::Liv::Lck::Streaming::LckStreamingController>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9d2d974, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtStreamButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtStreamButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtStreamButton(GtStreamButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtStreamButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtStreamButton(GtStreamButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29659};

/// @brief Field _idleString offset 0xffffffff size 0x8
static constexpr ::ConstString  _idleString{u"GO LIVE"};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Space(10)]
/// [Header("Global Settings")]
/// [SerializeField]
/// @brief Field _settings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Parameters")]
/// [SerializeField]
/// @brief Field _name, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _label, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [SerializeField]
/// @brief Field _streamingController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  ____streamingController;

/// [Header("Parameters")]
/// [SerializeField]
/// @brief Field _defaultColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____defaultColor;

/// [SerializeField]
/// @brief Field _streamingColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____streamingColor;

/// @brief Field _defaultLocalPosition, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

/// @brief Field _isDisabled, offset: 0x8c, size: 0x1, def value: None
 bool  ____isDisabled;

/// @brief Field _state, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::GtStreamButton_State  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____label) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____bodyRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____visualsTrans) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____audioController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____streamingController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____defaultColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____streamingColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____defaultLocalPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____isDisabled) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton, ____state) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtStreamButton) == 0x98, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtStreamButton/<StoppingAnimationVisual>d__21
class CORDL_TYPE GtStreamButton__StoppingAnimationVisual_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::GorillaTag::GtStreamButton>  __4__this;

/// @brief Field <currentProgress>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentProgress_5__3, put=__cordl_internal_set__currentProgress_5__3)) float_t  _currentProgress_5__3;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field <stoppingDuration>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__stoppingDuration_5__4, put=__cordl_internal_set__stoppingDuration_5__4)) float_t  _stoppingDuration_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d2dcd8, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d2df14, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d2df1c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d2df54, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d2dcd4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtStreamButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtStreamButton>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__currentProgress_5__3() const;

constexpr float_t& __cordl_internal_get__currentProgress_5__3() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr float_t const& __cordl_internal_get__stoppingDuration_5__4() const;

constexpr float_t& __cordl_internal_get__stoppingDuration_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtStreamButton>  value) ;

constexpr void __cordl_internal_set__currentProgress_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__stoppingDuration_5__4(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d2d2f0, size 0x28, virtual false, abstract: false, final false
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
constexpr GtStreamButton__StoppingAnimationVisual_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtStreamButton__StoppingAnimationVisual_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtStreamButton__StoppingAnimationVisual_d__21(GtStreamButton__StoppingAnimationVisual_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtStreamButton__StoppingAnimationVisual_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtStreamButton__StoppingAnimationVisual_d__21(GtStreamButton__StoppingAnimationVisual_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29657};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtStreamButton>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <currentProgress>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____currentProgress_5__3;

/// @brief Field <stoppingDuration>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____stoppingDuration_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21, ____currentProgress_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21, ____stoppingDuration_5__4) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
