#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/FreeCosmeticKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FreeCosmeticKiosk)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaNetworking {
class GorillaServer_ClaimItemResponse;
}
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk__InitializeCoroutine_d__17;
}
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk___c;
}
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk___c__DisplayClass18_0;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk;
}
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk__InitializeCoroutine_d__17;
}
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk___c;
}
namespace GorillaTagScripts::Subscription {
class FreeCosmeticKiosk___c__DisplayClass18_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::FreeCosmeticKiosk*);
MARK_REF_T(::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*);
MARK_REF_T(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*);
MARK_REF_T(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FreeCosmeticKiosk*, "GorillaTagScripts.Subscription", "FreeCosmeticKiosk");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17*, "GorillaTagScripts.Subscription", "FreeCosmeticKiosk/<InitializeCoroutine>d__17");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*, "GorillaTagScripts.Subscription", "FreeCosmeticKiosk/<>c");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0*, "GorillaTagScripts.Subscription", "FreeCosmeticKiosk/<>c__DisplayClass18_0");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, Photon.Pun.MonoBehaviourPun
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FreeCosmeticKiosk
class CORDL_TYPE FreeCosmeticKiosk : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using _InitializeCoroutine_d__17 = ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17;

using __c = ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c;

using __c__DisplayClass18_0 = ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0;

 __declspec(property(get=get_HasBeenClaimed)) bool  HasBeenClaimed;

/// @brief Field OnCosmeticRedeemed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCosmeticRedeemed, put=__cordl_internal_set_OnCosmeticRedeemed)) ::UnityEngine::Events::UnityEvent*  OnCosmeticRedeemed;

 __declspec(property(get=get_VimRequirementMet)) bool  VimRequirementMet;

/// @brief Field _alreadyClaimedText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__alreadyClaimedText, put=__cordl_internal_set__alreadyClaimedText)) ::StringW  _alreadyClaimedText;

/// @brief Field _claimLabel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__claimLabel, put=__cordl_internal_set__claimLabel)) ::UnityW<::TMPro::TMP_Text>  _claimLabel;

/// @brief Field _cosmeticItem, offset 0x70, size 0x98 
 __declspec(property(get=__cordl_internal_get__cosmeticItem, put=__cordl_internal_set__cosmeticItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  _cosmeticItem;

/// @brief Field _initialized, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _nameLabel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameLabel, put=__cordl_internal_set__nameLabel)) ::UnityW<::TMPro::TMP_Text>  _nameLabel;

/// @brief Field _playfabId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playfabId, put=__cordl_internal_set__playfabId)) ::StringW  _playfabId;

/// @brief Field _toBeClaimedText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__toBeClaimedText, put=__cordl_internal_set__toBeClaimedText)) ::StringW  _toBeClaimedText;

/// @brief Field _unclaimableText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__unclaimableText, put=__cordl_internal_set__unclaimableText)) ::StringW  _unclaimableText;

/// @brief Field _vimLogo, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__vimLogo, put=__cordl_internal_set__vimLogo)) ::UnityW<::UnityEngine::GameObject>  _vimLogo;

/// @brief Field _vimRequired, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__vimRequired, put=__cordl_internal_set__vimRequired)) bool  _vimRequired;

/// [PunRPC]
/// @brief Method ActivateClaimVFX, addr 0x5bf6f6c, size 0x1dc, virtual false, abstract: false, final false
inline void ActivateClaimVFX(::Photon::Pun::PhotonMessageInfo  info) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Subscription.FreeCosmeticKiosk::<InitializeCoroutine>d__17))]
/// @brief Method InitializeCoroutine, addr 0x5bf6630, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InitializeCoroutine() ;

static inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bf669c, size 0x1b4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bf6604, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHandScan, addr 0x5bf6878, size 0x248, virtual false, abstract: false, final false
inline void OnHandScan(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnSuccessfulRedeem, addr 0x5bf6ac8, size 0x224, virtual false, abstract: false, final false
inline void OnSuccessfulRedeem(::GorillaNetworking::GorillaServer_ClaimItemResponse*  response, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlayClaimFX, addr 0x5bf7148, size 0x14, virtual false, abstract: false, final false
inline void PlayClaimFX() ;

/// [ContextMenu("Trigger Celebration")]
/// @brief Method TestTriggerCelebration, addr 0x5bf6f08, size 0x64, virtual false, abstract: false, final false
inline void TestTriggerCelebration() ;

/// @brief Method TriggerCelebration, addr 0x5bf6cec, size 0x110, virtual false, abstract: false, final false
inline void TriggerCelebration(::GlobalNamespace::NetPlayer*  redeemingPlayer) ;

/// @brief Method UpdateState, addr 0x5bf6ef8, size 0x8, virtual false, abstract: false, final false
inline void UpdateState() ;

/// @brief Method UpdateState, addr 0x5bf6f00, size 0x8, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::NetPlayer*  _) ;

/// @brief Method UpdateState, addr 0x5bf6dfc, size 0xfc, virtual false, abstract: false, final false
inline void UpdateState(bool  cosmeticGranted) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnCosmeticRedeemed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnCosmeticRedeemed() ;

constexpr ::StringW const& __cordl_internal_get__alreadyClaimedText() const;

constexpr ::StringW& __cordl_internal_get__alreadyClaimedText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__claimLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__claimLabel() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get__cosmeticItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get__cosmeticItem() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__nameLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__nameLabel() ;

constexpr ::StringW const& __cordl_internal_get__playfabId() const;

constexpr ::StringW& __cordl_internal_get__playfabId() ;

constexpr ::StringW const& __cordl_internal_get__toBeClaimedText() const;

constexpr ::StringW& __cordl_internal_get__toBeClaimedText() ;

constexpr ::StringW const& __cordl_internal_get__unclaimableText() const;

constexpr ::StringW& __cordl_internal_get__unclaimableText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__vimLogo() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__vimLogo() ;

constexpr bool const& __cordl_internal_get__vimRequired() const;

constexpr bool& __cordl_internal_get__vimRequired() ;

constexpr void __cordl_internal_set_OnCosmeticRedeemed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__alreadyClaimedText(::StringW  value) ;

constexpr void __cordl_internal_set__claimLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__cosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__nameLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__playfabId(::StringW  value) ;

constexpr void __cordl_internal_set__toBeClaimedText(::StringW  value) ;

constexpr void __cordl_internal_set__unclaimableText(::StringW  value) ;

constexpr void __cordl_internal_set__vimLogo(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__vimRequired(bool  value) ;

/// @brief Method .ctor, addr 0x5bf715c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasBeenClaimed, addr 0x5bf6590, size 0x74, virtual false, abstract: false, final false
inline bool get_HasBeenClaimed() ;

/// @brief Method get_VimRequirementMet, addr 0x5bf6524, size 0x6c, virtual false, abstract: false, final false
inline bool get_VimRequirementMet() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeCosmeticKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeCosmeticKiosk(FreeCosmeticKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeCosmeticKiosk(FreeCosmeticKiosk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4089};

/// [SerializeField]
/// @brief Field _vimRequired, offset: 0x28, size: 0x1, def value: None
 bool  ____vimRequired;

/// [SerializeField]
/// @brief Field _playfabId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____playfabId;

/// [SerializeField]
/// @brief Field _toBeClaimedText, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____toBeClaimedText;

/// [SerializeField]
/// @brief Field _alreadyClaimedText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____alreadyClaimedText;

/// [SerializeField]
/// @brief Field _unclaimableText, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____unclaimableText;

/// [SerializeField]
/// @brief Field _claimLabel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____claimLabel;

/// [SerializeField]
/// @brief Field _nameLabel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____nameLabel;

/// [SerializeField]
/// @brief Field _vimLogo, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____vimLogo;

/// @brief Field OnCosmeticRedeemed, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnCosmeticRedeemed;

/// @brief Field _cosmeticItem, offset: 0x70, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ____cosmeticItem;

/// @brief Field _initialized, offset: 0x108, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____vimRequired) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____playfabId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____toBeClaimedText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____alreadyClaimedText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____unclaimableText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____claimLabel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____nameLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____vimLogo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ___OnCosmeticRedeemed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____cosmeticItem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk, ____initialized) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk) == 0x110, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FreeCosmeticKiosk/<InitializeCoroutine>d__17
class CORDL_TYPE FreeCosmeticKiosk__InitializeCoroutine_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bf7314, size 0x370, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bf7684, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bf768c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bf76c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bf7310, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bf6850, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeCosmeticKiosk__InitializeCoroutine_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk__InitializeCoroutine_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeCosmeticKiosk__InitializeCoroutine_d__17(FreeCosmeticKiosk__InitializeCoroutine_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk__InitializeCoroutine_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeCosmeticKiosk__InitializeCoroutine_d__17(FreeCosmeticKiosk__InitializeCoroutine_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4088};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk__InitializeCoroutine_d__17) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FreeCosmeticKiosk/<>c__DisplayClass18_0
class CORDL_TYPE FreeCosmeticKiosk___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  __4__this;

/// @brief Field player, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

static inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <OnHandScan>b__0, addr 0x5bf72f4, size 0x1c, virtual false, abstract: false, final false
inline void _OnHandScan_b__0(::GorillaNetworking::GorillaServer_ClaimItemResponse*  response) ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5bf6ac0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeCosmeticKiosk___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeCosmeticKiosk___c__DisplayClass18_0(FreeCosmeticKiosk___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeCosmeticKiosk___c__DisplayClass18_0(FreeCosmeticKiosk___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4087};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::FreeCosmeticKiosk>  _____4__this;

/// @brief Field player, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0, ___player) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c__DisplayClass18_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.FreeCosmeticKiosk/<>c
class CORDL_TYPE FreeCosmeticKiosk___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*  __9;

/// @brief Field <>9__18_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_1, put=setStaticF___9__18_1)) ::System::Action_1<::StringW>*  __9__18_1;

static inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c* New_ctor() ;

/// @brief Method <OnHandScan>b__18_1, addr 0x5bf727c, size 0x78, virtual false, abstract: false, final false
inline void _OnHandScan_b__18_1(::StringW  error) ;

/// @brief Method .ctor, addr 0x5bf7274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__18_1() ;

static inline void setStaticF___9(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c*  value) ;

static inline void setStaticF___9__18_1(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeCosmeticKiosk___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeCosmeticKiosk___c(FreeCosmeticKiosk___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeCosmeticKiosk___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeCosmeticKiosk___c(FreeCosmeticKiosk___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::Subscription::FreeCosmeticKiosk___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
