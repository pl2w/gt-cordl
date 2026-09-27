#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolPurchaseStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolPurchaseStation)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
struct GRToolPurchaseStation_ToolEntry;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class IDCardScanner;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolPurchaseStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolPurchaseStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolPurchaseStation*, "", "GRToolPurchaseStation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolPurchaseStation
class CORDL_TYPE GRToolPurchaseStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ToolEntry = ::GlobalNamespace::GRToolPurchaseStation_ToolEntry;

 __declspec(property(get=get_ActiveEntryIndex)) int32_t  ActiveEntryIndex;

/// @brief Field PurchaseStationId, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PurchaseStationId, put=__cordl_internal_set_PurchaseStationId)) int32_t  PurchaseStationId;

/// @brief Field activeEntryIndex, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeEntryIndex, put=__cordl_internal_set_activeEntryIndex)) int32_t  activeEntryIndex;

/// @brief Field animNextToolIndex, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animNextToolIndex, put=__cordl_internal_set_animNextToolIndex)) int32_t  animNextToolIndex;

/// @brief Field animPrevToolIndex, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_animPrevToolIndex, put=__cordl_internal_set_animPrevToolIndex)) int32_t  animPrevToolIndex;

/// @brief Field animatingDeposit, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get_animatingDeposit, put=__cordl_internal_set_animatingDeposit)) bool  animatingDeposit;

/// @brief Field animatingSwap, offset 0x135, size 0x1 
 __declspec(property(get=__cordl_internal_get_animatingSwap, put=__cordl_internal_set_animatingSwap)) bool  animatingSwap;

/// @brief Field animationStartTime, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationStartTime, put=__cordl_internal_set_animationStartTime)) float_t  animationStartTime;

/// @brief Field audioSource, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field debugIgnoreToolCost, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugIgnoreToolCost, put=__cordl_internal_set_debugIgnoreToolCost)) bool  debugIgnoreToolCost;

/// @brief Field depositLidOpenEuler, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_depositLidOpenEuler, put=__cordl_internal_set_depositLidOpenEuler)) ::UnityEngine::Vector3  depositLidOpenEuler;

/// @brief Field depositLidOpenRot, offset 0x140, size 0x10 
 __declspec(property(get=__cordl_internal_get_depositLidOpenRot, put=__cordl_internal_set_depositLidOpenRot)) ::UnityEngine::Quaternion  depositLidOpenRot;

/// @brief Field depositLidTimingCurve, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositLidTimingCurve, put=__cordl_internal_set_depositLidTimingCurve)) ::UnityEngine::AnimationCurve*  depositLidTimingCurve;

/// @brief Field depositLidTransform, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositLidTransform, put=__cordl_internal_set_depositLidTransform)) ::UnityW<::UnityEngine::Transform>  depositLidTransform;

/// @brief Field depositTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositTransform, put=__cordl_internal_set_depositTransform)) ::UnityW<::UnityEngine::Transform>  depositTransform;

/// @brief Field displayItemCostText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayItemCostText, put=__cordl_internal_set_displayItemCostText)) ::UnityW<::TMPro::TMP_Text>  displayItemCostText;

/// @brief Field displayItemNameText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayItemNameText, put=__cordl_internal_set_displayItemNameText)) ::UnityW<::TMPro::TMP_Text>  displayItemNameText;

/// @brief Field displayTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayTransform, put=__cordl_internal_set_displayTransform)) ::UnityW<::UnityEngine::Transform>  displayTransform;

/// @brief Field displayedEntryIndex, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayedEntryIndex, put=__cordl_internal_set_displayedEntryIndex)) int32_t  displayedEntryIndex;

/// @brief Field grManager, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field idCardScanner, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_idCardScanner, put=__cordl_internal_set_idCardScanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  idCardScanner;

/// @brief Field nextItemAudio, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextItemAudio, put=__cordl_internal_set_nextItemAudio)) ::UnityW<::UnityEngine::AudioClip>  nextItemAudio;

/// @brief Field nextItemVolume, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextItemVolume, put=__cordl_internal_set_nextItemVolume)) float_t  nextItemVolume;

/// @brief Field nextToolAnimationTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextToolAnimationTime, put=__cordl_internal_set_nextToolAnimationTime)) float_t  nextToolAnimationTime;

/// @brief Field purchaseAudio, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseAudio, put=__cordl_internal_set_purchaseAudio)) ::UnityW<::UnityEngine::AudioClip>  purchaseAudio;

