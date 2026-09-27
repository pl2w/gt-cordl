#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckSaveEchoButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__LckSaveEchoButton_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckSaveEchoButton)
namespace GlobalNamespace {
struct LckSaveEchoButton_State;
}
namespace GlobalNamespace {
struct LckSaveEchoButton__ResetAfterError_d__16;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck::UI {
class LckButton;
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
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckSaveEchoButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckSaveEchoButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckSaveEchoButton*, "Liv.Lck.Tablet", "LckSaveEchoButton");
// Dependencies Liv.Lck.Tablet.LckSaveEchoButton::State, UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckSaveEchoButton
class CORDL_TYPE LckSaveEchoButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::LckSaveEchoButton_State;

using _ResetAfterError_d__16 = ::GlobalNamespace::LckSaveEchoButton__ResetAfterError_d__16;

/// @brief Field _audioController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::Liv::Lck::UI::LckButton>  _button;

/// @brief Field _lastDisplayedSeconds, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastDisplayedSeconds, put=__cordl_internal_set__lastDisplayedSeconds)) int32_t  _lastDisplayedSeconds;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _maxBufferSeconds, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxBufferSeconds, put=__cordl_internal_set__maxBufferSeconds)) int32_t  _maxBufferSeconds;

/// @brief Field _shouldPollEchoDuration, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldPollEchoDuration, put=__cordl_internal_set__shouldPollEchoDuration)) bool  _shouldPollEchoDuration;

/// @brief Field _state, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::LckSaveEchoButton_State  _state;

/// @brief Method EnsureLckService, addr 0x9d5afac, size 0xb4, virtual false, abstract: false, final false
inline void EnsureLckService() ;

static inline ::Liv::Lck::Tablet::LckSaveEchoButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d5b548, size 0x268, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9d5b540, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEchoDisabled, addr 0x9d5aba8, size 0x80, virtual false, abstract: false, final false
inline void OnEchoDisabled(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason) ;

/// @brief Method OnEchoEnabled, addr 0x9d5a8f8, size 0x1c, virtual false, abstract: false, final false
inline void OnEchoEnabled(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnEchoSaved, addr 0x9d5af44, size 0x68, virtual false, abstract: false, final false
inline void OnEchoSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnEnable, addr 0x9d5b368, size 0x1d8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnError, addr 0x9d5ac28, size 0x24, virtual false, abstract: false, final false
inline void OnError() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LckSaveEchoButton::<ResetAfterError>d__16))]
/// @brief Method ResetAfterError, addr 0x9d5ac4c, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResetAfterError() ;

/// @brief Method Start, addr 0x9d5b060, size 0x308, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartEchoPolling, addr 0x9d5a914, size 0x150, virtual false, abstract: false, final false
inline void StartEchoPolling() ;

/// @brief Method Update, addr 0x9d5b7b0, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateBufferDurationText, addr 0x9d5ad28, size 0x21c, virtual false, abstract: false, final false
inline void UpdateBufferDurationText() ;

/// @brief Method UpdateVisualState, addr 0x9d5aa64, size 0x144, virtual false, abstract: false, final false
inline void UpdateVisualState() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButton>& __cordl_internal_get__button() ;

constexpr int32_t const& __cordl_internal_get__lastDisplayedSeconds() const;

constexpr int32_t& __cordl_internal_get__lastDisplayedSeconds() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr int32_t const& __cordl_internal_get__maxBufferSeconds() const;

constexpr int32_t& __cordl_internal_get__maxBufferSeconds() ;

constexpr bool const& __cordl_internal_get__shouldPollEchoDuration() const;

constexpr bool& __cordl_internal_get__shouldPollEchoDuration() ;

constexpr ::GlobalNamespace::LckSaveEchoButton_State const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::LckSaveEchoButton_State& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::Liv::Lck::UI::LckButton>  value) ;

constexpr void __cordl_internal_set__lastDisplayedSeconds(int32_t  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__maxBufferSeconds(int32_t  value) ;

constexpr void __cordl_internal_set__shouldPollEchoDuration(bool  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::LckSaveEchoButton_State  value) ;

/// @brief Method .ctor, addr 0x9d5b7e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSaveEchoButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSaveEchoButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSaveEchoButton(LckSaveEchoButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSaveEchoButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSaveEchoButton(LckSaveEchoButton const& ) = delete;

/// @brief Field EchoStartingPeriodSeconds offset 0xffffffff size 0x4
static constexpr int32_t  EchoStartingPeriodSeconds{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24945};

/// @brief Field _echoStartingString offset 0xffffffff size 0x8
static constexpr ::ConstString  _echoStartingString{u"ECHO STARTING..."};

/// @brief Field _errorString offset 0xffffffff size 0x8
static constexpr ::ConstString  _errorString{u"ERROR"};

/// @brief Field _lowStorageString offset 0xffffffff size 0x8
static constexpr ::ConstString  _lowStorageString{u"LOW STORAGE"};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButton>  ____button;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// @brief Field _lastDisplayedSeconds, offset: 0x38, size: 0x4, def value: None
 int32_t  ____lastDisplayedSeconds;

/// @brief Field _maxBufferSeconds, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____maxBufferSeconds;

/// @brief Field _shouldPollEchoDuration, offset: 0x40, size: 0x1, def value: None
 bool  ____shouldPollEchoDuration;

/// @brief Field _state, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::LckSaveEchoButton_State  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____audioController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____lastDisplayedSeconds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____maxBufferSeconds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____shouldPollEchoDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSaveEchoButton, ____state) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckSaveEchoButton) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
