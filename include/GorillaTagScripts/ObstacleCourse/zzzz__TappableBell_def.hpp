#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/TappableBell.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TappableBell)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts::ObstacleCourse {
class TappableBell_ObstacleCourseTriggerEvent;
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
namespace GorillaTagScripts::ObstacleCourse {
class TappableBell;
}
namespace GorillaTagScripts::ObstacleCourse {
class TappableBell_ObstacleCourseTriggerEvent;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::TappableBell*);
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::TappableBell*, "GorillaTagScripts.ObstacleCourse", "TappableBell");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*, "GorillaTagScripts.ObstacleCourse", "TappableBell/ObstacleCourseTriggerEvent");
// Dependencies Tappable
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.TappableBell
class CORDL_TYPE TappableBell : public ::GlobalNamespace::Tappable {
public:
// Declarations
using ObstacleCourseTriggerEvent = ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent;

/// @brief Field OnTapped, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTapped, put=__cordl_internal_set_OnTapped)) ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  OnTapped;

/// @brief Field rpcCooldown, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rpcCooldown, put=__cordl_internal_set_rpcCooldown)) ::GlobalNamespace::CallLimiter*  rpcCooldown;

/// @brief Field winnerRig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_winnerRig, put=__cordl_internal_set_winnerRig)) ::UnityW<::GlobalNamespace::VRRig>  winnerRig;

static inline ::GorillaTagScripts::ObstacleCourse::TappableBell* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x5c19128, size 0xe8, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* const& __cordl_internal_get_OnTapped() const;

constexpr ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*& __cordl_internal_get_OnTapped() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_rpcCooldown() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_rpcCooldown() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_winnerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_winnerRig() ;

constexpr void __cordl_internal_set_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  value) ;

constexpr void __cordl_internal_set_rpcCooldown(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_winnerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5c19210, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnTapped, addr 0x5c16bbc, size 0x9c, virtual false, abstract: false, final false
inline void add_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTapped, addr 0x5c16f28, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableBell() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableBell", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableBell(TappableBell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableBell", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableBell(TappableBell const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4120};

/// @brief Field winnerRig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___winnerRig;

/// [CompilerGenerated]
/// @brief Field OnTapped, offset: 0x50, size: 0x8, def value: None
 ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  ___OnTapped;

/// @brief Field rpcCooldown, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___rpcCooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::TappableBell, ___winnerRig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::TappableBell, ___OnTapped) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::TappableBell, ___rpcCooldown) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::TappableBell) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.TappableBell/ObstacleCourseTriggerEvent
class CORDL_TYPE TappableBell_ObstacleCourseTriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c1922c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::VRRig*  vrrig, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c1924c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c19218, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::VRRig*  vrrig) ;

static inline ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c16ab4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableBell_ObstacleCourseTriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableBell_ObstacleCourseTriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableBell_ObstacleCourseTriggerEvent(TappableBell_ObstacleCourseTriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableBell_ObstacleCourseTriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableBell_ObstacleCourseTriggerEvent(TappableBell_ObstacleCourseTriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
