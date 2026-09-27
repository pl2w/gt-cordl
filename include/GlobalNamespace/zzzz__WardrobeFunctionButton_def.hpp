#pragma once
// IWYU pragma private; include "GlobalNamespace/WardrobeFunctionButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WardrobeFunctionButton)
namespace GlobalNamespace {
class WardrobeFunctionButton__ButtonColorUpdate_d__4;
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
// Forward declare root types
namespace GlobalNamespace {
class WardrobeFunctionButton;
}
namespace GlobalNamespace {
class WardrobeFunctionButton__ButtonColorUpdate_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WardrobeFunctionButton*);
MARK_REF_T(::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WardrobeFunctionButton*, "", "WardrobeFunctionButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*, "", "WardrobeFunctionButton/<ButtonColorUpdate>d__4");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: WardrobeFunctionButton
class CORDL_TYPE WardrobeFunctionButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonColorUpdate_d__4 = ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4;

/// @brief Field buttonFadeTime, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonFadeTime, put=__cordl_internal_set_buttonFadeTime)) float_t  buttonFadeTime;

/// @brief Field function, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_function, put=__cordl_internal_set_function)) ::StringW  function;

/// @brief Method ButtonActivation, addr 0x57890f0, size 0x98, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(WardrobeFunctionButton::<ButtonColorUpdate>d__4))]
/// @brief Method ButtonColorUpdate, addr 0x5789188, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonColorUpdate() ;

static inline ::GlobalNamespace::WardrobeFunctionButton* New_ctor() ;

/// @brief Method UpdateColor, addr 0x57891f4, size 0x4, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr float_t const& __cordl_internal_get_buttonFadeTime() const;

constexpr float_t& __cordl_internal_get_buttonFadeTime() ;

constexpr ::StringW const& __cordl_internal_get_function() const;

constexpr ::StringW& __cordl_internal_get_function() ;

constexpr void __cordl_internal_set_buttonFadeTime(float_t  value) ;

constexpr void __cordl_internal_set_function(::StringW  value) ;

/// @brief Method .ctor, addr 0x5789220, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WardrobeFunctionButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WardrobeFunctionButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WardrobeFunctionButton(WardrobeFunctionButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WardrobeFunctionButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WardrobeFunctionButton(WardrobeFunctionButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1419};

/// @brief Field function, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___function;

/// @brief Field buttonFadeTime, offset: 0xc0, size: 0x4, def value: None
 float_t  ___buttonFadeTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WardrobeFunctionButton, ___function) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WardrobeFunctionButton, ___buttonFadeTime) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WardrobeFunctionButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: WardrobeFunctionButton/<ButtonColorUpdate>d__4
class CORDL_TYPE WardrobeFunctionButton__ButtonColorUpdate_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::WardrobeFunctionButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5789234, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5789314, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x578931c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5789354, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5789230, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::WardrobeFunctionButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::WardrobeFunctionButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::WardrobeFunctionButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57891f8, size 0x28, virtual false, abstract: false, final false
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
constexpr WardrobeFunctionButton__ButtonColorUpdate_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WardrobeFunctionButton__ButtonColorUpdate_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WardrobeFunctionButton__ButtonColorUpdate_d__4(WardrobeFunctionButton__ButtonColorUpdate_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WardrobeFunctionButton__ButtonColorUpdate_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WardrobeFunctionButton__ButtonColorUpdate_d__4(WardrobeFunctionButton__ButtonColorUpdate_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1418};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WardrobeFunctionButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
