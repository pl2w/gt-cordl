#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSaveEchoButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GtSaveEchoButton)
namespace GlobalNamespace {
struct GtSaveEchoButton_State;
}
namespace GlobalNamespace {
struct GtSaveEchoButton__ResetAfterError_d__30;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck {
struct EchoDisableReason;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtSaveEchoButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtSaveEchoButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtSaveEchoButton*, "Liv.Lck.GorillaTag", "GtSaveEchoButton");
// Dependencies Liv.Lck.GorillaTag.GtSaveEchoButton::State, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtSaveEchoButton
class CORDL_TYPE GtSaveEchoButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GtSaveEchoButton_State;

using _ResetAfterError_d__30 = ::GlobalNamespace::GtSaveEchoButton__ResetAfterError_d__30;

/// @brief Field _audioController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _currentState, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::GtSaveEchoButton_State  _currentState;

/// @brief Field _defaultLocalPosition, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _isDisabled, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _label, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _lastDisplayedSeconds, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastDisplayedSeconds, put=__cordl_internal_set__lastDisplayedSeconds)) int32_t  _lastDisplayedSeconds;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _maxBufferSeconds, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxBufferSeconds, put=__cordl_internal_set__maxBufferSeconds)) int32_t  _maxBufferSeconds;

/// @brief Field _name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _settings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _shouldPollEchoDuration, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldPollEchoDuration, put=__cordl_internal_set__shouldPollEchoDuration)) bool  _shouldPollEchoDuration;

/// @brief Field _visualsTrans, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onPressed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressed, put=__cordl_internal_set_onPressed)) ::System::Action*  onPressed;

static inline ::Liv::Lck::GorillaTag::GtSaveEchoButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d2b498, size 0x268, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9d2b490, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEchoDisabled, addr 0x9d2ae90, size 0x74, virtual false, abstract: false, final false
inline void OnEchoDisabled(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason) ;

/// @brief Method OnEchoEnabled, addr 0x9d2ae74, size 0x1c, virtual false, abstract: false, final false
inline void OnEchoEnabled(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnEchoSaved, addr 0x9d2b23c, size 0x68, virtual false, abstract: false, final false
inline void OnEchoSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnEnable, addr 0x9d2b2a4, size 0x1ec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnError, addr 0x9d2af04, size 0x30, virtual false, abstract: false, final false
inline void OnError() ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GtSaveEchoButton::<ResetAfterError>d__30))]
/// @brief Method ResetAfterError, addr 0x9d2af34, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResetAfterError() ;

/// @brief Method SetDisabled, addr 0x9d2ad28, size 0x28, virtual false, abstract: false, final false
inline void SetDisabled(bool  isDisabled) ;

/// @brief Method Start, addr 0x9d2a788, size 0x318, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartEchoPolling, addr 0x9d2aaa0, size 0x15c, virtual false, abstract: false, final false
inline void StartEchoPolling() ;

/// @brief Method TapEnded, addr 0x9d2ae28, size 0x4c, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method TapStarted, addr 0x9d2ad50, size 0xd8, virtual false, abstract: false, final false
inline void TapStarted() ;

/// @brief Method Update, addr 0x9d2b700, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateBufferDurationText, addr 0x9d2b010, size 0x22c, virtual false, abstract: false, final false
inline void UpdateBufferDurationText() ;

/// @brief Method UpdateVisualState, addr 0x9d2abfc, size 0x12c, virtual false, abstract: false, final false
inline void UpdateVisualState() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::GlobalNamespace::GtSaveEchoButton_State const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::GtSaveEchoButton_State& __cordl_internal_get__currentState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultLocalPosition() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr int32_t const& __cordl_internal_get__lastDisplayedSeconds() const;

constexpr int32_t& __cordl_internal_get__lastDisplayedSeconds() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr int32_t const& __cordl_internal_get__maxBufferSeconds() const;

constexpr int32_t& __cordl_internal_get__maxBufferSeconds() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr bool const& __cordl_internal_get__shouldPollEchoDuration() const;

constexpr bool& __cordl_internal_get__shouldPollEchoDuration() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::System::Action* const& __cordl_internal_get_onPressed() const;

constexpr ::System::Action*& __cordl_internal_get_onPressed() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::GtSaveEchoButton_State  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__lastDisplayedSeconds(int32_t  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__maxBufferSeconds(int32_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__shouldPollEchoDuration(bool  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onPressed(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x9d2b718, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPressed, addr 0x9d2a650, size 0x9c, virtual false, abstract: false, final false
inline void add_onPressed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onPressed, addr 0x9d2a6ec, size 0x9c, virtual false, abstract: false, final false
inline void remove_onPressed(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtSaveEchoButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtSaveEchoButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtSaveEchoButton(GtSaveEchoButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtSaveEchoButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtSaveEchoButton(GtSaveEchoButton const& ) = delete;

/// @brief Field EchoStartingPeriodSeconds offset 0xffffffff size 0x4
static constexpr int32_t  EchoStartingPeriodSeconds{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29648};

/// @brief Field _echoStartingString offset 0xffffffff size 0x8
static constexpr ::ConstString  _echoStartingString{u"ECHO STARTING..."};

/// @brief Field _errorString offset 0xffffffff size 0x8
static constexpr ::ConstString  _errorString{u"ERROR"};

/// @brief Field _lowStorageString offset 0xffffffff size 0x8
static constexpr ::ConstString  _lowStorageString{u"LOW STORAGE"};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [CompilerGenerated]
/// @brief Field onPressed, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___onPressed;

/// [Space(10)]
/// [Header("Global Settings")]
/// [SerializeField]
/// @brief Field _settings, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [Space(10)]
/// [Header("Parameters")]
/// [SerializeField]
/// @brief Field _name, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _label, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// [SerializeField]
/// @brief Field _bodyRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____bodyRenderer;

/// [SerializeField]
/// @brief Field _visualsTrans, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visualsTrans;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// @brief Field _lastDisplayedSeconds, offset: 0x60, size: 0x4, def value: None
 int32_t  ____lastDisplayedSeconds;

/// @brief Field _maxBufferSeconds, offset: 0x64, size: 0x4, def value: None
 int32_t  ____maxBufferSeconds;

/// @brief Field _shouldPollEchoDuration, offset: 0x68, size: 0x1, def value: None
 bool  ____shouldPollEchoDuration;

/// @brief Field _isDisabled, offset: 0x69, size: 0x1, def value: None
 bool  ____isDisabled;

/// @brief Field _defaultLocalPosition, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

/// @brief Field _currentState, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::GtSaveEchoButton_State  ____currentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ___onPressed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____label) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____bodyRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____visualsTrans) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____audioController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____lastDisplayedSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____maxBufferSeconds) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____shouldPollEchoDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____isDisabled) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____defaultLocalPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSaveEchoButton, ____currentState) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtSaveEchoButton) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
