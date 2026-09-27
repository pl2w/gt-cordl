#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneTeller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimHashId_def.hpp"
#include "GlobalNamespace/zzzz__FXType_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneResult_def.hpp"
#include "GlobalNamespace/zzzz__FortuneTeller_FortuneTellerResultFanfare_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FortuneTeller)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct FortuneResults_FortuneCategoryType;
}
namespace GlobalNamespace {
struct FortuneResults_FortuneResult;
}
namespace GlobalNamespace {
class FortuneResults;
}
namespace GlobalNamespace {
class FortuneTellerButton;
}
namespace GlobalNamespace {
struct FortuneTeller_FortuneTellerResultFanfare;
}
namespace GlobalNamespace {
class FortuneTeller__AttractModeMonitor_d__41;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Realtime {
class Player;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class FortuneTeller;
}
namespace GlobalNamespace {
class FortuneTeller__AttractModeMonitor_d__41;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FortuneTeller*);
MARK_REF_T(::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneTeller*, "", "FortuneTeller");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*, "", "FortuneTeller/<AttractModeMonitor>d__41");
// Dependencies AnimHashId, FXType, FortuneResults::FortuneResult, FortuneTeller::FortuneTellerResultFanfare, Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: FortuneTeller
class CORDL_TYPE FortuneTeller : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using FortuneTellerResultFanfare = ::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare;

using _AttractModeMonitor_d__41 = ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41;

/// @brief Field animator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field attractModeMonitor, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractModeMonitor, put=__cordl_internal_set_attractModeMonitor)) ::UnityEngine::Coroutine*  attractModeMonitor;

/// @brief Field beardDefaultMaterial, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_beardDefaultMaterial, put=__cordl_internal_set_beardDefaultMaterial)) ::UnityW<::UnityEngine::Material>  beardDefaultMaterial;

/// @brief Field beardGreyZoneMaterial, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_beardGreyZoneMaterial, put=__cordl_internal_set_beardGreyZoneMaterial)) ::UnityW<::UnityEngine::Material>  beardGreyZoneMaterial;

/// @brief Field beardRenderer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_beardRenderer, put=__cordl_internal_set_beardRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  beardRenderer;

/// @brief Field boothDefaultMaterial, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_boothDefaultMaterial, put=__cordl_internal_set_boothDefaultMaterial)) ::UnityW<::UnityEngine::Material>  boothDefaultMaterial;

/// @brief Field boothGreyZoneMaterial, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_boothGreyZoneMaterial, put=__cordl_internal_set_boothGreyZoneMaterial)) ::UnityW<::UnityEngine::Material>  boothGreyZoneMaterial;

/// @brief Field boothRenderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_boothRenderer, put=__cordl_internal_set_boothRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  boothRenderer;

/// @brief Field button, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::FortuneTellerButton>  button;

/// @brief Field changeMaterialsInGreyZone, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_changeMaterialsInGreyZone, put=__cordl_internal_set_changeMaterialsInGreyZone)) bool  changeMaterialsInGreyZone;

/// @brief Field latestFortune, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestFortune, put=__cordl_internal_set_latestFortune)) ::GlobalNamespace::FortuneResults_FortuneResult  latestFortune;

/// @brief Field limiterType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_limiterType, put=__cordl_internal_set_limiterType)) ::GlobalNamespace::FXType  limiterType;

/// @brief Field nextAttractAnimTimestamp, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextAttractAnimTimestamp, put=__cordl_internal_set_nextAttractAnimTimestamp)) float_t  nextAttractAnimTimestamp;

/// @brief Field playable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playable, put=__cordl_internal_set_playable)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  playable;

/// @brief Field resultFanfares, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultFanfares, put=__cordl_internal_set_resultFanfares)) ::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>  resultFanfares;

/// @brief Field results, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::UnityW<::GlobalNamespace::FortuneResults>  results;

/// @brief Field tellerDefaultMaterials, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tellerDefaultMaterials, put=__cordl_internal_set_tellerDefaultMaterials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  tellerDefaultMaterials;

/// @brief Field tellerGreyZoneMaterials, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tellerGreyZoneMaterials, put=__cordl_internal_set_tellerGreyZoneMaterials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  tellerGreyZoneMaterials;

