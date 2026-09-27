#pragma once
// IWYU pragma private; include "FXP/CosmeticItemPrefab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "FXP/zzzz__CosmeticItemPrefab_EDisplayMode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticItemPrefab)
namespace FXP {
class CosmeticItemPrefab__DoAttractTimer_d__84;
}
namespace FXP {
class CosmeticItemPrefab__DoPreviewTimer_d__81;
}
namespace FXP {
class CosmeticItemPrefab__PlayCountdownTimer_d__75;
}
namespace GlobalNamespace {
struct CosmeticItemPrefab_EDisplayMode;
}
namespace GlobalNamespace {
class CosmeticStand;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class HeadModel;
}
namespace GorillaNetworking::Store {
class StoreUpdateEvent;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
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
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace FXP {
class CosmeticItemPrefab;
}
namespace FXP {
class CosmeticItemPrefab__DoAttractTimer_d__84;
}
namespace FXP {
class CosmeticItemPrefab__DoPreviewTimer_d__81;
}
namespace FXP {
class CosmeticItemPrefab__PlayCountdownTimer_d__75;
}
// Write type traits
MARK_REF_T(::FXP::CosmeticItemPrefab*);
MARK_REF_T(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84*);
MARK_REF_T(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81*);
MARK_REF_T(::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75*);
DEFINE_IL2CPP_CLASS(::FXP::CosmeticItemPrefab*, "FXP", "CosmeticItemPrefab");
DEFINE_IL2CPP_CLASS(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84*, "FXP", "CosmeticItemPrefab/<DoAttractTimer>d__84");
DEFINE_IL2CPP_CLASS(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81*, "FXP", "CosmeticItemPrefab/<DoPreviewTimer>d__81");
DEFINE_IL2CPP_CLASS(::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75*, "FXP", "CosmeticItemPrefab/<PlayCountdownTimer>d__75");
// [Obsolete("CosmeticItemPrefab is deprecated, if we want to use this we need services to re-activate a webservice that was called gt-featureditem-dev.")]
// Dependencies FXP.CosmeticItemPrefab::EDisplayMode, System.DateTime, System.Guid, System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace FXP {
// Is value type: false
// CS Name: FXP.CosmeticItemPrefab
class CORDL_TYPE CosmeticItemPrefab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoAttractTimer_d__84 = ::FXP::CosmeticItemPrefab__DoAttractTimer_d__84;

using _DoPreviewTimer_d__81 = ::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81;

using _PlayCountdownTimer_d__75 = ::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75;

using EDisplayMode = ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode;

/// @brief Field AffectedByStoreUpdateEvents, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_AffectedByStoreUpdateEvents, put=__cordl_internal_set_AffectedByStoreUpdateEvents)) bool  AffectedByStoreUpdateEvents;

/// @brief Field CountdownSFX, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_CountdownSFX, put=__cordl_internal_set_CountdownSFX)) ::UnityW<::UnityEngine::AudioSource>  CountdownSFX;

/// @brief Field HeadModel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeadModel, put=__cordl_internal_set_HeadModel)) ::UnityW<::GlobalNamespace::HeadModel>  HeadModel;

/// @brief Field PedestalID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PedestalID, put=__cordl_internal_set_PedestalID)) ::StringW  PedestalID;

/// @brief Field clockTextMesh, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_clockTextMesh, put=__cordl_internal_set_clockTextMesh)) ::UnityW<::TMPro::TextMeshPro>  clockTextMesh;

/// @brief Field clockTextMeshIsValid, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get_clockTextMeshIsValid, put=__cordl_internal_set_clockTextMeshIsValid)) bool  clockTextMeshIsValid;

/// @brief Field coroutineAttractTimer, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineAttractTimer, put=__cordl_internal_set_coroutineAttractTimer)) ::System::Collections::IEnumerator*  coroutineAttractTimer;

/// @brief Field coroutinePreviewTimer, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutinePreviewTimer, put=__cordl_internal_set_coroutinePreviewTimer)) ::System::Collections::IEnumerator*  coroutinePreviewTimer;

/// @brief Field cosmeticMesh, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticMesh, put=__cordl_internal_set_cosmeticMesh)) ::UnityW<::UnityEngine::Mesh>  cosmeticMesh;

/// @brief Field cosmeticStand, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticStand, put=__cordl_internal_set_cosmeticStand)) ::UnityW<::GlobalNamespace::CosmeticStand>  cosmeticStand;

/// @brief Field countdownTimerCoRoutine, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownTimerCoRoutine, put=__cordl_internal_set_countdownTimerCoRoutine)) ::UnityEngine::Coroutine*  countdownTimerCoRoutine;

/// @brief Field currentDisplayMode, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDisplayMode, put=__cordl_internal_set_currentDisplayMode)) ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode  currentDisplayMode;

/// @brief Field currentUpdateEvent, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentUpdateEvent, put=__cordl_internal_set_currentUpdateEvent)) ::GorillaNetworking::Store::StoreUpdateEvent*  currentUpdateEvent;

/// @brief Field defaultCosmeticMaterial, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultCosmeticMaterial, put=__cordl_internal_set_defaultCosmeticMaterial)) ::UnityW<::UnityEngine::Material>  defaultCosmeticMaterial;

/// @brief Field defaultCosmeticMesh, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultCosmeticMesh, put=__cordl_internal_set_defaultCosmeticMesh)) ::UnityW<::UnityEngine::Mesh>  defaultCosmeticMesh;

/// @brief Field defaultCountdownTextTemplate, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultCountdownTextTemplate, put=__cordl_internal_set_defaultCountdownTextTemplate)) ::StringW  defaultCountdownTextTemplate;

/// @brief Field defaultHoursInAttractMode, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultHoursInAttractMode, put=__cordl_internal_set_defaultHoursInAttractMode)) int32_t  defaultHoursInAttractMode;

/// @brief Field defaultHoursInPreviewMode, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultHoursInPreviewMode, put=__cordl_internal_set_defaultHoursInPreviewMode)) int32_t  defaultHoursInPreviewMode;

/// @brief Field defaultItemText, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultItemText, put=__cordl_internal_set_defaultItemText)) ::StringW  defaultItemText;

/// @brief Field defaultMannequinMaterial, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMannequinMaterial, put=__cordl_internal_set_defaultMannequinMaterial)) ::UnityW<::UnityEngine::Material>  defaultMannequinMaterial;

/// @brief Field defaultMannequinMesh, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMannequinMesh, put=__cordl_internal_set_defaultMannequinMesh)) ::UnityW<::UnityEngine::Mesh>  defaultMannequinMesh;

/// @brief Field defaultPedestalMaterial, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultPedestalMaterial, put=__cordl_internal_set_defaultPedestalMaterial)) ::UnityW<::UnityEngine::Material>  defaultPedestalMaterial;

/// @brief Field defaultPedestalMesh, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultPedestalMesh, put=__cordl_internal_set_defaultPedestalMesh)) ::UnityW<::UnityEngine::Mesh>  defaultPedestalMesh;

/// @brief Field defaultSFXAttractMode, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSFXAttractMode, put=__cordl_internal_set_defaultSFXAttractMode)) ::UnityW<::UnityEngine::AudioClip>  defaultSFXAttractMode;

/// @brief Field defaultSFXPreviewMode, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSFXPreviewMode, put=__cordl_internal_set_defaultSFXPreviewMode)) ::UnityW<::UnityEngine::AudioClip>  defaultSFXPreviewMode;

/// @brief Field defaultSFXPurchaseMode, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSFXPurchaseMode, put=__cordl_internal_set_defaultSFXPurchaseMode)) ::UnityW<::UnityEngine::AudioClip>  defaultSFXPurchaseMode;

/// @brief Field goAttractMode, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_goAttractMode, put=__cordl_internal_set_goAttractMode)) ::UnityW<::UnityEngine::GameObject>  goAttractMode;

/// @brief Field goAttractModeSFX, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_goAttractModeSFX, put=__cordl_internal_set_goAttractModeSFX)) ::UnityW<::UnityEngine::AudioSource>  goAttractModeSFX;

/// @brief Field goAttractModeVFX, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_goAttractModeVFX, put=__cordl_internal_set_goAttractModeVFX)) ::UnityW<::UnityEngine::ParticleSystem>  goAttractModeVFX;

/// @brief Field goClock, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_goClock, put=__cordl_internal_set_goClock)) ::UnityW<::UnityEngine::GameObject>  goClock;

/// @brief Field goCosmeticItem, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_goCosmeticItem, put=__cordl_internal_set_goCosmeticItem)) ::UnityW<::UnityEngine::GameObject>  goCosmeticItem;

/// @brief Field goCosmeticItemGameObject, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_goCosmeticItemGameObject, put=__cordl_internal_set_goCosmeticItemGameObject)) ::UnityW<::UnityEngine::GameObject>  goCosmeticItemGameObject;

/// @brief Field goCosmeticItemMeshAtlas, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_goCosmeticItemMeshAtlas, put=__cordl_internal_set_goCosmeticItemMeshAtlas)) ::UnityW<::UnityEngine::GameObject>  goCosmeticItemMeshAtlas;

/// @brief Field goCosmeticItemNameplate, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_goCosmeticItemNameplate, put=__cordl_internal_set_goCosmeticItemNameplate)) ::UnityW<::UnityEngine::GameObject>  goCosmeticItemNameplate;

/// @brief Field goMannequin, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_goMannequin, put=__cordl_internal_set_goMannequin)) ::UnityW<::UnityEngine::GameObject>  goMannequin;

/// @brief Field goPedestal, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_goPedestal, put=__cordl_internal_set_goPedestal)) ::UnityW<::UnityEngine::GameObject>  goPedestal;

/// @brief Field goPreviewMode, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_goPreviewMode, put=__cordl_internal_set_goPreviewMode)) ::UnityW<::UnityEngine::GameObject>  goPreviewMode;

/// @brief Field goPreviewModeSFX, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_goPreviewModeSFX, put=__cordl_internal_set_goPreviewModeSFX)) ::UnityW<::UnityEngine::AudioSource>  goPreviewModeSFX;

/// @brief Field goPurchaseMode, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_goPurchaseMode, put=__cordl_internal_set_goPurchaseMode)) ::UnityW<::UnityEngine::GameObject>  goPurchaseMode;

/// @brief Field goPurchaseModeSFX, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_goPurchaseModeSFX, put=__cordl_internal_set_goPurchaseModeSFX)) ::UnityW<::UnityEngine::AudioSource>  goPurchaseModeSFX;

/// @brief Field goPurchaseModeVFX, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_goPurchaseModeVFX, put=__cordl_internal_set_goPurchaseModeVFX)) ::UnityW<::UnityEngine::ParticleSystem>  goPurchaseModeVFX;

/// @brief Field hoursInAttractMode, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_hoursInAttractMode, put=__cordl_internal_set_hoursInAttractMode)) ::System::Nullable_1<int32_t>  hoursInAttractMode;

/// @brief Field hoursInPreviewMode, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_hoursInPreviewMode, put=__cordl_internal_set_hoursInPreviewMode)) ::System::Nullable_1<int32_t>  hoursInPreviewMode;

/// @brief Field isValid, offset 0x17c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isValid, put=__cordl_internal_set_isValid)) bool  isValid;

/// @brief Field itemGUID, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_itemGUID, put=__cordl_internal_set_itemGUID)) ::System::Nullable_1<::System::Guid>  itemGUID;

/// @brief Field itemID, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemID, put=__cordl_internal_set_itemID)) ::StringW  itemID;

/// @brief Field itemName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemName, put=__cordl_internal_set_itemName)) ::StringW  itemName;

/// @brief Field itemSocket, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemSocket, put=__cordl_internal_set_itemSocket)) int32_t  itemSocket;

/// @brief Field lastUpdated, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdated, put=__cordl_internal_set_lastUpdated)) float_t  lastUpdated;

/// @brief Field mannequinMesh, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_mannequinMesh, put=__cordl_internal_set_mannequinMesh)) ::UnityW<::UnityEngine::Mesh>  mannequinMesh;

/// @brief Field oldItemID, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_oldItemID, put=__cordl_internal_set_oldItemID)) ::StringW  oldItemID;

/// @brief Field pedestalMesh, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_pedestalMesh, put=__cordl_internal_set_pedestalMesh)) ::UnityW<::UnityEngine::Mesh>  pedestalMesh;

/// @brief Field sfxAttractMode, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfxAttractMode, put=__cordl_internal_set_sfxAttractMode)) ::UnityW<::UnityEngine::AudioClip>  sfxAttractMode;

/// @brief Field sfxPreviewMode, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfxPreviewMode, put=__cordl_internal_set_sfxPreviewMode)) ::UnityW<::UnityEngine::AudioClip>  sfxPreviewMode;

/// @brief Field sfxPurchaseMode, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfxPurchaseMode, put=__cordl_internal_set_sfxPurchaseMode)) ::UnityW<::UnityEngine::AudioClip>  sfxPurchaseMode;

/// @brief Field sockets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sockets, put=__cordl_internal_set_sockets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  sockets;

/// @brief Field startTime, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) ::System::DateTime  startTime;

/// @brief Field updateClock, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateClock, put=__cordl_internal_set_updateClock)) float_t  updateClock;

/// @brief Field vfxAttractMode, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_vfxAttractMode, put=__cordl_internal_set_vfxAttractMode)) ::UnityW<::UnityEngine::ParticleSystem>  vfxAttractMode;

/// @brief Field vfxPreviewMode, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_vfxPreviewMode, put=__cordl_internal_set_vfxPreviewMode)) ::UnityW<::UnityEngine::ParticleSystem>  vfxPreviewMode;

/// @brief Field vfxPurchaseMode, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_vfxPurchaseMode, put=__cordl_internal_set_vfxPurchaseMode)) ::UnityW<::UnityEngine::ParticleSystem>  vfxPurchaseMode;

/// @brief Method Awake, addr 0x5c4920c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearCosmeticAtlas, addr 0x5c4a67c, size 0xa0, virtual false, abstract: false, final false
inline void ClearCosmeticAtlas() ;

/// @brief Method ClearCosmeticMesh, addr 0x5c4a620, size 0x5c, virtual false, abstract: false, final false
inline void ClearCosmeticMesh() ;

/// [IteratorStateMachine(typeof(FXP.CosmeticItemPrefab::<DoAttractTimer>d__84))]
/// @brief Method DoAttractTimer, addr 0x5c4ad28, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoAttractTimer(::System::DateTime  ReleaseTime) ;

/// [IteratorStateMachine(typeof(FXP.CosmeticItemPrefab::<DoPreviewTimer>d__81))]
/// @brief Method DoPreviewTimer, addr 0x5c4ac84, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoPreviewTimer(::System::DateTime  ReleaseTime) ;

/// @brief Method JonsAwakeCode, addr 0x5c49210, size 0x424, virtual false, abstract: false, final false
inline void JonsAwakeCode() ;

static inline ::FXP::CosmeticItemPrefab* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c49634, size 0xdc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c4976c, size 0x274, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(FXP.CosmeticItemPrefab::<PlayCountdownTimer>d__75))]
/// @brief Method PlayCountdownTimer, addr 0x5c4a9a4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayCountdownTimer() ;

