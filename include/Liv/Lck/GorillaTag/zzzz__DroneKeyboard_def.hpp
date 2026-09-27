#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DroneKeyboard)
namespace Liv::Lck::GorillaTag {
class DroneKeyboard_DroneKeyboardEvent;
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
class DroneKeyboard;
}
namespace Liv::Lck::GorillaTag {
class DroneKeyboard_DroneKeyboardEvent;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneKeyboard*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneKeyboard*, "Liv.Lck.GorillaTag", "DroneKeyboard");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*, "Liv.Lck.GorillaTag", "DroneKeyboard/DroneKeyboardEvent");
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneKeyboard
class CORDL_TYPE DroneKeyboard : public ::System::Object {
public:
// Declarations
using DroneKeyboardEvent = ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent;

/// @brief Field OnBurstEnded, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBurstEnded, put=__cordl_internal_set_OnBurstEnded)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnBurstEnded;

/// @brief Field OnBurstStarted, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBurstStarted, put=__cordl_internal_set_OnBurstStarted)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnBurstStarted;

/// @brief Field OnMoveBackward, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveBackward, put=__cordl_internal_set_OnMoveBackward)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnMoveBackward;

/// @brief Field OnMoveDown, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveDown, put=__cordl_internal_set_OnMoveDown)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnMoveDown;

/// @brief Field OnMoveForward, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveForward, put=__cordl_internal_set_OnMoveForward)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnMoveForward;

/// @brief Field OnMoveLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveLeft, put=__cordl_internal_set_OnMoveLeft)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnMoveLeft;

/// @brief Field OnMoveRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveRight, put=__cordl_internal_set_OnMoveRight)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnMoveRight;

/// @brief Field OnMoveUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveUp, put=__cordl_internal_set_OnMoveUp)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnMoveUp;

/// @brief Field OnRotateLeft, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRotateLeft, put=__cordl_internal_set_OnRotateLeft)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnRotateLeft;

/// @brief Field OnRotateRight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRotateRight, put=__cordl_internal_set_OnRotateRight)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnRotateRight;

/// @brief Field OnTiltDown, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTiltDown, put=__cordl_internal_set_OnTiltDown)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnTiltDown;

/// @brief Field OnTiltUp, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTiltUp, put=__cordl_internal_set_OnTiltUp)) ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  OnTiltUp;

static inline ::Liv::Lck::GorillaTag::DroneKeyboard* New_ctor() ;

/// @brief Method Run, addr 0x9d1c1a8, size 0x290, virtual false, abstract: false, final false
inline void Run() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnBurstEnded() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnBurstEnded() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnBurstStarted() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnBurstStarted() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnMoveBackward() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnMoveBackward() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnMoveDown() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnMoveDown() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnMoveForward() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnMoveForward() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnMoveLeft() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnMoveLeft() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnMoveRight() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnMoveRight() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnMoveUp() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnMoveUp() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnRotateLeft() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnRotateLeft() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnRotateRight() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnRotateRight() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnTiltDown() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnTiltDown() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* const& __cordl_internal_get_OnTiltUp() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*& __cordl_internal_get_OnTiltUp() ;

constexpr void __cordl_internal_set_OnBurstEnded(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnBurstStarted(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveBackward(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveDown(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveForward(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveLeft(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveRight(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveUp(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnRotateLeft(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnRotateRight(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnTiltDown(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

constexpr void __cordl_internal_set_OnTiltUp(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// @brief Method .ctor, addr 0x9d16490, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnBurstEnded, addr 0x9d18818, size 0x9c, virtual false, abstract: false, final false
inline void add_OnBurstEnded(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnBurstStarted, addr 0x9d1877c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnBurstStarted(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveBackward, addr 0x9d18200, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveBackward(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveDown, addr 0x9d18470, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveDown(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveForward, addr 0x9d18164, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveForward(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveLeft, addr 0x9d1829c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveLeft(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveRight, addr 0x9d18338, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveRight(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveUp, addr 0x9d183d4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveUp(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRotateLeft, addr 0x9d1850c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRotateLeft(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRotateRight, addr 0x9d185a8, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRotateRight(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTiltDown, addr 0x9d186e0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnTiltDown(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTiltUp, addr 0x9d18644, size 0x9c, virtual false, abstract: false, final false
inline void add_OnTiltUp(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnBurstEnded, addr 0x9d1af44, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnBurstEnded(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnBurstStarted, addr 0x9d1aea8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnBurstStarted(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveBackward, addr 0x9d1a92c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveBackward(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveDown, addr 0x9d1ab9c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveDown(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveForward, addr 0x9d1a890, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveForward(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveLeft, addr 0x9d1a9c8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveLeft(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveRight, addr 0x9d1aa64, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveRight(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveUp, addr 0x9d1ab00, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveUp(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRotateLeft, addr 0x9d1ac38, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRotateLeft(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRotateRight, addr 0x9d1acd4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRotateRight(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTiltDown, addr 0x9d1ae0c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnTiltDown(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTiltUp, addr 0x9d1ad70, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnTiltUp(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneKeyboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneKeyboard(DroneKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneKeyboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneKeyboard(DroneKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29607};

/// [CompilerGenerated]
/// @brief Field OnMoveForward, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnMoveForward;

/// [CompilerGenerated]
/// @brief Field OnMoveBackward, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnMoveBackward;

/// [CompilerGenerated]
/// @brief Field OnMoveLeft, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnMoveLeft;

/// [CompilerGenerated]
/// @brief Field OnMoveRight, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnMoveRight;

/// [CompilerGenerated]
/// @brief Field OnMoveUp, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnMoveUp;

/// [CompilerGenerated]
/// @brief Field OnMoveDown, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnMoveDown;

/// [CompilerGenerated]
/// @brief Field OnRotateLeft, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnRotateLeft;

/// [CompilerGenerated]
/// @brief Field OnRotateRight, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnRotateRight;

/// [CompilerGenerated]
/// @brief Field OnTiltUp, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnTiltUp;

/// [CompilerGenerated]
/// @brief Field OnTiltDown, offset: 0x58, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnTiltDown;

/// [CompilerGenerated]
/// @brief Field OnBurstStarted, offset: 0x60, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnBurstStarted;

/// [CompilerGenerated]
/// @brief Field OnBurstEnded, offset: 0x68, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent*  ___OnBurstEnded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnMoveForward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnMoveBackward) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnMoveLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnMoveRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnMoveUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnMoveDown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnRotateLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnRotateRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnTiltUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnTiltDown) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnBurstStarted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneKeyboard, ___OnBurstEnded) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneKeyboard) == 0x70, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneKeyboard/DroneKeyboardEvent
class CORDL_TYPE DroneKeyboard_DroneKeyboardEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1f8e0, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1f8fc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1f8cc, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d180c8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneKeyboard_DroneKeyboardEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneKeyboard_DroneKeyboardEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneKeyboard_DroneKeyboardEvent(DroneKeyboard_DroneKeyboardEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneKeyboard_DroneKeyboardEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneKeyboard_DroneKeyboardEvent(DroneKeyboard_DroneKeyboardEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneKeyboard_DroneKeyboardEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