/// @brief Field tellerRenderer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tellerRenderer, put=__cordl_internal_set_tellerRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  tellerRenderer;

/// @brief Field text, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TextMeshPro>  text;

/// @brief Field triggerNewFortuneLimiter, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerNewFortuneLimiter, put=__cordl_internal_set_triggerNewFortuneLimiter)) ::GlobalNamespace::CallLimiter*  triggerNewFortuneLimiter;

/// @brief Field triggerUpdateFortuneLimiter, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerUpdateFortuneLimiter, put=__cordl_internal_set_triggerUpdateFortuneLimiter)) ::GlobalNamespace::CallLimiter*  triggerUpdateFortuneLimiter;

/// @brief Field trigger_attract, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_trigger_attract, put=__cordl_internal_set_trigger_attract)) ::GlobalNamespace::AnimHashId  trigger_attract;

/// @brief Field trigger_prediction, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get_trigger_prediction, put=__cordl_internal_set_trigger_prediction)) ::GlobalNamespace::AnimHashId  trigger_prediction;

/// @brief Field waitDurationBeforeAttractAnim, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitDurationBeforeAttractAnim, put=__cordl_internal_set_waitDurationBeforeAttractAnim)) float_t  waitDurationBeforeAttractAnim;

/// @brief Method ApplyFortuneText, addr 0x580bd54, size 0x4c, virtual false, abstract: false, final false
inline void ApplyFortuneText() ;

/// [IteratorStateMachine(typeof(FortuneTeller::<AttractModeMonitor>d__41))]
/// @brief Method AttractModeMonitor, addr 0x580b9cc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AttractModeMonitor() ;

/// @brief Method Awake, addr 0x580a728, size 0x1f4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetResultFanfare, addr 0x580bcf4, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> GetResultFanfare(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType) ;

/// @brief Method GreyZoneActivated, addr 0x580accc, size 0x4c, virtual false, abstract: false, final false
inline void GreyZoneActivated() ;

/// @brief Method GreyZoneDeactivated, addr 0x580ad18, size 0x4c, virtual false, abstract: false, final false
inline void GreyZoneDeactivated() ;

/// @brief Method HandlePressedButton, addr 0x580b050, size 0x138, virtual false, abstract: false, final false
inline void HandlePressedButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

static inline ::GlobalNamespace::FortuneTeller* New_ctor() ;

/// @brief Method OnDestroy, addr 0x580a91c, size 0x1ec, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x580abf4, size 0xd8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x580ab08, size 0xec, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoinedRoom, addr 0x580afe4, size 0x6c, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnMasterClientSwitched, addr 0x580af28, size 0x6c, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x580ad64, size 0x1c4, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// [PunRPC]
/// @brief Method RequestFortuneRPC, addr 0x580b374, size 0x20c, virtual false, abstract: false, final false
inline void RequestFortuneRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendAttractAnim, addr 0x580ba60, size 0x12c, virtual false, abstract: false, final false
inline void SendAttractAnim() ;

/// @brief Method SendNewFortune, addr 0x580b188, size 0x1ec, virtual false, abstract: false, final false
inline void SendNewFortune() ;

/// @brief Method StartAttractModeMonitor, addr 0x580af94, size 0x50, virtual false, abstract: false, final false
inline void StartAttractModeMonitor() ;