/// @brief Method PlaySFX, addr 0x5c4aa38, size 0x158, virtual false, abstract: false, final false
inline void PlaySFX() ;

/// @brief Method SetCosmeticItemFromCosmeticController, addr 0x5c4a71c, size 0xc4, virtual false, abstract: false, final false
inline void SetCosmeticItemFromCosmeticController(::GlobalNamespace::CosmeticsController_CosmeticItem  item) ;

/// @brief Method SetCosmeticItemProperties, addr 0x5c4ab90, size 0xf4, virtual false, abstract: false, final false
inline void SetCosmeticItemProperties(::StringW  WhichGUID, ::StringW  Name, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  SocketsList, int32_t  Socket, ::StringW  PedestalMesh, ::StringW  MannequinMesh) ;

/// @brief Method SetCosmeticStand, addr 0x5c4a7e0, size 0x88, virtual false, abstract: false, final false
inline void SetCosmeticStand() ;

/// @brief Method SetDefaultProperties, addr 0x5c4a488, size 0x198, virtual false, abstract: false, final false
inline void SetDefaultProperties() ;

/// @brief Method SetStoreUpdateEvent, addr 0x5c4a868, size 0x13c, virtual false, abstract: false, final false
inline void SetStoreUpdateEvent(::GorillaNetworking::Store::StoreUpdateEvent*  storeUpdateEvent, bool  playFX) ;