/// @brief Field purchaseFailedAudio, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseFailedAudio, put=__cordl_internal_set_purchaseFailedAudio)) ::UnityW<::UnityEngine::AudioClip>  purchaseFailedAudio;

/// @brief Field purchaseFailedVolume, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_purchaseFailedVolume, put=__cordl_internal_set_purchaseFailedVolume)) float_t  purchaseFailedVolume;

/// @brief Field purchaseVolume, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_purchaseVolume, put=__cordl_internal_set_purchaseVolume)) float_t  purchaseVolume;

/// @brief Field reactor, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field toolDepositAnimationTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_toolDepositAnimationTime, put=__cordl_internal_set_toolDepositAnimationTime)) float_t  toolDepositAnimationTime;

/// @brief Field toolDepositMotionCurveY, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolDepositMotionCurveY, put=__cordl_internal_set_toolDepositMotionCurveY)) ::UnityEngine::AnimationCurve*  toolDepositMotionCurveY;

/// @brief Field toolDepositMotionCurveZ, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolDepositMotionCurveZ, put=__cordl_internal_set_toolDepositMotionCurveZ)) ::UnityEngine::AnimationCurve*  toolDepositMotionCurveZ;

/// @brief Field toolDepositTimingCurve, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolDepositTimingCurve, put=__cordl_internal_set_toolDepositTimingCurve)) ::UnityEngine::AnimationCurve*  toolDepositTimingCurve;

/// @brief Field toolEntries, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolEntries, put=__cordl_internal_set_toolEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>*  toolEntries;

/// @brief Field toolEntryPosOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_toolEntryPosOffset, put=__cordl_internal_set_toolEntryPosOffset)) ::UnityEngine::Vector3  toolEntryPosOffset;

/// @brief Field toolEntryPosTimingCurve, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolEntryPosTimingCurve, put=__cordl_internal_set_toolEntryPosTimingCurve)) ::UnityEngine::AnimationCurve*  toolEntryPosTimingCurve;

/// @brief Field toolEntryRot, offset 0x150, size 0x10 
 __declspec(property(get=__cordl_internal_get_toolEntryRot, put=__cordl_internal_set_toolEntryRot)) ::UnityEngine::Quaternion  toolEntryRot;

/// @brief Field toolEntryRotDegrees, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_toolEntryRotDegrees, put=__cordl_internal_set_toolEntryRotDegrees)) float_t  toolEntryRotDegrees;

/// @brief Field toolEntryRotEuler, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_toolEntryRotEuler, put=__cordl_internal_set_toolEntryRotEuler)) ::UnityEngine::Vector3  toolEntryRotEuler;

/// @brief Field toolEntryRotTimingCurve, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolEntryRotTimingCurve, put=__cordl_internal_set_toolEntryRotTimingCurve)) ::UnityEngine::AnimationCurve*  toolEntryRotTimingCurve;

/// @brief Field toolExitPosOffset, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_toolExitPosOffset, put=__cordl_internal_set_toolExitPosOffset)) ::UnityEngine::Vector3  toolExitPosOffset;

/// @brief Field toolExitPosTimingCurve, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolExitPosTimingCurve, put=__cordl_internal_set_toolExitPosTimingCurve)) ::UnityEngine::AnimationCurve*  toolExitPosTimingCurve;

/// @brief Field toolExitRot, offset 0x160, size 0x10 
 __declspec(property(get=__cordl_internal_get_toolExitRot, put=__cordl_internal_set_toolExitRot)) ::UnityEngine::Quaternion  toolExitRot;

/// @brief Field toolExitRotEuler, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_toolExitRotEuler, put=__cordl_internal_set_toolExitRotEuler)) ::UnityEngine::Vector3  toolExitRotEuler;

/// @brief Field toolExitRotTimingCurve, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolExitRotTimingCurve, put=__cordl_internal_set_toolExitRotTimingCurve)) ::UnityEngine::AnimationCurve*  toolExitRotTimingCurve;

/// @brief Field toolSpawnLocation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolSpawnLocation, put=__cordl_internal_set_toolSpawnLocation)) ::UnityW<::UnityEngine::Transform>  toolSpawnLocation;

/// @brief Field vendingCoroutine, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_vendingCoroutine, put=__cordl_internal_set_vendingCoroutine)) ::UnityEngine::Coroutine*  vendingCoroutine;

/// @brief Method Awake, addr 0x58c5d78, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DebugPurchase, addr 0x58c55a0, size 0x254, virtual false, abstract: false, final false
inline void DebugPurchase() ;

/// @brief Method GetCurrentToolName, addr 0x58c5d10, size 0x68, virtual false, abstract: false, final false
inline ::StringW GetCurrentToolName() ;

