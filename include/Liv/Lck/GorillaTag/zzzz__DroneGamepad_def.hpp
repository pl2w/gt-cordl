#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneGamepad.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneGamepad)
namespace Liv::Lck::GorillaTag {
class DroneGamepad_Gamepad1DMove;
}
namespace Liv::Lck::GorillaTag {
class DroneGamepad_Gamepad2DMove;
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
class DroneGamepad;
}
namespace Liv::Lck::GorillaTag {
class DroneGamepad_Gamepad1DMove;
}
namespace Liv::Lck::GorillaTag {
class DroneGamepad_Gamepad2DMove;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneGamepad*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneGamepad*, "Liv.Lck.GorillaTag", "DroneGamepad");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*, "Liv.Lck.GorillaTag", "DroneGamepad/Gamepad1DMove");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*, "Liv.Lck.GorillaTag", "DroneGamepad/Gamepad2DMove");
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneGamepad
class CORDL_TYPE DroneGamepad : public ::System::Object {
public:
// Declarations
using Gamepad1DMove = ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove;

using Gamepad2DMove = ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove;

/// @brief Field OnMove, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMove, put=__cordl_internal_set_OnMove)) ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  OnMove;

/// @brief Field OnMoveUpAndDown, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveUpAndDown, put=__cordl_internal_set_OnMoveUpAndDown)) ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*  OnMoveUpAndDown;

/// @brief Field OnTiltAndRotate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTiltAndRotate, put=__cordl_internal_set_OnTiltAndRotate)) ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  OnTiltAndRotate;

static inline ::Liv::Lck::GorillaTag::DroneGamepad* New_ctor() ;

/// @brief Method Run, addr 0x9d1c678, size 0x174, virtual false, abstract: false, final false
inline void Run() ;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove* const& __cordl_internal_get_OnMove() const;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*& __cordl_internal_get_OnMove() ;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove* const& __cordl_internal_get_OnMoveUpAndDown() const;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*& __cordl_internal_get_OnMoveUpAndDown() ;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove* const& __cordl_internal_get_OnTiltAndRotate() const;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*& __cordl_internal_get_OnTiltAndRotate() ;

constexpr void __cordl_internal_set_OnMove(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  value) ;

constexpr void __cordl_internal_set_OnMoveUpAndDown(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*  value) ;

constexpr void __cordl_internal_set_OnTiltAndRotate(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  value) ;

/// @brief Method .ctor, addr 0x9d164a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnMove, addr 0x9d1900c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMove(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveUpAndDown, addr 0x9d191e4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveUpAndDown(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTiltAndRotate, addr 0x9d190a8, size 0x9c, virtual false, abstract: false, final false
inline void add_OnTiltAndRotate(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMove, addr 0x9d1b4c0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMove(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveUpAndDown, addr 0x9d1b5f8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveUpAndDown(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTiltAndRotate, addr 0x9d1b55c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnTiltAndRotate(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneGamepad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneGamepad", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneGamepad(DroneGamepad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneGamepad", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneGamepad(DroneGamepad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29600};

/// [CompilerGenerated]
/// @brief Field OnMove, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  ___OnMove;

/// [CompilerGenerated]
/// @brief Field OnTiltAndRotate, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove*  ___OnTiltAndRotate;

/// [CompilerGenerated]
/// @brief Field OnMoveUpAndDown, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove*  ___OnMoveUpAndDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGamepad, ___OnMove) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGamepad, ___OnTiltAndRotate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneGamepad, ___OnMoveUpAndDown) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneGamepad) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneGamepad/Gamepad1DMove
class CORDL_TYPE DroneGamepad_Gamepad1DMove : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e418, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  move, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e474, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e404, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  move) ;

static inline ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d19144, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneGamepad_Gamepad1DMove() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneGamepad_Gamepad1DMove", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneGamepad_Gamepad1DMove(DroneGamepad_Gamepad1DMove && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneGamepad_Gamepad1DMove", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneGamepad_Gamepad1DMove(DroneGamepad_Gamepad1DMove const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad1DMove) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneGamepad/Gamepad2DMove
class CORDL_TYPE DroneGamepad_Gamepad2DMove : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e374, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2  move, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e3f8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e360, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Vector2  move) ;

static inline ::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d18f6c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneGamepad_Gamepad2DMove() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneGamepad_Gamepad2DMove", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneGamepad_Gamepad2DMove(DroneGamepad_Gamepad2DMove && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneGamepad_Gamepad2DMove", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneGamepad_Gamepad2DMove(DroneGamepad_Gamepad2DMove const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29598};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneGamepad_Gamepad2DMove) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
