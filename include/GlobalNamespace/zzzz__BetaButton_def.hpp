#pragma once
// IWYU pragma private; include "GlobalNamespace/BetaButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BetaButton)
namespace GlobalNamespace {
class BetaButton__ButtonColorUpdate_d__6;
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
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BetaButton;
}
namespace GlobalNamespace {
class BetaButton__ButtonColorUpdate_d__6;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetaButton*);
MARK_REF_T(::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetaButton*, "", "BetaButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6*, "", "BetaButton/<ButtonColorUpdate>d__6");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetaButton
class CORDL_TYPE BetaButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonColorUpdate_d__6 = ::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6;

/// @brief Field betaParent, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaParent, put=__cordl_internal_set_betaParent)) ::UnityW<::UnityEngine::GameObject>  betaParent;

/// @brief Field buttonFadeTime, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonFadeTime, put=__cordl_internal_set_buttonFadeTime)) float_t  buttonFadeTime;

/// @brief Field count, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field messageText, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_messageText, put=__cordl_internal_set_messageText)) ::UnityW<::UnityEngine::UI::Text>  messageText;

/// @brief Method ButtonActivation, addr 0x574a430, size 0xc8, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(BetaButton::<ButtonColorUpdate>d__6))]
/// @brief Method ButtonColorUpdate, addr 0x574a4f8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonColorUpdate() ;

static inline ::GlobalNamespace::BetaButton* New_ctor() ;

/// @brief Method Start, addr 0x574a3c8, size 0x68, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_betaParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_betaParent() ;

constexpr float_t const& __cordl_internal_get_buttonFadeTime() const;

constexpr float_t& __cordl_internal_get_buttonFadeTime() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText() ;

constexpr void __cordl_internal_set_betaParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_buttonFadeTime(float_t  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x574a58c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetaButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetaButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetaButton(BetaButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetaButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetaButton(BetaButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1285};

/// @brief Field betaParent, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___betaParent;

/// @brief Field count, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field buttonFadeTime, offset: 0xc4, size: 0x4, def value: None
 float_t  ___buttonFadeTime;

/// @brief Field messageText, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___messageText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetaButton, ___betaParent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaButton, ___count) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaButton, ___buttonFadeTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaButton, ___messageText) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetaButton) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetaButton/<ButtonColorUpdate>d__6
class CORDL_TYPE BetaButton__ButtonColorUpdate_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BetaButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x574a5a0, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x574a680, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x574a688, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x574a6c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x574a59c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BetaButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BetaButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BetaButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x574a564, size 0x28, virtual false, abstract: false, final false
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
constexpr BetaButton__ButtonColorUpdate_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetaButton__ButtonColorUpdate_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetaButton__ButtonColorUpdate_d__6(BetaButton__ButtonColorUpdate_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetaButton__ButtonColorUpdate_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetaButton__ButtonColorUpdate_d__6(BetaButton__ButtonColorUpdate_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1284};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetaButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetaButton__ButtonColorUpdate_d__6) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