/// @brief Method GetSpawnMarker, addr 0x58c5d08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnMarker() ;

/// @brief Method Init, addr 0x58c53b8, size 0x34, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactorManager*  grManager, ::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRToolPurchaseStation* New_ctor() ;

/// @brief Method OnPurchaseFailed, addr 0x58c5cc0, size 0x48, virtual false, abstract: false, final false
inline void OnPurchaseFailed() ;

/// @brief Method OnPurchaseSucceeded, addr 0x58c5848, size 0xa4, virtual false, abstract: false, final false
inline void OnPurchaseSucceeded() ;

/// @brief Method OnSelectionUpdate, addr 0x58c5b80, size 0x140, virtual false, abstract: false, final false
inline void OnSelectionUpdate(int32_t  newSelectedIndex) ;

/// @brief Method RequestPurchaseButton, addr 0x58c53ec, size 0xb4, virtual false, abstract: false, final false
inline void RequestPurchaseButton(int32_t  actorNumber) ;

/// @brief Method ShiftLeftAuthority, addr 0x58c5544, size 0x5c, virtual false, abstract: false, final false
inline void ShiftLeftAuthority() ;

/// @brief Method ShiftLeftButton, addr 0x58c54c4, size 0x24, virtual false, abstract: false, final false
inline void ShiftLeftButton() ;

/// @brief Method ShiftRightAuthority, addr 0x58c54e8, size 0x5c, virtual false, abstract: false, final false
inline void ShiftRightAuthority() ;

/// @brief Method ShiftRightButton, addr 0x58c54a0, size 0x24, virtual false, abstract: false, final false
inline void ShiftRightButton() ;

/// @brief Method TryPurchaseAuthority, addr 0x58c58ec, size 0x294, virtual false, abstract: false, final false
inline bool TryPurchaseAuthority(::GlobalNamespace::GRPlayer*  player, ::by_ref<int32_t>  itemCost) ;

/// @brief Method Update, addr 0x58c5e40, size 0x69c, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_PurchaseStationId() const;

constexpr int32_t& __cordl_internal_get_PurchaseStationId() ;

constexpr int32_t const& __cordl_internal_get_activeEntryIndex() const;

constexpr int32_t& __cordl_internal_get_activeEntryIndex() ;

constexpr int32_t const& __cordl_internal_get_animNextToolIndex() const;

constexpr int32_t& __cordl_internal_get_animNextToolIndex() ;

constexpr int32_t const& __cordl_internal_get_animPrevToolIndex() const;

constexpr int32_t& __cordl_internal_get_animPrevToolIndex() ;

constexpr bool const& __cordl_internal_get_animatingDeposit() const;

constexpr bool& __cordl_internal_get_animatingDeposit() ;

constexpr bool const& __cordl_internal_get_animatingSwap() const;

constexpr bool& __cordl_internal_get_animatingSwap() ;

constexpr float_t const& __cordl_internal_get_animationStartTime() const;

constexpr float_t& __cordl_internal_get_animationStartTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_debugIgnoreToolCost() const;

constexpr bool& __cordl_internal_get_debugIgnoreToolCost() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_depositLidOpenEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_depositLidOpenEuler() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_depositLidOpenRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_depositLidOpenRot() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_depositLidTimingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_depositLidTimingCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositLidTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositLidTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositTransform() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_displayItemCostText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_displayItemCostText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_displayItemNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_displayItemNameText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_displayTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_displayTransform() ;

constexpr int32_t const& __cordl_internal_get_displayedEntryIndex() const;

constexpr int32_t& __cordl_internal_get_displayedEntryIndex() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_idCardScanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_idCardScanner() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_nextItemAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_nextItemAudio() ;

constexpr float_t const& __cordl_internal_get_nextItemVolume() const;

constexpr float_t& __cordl_internal_get_nextItemVolume() ;

constexpr float_t const& __cordl_internal_get_nextToolAnimationTime() const;

constexpr float_t& __cordl_internal_get_nextToolAnimationTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_purchaseAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_purchaseAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_purchaseFailedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_purchaseFailedAudio() ;

constexpr float_t const& __cordl_internal_get_purchaseFailedVolume() const;

constexpr float_t& __cordl_internal_get_purchaseFailedVolume() ;

constexpr float_t const& __cordl_internal_get_purchaseVolume() const;

constexpr float_t& __cordl_internal_get_purchaseVolume() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr float_t const& __cordl_internal_get_toolDepositAnimationTime() const;

