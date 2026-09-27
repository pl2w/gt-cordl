#pragma once
// IWYU pragma private; include "GlobalNamespace/PurchaseItemButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PurchaseItemButton)
namespace GlobalNamespace {
class PurchaseItemButton__ButtonColorUpdate_d__2;
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
class PurchaseItemButton;
}
namespace GlobalNamespace {
class PurchaseItemButton__ButtonColorUpdate_d__2;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PurchaseItemButton*);
MARK_REF_T(::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PurchaseItemButton*, "", "PurchaseItemButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2*, "", "PurchaseItemButton/<ButtonColorUpdate>d__2");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: PurchaseItemButton
class CORDL_TYPE PurchaseItemButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonColorUpdate_d__2 = ::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2;

/// @brief Field buttonSide, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonSide, put=__cordl_internal_set_buttonSide)) ::StringW  buttonSide;

/// @brief Method ButtonActivationWithHand, addr 0x5778650, size 0xa8, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

/// [IteratorStateMachine(typeof(PurchaseItemButton::<ButtonColorUpdate>d__2))]
/// @brief Method ButtonColorUpdate, addr 0x57786f8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonColorUpdate() ;

static inline ::GlobalNamespace::PurchaseItemButton* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_buttonSide() const;

constexpr ::StringW& __cordl_internal_get_buttonSide() ;

constexpr void __cordl_internal_set_buttonSide(::StringW  value) ;

/// @brief Method .ctor, addr 0x577878c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PurchaseItemButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PurchaseItemButton(PurchaseItemButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PurchaseItemButton(PurchaseItemButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1384};

/// @brief Field buttonSide, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___buttonSide;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PurchaseItemButton, ___buttonSide) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PurchaseItemButton) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PurchaseItemButton/<ButtonColorUpdate>d__2
class CORDL_TYPE PurchaseItemButton__ButtonColorUpdate_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PurchaseItemButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5778798, size 0x138, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57788d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57788d8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5778910, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5778794, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PurchaseItemButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5778764, size 0x28, virtual false, abstract: false, final false
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
constexpr PurchaseItemButton__ButtonColorUpdate_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemButton__ButtonColorUpdate_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PurchaseItemButton__ButtonColorUpdate_d__2(PurchaseItemButton__ButtonColorUpdate_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemButton__ButtonColorUpdate_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PurchaseItemButton__ButtonColorUpdate_d__2(PurchaseItemButton__ButtonColorUpdate_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1383};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PurchaseItemButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PurchaseItemButton__ButtonColorUpdate_d__2) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
