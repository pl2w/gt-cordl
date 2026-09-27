#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapEjectButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapEjectButton_EjectType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapEjectButton)
namespace GT_CustomMapSupportRuntime {
class CustomMapEjectButtonSettings;
}
namespace GlobalNamespace {
struct CustomMapEjectButton_EjectType;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapEjectButton__ButtonPressed_Local_d__4;
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
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapEjectButton;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapEjectButton__ButtonPressed_Local_d__4;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapEjectButton");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapEjectButton/<ButtonPressed_Local>d__4");
// Dependencies GorillaPressableButton, GorillaTagScripts.VirtualStumpCustomMaps.CustomMapEjectButton::EjectType
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapEjectButton
class CORDL_TYPE CustomMapEjectButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using EjectType = ::GlobalNamespace::CustomMapEjectButton_EjectType;

using _ButtonPressed_Local_d__4 = ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4;

/// @brief Field ejectType, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ejectType, put=__cordl_internal_set_ejectType)) ::GlobalNamespace::CustomMapEjectButton_EjectType  ejectType;

/// @brief Field processing, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_processing, put=__cordl_internal_set_processing)) bool  processing;

/// @brief Method ButtonActivation, addr 0x5bdf7cc, size 0x44, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapEjectButton::<ButtonPressed_Local>d__4))]
/// @brief Method ButtonPressed_Local, addr 0x5bdf810, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ButtonPressed_Local() ;

/// @brief Method CopySettings, addr 0x5bdfba0, size 0x18, virtual false, abstract: false, final false
inline void CopySettings(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*  customMapEjectButtonSettings) ;

/// @brief Method HandleTeleport, addr 0x5bdf87c, size 0x68, virtual false, abstract: false, final false
inline void HandleTeleport() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton* New_ctor() ;

constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType const& __cordl_internal_get_ejectType() const;

constexpr ::GlobalNamespace::CustomMapEjectButton_EjectType& __cordl_internal_get_ejectType() ;

constexpr bool const& __cordl_internal_get_processing() const;

constexpr bool& __cordl_internal_get_processing() ;

constexpr void __cordl_internal_set_ejectType(::GlobalNamespace::CustomMapEjectButton_EjectType  value) ;

constexpr void __cordl_internal_set_processing(bool  value) ;

/// @brief Method .ctor, addr 0x5bdfbb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapEjectButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapEjectButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapEjectButton(CustomMapEjectButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapEjectButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapEjectButton(CustomMapEjectButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4045};

/// [SerializeField]
/// @brief Field ejectType, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapEjectButton_EjectType  ___ejectType;

/// @brief Field processing, offset: 0xbc, size: 0x1, def value: None
 bool  ___processing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton, ___ejectType) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton, ___processing) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton) == 0xc0, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapEjectButton/<ButtonPressed_Local>d__4
class CORDL_TYPE CustomMapEjectButton__ButtonPressed_Local_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bdfbc4, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bdfcac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bdfcb4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bdfcec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bdfbc0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bdf8e4, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapEjectButton__ButtonPressed_Local_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapEjectButton__ButtonPressed_Local_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapEjectButton__ButtonPressed_Local_d__4(CustomMapEjectButton__ButtonPressed_Local_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapEjectButton__ButtonPressed_Local_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapEjectButton__ButtonPressed_Local_d__4(CustomMapEjectButton__ButtonPressed_Local_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4044};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapEjectButton__ButtonPressed_Local_d__4) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