/// @brief Method StartAttractTimer, addr 0x5c4a1e4, size 0x158, virtual false, abstract: false, final false
inline void StartAttractTimer() ;

/// @brief Method StartPreviewTimer, addr 0x5c4a08c, size 0x158, virtual false, abstract: false, final false
inline void StartPreviewTimer() ;

/// @brief Method StopAttractTimer, addr 0x5c49fe0, size 0xac, virtual false, abstract: false, final false
inline void StopAttractTimer() ;

/// @brief Method StopCountdownCoroutine, addr 0x5c49710, size 0x5c, virtual false, abstract: false, final false
inline void StopCountdownCoroutine() ;

/// @brief Method StopPreviewTimer, addr 0x5c49f4c, size 0x94, virtual false, abstract: false, final false
inline void StopPreviewTimer() ;

/// @brief Method SwitchDisplayMode, addr 0x5c499e0, size 0x56c, virtual false, abstract: false, final false
inline void SwitchDisplayMode(::GlobalNamespace::CosmeticItemPrefab_EDisplayMode  NewDisplayMode) ;

/// @brief Method Update, addr 0x5c4a33c, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateClock, addr 0x5c4a380, size 0x108, virtual false, abstract: false, final false
inline void UpdateClock() ;

constexpr bool const& __cordl_internal_get_AffectedByStoreUpdateEvents() const;

