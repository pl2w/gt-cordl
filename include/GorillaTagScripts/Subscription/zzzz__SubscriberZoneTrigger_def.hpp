#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriberZoneTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SubscriberZoneTrigger)
namespace GorillaTagScripts::Subscription {
class SubscriberExclusiveZone;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class SubscriberZoneTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::SubscriberZoneTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::SubscriberZoneTrigger*, "GorillaTagScripts.Subscription", "SubscriberZoneTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.SubscriberZoneTrigger
class CORDL_TYPE SubscriberZoneTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isRestrictedZone, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRestrictedZone, put=__cordl_internal_set_isRestrictedZone)) bool  isRestrictedZone;

/// @brief Field parentZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentZone, put=__cordl_internal_set_parentZone)) ::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone>  parentZone;

static inline ::GorillaTagScripts::Subscription::SubscriberZoneTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5c0c400, size 0x19c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c0c59c, size 0x19c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_isRestrictedZone() const;

constexpr bool& __cordl_internal_get_isRestrictedZone() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone> const& __cordl_internal_get_parentZone() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone>& __cordl_internal_get_parentZone() ;

constexpr void __cordl_internal_set_isRestrictedZone(bool  value) ;

constexpr void __cordl_internal_set_parentZone(::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone>  value) ;

/// @brief Method .ctor, addr 0x5c0c738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriberZoneTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriberZoneTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriberZoneTrigger(SubscriberZoneTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriberZoneTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriberZoneTrigger(SubscriberZoneTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4092};

/// @brief Field parentZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone>  ___parentZone;

/// @brief Field isRestrictedZone, offset: 0x28, size: 0x1, def value: None
 bool  ___isRestrictedZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberZoneTrigger, ___parentZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberZoneTrigger, ___isRestrictedZone) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::SubscriberZoneTrigger) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
