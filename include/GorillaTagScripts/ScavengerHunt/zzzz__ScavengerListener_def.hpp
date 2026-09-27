#pragma once
// IWYU pragma private; include "GorillaTagScripts/ScavengerHunt/ScavengerListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScavengerListener)
namespace GlobalNamespace {
struct ScavengerListener__OnEnable_d__8;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager_Hunt;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerListener;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerListener*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerListener*, "GorillaTagScripts.ScavengerHunt", "ScavengerListener");
// Dependencies TMPro.TMP_Text, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerListener
class CORDL_TYPE ScavengerListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnEnable_d__8 = ::GlobalNamespace::ScavengerListener__OnEnable_d__8;

/// @brief Field OnCollected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCollected, put=__cordl_internal_set_OnCollected)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnCollected;

/// @brief Field OnCollectedRealtime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCollectedRealtime, put=__cordl_internal_set_OnCollectedRealtime)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnCollectedRealtime;

/// @brief Field OnCompleted, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCompleted, put=__cordl_internal_set_OnCompleted)) ::UnityEngine::Events::UnityEvent*  OnCompleted;

/// @brief Field OnCompletedRealtime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCompletedRealtime, put=__cordl_internal_set_OnCompletedRealtime)) ::UnityEngine::Events::UnityEvent*  OnCompletedRealtime;

/// @brief Field displayHuntStatus, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayHuntStatus, put=__cordl_internal_set_displayHuntStatus)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  displayHuntStatus;

/// @brief Field displayHuntStatusHeading, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayHuntStatusHeading, put=__cordl_internal_set_displayHuntStatusHeading)) ::StringW  displayHuntStatusHeading;

/// @brief Field hunt, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_hunt, put=__cordl_internal_set_hunt)) ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*  hunt;

/// @brief Field huntName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntName, put=__cordl_internal_set_huntName)) ::StringW  huntName;

static inline ::GorillaTagScripts::ScavengerHunt::ScavengerListener* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c15d34, size 0x1f8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c15b3c, size 0x1f8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.ScavengerHunt.ScavengerListener::<OnEnable>d__8))]
/// @brief Method OnEnable, addr 0x5c153a0, size 0xa8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHuntCompleted, addr 0x5c15904, size 0x238, virtual false, abstract: false, final false
inline void OnHuntCompleted(::StringW  huntName, bool  firstCompletetion) ;

/// @brief Method OnTargetCollected, addr 0x5c15850, size 0xb4, virtual false, abstract: false, final false
inline void OnTargetCollected(::StringW  huntName, ::StringW  itemName, bool  firstCompletetion) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_OnCollected() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_OnCollected() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_OnCollectedRealtime() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_OnCollectedRealtime() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnCompleted() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnCompletedRealtime() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnCompletedRealtime() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_displayHuntStatus() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_displayHuntStatus() ;

constexpr ::StringW const& __cordl_internal_get_displayHuntStatusHeading() const;

constexpr ::StringW& __cordl_internal_get_displayHuntStatusHeading() ;

constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt* const& __cordl_internal_get_hunt() const;

constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*& __cordl_internal_get_hunt() ;

constexpr ::StringW const& __cordl_internal_get_huntName() const;

constexpr ::StringW& __cordl_internal_get_huntName() ;

constexpr void __cordl_internal_set_OnCollected(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnCollectedRealtime(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnCompleted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnCompletedRealtime(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_displayHuntStatus(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_displayHuntStatusHeading(::StringW  value) ;

constexpr void __cordl_internal_set_hunt(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*  value) ;

constexpr void __cordl_internal_set_huntName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c15f2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method setStatusText, addr 0x5c15448, size 0x408, virtual false, abstract: false, final false
inline void setStatusText() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerListener(ScavengerListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerListener(ScavengerListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4110};

/// [SerializeField]
/// @brief Field huntName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___huntName;

/// [SerializeField]
/// @brief Field OnCompleted, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnCompleted;

/// [SerializeField]
/// @brief Field OnCompletedRealtime, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnCompletedRealtime;

/// [SerializeField]
/// @brief Field OnCollected, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___OnCollected;

/// [SerializeField]
/// @brief Field OnCollectedRealtime, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___OnCollectedRealtime;

/// [SerializeField]
/// @brief Field displayHuntStatus, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___displayHuntStatus;

/// [SerializeField]
/// @brief Field displayHuntStatusHeading, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___displayHuntStatusHeading;

/// @brief Field hunt, offset: 0x58, size: 0x8, def value: None
 ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*  ___hunt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___huntName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___OnCompleted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___OnCompletedRealtime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___OnCollected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___OnCollectedRealtime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___displayHuntStatus) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___displayHuntStatusHeading) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerListener, ___hunt) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerListener) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