constexpr bool& __cordl_internal_get_AffectedByStoreUpdateEvents() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_CountdownSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_CountdownSFX() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_HeadModel() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_HeadModel() ;

constexpr ::StringW const& __cordl_internal_get_PedestalID() const;

constexpr ::StringW& __cordl_internal_get_PedestalID() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_clockTextMesh() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_clockTextMesh() ;

constexpr bool const& __cordl_internal_get_clockTextMeshIsValid() const;

constexpr bool& __cordl_internal_get_clockTextMeshIsValid() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_coroutineAttractTimer() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_coroutineAttractTimer() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_coroutinePreviewTimer() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_coroutinePreviewTimer() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_cosmeticMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_cosmeticMesh() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticStand> const& __cordl_internal_get_cosmeticStand() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticStand>& __cordl_internal_get_cosmeticStand() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_countdownTimerCoRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_countdownTimerCoRoutine() ;

constexpr ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode const& __cordl_internal_get_currentDisplayMode() const;

constexpr ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode& __cordl_internal_get_currentDisplayMode() ;

constexpr ::GorillaNetworking::Store::StoreUpdateEvent* const& __cordl_internal_get_currentUpdateEvent() const;

constexpr ::GorillaNetworking::Store::StoreUpdateEvent*& __cordl_internal_get_currentUpdateEvent() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultCosmeticMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultCosmeticMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_defaultCosmeticMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_defaultCosmeticMesh() ;

constexpr ::StringW const& __cordl_internal_get_defaultCountdownTextTemplate() const;

constexpr ::StringW& __cordl_internal_get_defaultCountdownTextTemplate() ;

constexpr int32_t const& __cordl_internal_get_defaultHoursInAttractMode() const;

constexpr int32_t& __cordl_internal_get_defaultHoursInAttractMode() ;

constexpr int32_t const& __cordl_internal_get_defaultHoursInPreviewMode() const;

constexpr int32_t& __cordl_internal_get_defaultHoursInPreviewMode() ;

constexpr ::StringW const& __cordl_internal_get_defaultItemText() const;

constexpr ::StringW& __cordl_internal_get_defaultItemText() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMannequinMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMannequinMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_defaultMannequinMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_defaultMannequinMesh() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultPedestalMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultPedestalMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_defaultPedestalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_defaultPedestalMesh() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_defaultSFXAttractMode() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_defaultSFXAttractMode() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_defaultSFXPreviewMode() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_defaultSFXPreviewMode() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_defaultSFXPurchaseMode() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_defaultSFXPurchaseMode() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goAttractMode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goAttractMode() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_goAttractModeSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_goAttractModeSFX() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_goAttractModeVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_goAttractModeVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goClock() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goClock() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goCosmeticItem() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goCosmeticItem() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goCosmeticItemGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goCosmeticItemGameObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goCosmeticItemMeshAtlas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goCosmeticItemMeshAtlas() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goCosmeticItemNameplate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goCosmeticItemNameplate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goMannequin() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goMannequin() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goPedestal() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goPedestal() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goPreviewMode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goPreviewMode() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_goPreviewModeSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_goPreviewModeSFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_goPurchaseMode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_goPurchaseMode() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_goPurchaseModeSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_goPurchaseModeSFX() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_goPurchaseModeVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_goPurchaseModeVFX() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_hoursInAttractMode() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_hoursInAttractMode() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_hoursInPreviewMode() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_hoursInPreviewMode() ;

