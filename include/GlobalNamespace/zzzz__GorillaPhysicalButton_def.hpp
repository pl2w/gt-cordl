#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPhysicalButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPhysicalButton)
namespace GlobalNamespace {
class GorillaPhysicalButton__ButtonUpdate_d__34;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPhysicalButton;
}
namespace GlobalNamespace {
class GorillaPhysicalButton__ButtonUpdate_d__34;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPhysicalButton*);
MARK_REF_T(::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPhysicalButton*, "", "GorillaPhysicalButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34*, "", "GorillaPhysicalButton/<ButtonUpdate>d__34");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPhysicalButton
class CORDL_TYPE GorillaPhysicalButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ButtonUpdate_d__34 = ::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34;

/// @brief Field buttonDepthForTrigger, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonDepthForTrigger, put=__cordl_internal_set_buttonDepthForTrigger)) float_t  buttonDepthForTrigger;

/// @brief Field buttonPushDepth, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonPushDepth, put=__cordl_internal_set_buttonPushDepth)) float_t  buttonPushDepth;

/// @brief Field buttonRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonRenderer, put=__cordl_internal_set_buttonRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  buttonRenderer;

/// @brief Field buttonTestCoroutine, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonTestCoroutine, put=__cordl_internal_set_buttonTestCoroutine)) ::UnityEngine::Coroutine*  buttonTestCoroutine;

/// @brief Field canToggleOff, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_canToggleOff, put=__cordl_internal_set_canToggleOff)) bool  canToggleOff;

/// @brief Field canToggleOn, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_canToggleOn, put=__cordl_internal_set_canToggleOn)) bool  canToggleOn;

/// @brief Field currentButtonDepthFromPressing, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentButtonDepthFromPressing, put=__cordl_internal_set_currentButtonDepthFromPressing)) float_t  currentButtonDepthFromPressing;

/// @brief Field isOn, offset 0x3f, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field moveableChildren, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveableChildren, put=__cordl_internal_set_moveableChildren)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  moveableChildren;

/// @brief Field moveableChildrenStartPositions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveableChildrenStartPositions, put=__cordl_internal_set_moveableChildrenStartPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  moveableChildrenStartPositions;

/// @brief Field offText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_offText, put=__cordl_internal_set_offText)) ::StringW  offText;

/// @brief Field onPressButtonOn, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressButtonOn, put=__cordl_internal_set_onPressButtonOn)) ::UnityEngine::Events::UnityEvent*  onPressButtonOn;

/// @brief Field onPressButtonToggleOff, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressButtonToggleOff, put=__cordl_internal_set_onPressButtonToggleOff)) ::UnityEngine::Events::UnityEvent*  onPressButtonToggleOff;

/// @brief Field onPressedOn, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressedOn, put=__cordl_internal_set_onPressedOn)) ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  onPressedOn;

/// @brief Field onText, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onText, put=__cordl_internal_set_onText)) ::StringW  onText;

/// @brief Field onToggledOff, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggledOff, put=__cordl_internal_set_onToggledOff)) ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  onToggledOff;

/// @brief Field pressButtonSoundIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressButtonSoundIndex, put=__cordl_internal_set_pressButtonSoundIndex)) int32_t  pressButtonSoundIndex;

/// @brief Field pressedMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressedMaterial, put=__cordl_internal_set_pressedMaterial)) ::UnityW<::UnityEngine::Material>  pressedMaterial;

/// @brief Field recentFingerCollider, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_recentFingerCollider, put=__cordl_internal_set_recentFingerCollider)) ::UnityW<::UnityEngine::Collider>  recentFingerCollider;

/// @brief Field startButtonPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_startButtonPosition, put=__cordl_internal_set_startButtonPosition)) ::UnityEngine::Vector3  startButtonPosition;

/// @brief Field testHandLeft, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_testHandLeft, put=__cordl_internal_set_testHandLeft)) bool  testHandLeft;

/// @brief Field testPress, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Field textField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

/// @brief Field unpressedMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unpressedMaterial, put=__cordl_internal_set_unpressedMaterial)) ::UnityW<::UnityEngine::Material>  unpressedMaterial;

/// @brief Field waitingForReleaseAfterStateChange, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForReleaseAfterStateChange, put=__cordl_internal_set_waitingForReleaseAfterStateChange)) bool  waitingForReleaseAfterStateChange;

/// @brief Method ButtonPressedOn, addr 0x5999860, size 0x4, virtual true, abstract: false, final false
inline void ButtonPressedOn() ;

/// @brief Method ButtonPressedOnWithHand, addr 0x5999864, size 0x4, virtual true, abstract: false, final false
inline void ButtonPressedOnWithHand(bool  isLeftHand) ;

/// @brief Method ButtonToggledOff, addr 0x5999868, size 0x4, virtual true, abstract: false, final false
inline void ButtonToggledOff() ;

/// @brief Method ButtonToggledOffWithHand, addr 0x599986c, size 0x4, virtual true, abstract: false, final false
inline void ButtonToggledOffWithHand(bool  isLeftHand) ;

/// [IteratorStateMachine(typeof(GorillaPhysicalButton::<ButtonUpdate>d__34))]
/// @brief Method ButtonUpdate, addr 0x5998d64, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonUpdate() ;

/// @brief Method GetSurfaceDistanceFromKeyToCollider, addr 0x599896c, size 0x304, virtual false, abstract: false, final false
inline float_t GetSurfaceDistanceFromKeyToCollider(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::GorillaPhysicalButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5998968, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5998964, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5998c70, size 0xf4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method ResetState, addr 0x5999870, size 0xc, virtual true, abstract: false, final false
inline void ResetState() ;

/// @brief Method SetButtonState, addr 0x599990c, size 0x90, virtual true, abstract: false, final false
inline void SetButtonState(bool  setToOn) ;

/// @brief Method SetText, addr 0x599987c, size 0x90, virtual false, abstract: false, final false
inline void SetText(::StringW  newText) ;

/// @brief Method Start, addr 0x59987c8, size 0x19c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TestForButtonStateChange, addr 0x5998ed8, size 0x6ac, virtual false, abstract: false, final false
inline void TestForButtonStateChange() ;

/// @brief Method UpdateButtonFromCollider, addr 0x5998df8, size 0xe0, virtual false, abstract: false, final false
inline void UpdateButtonFromCollider() ;

/// @brief Method UpdateButtonVisuals, addr 0x5999584, size 0x19c, virtual false, abstract: false, final false
inline void UpdateButtonVisuals() ;

/// @brief Method UpdateColorWithState, addr 0x5999720, size 0x140, virtual false, abstract: false, final false
inline void UpdateColorWithState(bool  state) ;

constexpr float_t const& __cordl_internal_get_buttonDepthForTrigger() const;

constexpr float_t& __cordl_internal_get_buttonDepthForTrigger() ;

constexpr float_t const& __cordl_internal_get_buttonPushDepth() const;

constexpr float_t& __cordl_internal_get_buttonPushDepth() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_buttonRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_buttonRenderer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_buttonTestCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_buttonTestCoroutine() ;

constexpr bool const& __cordl_internal_get_canToggleOff() const;

constexpr bool& __cordl_internal_get_canToggleOff() ;

constexpr bool const& __cordl_internal_get_canToggleOn() const;

constexpr bool& __cordl_internal_get_canToggleOn() ;

constexpr float_t const& __cordl_internal_get_currentButtonDepthFromPressing() const;

constexpr float_t& __cordl_internal_get_currentButtonDepthFromPressing() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_moveableChildren() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_moveableChildren() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_moveableChildrenStartPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_moveableChildrenStartPositions() ;

constexpr ::StringW const& __cordl_internal_get_offText() const;

constexpr ::StringW& __cordl_internal_get_offText() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPressButtonOn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPressButtonOn() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPressButtonToggleOff() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPressButtonToggleOff() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>* const& __cordl_internal_get_onPressedOn() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*& __cordl_internal_get_onPressedOn() ;

constexpr ::StringW const& __cordl_internal_get_onText() const;

constexpr ::StringW& __cordl_internal_get_onText() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>* const& __cordl_internal_get_onToggledOff() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*& __cordl_internal_get_onToggledOff() ;

constexpr int32_t const& __cordl_internal_get_pressButtonSoundIndex() const;

constexpr int32_t& __cordl_internal_get_pressButtonSoundIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pressedMaterial() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_recentFingerCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_recentFingerCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startButtonPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startButtonPosition() ;

constexpr bool const& __cordl_internal_get_testHandLeft() const;

constexpr bool& __cordl_internal_get_testHandLeft() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unpressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unpressedMaterial() ;

constexpr bool const& __cordl_internal_get_waitingForReleaseAfterStateChange() const;

constexpr bool& __cordl_internal_get_waitingForReleaseAfterStateChange() ;

constexpr void __cordl_internal_set_buttonDepthForTrigger(float_t  value) ;

constexpr void __cordl_internal_set_buttonPushDepth(float_t  value) ;

constexpr void __cordl_internal_set_buttonRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_buttonTestCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_canToggleOff(bool  value) ;

constexpr void __cordl_internal_set_canToggleOn(bool  value) ;

constexpr void __cordl_internal_set_currentButtonDepthFromPressing(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_moveableChildren(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_moveableChildrenStartPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_offText(::StringW  value) ;

constexpr void __cordl_internal_set_onPressButtonOn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPressButtonToggleOff(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPressedOn(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  value) ;

constexpr void __cordl_internal_set_onText(::StringW  value) ;

constexpr void __cordl_internal_set_onToggledOff(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  value) ;

constexpr void __cordl_internal_set_pressButtonSoundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_recentFingerCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_startButtonPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_testHandLeft(bool  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_unpressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_waitingForReleaseAfterStateChange(bool  value) ;

/// @brief Method .ctor, addr 0x599999c, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPressedOn, addr 0x5998508, size 0xb0, virtual false, abstract: false, final false
inline void add_onPressedOn(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onToggledOff, addr 0x5998668, size 0xb0, virtual false, abstract: false, final false
inline void add_onToggledOff(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onPressedOn, addr 0x59985b8, size 0xb0, virtual false, abstract: false, final false
inline void remove_onPressedOn(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onToggledOff, addr 0x5998718, size 0xb0, virtual false, abstract: false, final false
inline void remove_onToggledOff(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPhysicalButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPhysicalButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPhysicalButton(GorillaPhysicalButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPhysicalButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPhysicalButton(GorillaPhysicalButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2607};

/// @brief Field pressedMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___pressedMaterial;

/// @brief Field unpressedMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unpressedMaterial;

/// @brief Field buttonRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___buttonRenderer;

/// @brief Field pressButtonSoundIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___pressButtonSoundIndex;

/// [SerializeField]
/// @brief Field canToggleOn, offset: 0x3c, size: 0x1, def value: None
 bool  ___canToggleOn;

/// @brief Field canToggleOff, offset: 0x3d, size: 0x1, def value: None
 bool  ___canToggleOff;

/// @brief Field waitingForReleaseAfterStateChange, offset: 0x3e, size: 0x1, def value: None
 bool  ___waitingForReleaseAfterStateChange;

/// @brief Field isOn, offset: 0x3f, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field testPress, offset: 0x40, size: 0x1, def value: None
 bool  ___testPress;

/// @brief Field testHandLeft, offset: 0x41, size: 0x1, def value: None
 bool  ___testHandLeft;

/// [SerializeField]
/// @brief Field buttonPushDepth, offset: 0x44, size: 0x4, def value: None
 float_t  ___buttonPushDepth;

/// [SerializeField]
/// @brief Field buttonDepthForTrigger, offset: 0x48, size: 0x4, def value: None
 float_t  ___buttonDepthForTrigger;

/// [SerializeField]
/// @brief Field moveableChildren, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___moveableChildren;

/// @brief Field moveableChildrenStartPositions, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___moveableChildrenStartPositions;

/// @brief Field startButtonPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startButtonPosition;

/// [TextArea]
/// @brief Field offText, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___offText;

/// [TextArea]
/// @brief Field onText, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___onText;

/// [SerializeField]
/// @brief Field textField, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// [Space]
/// @brief Field onPressButtonOn, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPressButtonOn;

/// @brief Field onPressButtonToggleOff, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPressButtonToggleOff;

/// [CompilerGenerated]
/// @brief Field onPressedOn, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  ___onPressedOn;

/// [CompilerGenerated]
/// @brief Field onToggledOff, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPhysicalButton>,bool>*  ___onToggledOff;

/// @brief Field recentFingerCollider, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___recentFingerCollider;

/// @brief Field currentButtonDepthFromPressing, offset: 0xb0, size: 0x4, def value: None
 float_t  ___currentButtonDepthFromPressing;

/// @brief Field buttonTestCoroutine, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___buttonTestCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___pressedMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___unpressedMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___buttonRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___pressButtonSoundIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___canToggleOn) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___canToggleOff) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___waitingForReleaseAfterStateChange) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___isOn) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___testPress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___testHandLeft) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___buttonPushDepth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___buttonDepthForTrigger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___moveableChildren) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___moveableChildrenStartPositions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___startButtonPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___offText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___onText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___textField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___onPressButtonOn) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___onPressButtonToggleOff) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___onPressedOn) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___onToggledOff) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___recentFingerCollider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___currentButtonDepthFromPressing) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton, ___buttonTestCoroutine) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPhysicalButton) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPhysicalButton/<ButtonUpdate>d__34
class CORDL_TYPE GorillaPhysicalButton__ButtonUpdate_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5999a38, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5999b08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5999b10, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5999b48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5999a34, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5998dd0, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaPhysicalButton__ButtonUpdate_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPhysicalButton__ButtonUpdate_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPhysicalButton__ButtonUpdate_d__34(GorillaPhysicalButton__ButtonUpdate_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPhysicalButton__ButtonUpdate_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPhysicalButton__ButtonUpdate_d__34(GorillaPhysicalButton__ButtonUpdate_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2606};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPhysicalButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPhysicalButton__ButtonUpdate_d__34) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
