#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachineButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArcadeMachineButton)
namespace GlobalNamespace {
class ArcadeMachineButton_ArcadeMachineButtonEvent;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcadeMachineButton;
}
namespace GlobalNamespace {
class ArcadeMachineButton_ArcadeMachineButtonEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArcadeMachineButton*);
MARK_REF_T(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeMachineButton*, "", "ArcadeMachineButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*, "", "ArcadeMachineButton/ArcadeMachineButtonEvent");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcadeMachineButton
class CORDL_TYPE ArcadeMachineButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using ArcadeMachineButtonEvent = ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent;

/// @brief Field ButtonID, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_ButtonID, put=__cordl_internal_set_ButtonID)) int32_t  ButtonID;

/// @brief Field OnStateChange, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStateChange, put=__cordl_internal_set_OnStateChange)) ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  OnStateChange;

/// @brief Field state, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) bool  state;

/// @brief Method ButtonActivation, addr 0x56d31dc, size 0x4c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::ArcadeMachineButton* New_ctor() ;

/// @brief Method OnTriggerExit, addr 0x56d3228, size 0xdc, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

constexpr int32_t const& __cordl_internal_get_ButtonID() const;

constexpr int32_t& __cordl_internal_get_ButtonID() ;

constexpr ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* const& __cordl_internal_get_OnStateChange() const;

constexpr ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*& __cordl_internal_get_OnStateChange() ;

constexpr bool const& __cordl_internal_get_state() const;

constexpr bool& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_ButtonID(int32_t  value) ;

constexpr void __cordl_internal_set_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  value) ;

constexpr void __cordl_internal_set_state(bool  value) ;

/// @brief Method .ctor, addr 0x56d3304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnStateChange, addr 0x56d30a4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStateChange, addr 0x56d3140, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnStateChange(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeMachineButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeMachineButton(ArcadeMachineButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeMachineButton(ArcadeMachineButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1063};

/// @brief Field state, offset: 0xb8, size: 0x1, def value: None
 bool  ___state;

/// [SerializeField]
/// @brief Field ButtonID, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___ButtonID;

/// [CompilerGenerated]
/// @brief Field OnStateChange, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent*  ___OnStateChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcadeMachineButton, ___state) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineButton, ___ButtonID) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachineButton, ___OnStateChange) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcadeMachineButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcadeMachineButton/ArcadeMachineButtonEvent
class CORDL_TYPE ArcadeMachineButton_ArcadeMachineButtonEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56d33c0, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  id, bool  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56d3440, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56d33ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  id, bool  state) ;

static inline ::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56d330c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeMachineButton_ArcadeMachineButtonEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineButton_ArcadeMachineButtonEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeMachineButton_ArcadeMachineButtonEvent(ArcadeMachineButton_ArcadeMachineButtonEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachineButton_ArcadeMachineButtonEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeMachineButton_ArcadeMachineButtonEvent(ArcadeMachineButton_ArcadeMachineButtonEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1062};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ArcadeMachineButton_ArcadeMachineButtonEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
