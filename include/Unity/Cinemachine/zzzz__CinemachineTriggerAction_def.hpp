#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTriggerAction)
namespace GlobalNamespace {
struct CinemachineTriggerAction_ActionSettings;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision2D;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ActionSettings_CinemachineTriggerAction_TriggerEvent;
}
namespace Unity::Cinemachine {
class CinemachineTriggerAction;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*);
MARK_REF_T(::Unity::Cinemachine::CinemachineTriggerAction*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*, "Unity.Cinemachine", "CinemachineTriggerAction/ActionSettings/TriggerEvent");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTriggerAction*, "Unity.Cinemachine", "CinemachineTriggerAction");
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Trigger Action")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineTriggerAction.html")]
// Dependencies Unity.Cinemachine.CinemachineTriggerAction::ActionSettings, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTriggerAction
class CORDL_TYPE CinemachineTriggerAction : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActionSettings = ::GlobalNamespace::CinemachineTriggerAction_ActionSettings;

/// @brief Field LayerMask, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayerMask, put=__cordl_internal_set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

/// @brief Field OnObjectEnter, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_OnObjectEnter, put=__cordl_internal_set_OnObjectEnter)) ::GlobalNamespace::CinemachineTriggerAction_ActionSettings  OnObjectEnter;

/// @brief Field OnObjectExit, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_OnObjectExit, put=__cordl_internal_set_OnObjectExit)) ::GlobalNamespace::CinemachineTriggerAction_ActionSettings  OnObjectExit;

/// @brief Field Repeating, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_Repeating, put=__cordl_internal_set_Repeating)) bool  Repeating;

/// @brief Field SkipFirst, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SkipFirst, put=__cordl_internal_set_SkipFirst)) int32_t  SkipFirst;

/// @brief Field WithTag, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WithTag, put=__cordl_internal_set_WithTag)) ::StringW  WithTag;

/// @brief Field WithoutTag, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WithoutTag, put=__cordl_internal_set_WithoutTag)) ::StringW  WithoutTag;

/// @brief Field m_ActiveTriggerObjects, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveTriggerObjects, put=__cordl_internal_set_m_ActiveTriggerObjects)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  m_ActiveTriggerObjects;

/// @brief Method Filter, addr 0xaee08a4, size 0xa4, virtual false, abstract: false, final false
inline bool Filter(::UnityEngine::GameObject*  other) ;

/// @brief Method InternalDoTriggerEnter, addr 0xaee0948, size 0x98, virtual false, abstract: false, final false
inline void InternalDoTriggerEnter(::UnityEngine::GameObject*  other) ;

/// @brief Method InternalDoTriggerExit, addr 0xaee0e44, size 0xa8, virtual false, abstract: false, final false
inline void InternalDoTriggerExit(::UnityEngine::GameObject*  other) ;

static inline ::Unity::Cinemachine::CinemachineTriggerAction* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0xaee0f44, size 0x2c, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnCollisionEnter2D, addr 0xaee0ff4, size 0x2c, virtual false, abstract: false, final false
inline void OnCollisionEnter2D(::UnityEngine::Collision2D*  other) ;

/// @brief Method OnCollisionExit, addr 0xaee0f70, size 0x2c, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  other) ;

/// @brief Method OnCollisionExit2D, addr 0xaee1020, size 0x2c, virtual false, abstract: false, final false
inline void OnCollisionExit2D(::UnityEngine::Collision2D*  other) ;

/// @brief Method OnEnable, addr 0xaee104c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0xaee0eec, size 0x2c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerEnter2D, addr 0xaee0f9c, size 0x2c, virtual false, abstract: false, final false
inline void OnTriggerEnter2D(::UnityEngine::Collider2D*  other) ;

/// @brief Method OnTriggerExit, addr 0xaee0f18, size 0x2c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit2D, addr 0xaee0fc8, size 0x2c, virtual false, abstract: false, final false
inline void OnTriggerExit2D(::UnityEngine::Collider2D*  other) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_LayerMask() ;

constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings const& __cordl_internal_get_OnObjectEnter() const;

constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings& __cordl_internal_get_OnObjectEnter() ;

constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings const& __cordl_internal_get_OnObjectExit() const;

constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings& __cordl_internal_get_OnObjectExit() ;

constexpr bool const& __cordl_internal_get_Repeating() const;

constexpr bool& __cordl_internal_get_Repeating() ;

constexpr int32_t const& __cordl_internal_get_SkipFirst() const;

constexpr int32_t& __cordl_internal_get_SkipFirst() ;

constexpr ::StringW const& __cordl_internal_get_WithTag() const;

constexpr ::StringW& __cordl_internal_get_WithTag() ;

constexpr ::StringW const& __cordl_internal_get_WithoutTag() const;

constexpr ::StringW& __cordl_internal_get_WithoutTag() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_ActiveTriggerObjects() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_ActiveTriggerObjects() ;

constexpr void __cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_OnObjectEnter(::GlobalNamespace::CinemachineTriggerAction_ActionSettings  value) ;

constexpr void __cordl_internal_set_OnObjectExit(::GlobalNamespace::CinemachineTriggerAction_ActionSettings  value) ;

constexpr void __cordl_internal_set_Repeating(bool  value) ;

constexpr void __cordl_internal_set_SkipFirst(int32_t  value) ;

constexpr void __cordl_internal_set_WithTag(::StringW  value) ;

constexpr void __cordl_internal_set_WithoutTag(::StringW  value) ;

constexpr void __cordl_internal_set_m_ActiveTriggerObjects(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0xaee1050, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTriggerAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTriggerAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTriggerAction(CinemachineTriggerAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTriggerAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTriggerAction(CinemachineTriggerAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22465};

/// [Header("Trigger Object Filter")]
/// [Tooltip("Only triggers generated by objects on these layers will be considered")]
/// [FormerlySerializedAs("m_LayerMask")]
/// @brief Field LayerMask, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___LayerMask;

/// [TagField]
/// [Tooltip("If set, only triggers generated by objects with this tag will be considered")]
/// [FormerlySerializedAs("m_WithTag")]
/// @brief Field WithTag, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___WithTag;

/// [TagField]
/// [Tooltip("Triggers generated by objects with this tag will be ignored")]
/// [FormerlySerializedAs("m_WithoutTag")]
/// @brief Field WithoutTag, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___WithoutTag;

/// [NoSaveDuringPlay]
/// [Tooltip("Skip this many trigger entries before taking action")]
/// [FormerlySerializedAs("m_SkipFirst")]
/// @brief Field SkipFirst, offset: 0x38, size: 0x4, def value: None
 int32_t  ___SkipFirst;

/// [Tooltip("Repeat the action for all subsequent trigger entries")]
/// [FormerlySerializedAs("m_Repeating")]
/// @brief Field Repeating, offset: 0x3c, size: 0x1, def value: None
 bool  ___Repeating;

/// [Tooltip("What action to take when an eligible object enters the collider or trigger zone")]
/// [FormerlySerializedAs("m_OnObjectEnter")]
/// @brief Field OnObjectEnter, offset: 0x40, size: 0x28, def value: None
 ::GlobalNamespace::CinemachineTriggerAction_ActionSettings  ___OnObjectEnter;

/// [Tooltip("What action to take when an eligible object exits the collider or trigger zone")]
/// [FormerlySerializedAs("m_OnObjectExit")]
/// @brief Field OnObjectExit, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::CinemachineTriggerAction_ActionSettings  ___OnObjectExit;

/// @brief Field m_ActiveTriggerObjects, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ___m_ActiveTriggerObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___LayerMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___WithTag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___WithoutTag) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___SkipFirst) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___Repeating) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___OnObjectEnter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___OnObjectExit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTriggerAction, ___m_ActiveTriggerObjects) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTriggerAction) == 0x98, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies UnityEngine.Events.UnityEvent
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
class CORDL_TYPE ActionSettings_CinemachineTriggerAction_TriggerEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xaee1228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionSettings_CinemachineTriggerAction_TriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionSettings_CinemachineTriggerAction_TriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionSettings_CinemachineTriggerAction_TriggerEvent(ActionSettings_CinemachineTriggerAction_TriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionSettings_CinemachineTriggerAction_TriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionSettings_CinemachineTriggerAction_TriggerEvent(ActionSettings_CinemachineTriggerAction_TriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