constexpr float_t& __cordl_internal_get_toolDepositAnimationTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolDepositMotionCurveY() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolDepositMotionCurveY() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolDepositMotionCurveZ() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolDepositMotionCurveZ() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolDepositTimingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolDepositTimingCurve() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>* const& __cordl_internal_get_toolEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>*& __cordl_internal_get_toolEntries() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_toolEntryPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_toolEntryPosOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolEntryPosTimingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolEntryPosTimingCurve() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_toolEntryRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_toolEntryRot() ;

constexpr float_t const& __cordl_internal_get_toolEntryRotDegrees() const;

constexpr float_t& __cordl_internal_get_toolEntryRotDegrees() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_toolEntryRotEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_toolEntryRotEuler() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolEntryRotTimingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolEntryRotTimingCurve() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_toolExitPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_toolExitPosOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolExitPosTimingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolExitPosTimingCurve() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_toolExitRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_toolExitRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_toolExitRotEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_toolExitRotEuler() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_toolExitRotTimingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_toolExitRotTimingCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_toolSpawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_toolSpawnLocation() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_vendingCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_vendingCoroutine() ;

constexpr void __cordl_internal_set_PurchaseStationId(int32_t  value) ;

constexpr void __cordl_internal_set_activeEntryIndex(int32_t  value) ;

constexpr void __cordl_internal_set_animNextToolIndex(int32_t  value) ;

constexpr void __cordl_internal_set_animPrevToolIndex(int32_t  value) ;

constexpr void __cordl_internal_set_animatingDeposit(bool  value) ;

constexpr void __cordl_internal_set_animatingSwap(bool  value) ;

