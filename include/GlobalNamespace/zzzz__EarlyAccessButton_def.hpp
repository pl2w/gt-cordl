#pragma once
// IWYU pragma private; include "GlobalNamespace/EarlyAccessButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EarlyAccessButton)
namespace GlobalNamespace {
class EarlyAccessButton__ButtonColorUpdate_d__4;
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
class EarlyAccessButton;
}
namespace GlobalNamespace {
class EarlyAccessButton__ButtonColorUpdate_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EarlyAccessButton*);
MARK_REF_T(::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EarlyAccessButton*, "", "EarlyAccessButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4*, "", "EarlyAccessButton/<ButtonColorUpdate>d__4");
// [Obsolete("Replaced with bundlebutton")]
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: EarlyAccessButton
class CORDL_TYPE EarlyAccessButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using _ButtonColorUpdate_d__4 = ::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4;

/// @brief Method AlreadyOwn, addr 0x574e9b8, size 0xb0, virtual false, abstract: false, final false
inline void AlreadyOwn() ;

/// @brief Method Awake, addr 0x574e764, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonActivation, addr 0x574e8b8, size 0x94, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(EarlyAccessButton::<ButtonColorUpdate>d__4))]
/// @brief Method ButtonColorUpdate, addr 0x574e94c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonColorUpdate() ;

static inline ::GlobalNamespace::EarlyAccessButton* New_ctor() ;

/// @brief Method Update, addr 0x574e768, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x574ea90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EarlyAccessButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EarlyAccessButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EarlyAccessButton(EarlyAccessButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EarlyAccessButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EarlyAccessButton(EarlyAccessButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EarlyAccessButton) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EarlyAccessButton/<ButtonColorUpdate>d__4
class CORDL_TYPE EarlyAccessButton__ButtonColorUpdate_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EarlyAccessButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x574ea9c, size 0xf4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x574eb90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x574eb98, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x574ebd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x574ea98, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::EarlyAccessButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EarlyAccessButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EarlyAccessButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x574ea68, size 0x28, virtual false, abstract: false, final false
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
constexpr EarlyAccessButton__ButtonColorUpdate_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EarlyAccessButton__ButtonColorUpdate_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EarlyAccessButton__ButtonColorUpdate_d__4(EarlyAccessButton__ButtonColorUpdate_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EarlyAccessButton__ButtonColorUpdate_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EarlyAccessButton__ButtonColorUpdate_d__4(EarlyAccessButton__ButtonColorUpdate_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1301};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EarlyAccessButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EarlyAccessButton__ButtonColorUpdate_d__4) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