constexpr bool const& __cordl_internal_get_isValid() const;

constexpr bool& __cordl_internal_get_isValid() ;

constexpr ::System::Nullable_1<::System::Guid> const& __cordl_internal_get_itemGUID() const;

constexpr ::System::Nullable_1<::System::Guid>& __cordl_internal_get_itemGUID() ;

constexpr ::StringW const& __cordl_internal_get_itemID() const;

constexpr ::StringW& __cordl_internal_get_itemID() ;

constexpr ::StringW const& __cordl_internal_get_itemName() const;

constexpr ::StringW& __cordl_internal_get_itemName() ;

constexpr int32_t const& __cordl_internal_get_itemSocket() const;

constexpr int32_t& __cordl_internal_get_itemSocket() ;

constexpr float_t const& __cordl_internal_get_lastUpdated() const;

constexpr float_t& __cordl_internal_get_lastUpdated() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mannequinMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mannequinMesh() ;

constexpr ::StringW const& __cordl_internal_get_oldItemID() const;

constexpr ::StringW& __cordl_internal_get_oldItemID() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_pedestalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_pedestalMesh() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_sfxAttractMode() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_sfxAttractMode() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_sfxPreviewMode() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_sfxPreviewMode() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_sfxPurchaseMode() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_sfxPurchaseMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_sockets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_sockets() ;

constexpr ::System::DateTime const& __cordl_internal_get_startTime() const;

constexpr ::System::DateTime& __cordl_internal_get_startTime() ;

constexpr float_t const& __cordl_internal_get_updateClock() const;

constexpr float_t& __cordl_internal_get_updateClock() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_vfxAttractMode() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_vfxAttractMode() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_vfxPreviewMode() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_vfxPreviewMode() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_vfxPurchaseMode() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_vfxPurchaseMode() ;

constexpr void __cordl_internal_set_AffectedByStoreUpdateEvents(bool  value) ;

constexpr void __cordl_internal_set_CountdownSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_HeadModel(::UnityW<::GlobalNamespace::HeadModel>  value) ;

constexpr void __cordl_internal_set_PedestalID(::StringW  value) ;

