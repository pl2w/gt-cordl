#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckRecordButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__LckRecordButton_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckRecordButton)
namespace GlobalNamespace {
struct LckRecordButton_State;
}
namespace GlobalNamespace {
struct LckRecordButton__ResetAfterError_d__12;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck::UI {
class LckToggle;
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
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckRecordButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckRecordButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckRecordButton*, "Liv.Lck.Tablet", "LckRecordButton");
// Dependencies Liv.Lck.Tablet.LckRecordButton::State, UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckRecordButton
class CORDL_TYPE LckRecordButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::LckRecordButton_State;

using _ResetAfterError_d__12 = ::GlobalNamespace::LckRecordButton__ResetAfterError_d__12;

/// @brief Field _audioController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _collider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::BoxCollider>  _collider;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _recordButtonText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordButtonText, put=__cordl_internal_set__recordButtonText)) ::UnityW<::TMPro::TMP_Text>  _recordButtonText;

/// @brief Field _recordLckToggle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordLckToggle, put=__cordl_internal_set__recordLckToggle)) ::UnityW<::Liv::Lck::UI::LckToggle>  _recordLckToggle;

/// @brief Field _recordToggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordToggle, put=__cordl_internal_set__recordToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _recordToggle;

/// @brief Field _state, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::LckRecordButton_State  _state;

/// @brief Method EnsureLckService, addr 0x9d598e4, size 0xb4, virtual false, abstract: false, final false
inline void EnsureLckService() ;

static inline ::Liv::Lck::Tablet::LckRecordButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d5a26c, size 0x384, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnError, addr 0x9d59cb4, size 0xe0, virtual false, abstract: false, final false
inline void OnError() ;

/// @brief Method OnRecordingPaused, addr 0x9d59eb4, size 0xf4, virtual false, abstract: false, final false
inline void OnRecordingPaused(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingResumed, addr 0x9d59fa8, size 0x24, virtual false, abstract: false, final false
inline void OnRecordingResumed(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingSaved, addr 0x9d5a0f4, size 0xe8, virtual false, abstract: false, final false
inline void OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnRecordingStarted, addr 0x9d59e6c, size 0x48, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingStopped, addr 0x9d59fcc, size 0x128, virtual false, abstract: false, final false
inline void OnRecordingStopped(::Liv::Lck::LckResult*  result) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LckRecordButton::<ResetAfterError>d__12))]
/// @brief Method ResetAfterError, addr 0x9d59d94, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResetAfterError() ;

/// @brief Method ResetButtonVisuals, addr 0x9d5a1dc, size 0x90, virtual false, abstract: false, final false
inline void ResetButtonVisuals() ;

/// @brief Method Start, addr 0x9d5955c, size 0x388, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9d59998, size 0x34, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRecordDurationText, addr 0x9d599cc, size 0x2e8, virtual false, abstract: false, final false
inline void UpdateRecordDurationText() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__collider() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__recordButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__recordButtonText() ;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& __cordl_internal_get__recordLckToggle() const;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& __cordl_internal_get__recordLckToggle() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__recordToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__recordToggle() ;

constexpr ::GlobalNamespace::LckRecordButton_State const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::LckRecordButton_State& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__recordButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__recordLckToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value) ;

constexpr void __cordl_internal_set__recordToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::LckRecordButton_State  value) ;

/// @brief Method .ctor, addr 0x9d5a5f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRecordButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRecordButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRecordButton(LckRecordButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRecordButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRecordButton(LckRecordButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24942};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Header("References")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [SerializeField]
/// @brief Field _recordButtonText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____recordButtonText;

/// [SerializeField]
/// @brief Field _recordLckToggle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckToggle>  ____recordLckToggle;

/// [SerializeField]
/// @brief Field _recordToggle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____recordToggle;

/// [Header("Toggle collider when using Direct Tablet")]
/// [SerializeField]
/// @brief Field _collider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ____collider;

/// @brief Field _state, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::LckRecordButton_State  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____audioController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____recordButtonText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____recordLckToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____recordToggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____collider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckRecordButton, ____state) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckRecordButton) == 0x58, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
