#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerLineButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_ButtonType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPlayerLineButton)
namespace GlobalNamespace {
struct GorillaPlayerLineButton_ButtonType;
}
namespace GlobalNamespace {
class GorillaPlayerLineButton__TestPressCheck_d__17;
}
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine;
}
namespace GlobalNamespace {
class IClickable;
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
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPlayerLineButton;
}
namespace GlobalNamespace {
class GorillaPlayerLineButton__TestPressCheck_d__17;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPlayerLineButton*);
MARK_REF_T(::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlayerLineButton*, "", "GorillaPlayerLineButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17*, "", "GorillaPlayerLineButton/<TestPressCheck>d__17");
// Dependencies GorillaPlayerLineButton::ButtonType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlayerLineButton
class CORDL_TYPE GorillaPlayerLineButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonType = ::GlobalNamespace::GorillaPlayerLineButton_ButtonType;

using _TestPressCheck_d__17 = ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17;

/// @brief Field autoOnMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoOnMaterial, put=__cordl_internal_set_autoOnMaterial)) ::UnityW<::UnityEngine::Material>  autoOnMaterial;

/// @brief Field autoOnText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoOnText, put=__cordl_internal_set_autoOnText)) ::StringW  autoOnText;

/// @brief Field buttonType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonType, put=__cordl_internal_set_buttonType)) ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType;

/// @brief Field debounceTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field isAutoOn, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAutoOn, put=__cordl_internal_set_isAutoOn)) bool  isAutoOn;

/// @brief Field isOn, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field myText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field offMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_offMaterial, put=__cordl_internal_set_offMaterial)) ::UnityW<::UnityEngine::Material>  offMaterial;

/// @brief Field offText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_offText, put=__cordl_internal_set_offText)) ::StringW  offText;

/// @brief Field onMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaterial, put=__cordl_internal_set_onMaterial)) ::UnityW<::UnityEngine::Material>  onMaterial;

/// @brief Field onText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onText, put=__cordl_internal_set_onText)) ::StringW  onText;

/// @brief Field parentLine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentLine, put=__cordl_internal_set_parentLine)) ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  parentLine;

/// @brief Field testPress, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Field touchTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method Click, addr 0x5999d10, size 0x478, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

static inline ::GlobalNamespace::GorillaPlayerLineButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5999b54, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5999b50, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5999bec, size 0xf8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x599a610, size 0xb4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SetTouchTime, addr 0x5999ce4, size 0x2c, virtual false, abstract: false, final false
inline void SetTouchTime(float_t  add) ;

/// [IteratorStateMachine(typeof(GorillaPlayerLineButton::<TestPressCheck>d__17))]
/// @brief Method TestPressCheck, addr 0x5999b58, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TestPressCheck() ;

/// @brief Method UpdateColor, addr 0x599a6c4, size 0xdc, virtual false, abstract: false, final false
inline void UpdateColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_autoOnMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_autoOnMaterial() ;

constexpr ::StringW const& __cordl_internal_get_autoOnText() const;

constexpr ::StringW& __cordl_internal_get_autoOnText() ;

constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const& __cordl_internal_get_buttonType() const;

constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType& __cordl_internal_get_buttonType() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr bool const& __cordl_internal_get_isAutoOn() const;

constexpr bool& __cordl_internal_get_isAutoOn() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_myText() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_offMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_offMaterial() ;

constexpr ::StringW const& __cordl_internal_get_offText() const;

constexpr ::StringW& __cordl_internal_get_offText() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_onMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_onMaterial() ;

constexpr ::StringW const& __cordl_internal_get_onText() const;

constexpr ::StringW& __cordl_internal_get_onText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine> const& __cordl_internal_get_parentLine() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>& __cordl_internal_get_parentLine() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr void __cordl_internal_set_autoOnMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_autoOnText(::StringW  value) ;

constexpr void __cordl_internal_set_buttonType(::GlobalNamespace::GorillaPlayerLineButton_ButtonType  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_isAutoOn(bool  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_offText(::StringW  value) ;

constexpr void __cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_onText(::StringW  value) ;

constexpr void __cordl_internal_set_parentLine(::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

/// @brief Method .ctor, addr 0x599a7a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerLineButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerLineButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerLineButton(GorillaPlayerLineButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerLineButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerLineButton(GorillaPlayerLineButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2610};

/// @brief Field parentLine, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  ___parentLine;

/// @brief Field buttonType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  ___buttonType;

/// @brief Field isOn, offset: 0x2c, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field isAutoOn, offset: 0x2d, size: 0x1, def value: None
 bool  ___isAutoOn;

/// @brief Field offMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___offMaterial;

/// @brief Field onMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onMaterial;

/// @brief Field autoOnMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___autoOnMaterial;

/// @brief Field offText, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___offText;

/// @brief Field onText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___onText;

/// @brief Field autoOnText, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___autoOnText;

/// @brief Field myText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

/// @brief Field debounceTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field touchTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___touchTime;

/// @brief Field testPress, offset: 0x70, size: 0x1, def value: None
 bool  ___testPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___parentLine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___buttonType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___isOn) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___isAutoOn) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___offMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___onMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___autoOnMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___offText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___onText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___autoOnText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___myText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___debounceTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___touchTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton, ___testPress) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlayerLineButton) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlayerLineButton/<TestPressCheck>d__17
class CORDL_TYPE GorillaPlayerLineButton__TestPressCheck_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x599a7b4, size 0xcc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x599a880, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x599a888, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x599a8c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x599a7b0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5999bc4, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaPlayerLineButton__TestPressCheck_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerLineButton__TestPressCheck_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerLineButton__TestPressCheck_d__17(GorillaPlayerLineButton__TestPressCheck_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerLineButton__TestPressCheck_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerLineButton__TestPressCheck_d__17(GorillaPlayerLineButton__TestPressCheck_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2609};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerLineButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlayerLineButton__TestPressCheck_d__17) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
