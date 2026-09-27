#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnPurchaseButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TryOnPurchaseButton)
namespace GlobalNamespace {
class TryOnPurchaseButton__ButtonColorUpdate_d__7;
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
class TryOnPurchaseButton;
}
namespace GlobalNamespace {
class TryOnPurchaseButton__ButtonColorUpdate_d__7;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TryOnPurchaseButton*);
MARK_REF_T(::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TryOnPurchaseButton*, "", "TryOnPurchaseButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*, "", "TryOnPurchaseButton/<ButtonColorUpdate>d__7");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: TryOnPurchaseButton
class CORDL_TYPE TryOnPurchaseButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonColorUpdate_d__7 = ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7;

/// @brief Field AlreadyOwnText, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_AlreadyOwnText, put=__cordl_internal_set_AlreadyOwnText)) ::StringW  AlreadyOwnText;

/// @brief Field ErrorText, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorText, put=__cordl_internal_set_ErrorText)) ::StringW  ErrorText;

/// @brief Field bError, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_bError, put=__cordl_internal_set_bError)) bool  bError;

/// @brief Method AlreadyOwn, addr 0x57820b8, size 0xb0, virtual false, abstract: false, final false
inline void AlreadyOwn() ;

/// @brief Method ButtonActivation, addr 0x5782ab4, size 0x98, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(TryOnPurchaseButton::<ButtonColorUpdate>d__7))]
/// @brief Method ButtonColorUpdate, addr 0x5782b4c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonColorUpdate() ;

/// @brief Method ErrorHappened, addr 0x57822d0, size 0x60, virtual false, abstract: false, final false
inline void ErrorHappened() ;

static inline ::GlobalNamespace::TryOnPurchaseButton* New_ctor() ;

/// @brief Method ResetButton, addr 0x5781410, size 0xb0, virtual false, abstract: false, final false
inline void ResetButton() ;

/// @brief Method Update, addr 0x578295c, size 0x158, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_AlreadyOwnText() const;

constexpr ::StringW& __cordl_internal_get_AlreadyOwnText() ;

constexpr ::StringW const& __cordl_internal_get_ErrorText() const;

constexpr ::StringW& __cordl_internal_get_ErrorText() ;

constexpr bool const& __cordl_internal_get_bError() const;

constexpr bool& __cordl_internal_get_bError() ;

constexpr void __cordl_internal_set_AlreadyOwnText(::StringW  value) ;

constexpr void __cordl_internal_set_ErrorText(::StringW  value) ;

constexpr void __cordl_internal_set_bError(bool  value) ;

/// @brief Method .ctor, addr 0x5782be0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TryOnPurchaseButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TryOnPurchaseButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TryOnPurchaseButton(TryOnPurchaseButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryOnPurchaseButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryOnPurchaseButton(TryOnPurchaseButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1405};

/// @brief Field bError, offset: 0xb8, size: 0x1, def value: None
 bool  ___bError;

/// @brief Field ErrorText, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___ErrorText;

/// @brief Field AlreadyOwnText, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___AlreadyOwnText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TryOnPurchaseButton, ___bError) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnPurchaseButton, ___ErrorText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnPurchaseButton, ___AlreadyOwnText) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TryOnPurchaseButton) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TryOnPurchaseButton/<ButtonColorUpdate>d__7
class CORDL_TYPE TryOnPurchaseButton__ButtonColorUpdate_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TryOnPurchaseButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5782c3c, size 0xf4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5782d30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5782d38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5782d70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5782c38, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TryOnPurchaseButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5782bb8, size 0x28, virtual false, abstract: false, final false
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
constexpr TryOnPurchaseButton__ButtonColorUpdate_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TryOnPurchaseButton__ButtonColorUpdate_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TryOnPurchaseButton__ButtonColorUpdate_d__7(TryOnPurchaseButton__ButtonColorUpdate_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TryOnPurchaseButton__ButtonColorUpdate_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TryOnPurchaseButton__ButtonColorUpdate_d__7(TryOnPurchaseButton__ButtonColorUpdate_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1404};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TryOnPurchaseButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