constexpr void __cordl_internal_set_animationStartTime(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_debugIgnoreToolCost(bool  value) ;

constexpr void __cordl_internal_set_depositLidOpenEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_depositLidOpenRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_depositLidTimingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_depositLidTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_depositTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_displayItemCostText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_displayItemNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_displayTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_displayedEntryIndex(int32_t  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_idCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_nextItemAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_nextItemVolume(float_t  value) ;

constexpr void __cordl_internal_set_nextToolAnimationTime(float_t  value) ;

constexpr void __cordl_internal_set_purchaseAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_purchaseFailedAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_purchaseFailedVolume(float_t  value) ;

constexpr void __cordl_internal_set_purchaseVolume(float_t  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_toolDepositAnimationTime(float_t  value) ;

constexpr void __cordl_internal_set_toolDepositMotionCurveY(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolDepositMotionCurveZ(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolDepositTimingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolEntries(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>*  value) ;

constexpr void __cordl_internal_set_toolEntryPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_toolEntryPosTimingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolEntryRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_toolEntryRotDegrees(float_t  value) ;

constexpr void __cordl_internal_set_toolEntryRotEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_toolEntryRotTimingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolExitPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_toolExitPosTimingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolExitRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_toolExitRotEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_toolExitRotTimingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_toolSpawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_vendingCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x58c64dc, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveEntryIndex, addr 0x58c53b0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ActiveEntryIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolPurchaseStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolPurchaseStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolPurchaseStation(GRToolPurchaseStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolPurchaseStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolPurchaseStation(GRToolPurchaseStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2079};

/// [SerializeField]
/// @brief Field toolEntries, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>*  ___toolEntries;

/// [SerializeField]
/// @brief Field displayTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___displayTransform;

/// [SerializeField]
/// @brief Field depositTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositTransform;

/// [SerializeField]
/// @brief Field toolSpawnLocation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___toolSpawnLocation;

/// [SerializeField]
/// @brief Field displayItemNameText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___displayItemNameText;

/// [SerializeField]
/// @brief Field displayItemCostText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___displayItemCostText;

/// [SerializeField]
/// @brief Field nextToolAnimationTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___nextToolAnimationTime;

/// [SerializeField]
/// @brief Field toolDepositAnimationTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___toolDepositAnimationTime;

/// [SerializeField]
/// @brief Field toolEntryPosOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___toolEntryPosOffset;

/// [SerializeField]
/// @brief Field toolEntryRotEuler, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___toolEntryRotEuler;

/// [SerializeField]
/// @brief Field toolEntryRotDegrees, offset: 0x70, size: 0x4, def value: None
 float_t  ___toolEntryRotDegrees;

/// [SerializeField]
/// @brief Field toolExitPosOffset, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___toolExitPosOffset;

/// [SerializeField]
/// @brief Field toolExitRotEuler, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___toolExitRotEuler;

/// [SerializeField]
/// @brief Field toolEntryPosTimingCurve, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolEntryPosTimingCurve;

/// [SerializeField]
/// @brief Field toolEntryRotTimingCurve, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolEntryRotTimingCurve;

/// [SerializeField]
/// @brief Field toolExitPosTimingCurve, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolExitPosTimingCurve;

/// [SerializeField]
/// @brief Field toolExitRotTimingCurve, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolExitRotTimingCurve;

/// [SerializeField]
/// @brief Field toolDepositTimingCurve, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolDepositTimingCurve;

/// [SerializeField]
/// @brief Field toolDepositMotionCurveY, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolDepositMotionCurveY;

/// [SerializeField]
/// @brief Field toolDepositMotionCurveZ, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___toolDepositMotionCurveZ;

/// [SerializeField]
/// @brief Field depositLidTransform, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositLidTransform;

/// [SerializeField]
/// @brief Field depositLidOpenEuler, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___depositLidOpenEuler;

/// [SerializeField]
/// @brief Field depositLidTimingCurve, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___depositLidTimingCurve;

/// [SerializeField]
/// @brief Field audioSource, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field nextItemAudio, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___nextItemAudio;

/// [SerializeField]
/// @brief Field nextItemVolume, offset: 0xf8, size: 0x4, def value: None
 float_t  ___nextItemVolume;

/// [SerializeField]
/// @brief Field purchaseAudio, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___purchaseAudio;

/// [SerializeField]
/// @brief Field purchaseVolume, offset: 0x108, size: 0x4, def value: None
 float_t  ___purchaseVolume;

/// [SerializeField]
/// @brief Field purchaseFailedAudio, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___purchaseFailedAudio;

/// [SerializeField]
/// @brief Field purchaseFailedVolume, offset: 0x118, size: 0x4, def value: None
 float_t  ___purchaseFailedVolume;

/// [SerializeField]
/// @brief Field idCardScanner, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___idCardScanner;

/// @brief Field activeEntryIndex, offset: 0x128, size: 0x4, def value: None
 int32_t  ___activeEntryIndex;

/// @brief Field displayedEntryIndex, offset: 0x12c, size: 0x4, def value: None
 int32_t  ___displayedEntryIndex;

/// @brief Field animationStartTime, offset: 0x130, size: 0x4, def value: None
 float_t  ___animationStartTime;

/// @brief Field animatingDeposit, offset: 0x134, size: 0x1, def value: None
 bool  ___animatingDeposit;

/// @brief Field animatingSwap, offset: 0x135, size: 0x1, def value: None
 bool  ___animatingSwap;

/// @brief Field animPrevToolIndex, offset: 0x138, size: 0x4, def value: None
 int32_t  ___animPrevToolIndex;

/// @brief Field animNextToolIndex, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___animNextToolIndex;

/// @brief Field depositLidOpenRot, offset: 0x140, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___depositLidOpenRot;

/// @brief Field toolEntryRot, offset: 0x150, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___toolEntryRot;

/// @brief Field toolExitRot, offset: 0x160, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___toolExitRot;

/// @brief Field vendingCoroutine, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___vendingCoroutine;

/// @brief Field debugIgnoreToolCost, offset: 0x178, size: 0x1, def value: None
 bool  ___debugIgnoreToolCost;

/// [HideInInspector]
/// @brief Field PurchaseStationId, offset: 0x17c, size: 0x4, def value: None
 int32_t  ___PurchaseStationId;

/// @brief Field grManager, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// @brief Field reactor, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___displayTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___depositTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolSpawnLocation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___displayItemNameText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___displayItemCostText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___nextToolAnimationTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolDepositAnimationTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntryPosOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntryRotEuler) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntryRotDegrees) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolExitPosOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolExitRotEuler) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntryPosTimingCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntryRotTimingCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolExitPosTimingCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolExitRotTimingCurve) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolDepositTimingCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolDepositMotionCurveY) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolDepositMotionCurveZ) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___depositLidTransform) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___depositLidOpenEuler) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___depositLidTimingCurve) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___audioSource) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___nextItemAudio) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___nextItemVolume) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___purchaseAudio) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___purchaseVolume) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___purchaseFailedAudio) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___purchaseFailedVolume) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___idCardScanner) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___activeEntryIndex) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___displayedEntryIndex) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___animationStartTime) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___animatingDeposit) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___animatingSwap) == 0x135, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___animPrevToolIndex) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___animNextToolIndex) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___depositLidOpenRot) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolEntryRot) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___toolExitRot) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___vendingCoroutine) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___debugIgnoreToolCost) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___PurchaseStationId) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___grManager) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation, ___reactor) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolPurchaseStation) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
