#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleEndLineTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleEndLineTrigger)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleEndLineTrigger_ObstacleCourseTriggerEvent;
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
class ObstacleEndLineTrigger;
}
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleEndLineTrigger_ObstacleCourseTriggerEvent;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*);
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*, "GorillaTagScripts.ObstacleCourse", "ObstacleEndLineTrigger");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*, "GorillaTagScripts.ObstacleCourse", "ObstacleEndLineTrigger/ObstacleCourseTriggerEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleEndLineTrigger
class CORDL_TYPE ObstacleEndLineTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ObstacleCourseTriggerEvent = ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent;

/// @brief Field OnPlayerTriggerEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerTriggerEnter, put=__cordl_internal_set_OnPlayerTriggerEnter)) ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  OnPlayerTriggerEnter;

static inline ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5c18f38, size 0xa0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* const& __cordl_internal_get_OnPlayerTriggerEnter() const;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*& __cordl_internal_get_OnPlayerTriggerEnter() ;

constexpr void __cordl_internal_set_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  value) ;

/// @brief Method .ctor, addr 0x5c18fd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerTriggerEnter, addr 0x5c18e00, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerTriggerEnter, addr 0x5c18e9c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleEndLineTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleEndLineTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleEndLineTrigger(ObstacleEndLineTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleEndLineTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleEndLineTrigger(ObstacleEndLineTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4118};

/// [CompilerGenerated]
/// @brief Field OnPlayerTriggerEnter, offset: 0x20, size: 0x8, def value: None
 ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  ___OnPlayerTriggerEnter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger, ___OnPlayerTriggerEnter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleEndLineTrigger/ObstacleCourseTriggerEvent
class CORDL_TYPE ObstacleEndLineTrigger_ObstacleCourseTriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c190fc, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::VRRig*  vrrig, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c1911c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c190e8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::VRRig*  vrrig) ;

static inline ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c18fe0, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleEndLineTrigger_ObstacleCourseTriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleEndLineTrigger_ObstacleCourseTriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleEndLineTrigger_ObstacleCourseTriggerEvent(ObstacleEndLineTrigger_ObstacleCourseTriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleEndLineTrigger_ObstacleCourseTriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleEndLineTrigger_ObstacleCourseTriggerEvent(ObstacleEndLineTrigger_ObstacleCourseTriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