/// [PunRPC]
/// @brief Method TriggerAttractAnimRPC, addr 0x580bb8c, size 0x168, virtual false, abstract: false, final false
inline void TriggerAttractAnimRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method TriggerNewFortuneRPC, addr 0x580b828, size 0x1a4, virtual false, abstract: false, final false
inline void TriggerNewFortuneRPC(int32_t  fortuneType, int32_t  resultIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method TriggerUpdateFortuneRPC, addr 0x580b69c, size 0x18c, virtual false, abstract: false, final false
inline void TriggerUpdateFortuneRPC(int32_t  fortuneType, int32_t  resultIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method UpdateFortune, addr 0x580b580, size 0x11c, virtual false, abstract: false, final false
inline void UpdateFortune(::GlobalNamespace::FortuneResults_FortuneResult  result, bool  newFortune) ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_attractModeMonitor() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_attractModeMonitor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_beardDefaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_beardDefaultMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_beardGreyZoneMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_beardGreyZoneMaterial() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_beardRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_beardRenderer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_boothDefaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_boothDefaultMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_boothGreyZoneMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_boothGreyZoneMaterial() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_boothRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_boothRenderer() ;

constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton>& __cordl_internal_get_button() ;

constexpr bool const& __cordl_internal_get_changeMaterialsInGreyZone() const;

constexpr bool& __cordl_internal_get_changeMaterialsInGreyZone() ;

constexpr ::GlobalNamespace::FortuneResults_FortuneResult const& __cordl_internal_get_latestFortune() const;

constexpr ::GlobalNamespace::FortuneResults_FortuneResult& __cordl_internal_get_latestFortune() ;

constexpr ::GlobalNamespace::FXType const& __cordl_internal_get_limiterType() const;

constexpr ::GlobalNamespace::FXType& __cordl_internal_get_limiterType() ;

constexpr float_t const& __cordl_internal_get_nextAttractAnimTimestamp() const;

constexpr float_t& __cordl_internal_get_nextAttractAnimTimestamp() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_playable() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_playable() ;

constexpr ::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare> const& __cordl_internal_get_resultFanfares() const;

constexpr ::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>& __cordl_internal_get_resultFanfares() ;

constexpr ::UnityW<::GlobalNamespace::FortuneResults> const& __cordl_internal_get_results() const;

constexpr ::UnityW<::GlobalNamespace::FortuneResults>& __cordl_internal_get_results() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_tellerDefaultMaterials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_tellerDefaultMaterials() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_tellerGreyZoneMaterials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_tellerGreyZoneMaterials() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_tellerRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_tellerRenderer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_text() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_triggerNewFortuneLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_triggerNewFortuneLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_triggerUpdateFortuneLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_triggerUpdateFortuneLimiter() ;

constexpr ::GlobalNamespace::AnimHashId const& __cordl_internal_get_trigger_attract() const;

constexpr ::GlobalNamespace::AnimHashId& __cordl_internal_get_trigger_attract() ;

constexpr ::GlobalNamespace::AnimHashId const& __cordl_internal_get_trigger_prediction() const;

constexpr ::GlobalNamespace::AnimHashId& __cordl_internal_get_trigger_prediction() ;

constexpr float_t const& __cordl_internal_get_waitDurationBeforeAttractAnim() const;

constexpr float_t& __cordl_internal_get_waitDurationBeforeAttractAnim() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_attractModeMonitor(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_beardDefaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_beardGreyZoneMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_beardRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_boothDefaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_boothGreyZoneMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_boothRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::FortuneTellerButton>  value) ;

constexpr void __cordl_internal_set_changeMaterialsInGreyZone(bool  value) ;

constexpr void __cordl_internal_set_latestFortune(::GlobalNamespace::FortuneResults_FortuneResult  value) ;

constexpr void __cordl_internal_set_limiterType(::GlobalNamespace::FXType  value) ;

constexpr void __cordl_internal_set_nextAttractAnimTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_playable(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set_resultFanfares(::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>  value) ;

constexpr void __cordl_internal_set_results(::UnityW<::GlobalNamespace::FortuneResults>  value) ;

constexpr void __cordl_internal_set_tellerDefaultMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_tellerGreyZoneMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_tellerRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_triggerNewFortuneLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_triggerUpdateFortuneLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_trigger_attract(::GlobalNamespace::AnimHashId  value) ;

constexpr void __cordl_internal_set_trigger_prediction(::GlobalNamespace::AnimHashId  value) ;

constexpr void __cordl_internal_set_waitDurationBeforeAttractAnim(float_t  value) ;

/// @brief Method .ctor, addr 0x580bda0, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FortuneTeller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FortuneTeller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FortuneTeller(FortuneTeller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FortuneTeller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FortuneTeller(FortuneTeller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1708};

/// [SerializeField]
/// @brief Field limiterType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::FXType  ___limiterType;

/// [SerializeField]
/// @brief Field button, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FortuneTellerButton>  ___button;

/// [SerializeField]
/// @brief Field text, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___text;

/// [SerializeField]
/// @brief Field results, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FortuneResults>  ___results;

/// [SerializeField]
/// @brief Field playable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___playable;

/// [SerializeField]
/// @brief Field animator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [SerializeField]
/// @brief Field waitDurationBeforeAttractAnim, offset: 0x58, size: 0x4, def value: None
 float_t  ___waitDurationBeforeAttractAnim;

/// [SerializeField]
/// @brief Field resultFanfares, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>  ___resultFanfares;

/// [Header("Grey Zone Visuals")]
/// [SerializeField]
/// @brief Field changeMaterialsInGreyZone, offset: 0x68, size: 0x1, def value: None
 bool  ___changeMaterialsInGreyZone;

/// [SerializeField]
/// @brief Field boothRenderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___boothRenderer;

/// [SerializeField]
/// @brief Field boothDefaultMaterial, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___boothDefaultMaterial;

/// [SerializeField]
/// @brief Field boothGreyZoneMaterial, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___boothGreyZoneMaterial;

/// [SerializeField]
/// @brief Field beardRenderer, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___beardRenderer;

/// [SerializeField]
/// @brief Field beardDefaultMaterial, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___beardDefaultMaterial;

/// [SerializeField]
/// @brief Field beardGreyZoneMaterial, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___beardGreyZoneMaterial;

/// [SerializeField]
/// @brief Field tellerRenderer, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___tellerRenderer;

/// [SerializeField]
/// @brief Field tellerDefaultMaterials, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___tellerDefaultMaterials;

/// [SerializeField]
/// @brief Field tellerGreyZoneMaterials, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___tellerGreyZoneMaterials;

/// @brief Field latestFortune, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::FortuneResults_FortuneResult  ___latestFortune;

/// @brief Field triggerNewFortuneLimiter, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___triggerNewFortuneLimiter;

/// @brief Field triggerUpdateFortuneLimiter, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___triggerUpdateFortuneLimiter;

/// @brief Field trigger_attract, offset: 0xd0, size: 0x10, def value: None
 ::GlobalNamespace::AnimHashId  ___trigger_attract;

/// @brief Field trigger_prediction, offset: 0xe0, size: 0x10, def value: None
 ::GlobalNamespace::AnimHashId  ___trigger_prediction;

/// @brief Field nextAttractAnimTimestamp, offset: 0xf0, size: 0x4, def value: None
 float_t  ___nextAttractAnimTimestamp;

/// @brief Field attractModeMonitor, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___attractModeMonitor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___limiterType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___button) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___text) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___results) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___playable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___animator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___waitDurationBeforeAttractAnim) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___resultFanfares) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___changeMaterialsInGreyZone) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___boothRenderer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___boothDefaultMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___boothGreyZoneMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___beardRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___beardDefaultMaterial) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___beardGreyZoneMaterial) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___tellerRenderer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___tellerDefaultMaterials) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___tellerGreyZoneMaterials) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___latestFortune) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___triggerNewFortuneLimiter) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___triggerUpdateFortuneLimiter) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___trigger_attract) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___trigger_prediction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___nextAttractAnimTimestamp) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller, ___attractModeMonitor) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneTeller) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FortuneTeller/<AttractModeMonitor>d__41
class CORDL_TYPE FortuneTeller__AttractModeMonitor_d__41 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FortuneTeller>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x580bec4, size 0x12c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x580bff0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x580bff8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x580c030, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x580bec0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FortuneTeller> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FortuneTeller>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FortuneTeller>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x580ba38, size 0x28, virtual false, abstract: false, final false
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
constexpr FortuneTeller__AttractModeMonitor_d__41() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FortuneTeller__AttractModeMonitor_d__41", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FortuneTeller__AttractModeMonitor_d__41(FortuneTeller__AttractModeMonitor_d__41 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FortuneTeller__AttractModeMonitor_d__41", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FortuneTeller__AttractModeMonitor_d__41(FortuneTeller__AttractModeMonitor_d__41 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1707};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FortuneTeller>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
