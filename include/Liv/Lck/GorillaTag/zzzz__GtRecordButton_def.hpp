#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtRecordButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__GtRecordButton_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GtRecordButton)
namespace GlobalNamespace {
struct GtRecordButton_State;
}
namespace GlobalNamespace {
struct GtRecordButton__ResetAfterError_d__22;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
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
class GtRecordButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtRecordButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtRecordButton*, "Liv.Lck.GorillaTag", "GtRecordButton");
// Dependencies Liv.Lck.GorillaTag.GtRecordButton::State, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtRecordButton
class CORDL_TYPE GtRecordButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GtRecordButton_State;

using _ResetAfterError_d__22 = ::GlobalNamespace::GtRecordButton__ResetAfterError_d__22;

/// @brief Field _audioController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _bodyRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyRenderer, put=__cordl_internal_set__bodyRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _bodyRenderer;

/// @brief Field _currentState, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GlobalNamespace::GtRecordButton_State  _currentState;

/// @brief Field _defaultLocalPosition, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultLocalPosition, put=__cordl_internal_set__defaultLocalPosition)) ::UnityEngine::Vector3  _defaultLocalPosition;

/// @brief Field _isDisabled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _label, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _settings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _visualsTrans, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualsTrans, put=__cordl_internal_set__visualsTrans)) ::UnityW<::UnityEngine::Transform>  _visualsTrans;

/// @brief Field onPressed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressed, put=__cordl_internal_set_onPressed)) ::System::Action*  onPressed;

/// @brief Method InitSetUp, addr 0x9d29468, size 0x38, virtual false, abstract: false, final false
inline void InitSetUp() ;

static inline ::Liv::Lck::GorillaTag::GtRecordButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d29a90, size 0x254, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnError, addr 0x9d298fc, size 0x2c, virtual false, abstract: false, final false
inline void OnError() ;

/// @brief Method OnRecordingSaved, addr 0x9d29a00, size 0x90, virtual false, abstract: false, final false
inline void OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnRecordingStarted, addr 0x9d29da8, size 0x4c, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingStopped, addr 0x9d29ce4, size 0xc4, virtual false, abstract: false, final false
inline void OnRecordingStopped(::Liv::Lck::LckResult*  result) ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GtRecordButton::<ResetAfterError>d__22))]
/// @brief Method ResetAfterError, addr 0x9d29928, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResetAfterError() ;

/// @brief Method SetDisabled, addr 0x9d298d4, size 0x28, virtual false, abstract: false, final false
inline void SetDisabled(bool  isDisabled) ;

/// @brief Method SetUp, addr 0x9d294a0, size 0x274, virtual false, abstract: false, final false
inline void SetUp() ;

/// @brief Method Start, addr 0x9d29464, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TapEnded, addr 0x9d29ed8, size 0x58, virtual false, abstract: false, final false
inline void TapEnded() ;

/// @brief Method TapStarted, addr 0x9d29df4, size 0xe4, virtual false, abstract: false, final false
inline void TapStarted() ;

/// @brief Method Update, addr 0x9d29f30, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRecordDurationText, addr 0x9d2a020, size 0x2d4, virtual false, abstract: false, final false
inline void UpdateRecordDurationText() ;

/// @brief Method UpdateVisualState, addr 0x9d29714, size 0x1c0, virtual false, abstract: false, final false
inline void UpdateVisualState() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__bodyRenderer() ;

constexpr ::GlobalNamespace::GtRecordButton_State const& __cordl_internal_get__currentState() const;

constexpr ::GlobalNamespace::GtRecordButton_State& __cordl_internal_get__currentState() ;

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

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visualsTrans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visualsTrans() ;

constexpr ::System::Action* const& __cordl_internal_get_onPressed() const;

constexpr ::System::Action*& __cordl_internal_get_onPressed() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__currentState(::GlobalNamespace::GtRecordButton_State  value) ;

constexpr void __cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onPressed(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x9d2a2f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPressed, addr 0x9d2932c, size 0x9c, virtual false, abstract: false, final false
inline void add_onPressed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onPressed, addr 0x9d293c8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onPressed(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtRecordButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtRecordButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtRecordButton(GtRecordButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtRecordButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtRecordButton(GtRecordButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29645};

/// @brief Field _errorString offset 0xffffffff size 0x8
static constexpr ::ConstString  _errorString{u"ERROR"};

/// @brief Field _idleString offset 0xffffffff size 0x8
static constexpr ::ConstString  _idleString{u"RECORD"};

/// @brief Field _savingString offset 0xffffffff size 0x8
static constexpr ::ConstString  _savingString{u"SAVING"};

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

/// @brief Field _isDisabled, offset: 0x60, size: 0x1, def value: None
 bool  ____isDisabled;

/// @brief Field _defaultLocalPosition, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultLocalPosition;

/// @brief Field _currentState, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::GtRecordButton_State  ____currentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ___onPressed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____label) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____bodyRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____visualsTrans) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____audioController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____isDisabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____defaultLocalPosition) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtRecordButton, ____currentState) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtRecordButton) == 0x78, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
