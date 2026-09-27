#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneMouse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneMouse)
namespace Liv::Lck::GorillaTag {
class DroneMouse_DroneMouseEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneMouse_DroneMouseMiddleScrollEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneMouse_DroneMouseMoveEvent;
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
struct Vector2;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneMouse;
}
namespace Liv::Lck::GorillaTag {
class DroneMouse_DroneMouseEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneMouse_DroneMouseMiddleScrollEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneMouse_DroneMouseMoveEvent;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneMouse*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneMouse*, "Liv.Lck.GorillaTag", "DroneMouse");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*, "Liv.Lck.GorillaTag", "DroneMouse/DroneMouseEvent");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*, "Liv.Lck.GorillaTag", "DroneMouse/DroneMouseMiddleScrollEvent");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*, "Liv.Lck.GorillaTag", "DroneMouse/DroneMouseMoveEvent");
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneMouse
class CORDL_TYPE DroneMouse : public ::System::Object {
public:
// Declarations
using DroneMouseEvent = ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent;

using DroneMouseMiddleScrollEvent = ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent;

using DroneMouseMoveEvent = ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent;

/// @brief Field OnMouseMiddleScroll, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMouseMiddleScroll, put=__cordl_internal_set_OnMouseMiddleScroll)) ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*  OnMouseMiddleScroll;

/// @brief Field OnMouseMoveLeft, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMouseMoveLeft, put=__cordl_internal_set_OnMouseMoveLeft)) ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  OnMouseMoveLeft;

/// @brief Field OnMouseMoveRight, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMouseMoveRight, put=__cordl_internal_set_OnMouseMoveRight)) ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  OnMouseMoveRight;

/// @brief Field OnMouseScrollDown, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMouseScrollDown, put=__cordl_internal_set_OnMouseScrollDown)) ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  OnMouseScrollDown;

/// @brief Field OnMouseScrollUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMouseScrollUp, put=__cordl_internal_set_OnMouseScrollUp)) ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  OnMouseScrollUp;

/// @brief Field OnReset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReset, put=__cordl_internal_set_OnReset)) ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  OnReset;

static inline ::Liv::Lck::GorillaTag::DroneMouse* New_ctor() ;

/// @brief Method Run, addr 0x9d1c438, size 0x240, virtual false, abstract: false, final false
inline void Run() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent* const& __cordl_internal_get_OnMouseMiddleScroll() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*& __cordl_internal_get_OnMouseMiddleScroll() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent* const& __cordl_internal_get_OnMouseMoveLeft() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*& __cordl_internal_get_OnMouseMoveLeft() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent* const& __cordl_internal_get_OnMouseMoveRight() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*& __cordl_internal_get_OnMouseMoveRight() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent* const& __cordl_internal_get_OnMouseScrollDown() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*& __cordl_internal_get_OnMouseScrollDown() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent* const& __cordl_internal_get_OnMouseScrollUp() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*& __cordl_internal_get_OnMouseScrollUp() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent* const& __cordl_internal_get_OnReset() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*& __cordl_internal_get_OnReset() ;

constexpr void __cordl_internal_set_OnMouseMiddleScroll(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*  value) ;

constexpr void __cordl_internal_set_OnMouseMoveLeft(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  value) ;

constexpr void __cordl_internal_set_OnMouseMoveRight(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  value) ;

constexpr void __cordl_internal_set_OnMouseScrollDown(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

constexpr void __cordl_internal_set_OnMouseScrollUp(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

constexpr void __cordl_internal_set_OnReset(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

/// @brief Method .ctor, addr 0x9d16498, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnMouseMiddleScroll, addr 0x9d1f908, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMouseMiddleScroll(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMouseMoveLeft, addr 0x9d18bc4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMouseMoveLeft(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMouseMoveRight, addr 0x9d18c60, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMouseMoveRight(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMouseScrollDown, addr 0x9d18ed0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMouseScrollDown(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMouseScrollUp, addr 0x9d18e34, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMouseScrollUp(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnReset, addr 0x9d18d98, size 0x9c, virtual false, abstract: false, final false
inline void add_OnReset(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMouseMiddleScroll, addr 0x9d1f9a4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMouseMiddleScroll(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMouseMoveLeft, addr 0x9d1b1b4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMouseMoveLeft(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMouseMoveRight, addr 0x9d1b250, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMouseMoveRight(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMouseScrollDown, addr 0x9d1b424, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMouseScrollDown(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMouseScrollUp, addr 0x9d1b388, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMouseScrollUp(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnReset, addr 0x9d1b2ec, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnReset(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneMouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneMouse(DroneMouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneMouse(DroneMouse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29611};

/// [CompilerGenerated]
/// @brief Field OnMouseMoveLeft, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  ___OnMouseMoveLeft;

/// [CompilerGenerated]
/// @brief Field OnMouseMoveRight, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent*  ___OnMouseMoveRight;

/// [CompilerGenerated]
/// @brief Field OnReset, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  ___OnReset;

/// [CompilerGenerated]
/// @brief Field OnMouseMiddleScroll, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent*  ___OnMouseMiddleScroll;

/// [CompilerGenerated]
/// @brief Field OnMouseScrollUp, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  ___OnMouseScrollUp;

/// [CompilerGenerated]
/// @brief Field OnMouseScrollDown, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent*  ___OnMouseScrollDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMouse, ___OnMouseMoveLeft) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMouse, ___OnMouseMoveRight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMouse, ___OnReset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMouse, ___OnMouseMiddleScroll) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMouse, ___OnMouseScrollUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMouse, ___OnMouseScrollDown) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneMouse) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneMouse/DroneMouseMiddleScrollEvent
class CORDL_TYPE DroneMouse_DroneMouseMiddleScrollEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1fbd4, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  delta, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1fc30, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1fbc0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  delta) ;

static inline ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d1fb20, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneMouse_DroneMouseMiddleScrollEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse_DroneMouseMiddleScrollEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneMouse_DroneMouseMiddleScrollEvent(DroneMouse_DroneMouseMiddleScrollEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse_DroneMouseMiddleScrollEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneMouse_DroneMouseMiddleScrollEvent(DroneMouse_DroneMouseMiddleScrollEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMiddleScrollEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneMouse/DroneMouseMoveEvent
class CORDL_TYPE DroneMouse_DroneMouseMoveEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1fa90, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2  delta, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1fb14, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1fa7c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Vector2  delta) ;

static inline ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d18b24, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneMouse_DroneMouseMoveEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse_DroneMouseMoveEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneMouse_DroneMouseMoveEvent(DroneMouse_DroneMouseMoveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse_DroneMouseMoveEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneMouse_DroneMouseMoveEvent(DroneMouse_DroneMouseMoveEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseMoveEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneMouse/DroneMouseEvent
class CORDL_TYPE DroneMouse_DroneMouseEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1fa54, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1fa70, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1fa40, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d18cfc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneMouse_DroneMouseEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse_DroneMouseEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneMouse_DroneMouseEvent(DroneMouse_DroneMouseEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneMouse_DroneMouseEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneMouse_DroneMouseEvent(DroneMouse_DroneMouseEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneMouse_DroneMouseEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
