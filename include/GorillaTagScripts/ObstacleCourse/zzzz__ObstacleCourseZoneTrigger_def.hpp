#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourseZoneTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleCourseZoneTrigger)
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent;
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
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourseZoneTrigger;
}
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger*);
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger*, "GorillaTagScripts.ObstacleCourse", "ObstacleCourseZoneTrigger");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*, "GorillaTagScripts.ObstacleCourse", "ObstacleCourseZoneTrigger/ObstacleCourseTriggerEvent");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleCourseZoneTrigger
class CORDL_TYPE ObstacleCourseZoneTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ObstacleCourseTriggerEvent = ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent;

/// @brief Field OnPlayerTriggerEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerTriggerEnter, put=__cordl_internal_set_OnPlayerTriggerEnter)) ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  OnPlayerTriggerEnter;

/// @brief Field OnPlayerTriggerExit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerTriggerExit, put=__cordl_internal_set_OnPlayerTriggerExit)) ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  OnPlayerTriggerExit;

/// @brief Field bodyLayer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyLayer, put=__cordl_internal_set_bodyLayer)) ::UnityEngine::LayerMask  bodyLayer;

static inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5c18bc8, size 0xf8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c18cc0, size 0xf8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* const& __cordl_internal_get_OnPlayerTriggerEnter() const;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*& __cordl_internal_get_OnPlayerTriggerEnter() ;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* const& __cordl_internal_get_OnPlayerTriggerExit() const;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*& __cordl_internal_get_OnPlayerTriggerExit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_bodyLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_bodyLayer() ;

constexpr void __cordl_internal_set_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  value) ;

constexpr void __cordl_internal_set_OnPlayerTriggerExit(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  value) ;

constexpr void __cordl_internal_set_bodyLayer(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x5c18db8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerTriggerEnter, addr 0x5c1697c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerTriggerExit, addr 0x5c16a18, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPlayerTriggerExit(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerTriggerEnter, addr 0x5c16df0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerTriggerExit, addr 0x5c16e8c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPlayerTriggerExit(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleCourseZoneTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourseZoneTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleCourseZoneTrigger(ObstacleCourseZoneTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourseZoneTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleCourseZoneTrigger(ObstacleCourseZoneTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4116};

/// @brief Field bodyLayer, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___bodyLayer;

/// [CompilerGenerated]
/// @brief Field OnPlayerTriggerEnter, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  ___OnPlayerTriggerEnter;

/// [CompilerGenerated]
/// @brief Field OnPlayerTriggerExit, offset: 0x30, size: 0x8, def value: None
 ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*  ___OnPlayerTriggerExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger, ___bodyLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger, ___OnPlayerTriggerEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger, ___OnPlayerTriggerExit) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleCourseZoneTrigger/ObstacleCourseTriggerEvent
class CORDL_TYPE ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c18dd4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c18df4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c18dc0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Collider*  collider) ;

static inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c16874, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent(ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent(ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
