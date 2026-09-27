#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/BundlePurchaseButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BundlePurchaseButton)
namespace Cosmetics {
class ICreatorCodeProvider;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaNetworking::Store {
class BundlePurchaseButton__ButtonColorUpdate_d__15;
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
namespace GorillaNetworking::Store {
class BundlePurchaseButton;
}
namespace GorillaNetworking::Store {
class BundlePurchaseButton__ButtonColorUpdate_d__15;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::BundlePurchaseButton*);
MARK_REF_T(::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundlePurchaseButton*, "GorillaNetworking.Store", "BundlePurchaseButton");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15*, "GorillaNetworking.Store", "BundlePurchaseButton/<ButtonColorUpdate>d__15");
// Dependencies GorillaPressableButton
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundlePurchaseButton
class CORDL_TYPE BundlePurchaseButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonColorUpdate_d__15 = ::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15;

/// @brief Field AlreadyOwnText, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_AlreadyOwnText, put=__cordl_internal_set_AlreadyOwnText)) ::StringW  AlreadyOwnText;

/// @brief Field ErrorText, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorText, put=__cordl_internal_set_ErrorText)) ::StringW  ErrorText;

/// @brief Field UnavailableText, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnavailableText, put=__cordl_internal_set_UnavailableText)) ::StringW  UnavailableText;

/// @brief Field bError, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_bError, put=__cordl_internal_set_bError)) bool  bError;

/// @brief Field codeProvider, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_codeProvider, put=__cordl_internal_set_codeProvider)) ::Cosmetics::ICreatorCodeProvider*  codeProvider;

/// @brief Field playfabID, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabID, put=__cordl_internal_set_playfabID)) ::StringW  playfabID;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AlreadyOwn, addr 0x5ca799c, size 0xc4, virtual false, abstract: false, final false
inline void AlreadyOwn() ;

/// @brief Method ButtonActivation, addr 0x5ca7898, size 0x98, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.Store.BundlePurchaseButton::<ButtonColorUpdate>d__15))]
/// @brief Method ButtonColorUpdate, addr 0x5ca7930, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonColorUpdate() ;

/// @brief Method ErrorHappened, addr 0x5ca7b34, size 0x80, virtual false, abstract: false, final false
inline void ErrorHappened() ;

/// @brief Method InitializeData, addr 0x5ca7bb4, size 0x5c, virtual false, abstract: false, final false
inline void InitializeData() ;

static inline ::GorillaNetworking::Store::BundlePurchaseButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ca7748, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ca773c, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetButton, addr 0x5ca7a60, size 0xac, virtual false, abstract: false, final false
inline void ResetButton() ;

/// @brief Method SliceUpdate, addr 0x5ca7754, size 0x144, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdatePurchaseButtonText, addr 0x5ca7c10, size 0x30, virtual false, abstract: false, final false
inline void UpdatePurchaseButtonText(::StringW  text) ;

constexpr ::StringW const& __cordl_internal_get_AlreadyOwnText() const;

constexpr ::StringW& __cordl_internal_get_AlreadyOwnText() ;

constexpr ::StringW const& __cordl_internal_get_ErrorText() const;

constexpr ::StringW& __cordl_internal_get_ErrorText() ;

constexpr ::StringW const& __cordl_internal_get_UnavailableText() const;

constexpr ::StringW& __cordl_internal_get_UnavailableText() ;

constexpr bool const& __cordl_internal_get_bError() const;

constexpr bool& __cordl_internal_get_bError() ;

constexpr ::Cosmetics::ICreatorCodeProvider* const& __cordl_internal_get_codeProvider() const;

constexpr ::Cosmetics::ICreatorCodeProvider*& __cordl_internal_get_codeProvider() ;

constexpr ::StringW const& __cordl_internal_get_playfabID() const;

constexpr ::StringW& __cordl_internal_get_playfabID() ;

constexpr void __cordl_internal_set_AlreadyOwnText(::StringW  value) ;

constexpr void __cordl_internal_set_ErrorText(::StringW  value) ;

constexpr void __cordl_internal_set_UnavailableText(::StringW  value) ;

constexpr void __cordl_internal_set_bError(bool  value) ;

constexpr void __cordl_internal_set_codeProvider(::Cosmetics::ICreatorCodeProvider*  value) ;

constexpr void __cordl_internal_set_playfabID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ca7c40, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundlePurchaseButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundlePurchaseButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundlePurchaseButton(BundlePurchaseButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundlePurchaseButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundlePurchaseButton(BundlePurchaseButton const& ) = delete;

/// @brief Field MONKE_BLOCKS_BUNDLE_ALREADY_OWN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_BUNDLE_ALREADY_OWN_KEY{u"MONKE_BLOCKS_BUNDLE_ALREADY_OWN"};

/// @brief Field MONKE_BLOCKS_BUNDLE_ERROR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_BUNDLE_ERROR_KEY{u"MONKE_BLOCKS_BUNDLE_ERROR"};

/// @brief Field MONKE_BLOCKS_BUNDLE_UNAVAILABLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_BUNDLE_UNAVAILABLE_KEY{u"MONKE_BLOCKS_BUNDLE_UNAVAILABLE"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4424};

/// @brief Field bError, offset: 0xb8, size: 0x1, def value: None
 bool  ___bError;

/// @brief Field ErrorText, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___ErrorText;

/// @brief Field AlreadyOwnText, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___AlreadyOwnText;

/// @brief Field UnavailableText, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___UnavailableText;

/// @brief Field playfabID, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___playfabID;

/// @brief Field codeProvider, offset: 0xe0, size: 0x8, def value: None
 ::Cosmetics::ICreatorCodeProvider*  ___codeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton, ___bError) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton, ___ErrorText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton, ___AlreadyOwnText) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton, ___UnavailableText) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton, ___playfabID) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton, ___codeProvider) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::BundlePurchaseButton) == 0xe8, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundlePurchaseButton/<ButtonColorUpdate>d__15
class CORDL_TYPE BundlePurchaseButton__ButtonColorUpdate_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ca7d18, size 0xf4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ca7e0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ca7e14, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ca7e4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ca7d14, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ca7b0c, size 0x28, virtual false, abstract: false, final false
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
constexpr BundlePurchaseButton__ButtonColorUpdate_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundlePurchaseButton__ButtonColorUpdate_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundlePurchaseButton__ButtonColorUpdate_d__15(BundlePurchaseButton__ButtonColorUpdate_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundlePurchaseButton__ButtonColorUpdate_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundlePurchaseButton__ButtonColorUpdate_d__15(BundlePurchaseButton__ButtonColorUpdate_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4423};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::BundlePurchaseButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::BundlePurchaseButton__ButtonColorUpdate_d__15) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