constexpr void __cordl_internal_set_clockTextMesh(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_clockTextMeshIsValid(bool  value) ;

constexpr void __cordl_internal_set_coroutineAttractTimer(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_coroutinePreviewTimer(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_cosmeticMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_cosmeticStand(::UnityW<::GlobalNamespace::CosmeticStand>  value) ;

constexpr void __cordl_internal_set_countdownTimerCoRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_currentDisplayMode(::GlobalNamespace::CosmeticItemPrefab_EDisplayMode  value) ;

constexpr void __cordl_internal_set_currentUpdateEvent(::GorillaNetworking::Store::StoreUpdateEvent*  value) ;

constexpr void __cordl_internal_set_defaultCosmeticMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultCosmeticMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_defaultCountdownTextTemplate(::StringW  value) ;

constexpr void __cordl_internal_set_defaultHoursInAttractMode(int32_t  value) ;

constexpr void __cordl_internal_set_defaultHoursInPreviewMode(int32_t  value) ;

constexpr void __cordl_internal_set_defaultItemText(::StringW  value) ;

constexpr void __cordl_internal_set_defaultMannequinMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultMannequinMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_defaultPedestalMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultPedestalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_defaultSFXAttractMode(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_defaultSFXPreviewMode(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_defaultSFXPurchaseMode(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_goAttractMode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goAttractModeSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_goAttractModeVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_goClock(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goCosmeticItem(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goCosmeticItemGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goCosmeticItemMeshAtlas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goCosmeticItemNameplate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goMannequin(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goPedestal(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goPreviewMode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goPreviewModeSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_goPurchaseMode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_goPurchaseModeSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_goPurchaseModeVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_hoursInAttractMode(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_hoursInPreviewMode(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_isValid(bool  value) ;

constexpr void __cordl_internal_set_itemGUID(::System::Nullable_1<::System::Guid>  value) ;

constexpr void __cordl_internal_set_itemID(::StringW  value) ;

constexpr void __cordl_internal_set_itemName(::StringW  value) ;

constexpr void __cordl_internal_set_itemSocket(int32_t  value) ;

constexpr void __cordl_internal_set_lastUpdated(float_t  value) ;

constexpr void __cordl_internal_set_mannequinMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_oldItemID(::StringW  value) ;

constexpr void __cordl_internal_set_pedestalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_sfxAttractMode(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_sfxPreviewMode(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_sfxPurchaseMode(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_sockets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_startTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_updateClock(float_t  value) ;

constexpr void __cordl_internal_set_vfxAttractMode(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_vfxPreviewMode(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_vfxPurchaseMode(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5c4adcc, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticItemPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticItemPrefab(CosmeticItemPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticItemPrefab(CosmeticItemPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4234};

/// @brief Field PedestalID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PedestalID;

/// @brief Field HeadModel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___HeadModel;

/// @brief Field AffectedByStoreUpdateEvents, offset: 0x30, size: 0x1, def value: None
 bool  ___AffectedByStoreUpdateEvents;

/// [SerializeField]
/// @brief Field itemGUID, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::Guid>  ___itemGUID;

/// [SerializeField]
/// @brief Field itemName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___itemName;

/// [SerializeField]
/// @brief Field sockets, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___sockets;

/// [SerializeField]
/// @brief Field itemSocket, offset: 0x58, size: 0x4, def value: None
 int32_t  ___itemSocket;

/// [SerializeField]
/// @brief Field hoursInPreviewMode, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___hoursInPreviewMode;

/// [SerializeField]
/// @brief Field hoursInAttractMode, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___hoursInAttractMode;

/// [SerializeField]
/// @brief Field pedestalMesh, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___pedestalMesh;

/// [SerializeField]
/// @brief Field mannequinMesh, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mannequinMesh;

/// [SerializeField]
/// @brief Field cosmeticMesh, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___cosmeticMesh;

/// [SerializeField]
/// @brief Field sfxPreviewMode, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___sfxPreviewMode;

/// [SerializeField]
/// @brief Field sfxAttractMode, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___sfxAttractMode;

/// [SerializeField]
/// @brief Field sfxPurchaseMode, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___sfxPurchaseMode;

/// [SerializeField]
/// @brief Field vfxPreviewMode, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___vfxPreviewMode;

/// [SerializeField]
/// @brief Field vfxAttractMode, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___vfxAttractMode;

/// [SerializeField]
/// @brief Field vfxPurchaseMode, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___vfxPurchaseMode;

/// [SerializeField]
/// @brief Field goPedestal, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goPedestal;

/// [SerializeField]
/// @brief Field goMannequin, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goMannequin;

/// [SerializeField]
/// @brief Field goCosmeticItem, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goCosmeticItem;

/// [SerializeField]
/// @brief Field goCosmeticItemGameObject, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goCosmeticItemGameObject;

/// [SerializeField]
/// @brief Field goCosmeticItemNameplate, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goCosmeticItemNameplate;

/// [SerializeField]
/// @brief Field goClock, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goClock;

/// [SerializeField]
/// @brief Field goPreviewMode, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goPreviewMode;

/// [SerializeField]
/// @brief Field goAttractMode, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goAttractMode;

/// [SerializeField]
/// @brief Field goPurchaseMode, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goPurchaseMode;

/// [SerializeField]
/// @brief Field defaultPedestalMesh, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___defaultPedestalMesh;

/// [SerializeField]
/// @brief Field defaultPedestalMaterial, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultPedestalMaterial;

/// [SerializeField]
/// @brief Field defaultMannequinMesh, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___defaultMannequinMesh;

/// [SerializeField]
/// @brief Field defaultMannequinMaterial, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMannequinMaterial;

/// [SerializeField]
/// @brief Field defaultCosmeticMesh, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___defaultCosmeticMesh;

/// [SerializeField]
/// @brief Field defaultCosmeticMaterial, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultCosmeticMaterial;

/// [SerializeField]
/// @brief Field defaultItemText, offset: 0x140, size: 0x8, def value: None
 ::StringW  ___defaultItemText;

/// [SerializeField]
/// @brief Field defaultHoursInPreviewMode, offset: 0x148, size: 0x4, def value: None
 int32_t  ___defaultHoursInPreviewMode;

/// [SerializeField]
/// @brief Field defaultHoursInAttractMode, offset: 0x14c, size: 0x4, def value: None
 int32_t  ___defaultHoursInAttractMode;

/// [SerializeField]
/// @brief Field defaultSFXPreviewMode, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___defaultSFXPreviewMode;

/// [SerializeField]
/// @brief Field defaultSFXAttractMode, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___defaultSFXAttractMode;

/// [SerializeField]
/// @brief Field defaultSFXPurchaseMode, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___defaultSFXPurchaseMode;

/// @brief Field goCosmeticItemMeshAtlas, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___goCosmeticItemMeshAtlas;

/// @brief Field CountdownSFX, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___CountdownSFX;

/// @brief Field currentDisplayMode, offset: 0x178, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticItemPrefab_EDisplayMode  ___currentDisplayMode;

/// @brief Field isValid, offset: 0x17c, size: 0x1, def value: None
 bool  ___isValid;

/// [Nullable(2)]
/// @brief Field goPreviewModeSFX, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___goPreviewModeSFX;

/// [Nullable(2)]
/// @brief Field goAttractModeSFX, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___goAttractModeSFX;

/// [Nullable(2)]
/// @brief Field goPurchaseModeSFX, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___goPurchaseModeSFX;

/// [Nullable(2)]
/// @brief Field goAttractModeVFX, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___goAttractModeVFX;

/// [Nullable(2)]
/// @brief Field goPurchaseModeVFX, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___goPurchaseModeVFX;

/// @brief Field coroutinePreviewTimer, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___coroutinePreviewTimer;

/// @brief Field coroutineAttractTimer, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___coroutineAttractTimer;

/// @brief Field startTime, offset: 0x1b8, size: 0x8, def value: None
 ::System::DateTime  ___startTime;

/// @brief Field clockTextMesh, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___clockTextMesh;

/// @brief Field clockTextMeshIsValid, offset: 0x1c8, size: 0x1, def value: None
 bool  ___clockTextMeshIsValid;

/// @brief Field currentUpdateEvent, offset: 0x1d0, size: 0x8, def value: None
 ::GorillaNetworking::Store::StoreUpdateEvent*  ___currentUpdateEvent;

/// @brief Field defaultCountdownTextTemplate, offset: 0x1d8, size: 0x8, def value: None
 ::StringW  ___defaultCountdownTextTemplate;

/// @brief Field cosmeticStand, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticStand>  ___cosmeticStand;

/// @brief Field itemID, offset: 0x1e8, size: 0x8, def value: None
 ::StringW  ___itemID;

/// @brief Field oldItemID, offset: 0x1f0, size: 0x8, def value: None
 ::StringW  ___oldItemID;

/// @brief Field countdownTimerCoRoutine, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___countdownTimerCoRoutine;

/// @brief Size padding 0x1f8 - 0x208 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field updateClock, offset: 0x200, size: 0x4, def value: None
 float_t  ___updateClock;

/// @brief Field lastUpdated, offset: 0x204, size: 0x4, def value: None
 float_t  ___lastUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FXP::CosmeticItemPrefab, ___PedestalID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___HeadModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___AffectedByStoreUpdateEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___itemGUID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___itemName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___sockets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___itemSocket) == 0x58, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___hoursInPreviewMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___hoursInAttractMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___pedestalMesh) == 0x80, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___mannequinMesh) == 0x88, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___cosmeticMesh) == 0x90, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___sfxPreviewMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___sfxAttractMode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___sfxPurchaseMode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___vfxPreviewMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___vfxAttractMode) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___vfxPurchaseMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goPedestal) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goMannequin) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goCosmeticItem) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goCosmeticItemGameObject) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goCosmeticItemNameplate) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goClock) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goPreviewMode) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goAttractMode) == 0x100, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goPurchaseMode) == 0x108, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultPedestalMesh) == 0x110, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultPedestalMaterial) == 0x118, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultMannequinMesh) == 0x120, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultMannequinMaterial) == 0x128, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultCosmeticMesh) == 0x130, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultCosmeticMaterial) == 0x138, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultItemText) == 0x140, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultHoursInPreviewMode) == 0x148, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultHoursInAttractMode) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultSFXPreviewMode) == 0x150, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultSFXAttractMode) == 0x158, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultSFXPurchaseMode) == 0x160, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goCosmeticItemMeshAtlas) == 0x168, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___CountdownSFX) == 0x170, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___currentDisplayMode) == 0x178, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___isValid) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goPreviewModeSFX) == 0x180, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goAttractModeSFX) == 0x188, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goPurchaseModeSFX) == 0x190, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goAttractModeVFX) == 0x198, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___goPurchaseModeVFX) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___coroutinePreviewTimer) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___coroutineAttractTimer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___startTime) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___clockTextMesh) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___clockTextMeshIsValid) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___currentUpdateEvent) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___defaultCountdownTextTemplate) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___cosmeticStand) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___itemID) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___oldItemID) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___countdownTimerCoRoutine) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___updateClock) == 0x200, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab, ___lastUpdated) == 0x204, "Offset mismatch!");

