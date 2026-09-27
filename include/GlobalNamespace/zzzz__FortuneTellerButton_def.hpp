#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneTellerButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FortuneTellerButton)
namespace GlobalNamespace {
class FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d;
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
class FortuneTellerButton;
}
namespace GlobalNamespace {
class FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FortuneTellerButton*);
MARK_REF_T(::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneTellerButton*, "", "FortuneTellerButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d*, "", "FortuneTellerButton/<<PressButtonUpdate>g__ButtonColorUpdate_Local|6_0>d");
// Dependencies GorillaPressableButton, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FortuneTellerButton
class CORDL_TYPE FortuneTellerButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using __PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d = ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d;

/// @brief Field durationPressed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_durationPressed, put=__cordl_internal_set_durationPressed)) float_t  durationPressed;

/// @brief Field pressTime, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressTime, put=__cordl_internal_set_pressTime)) float_t  pressTime;

/// @brief Field pressedOffset, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_pressedOffset, put=__cordl_internal_set_pressedOffset)) ::UnityEngine::Vector3  pressedOffset;

/// @brief Field startingPos, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingPos, put=__cordl_internal_set_startingPos)) ::UnityEngine::Vector3  startingPos;

/// @brief Method Awake, addr 0x580c038, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonActivation, addr 0x580c068, size 0x4, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::FortuneTellerButton* New_ctor() ;

/// @brief Method PressButtonUpdate, addr 0x580c06c, size 0x8c, virtual false, abstract: false, final false
inline void PressButtonUpdate() ;

/// [IteratorStateMachine(typeof(FortuneTellerButton::<<PressButtonUpdate>g__ButtonColorUpdate_Local|6_0>d))]
/// [CompilerGenerated]
/// @brief Method <PressButtonUpdate>g__ButtonColorUpdate_Local|6_0, addr 0x580c0f8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _PressButtonUpdate_g__ButtonColorUpdate_Local_6_0() ;

constexpr float_t const& __cordl_internal_get_durationPressed() const;

constexpr float_t& __cordl_internal_get_durationPressed() ;

constexpr float_t const& __cordl_internal_get_pressTime() const;

constexpr float_t& __cordl_internal_get_pressTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pressedOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pressedOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingPos() ;

constexpr void __cordl_internal_set_durationPressed(float_t  value) ;

constexpr void __cordl_internal_set_pressTime(float_t  value) ;

constexpr void __cordl_internal_set_pressedOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x580c164, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FortuneTellerButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FortuneTellerButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FortuneTellerButton(FortuneTellerButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FortuneTellerButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FortuneTellerButton(FortuneTellerButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1710};

/// [SerializeField]
/// @brief Field durationPressed, offset: 0xb8, size: 0x4, def value: None
 float_t  ___durationPressed;

/// [SerializeField]
/// @brief Field pressedOffset, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pressedOffset;

/// @brief Field pressTime, offset: 0xc8, size: 0x4, def value: None
 float_t  ___pressTime;

/// @brief Field startingPos, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneTellerButton, ___durationPressed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTellerButton, ___pressedOffset) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTellerButton, ___pressTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTellerButton, ___startingPos) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneTellerButton) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FortuneTellerButton/<<PressButtonUpdate>g__ButtonColorUpdate_Local|6_0>d
class CORDL_TYPE FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FortuneTellerButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x580c1a4, size 0x118, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x580c2bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x580c2c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x580c2fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x580c1a0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FortuneTellerButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x580c178, size 0x28, virtual false, abstract: false, final false
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
constexpr FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d(FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d(FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1709};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FortuneTellerButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneTellerButton___PressButtonUpdate_g__ButtonColorUpdate_Local_6_0_d) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
