#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneGeneralKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DroneGeneralKeyboard)
namespace Liv::Lck::GorillaTag {
class DroneGeneralKeyboard_DroneKeyboardEvent;
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
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneGeneralKeyboard;
}
namespace Liv::Lck::GorillaTag {
class DroneGeneralKeyboard_DroneKeyboardEvent;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneGeneralKeyboard*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneGeneralKeyboard*, "Liv.Lck.GorillaTag", "DroneGeneralKeyboard");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*, "Liv.Lck.GorillaTag", "DroneGeneralKeyboard/DroneKeyboardEvent");
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneGeneralKeyboard
class CORDL_TYPE DroneGeneralKeyboard : public ::System::Object {
public:
// Declarations
using DroneKeyboardEvent = ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent;

/// @brief Field OnShiftPressed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShiftPressed, put=__cordl_internal_set_OnShiftPressed)) ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  OnShiftPressed;

/// @brief Field OnShiftReleased, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShiftReleased, put=__cordl_internal_set_OnShiftReleased)) ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  OnShiftReleased;

/// @brief Field OnShowUI, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShowUI, put=__cordl_internal_set_OnShowUI)) ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  OnShowUI;

static inline ::Liv::Lck::GorillaTag::DroneGeneralKeyboard* New_ctor() ;

/// @brief Method Run, addr 0x9d1c0c0, size 0xe8, virtual false, abstract: false, final false
inline void Run() ;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnShiftPressed() const;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnShiftPressed() ;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnShiftReleased() const;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnShiftReleased() ;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnShowUI() const;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnShowUI() ;

constexpr void __cordl_internal_set_OnShiftPressed(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnShiftReleased(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnShowUI(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

/// @brief Method .ctor, addr 0x9d16488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnShiftPressed, addr 0x9d18950, size 0x9c, virtual false, abstract: false, final false
inline void add_OnShiftPressed(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnShiftReleased, addr 0x9d189ec, size 0x9c, virtual false, abstract: false, final false
inline void add_OnShiftReleased(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnShowUI, addr 0x9d18a88, size 0x9c, virtual false, abstract: false, final false
inline void add_OnShowUI(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnShiftPressed, addr 0x9d1afe0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnShiftPressed(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnShiftReleased, addr 0x9d1b07c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnShiftReleased(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnShowUI, addr 0x9d1b118, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnShowUI(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneGeneralKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneGeneralKeyboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneGeneralKeyboard(DroneGeneralKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneGeneralKeyboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneGeneralKeyboard(DroneGeneralKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29602};

/// [CompilerGenerated]
/// @brief Field OnShowUI, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  ___OnShowUI;

/// [CompilerGenerated]
/// @brief Field OnShiftPressed, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  ___OnShiftPressed;

/// [CompilerGenerated]
/// @brief Field OnShiftReleased, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent*  ___OnShiftReleased;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGeneralKeyboard, ___OnShowUI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGeneralKeyboard, ___OnShiftPressed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGeneralKeyboard, ___OnShiftReleased) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneGeneralKeyboard) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneGeneralKeyboard/DroneKeyboardEvent
class CORDL_TYPE DroneGeneralKeyboard_DroneKeyboardEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e494, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e4b0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e480, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d188b4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneGeneralKeyboard_DroneKeyboardEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneGeneralKeyboard_DroneKeyboardEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneGeneralKeyboard_DroneKeyboardEvent(DroneGeneralKeyboard_DroneKeyboardEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneGeneralKeyboard_DroneKeyboardEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneGeneralKeyboard_DroneKeyboardEvent(DroneGeneralKeyboard_DroneKeyboardEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneGeneralKeyboard_DroneKeyboardEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