static_assert(sizeof(::FXP::CosmeticItemPrefab) == 0x1f8, "Size mismatch!");

} // namespace end def FXP
// [CompilerGenerated]
// Dependencies System.Object
namespace FXP {
// Is value type: false
// CS Name: FXP.CosmeticItemPrefab/<PlayCountdownTimer>d__75
class CORDL_TYPE CosmeticItemPrefab__PlayCountdownTimer_d__75 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::FXP::CosmeticItemPrefab>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c4b7e4, size 0x1ac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c4b990, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c4b998, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c4b9d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c4b7e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::FXP::CosmeticItemPrefab> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::FXP::CosmeticItemPrefab>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::FXP::CosmeticItemPrefab>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c4aa10, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticItemPrefab__PlayCountdownTimer_d__75() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab__PlayCountdownTimer_d__75", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticItemPrefab__PlayCountdownTimer_d__75(CosmeticItemPrefab__PlayCountdownTimer_d__75 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab__PlayCountdownTimer_d__75", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticItemPrefab__PlayCountdownTimer_d__75(CosmeticItemPrefab__PlayCountdownTimer_d__75 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4233};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::FXP::CosmeticItemPrefab>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::FXP::CosmeticItemPrefab__PlayCountdownTimer_d__75) == 0x28, "Size mismatch!");

} // namespace end def FXP
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object, System.TimeSpan
namespace FXP {
// Is value type: false
// CS Name: FXP.CosmeticItemPrefab/<DoPreviewTimer>d__81
class CORDL_TYPE CosmeticItemPrefab__DoPreviewTimer_d__81 : public ::System::Object {
public:
// Declarations
/// @brief Field ReleaseTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReleaseTime, put=__cordl_internal_set_ReleaseTime)) ::System::DateTime  ReleaseTime;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::FXP::CosmeticItemPrefab>  __4__this;

/// @brief Field <delayTime>5__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayTime_5__4, put=__cordl_internal_set__delayTime_5__4)) int32_t  _delayTime_5__4;

/// @brief Field <remainingTime>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__remainingTime_5__3, put=__cordl_internal_set__remainingTime_5__3)) ::System::TimeSpan  _remainingTime_5__3;

/// @brief Field <timerDone>5__2, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__timerDone_5__2, put=__cordl_internal_set__timerDone_5__2)) bool  _timerDone_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c4b374, size 0x424, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c4b798, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c4b7a0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c4b7d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c4b370, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::DateTime const& __cordl_internal_get_ReleaseTime() const;

constexpr ::System::DateTime& __cordl_internal_get_ReleaseTime() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::FXP::CosmeticItemPrefab> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::FXP::CosmeticItemPrefab>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__delayTime_5__4() const;

constexpr int32_t& __cordl_internal_get__delayTime_5__4() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__remainingTime_5__3() const;

constexpr ::System::TimeSpan& __cordl_internal_get__remainingTime_5__3() ;

constexpr bool const& __cordl_internal_get__timerDone_5__2() const;

constexpr bool& __cordl_internal_get__timerDone_5__2() ;

constexpr void __cordl_internal_set_ReleaseTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::FXP::CosmeticItemPrefab>  value) ;

constexpr void __cordl_internal_set__delayTime_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__remainingTime_5__3(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__timerDone_5__2(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c4ad00, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticItemPrefab__DoPreviewTimer_d__81() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab__DoPreviewTimer_d__81", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticItemPrefab__DoPreviewTimer_d__81(CosmeticItemPrefab__DoPreviewTimer_d__81 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab__DoPreviewTimer_d__81", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticItemPrefab__DoPreviewTimer_d__81(CosmeticItemPrefab__DoPreviewTimer_d__81 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4232};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::FXP::CosmeticItemPrefab>  _____4__this;

/// @brief Field ReleaseTime, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___ReleaseTime;

/// @brief Field <timerDone>5__2, offset: 0x30, size: 0x1, def value: None
 bool  ____timerDone_5__2;

/// @brief Field <remainingTime>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::TimeSpan  ____remainingTime_5__3;

/// @brief Field <delayTime>5__4, offset: 0x40, size: 0x4, def value: None
 int32_t  ____delayTime_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, ___ReleaseTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, ____timerDone_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, ____remainingTime_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81, ____delayTime_5__4) == 0x40, "Offset mismatch!");

static_assert(sizeof(::FXP::CosmeticItemPrefab__DoPreviewTimer_d__81) == 0x48, "Size mismatch!");

} // namespace end def FXP
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object, System.TimeSpan
namespace FXP {
// Is value type: false
// CS Name: FXP.CosmeticItemPrefab/<DoAttractTimer>d__84
class CORDL_TYPE CosmeticItemPrefab__DoAttractTimer_d__84 : public ::System::Object {
public:
// Declarations
/// @brief Field ReleaseTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReleaseTime, put=__cordl_internal_set_ReleaseTime)) ::System::DateTime  ReleaseTime;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::FXP::CosmeticItemPrefab>  __4__this;

/// @brief Field <delayTime>5__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayTime_5__4, put=__cordl_internal_set__delayTime_5__4)) int32_t  _delayTime_5__4;

/// @brief Field <remainingTime>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__remainingTime_5__3, put=__cordl_internal_set__remainingTime_5__3)) ::System::TimeSpan  _remainingTime_5__3;

/// @brief Field <timerDone>5__2, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__timerDone_5__2, put=__cordl_internal_set__timerDone_5__2)) bool  _timerDone_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c4aee4, size 0x444, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::FXP::CosmeticItemPrefab__DoAttractTimer_d__84* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c4b328, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c4b330, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c4b368, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c4aee0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::DateTime const& __cordl_internal_get_ReleaseTime() const;

constexpr ::System::DateTime& __cordl_internal_get_ReleaseTime() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::FXP::CosmeticItemPrefab> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::FXP::CosmeticItemPrefab>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__delayTime_5__4() const;

constexpr int32_t& __cordl_internal_get__delayTime_5__4() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__remainingTime_5__3() const;

constexpr ::System::TimeSpan& __cordl_internal_get__remainingTime_5__3() ;

constexpr bool const& __cordl_internal_get__timerDone_5__2() const;

constexpr bool& __cordl_internal_get__timerDone_5__2() ;

constexpr void __cordl_internal_set_ReleaseTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::FXP::CosmeticItemPrefab>  value) ;

constexpr void __cordl_internal_set__delayTime_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__remainingTime_5__3(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__timerDone_5__2(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c4ada4, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticItemPrefab__DoAttractTimer_d__84() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab__DoAttractTimer_d__84", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticItemPrefab__DoAttractTimer_d__84(CosmeticItemPrefab__DoAttractTimer_d__84 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticItemPrefab__DoAttractTimer_d__84", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticItemPrefab__DoAttractTimer_d__84(CosmeticItemPrefab__DoAttractTimer_d__84 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4231};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::FXP::CosmeticItemPrefab>  _____4__this;

/// @brief Field ReleaseTime, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___ReleaseTime;

/// @brief Field <timerDone>5__2, offset: 0x30, size: 0x1, def value: None
 bool  ____timerDone_5__2;

/// @brief Field <remainingTime>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::TimeSpan  ____remainingTime_5__3;

/// @brief Field <delayTime>5__4, offset: 0x40, size: 0x4, def value: None
 int32_t  ____delayTime_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, ___ReleaseTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, ____timerDone_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, ____remainingTime_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84, ____delayTime_5__4) == 0x40, "Offset mismatch!");

static_assert(sizeof(::FXP::CosmeticItemPrefab__DoAttractTimer_d__84) == 0x48, "Size mismatch!");

} // namespace end def FXP
