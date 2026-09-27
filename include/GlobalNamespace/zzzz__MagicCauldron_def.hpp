#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXSArgs_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_MagicCauldronData_def.hpp"
#include "GlobalNamespace/zzzz__MagicIngredientType_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MagicCauldron)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
template<typename T>
class IFXContextParems_1;
}
namespace GlobalNamespace {
class IngrediantFXContext_MagicCauldron_Callback;
}
namespace GlobalNamespace {
class MagicCauldronLiquid;
}
namespace GlobalNamespace {
struct MagicCauldron_CauldronState;
}
namespace GlobalNamespace {
class MagicCauldron_IngrediantFXContext;
}
namespace GlobalNamespace {
class MagicCauldron_IngredientArgs;
}
namespace GlobalNamespace {
struct MagicCauldron_MagicCauldronData;
}
namespace GlobalNamespace {
struct MagicCauldron_Recipe;
}
namespace GlobalNamespace {
class MagicCauldron__LevitationSpellCoroutine_d__45;
}
namespace GlobalNamespace {
class MagicIngredientType;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaLocomotion::Gameplay {
class NoncontrollableBroomstick;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
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
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class IngrediantFXContext_MagicCauldron_Callback;
}
namespace GlobalNamespace {
class MagicCauldron;
}
namespace GlobalNamespace {
class MagicCauldron_IngrediantFXContext;
}
namespace GlobalNamespace {
class MagicCauldron_IngredientArgs;
}
namespace GlobalNamespace {
class MagicCauldron__LevitationSpellCoroutine_d__45;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*);
MARK_REF_T(::GlobalNamespace::MagicCauldron*);
MARK_REF_T(::GlobalNamespace::MagicCauldron_IngrediantFXContext*);
MARK_REF_T(::GlobalNamespace::MagicCauldron_IngredientArgs*);
MARK_REF_T(::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*, "", "MagicCauldron/IngrediantFXContext/Callback");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron*, "", "MagicCauldron");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron_IngrediantFXContext*, "", "MagicCauldron/IngrediantFXContext");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron_IngredientArgs*, "", "MagicCauldron/IngredientArgs");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*, "", "MagicCauldron/<LevitationSpellCoroutine>d__45");
// [NetworkBehaviourWeaved(4)]
// Dependencies MagicCauldron::CauldronState, MagicCauldron::MagicCauldronData, MagicIngredientType, NetworkComponent, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCauldron
class CORDL_TYPE MagicCauldron : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using CauldronState = ::GlobalNamespace::MagicCauldron_CauldronState;

using IngrediantFXContext = ::GlobalNamespace::MagicCauldron_IngrediantFXContext;

using IngredientArgs = ::GlobalNamespace::MagicCauldron_IngredientArgs;

using MagicCauldronData = ::GlobalNamespace::MagicCauldron_MagicCauldronData;

using Recipe = ::GlobalNamespace::MagicCauldron_Recipe;

using _LevitationSpellCoroutine_d__45 = ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45;

/// @brief Field CauldronActiveColor, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_CauldronActiveColor, put=__cordl_internal_set_CauldronActiveColor)) ::UnityEngine::Color  CauldronActiveColor;

/// @brief Field CauldronFailedColor, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get_CauldronFailedColor, put=__cordl_internal_set_CauldronFailedColor)) ::UnityEngine::Color  CauldronFailedColor;

/// @brief Field CauldronNotReadyColor, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_CauldronNotReadyColor, put=__cordl_internal_set_CauldronNotReadyColor)) ::UnityEngine::Color  CauldronNotReadyColor;

/// [Networked]
/// @brief [NetworkedWeaved(0, 4)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::MagicCauldron_MagicCauldronData  Data;

/// @brief Field _Data, offset 0x1b4, size 0x10 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::MagicCauldron_MagicCauldronData  _Data;

/// @brief Field _liquid, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__liquid, put=__cordl_internal_set__liquid)) ::UnityW<::GlobalNamespace::MagicCauldronLiquid>  _liquid;

/// @brief Field allIngredients, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_allIngredients, put=__cordl_internal_set_allIngredients)) ::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>>  allIngredients;

/// @brief Field audioSource, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bubblesParticle, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubblesParticle, put=__cordl_internal_set_bubblesParticle)) ::UnityW<::UnityEngine::ParticleSystem>  bubblesParticle;

/// @brief Field cauldronColor, offset 0x148, size 0x10 
 __declspec(property(get=__cordl_internal_get_cauldronColor, put=__cordl_internal_set_cauldronColor)) ::UnityEngine::Color  cauldronColor;

/// @brief Field cooldownDuration, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownDuration, put=__cordl_internal_set_cooldownDuration)) float_t  cooldownDuration;

/// @brief Field currentColor, offset 0x158, size 0x10 
 __declspec(property(get=__cordl_internal_get_currentColor, put=__cordl_internal_set_currentColor)) ::UnityEngine::Color  currentColor;

/// @brief Field currentIngredients, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentIngredients, put=__cordl_internal_set_currentIngredients)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  currentIngredients;

/// @brief Field currentRecipeIndex, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRecipeIndex, put=__cordl_internal_set_currentRecipeIndex)) int32_t  currentRecipeIndex;

/// @brief Field currentState, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::MagicCauldron_CauldronState  currentState;

/// @brief Field currentStateElapsedTime, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStateElapsedTime, put=__cordl_internal_set_currentStateElapsedTime)) float_t  currentStateElapsedTime;

/// @brief Field flyingWitchesContainer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_flyingWitchesContainer, put=__cordl_internal_set_flyingWitchesContainer)) ::UnityW<::UnityEngine::GameObject>  flyingWitchesContainer;

/// @brief Field ingredientAddedAudio, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ingredientAddedAudio, put=__cordl_internal_set_ingredientAddedAudio)) ::UnityW<::UnityEngine::AudioClip>  ingredientAddedAudio;

/// @brief Field ingredientIndex, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ingredientIndex, put=__cordl_internal_set_ingredientIndex)) int32_t  ingredientIndex;

/// @brief Field levitationBlendOutDuration, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationBlendOutDuration, put=__cordl_internal_set_levitationBlendOutDuration)) float_t  levitationBlendOutDuration;

/// @brief Field levitationBonusFullAtYSpeed, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationBonusFullAtYSpeed, put=__cordl_internal_set_levitationBonusFullAtYSpeed)) float_t  levitationBonusFullAtYSpeed;

/// @brief Field levitationBonusOffAtYSpeed, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationBonusOffAtYSpeed, put=__cordl_internal_set_levitationBonusOffAtYSpeed)) float_t  levitationBonusOffAtYSpeed;

/// @brief Field levitationBonusStrength, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationBonusStrength, put=__cordl_internal_set_levitationBonusStrength)) float_t  levitationBonusStrength;

/// @brief Field levitationDuration, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationDuration, put=__cordl_internal_set_levitationDuration)) float_t  levitationDuration;

/// @brief Field levitationRadius, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationRadius, put=__cordl_internal_set_levitationRadius)) float_t  levitationRadius;

/// @brief Field levitationSpellDuration, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationSpellDuration, put=__cordl_internal_set_levitationSpellDuration)) float_t  levitationSpellDuration;

/// @brief Field levitationStrength, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_levitationStrength, put=__cordl_internal_set_levitationStrength)) float_t  levitationStrength;

/// @brief Field maxTimeToAddAllIngredients, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimeToAddAllIngredients, put=__cordl_internal_set_maxTimeToAddAllIngredients)) float_t  maxTimeToAddAllIngredients;

/// @brief Field recipeFailedAudio, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_recipeFailedAudio, put=__cordl_internal_set_recipeFailedAudio)) ::UnityW<::UnityEngine::AudioClip>  recipeFailedAudio;

/// @brief Field recipeFailedDuration, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_recipeFailedDuration, put=__cordl_internal_set_recipeFailedDuration)) float_t  recipeFailedDuration;

/// @brief Field recipes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_recipes, put=__cordl_internal_set_recipes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>*  recipes;

/// @brief Field rendr, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_rendr, put=__cordl_internal_set_rendr)) ::UnityW<::UnityEngine::Renderer>  rendr;

/// @brief Field reusableFXContext, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_reusableFXContext, put=__cordl_internal_set_reusableFXContext)) ::GlobalNamespace::MagicCauldron_IngrediantFXContext*  reusableFXContext;

/// @brief Field reusableIngrediantArgs, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_reusableIngrediantArgs, put=__cordl_internal_set_reusableIngrediantArgs)) ::GlobalNamespace::MagicCauldron_IngredientArgs*  reusableIngrediantArgs;

/// @brief Field splashParticle, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_splashParticle, put=__cordl_internal_set_splashParticle)) ::UnityW<::UnityEngine::ParticleSystem>  splashParticle;

/// @brief Field successParticle, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_successParticle, put=__cordl_internal_set_successParticle)) ::UnityW<::UnityEngine::ParticleSystem>  successParticle;

/// @brief Field summonWitchesDuration, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_summonWitchesDuration, put=__cordl_internal_set_summonWitchesDuration)) float_t  summonWitchesDuration;

/// @brief Field testLevitationAlwaysOn, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_testLevitationAlwaysOn, put=__cordl_internal_set_testLevitationAlwaysOn)) bool  testLevitationAlwaysOn;

/// @brief Field waitTimeToSummonWitches, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitTimeToSummonWitches, put=__cordl_internal_set_waitTimeToSummonWitches)) float_t  waitTimeToSummonWitches;

/// @brief Field witchesComponent, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_witchesComponent, put=__cordl_internal_set_witchesComponent)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>*  witchesComponent;

/// @brief Method Awake, addr 0x59578ec, size 0x308, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeState, addr 0x5957cac, size 0x560, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::MagicCauldron_CauldronState  state) ;

/// @brief Method CheckIngredients, addr 0x59585ac, size 0x19c, virtual false, abstract: false, final false
inline bool CheckIngredients() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x59598cc, size 0x2c, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x59598f8, size 0x30, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method LateUpdate, addr 0x595820c, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// [IteratorStateMachine(typeof(MagicCauldron::<LevitationSpellCoroutine>d__45))]
/// @brief Method LevitationSpellCoroutine, addr 0x59582ec, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LevitationSpellCoroutine() ;

static inline ::GlobalNamespace::MagicCauldron* New_ctor() ;

/// @brief Method OnDisable, addr 0x59591e4, size 0x118, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEventEnd, addr 0x5958750, size 0x8, virtual false, abstract: false, final false
inline void OnEventEnd() ;

/// @brief Method OnEventStart, addr 0x5958748, size 0x8, virtual false, abstract: false, final false
inline void OnEventStart() ;

/// @brief Method OnIngredientAdd, addr 0x5958b4c, size 0x378, virtual false, abstract: false, final false
inline void OnIngredientAdd(int32_t  _ingredientIndex) ;

/// [PunRPC]
/// @brief Method OnIngredientAdd, addr 0x5958758, size 0x68, virtual false, abstract: false, final false
inline void OnIngredientAdd(int32_t  _ingredientIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnIngredientAddShared, addr 0x59587c0, size 0x198, virtual false, abstract: false, final false
inline void OnIngredientAddShared(int32_t  _ingredientIndex, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnTriggerEnter, addr 0x5958ef4, size 0x2f0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// [Rpc((Fusion.RpcSources)1, (Fusion.RpcTargets)7)]
/// @brief Method RPC_OnIngredientAdd, addr 0x5958958, size 0x1f4, virtual false, abstract: false, final false
inline void RPC_OnIngredientAdd(int32_t  _ingredientIndex, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 1, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_OnIngredientAdd@Invoker, addr 0x5959928, size 0xb8, virtual false, abstract: false, final false
static inline void RPC_OnIngredientAdd@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method ReadDataFusion, addr 0x59593e4, size 0x80, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5959598, size 0x178, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x5959464, size 0x28, virtual false, abstract: false, final false
inline void ReadDataShared(float_t  stateElapsedTime, int32_t  recipeIndex, ::GlobalNamespace::MagicCauldron_CauldronState  state, int32_t  ingredientIndex) ;

/// @brief Method Start, addr 0x5957ca4, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCauldronColor, addr 0x5958380, size 0x22c, virtual false, abstract: false, final false
inline void UpdateCauldronColor(::UnityEngine::Color  color) ;

/// @brief Method UpdateState, addr 0x5958210, size 0xdc, virtual false, abstract: false, final false
inline void UpdateState() ;

/// @brief Method WriteDataFusion, addr 0x59593b4, size 0x20, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x595948c, size 0x10c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_CauldronActiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_CauldronActiveColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_CauldronFailedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_CauldronFailedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_CauldronNotReadyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_CauldronNotReadyColor() ;

constexpr ::GlobalNamespace::MagicCauldron_MagicCauldronData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::MagicCauldron_MagicCauldronData& __cordl_internal_get__Data() ;

constexpr ::UnityW<::GlobalNamespace::MagicCauldronLiquid> const& __cordl_internal_get__liquid() const;

constexpr ::UnityW<::GlobalNamespace::MagicCauldronLiquid>& __cordl_internal_get__liquid() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>> const& __cordl_internal_get_allIngredients() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>>& __cordl_internal_get_allIngredients() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_bubblesParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_bubblesParticle() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_cauldronColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_cauldronColor() ;

constexpr float_t const& __cordl_internal_get_cooldownDuration() const;

constexpr float_t& __cordl_internal_get_cooldownDuration() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_currentColor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>* const& __cordl_internal_get_currentIngredients() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*& __cordl_internal_get_currentIngredients() ;

constexpr int32_t const& __cordl_internal_get_currentRecipeIndex() const;

constexpr int32_t& __cordl_internal_get_currentRecipeIndex() ;

constexpr ::GlobalNamespace::MagicCauldron_CauldronState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::MagicCauldron_CauldronState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_currentStateElapsedTime() const;

constexpr float_t& __cordl_internal_get_currentStateElapsedTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flyingWitchesContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flyingWitchesContainer() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_ingredientAddedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_ingredientAddedAudio() ;

constexpr int32_t const& __cordl_internal_get_ingredientIndex() const;

constexpr int32_t& __cordl_internal_get_ingredientIndex() ;

constexpr float_t const& __cordl_internal_get_levitationBlendOutDuration() const;

constexpr float_t& __cordl_internal_get_levitationBlendOutDuration() ;

constexpr float_t const& __cordl_internal_get_levitationBonusFullAtYSpeed() const;

constexpr float_t& __cordl_internal_get_levitationBonusFullAtYSpeed() ;

constexpr float_t const& __cordl_internal_get_levitationBonusOffAtYSpeed() const;

constexpr float_t& __cordl_internal_get_levitationBonusOffAtYSpeed() ;

constexpr float_t const& __cordl_internal_get_levitationBonusStrength() const;

constexpr float_t& __cordl_internal_get_levitationBonusStrength() ;

constexpr float_t const& __cordl_internal_get_levitationDuration() const;

constexpr float_t& __cordl_internal_get_levitationDuration() ;

constexpr float_t const& __cordl_internal_get_levitationRadius() const;

constexpr float_t& __cordl_internal_get_levitationRadius() ;

constexpr float_t const& __cordl_internal_get_levitationSpellDuration() const;

constexpr float_t& __cordl_internal_get_levitationSpellDuration() ;

constexpr float_t const& __cordl_internal_get_levitationStrength() const;

constexpr float_t& __cordl_internal_get_levitationStrength() ;

constexpr float_t const& __cordl_internal_get_maxTimeToAddAllIngredients() const;

constexpr float_t& __cordl_internal_get_maxTimeToAddAllIngredients() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_recipeFailedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_recipeFailedAudio() ;

constexpr float_t const& __cordl_internal_get_recipeFailedDuration() const;

constexpr float_t& __cordl_internal_get_recipeFailedDuration() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>* const& __cordl_internal_get_recipes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>*& __cordl_internal_get_recipes() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_rendr() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_rendr() ;

constexpr ::GlobalNamespace::MagicCauldron_IngrediantFXContext* const& __cordl_internal_get_reusableFXContext() const;

constexpr ::GlobalNamespace::MagicCauldron_IngrediantFXContext*& __cordl_internal_get_reusableFXContext() ;

constexpr ::GlobalNamespace::MagicCauldron_IngredientArgs* const& __cordl_internal_get_reusableIngrediantArgs() const;

constexpr ::GlobalNamespace::MagicCauldron_IngredientArgs*& __cordl_internal_get_reusableIngrediantArgs() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_splashParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_splashParticle() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_successParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_successParticle() ;

constexpr float_t const& __cordl_internal_get_summonWitchesDuration() const;

constexpr float_t& __cordl_internal_get_summonWitchesDuration() ;

constexpr bool const& __cordl_internal_get_testLevitationAlwaysOn() const;

constexpr bool& __cordl_internal_get_testLevitationAlwaysOn() ;

constexpr float_t const& __cordl_internal_get_waitTimeToSummonWitches() const;

constexpr float_t& __cordl_internal_get_waitTimeToSummonWitches() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>* const& __cordl_internal_get_witchesComponent() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>*& __cordl_internal_get_witchesComponent() ;

constexpr void __cordl_internal_set_CauldronActiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_CauldronFailedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_CauldronNotReadyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::MagicCauldron_MagicCauldronData  value) ;

constexpr void __cordl_internal_set__liquid(::UnityW<::GlobalNamespace::MagicCauldronLiquid>  value) ;

constexpr void __cordl_internal_set_allIngredients(::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bubblesParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_cauldronColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_currentIngredients(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  value) ;

constexpr void __cordl_internal_set_currentRecipeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::MagicCauldron_CauldronState  value) ;

constexpr void __cordl_internal_set_currentStateElapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_flyingWitchesContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ingredientAddedAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_ingredientIndex(int32_t  value) ;

constexpr void __cordl_internal_set_levitationBlendOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_levitationBonusFullAtYSpeed(float_t  value) ;

constexpr void __cordl_internal_set_levitationBonusOffAtYSpeed(float_t  value) ;

constexpr void __cordl_internal_set_levitationBonusStrength(float_t  value) ;

constexpr void __cordl_internal_set_levitationDuration(float_t  value) ;

constexpr void __cordl_internal_set_levitationRadius(float_t  value) ;

constexpr void __cordl_internal_set_levitationSpellDuration(float_t  value) ;

constexpr void __cordl_internal_set_levitationStrength(float_t  value) ;

constexpr void __cordl_internal_set_maxTimeToAddAllIngredients(float_t  value) ;

constexpr void __cordl_internal_set_recipeFailedAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_recipeFailedDuration(float_t  value) ;

constexpr void __cordl_internal_set_recipes(::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>*  value) ;

constexpr void __cordl_internal_set_rendr(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_reusableFXContext(::GlobalNamespace::MagicCauldron_IngrediantFXContext*  value) ;

constexpr void __cordl_internal_set_reusableIngrediantArgs(::GlobalNamespace::MagicCauldron_IngredientArgs*  value) ;

constexpr void __cordl_internal_set_splashParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_successParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_summonWitchesDuration(float_t  value) ;

constexpr void __cordl_internal_set_testLevitationAlwaysOn(bool  value) ;

constexpr void __cordl_internal_set_waitTimeToSummonWitches(float_t  value) ;

constexpr void __cordl_internal_set_witchesComponent(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>*  value) ;

/// @brief Method .ctor, addr 0x5959710, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x59592fc, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MagicCauldron_MagicCauldronData get_Data() ;

/// @brief Method set_Data, addr 0x5959358, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::MagicCauldron_MagicCauldronData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldron() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicCauldron(MagicCauldron && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicCauldron(MagicCauldron const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2331};

/// @brief Field recipes, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>*  ___recipes;

/// @brief Field maxTimeToAddAllIngredients, offset: 0xa8, size: 0x4, def value: None
 float_t  ___maxTimeToAddAllIngredients;

/// @brief Field summonWitchesDuration, offset: 0xac, size: 0x4, def value: None
 float_t  ___summonWitchesDuration;

/// @brief Field recipeFailedDuration, offset: 0xb0, size: 0x4, def value: None
 float_t  ___recipeFailedDuration;

/// @brief Field cooldownDuration, offset: 0xb4, size: 0x4, def value: None
 float_t  ___cooldownDuration;

/// @brief Field allIngredients, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>>  ___allIngredients;

/// @brief Field flyingWitchesContainer, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flyingWitchesContainer;

/// [SerializeField]
/// @brief Field audioSource, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field ingredientAddedAudio, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___ingredientAddedAudio;

/// @brief Field recipeFailedAudio, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___recipeFailedAudio;

/// @brief Field bubblesParticle, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___bubblesParticle;

/// @brief Field successParticle, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___successParticle;

/// @brief Field splashParticle, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___splashParticle;

/// @brief Field CauldronActiveColor, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Color  ___CauldronActiveColor;

/// @brief Field CauldronFailedColor, offset: 0x108, size: 0x10, def value: None
 ::UnityEngine::Color  ___CauldronFailedColor;

/// [Tooltip("only if we are using the time of day event")]
/// @brief Field CauldronNotReadyColor, offset: 0x118, size: 0x10, def value: None
 ::UnityEngine::Color  ___CauldronNotReadyColor;

/// @brief Field witchesComponent, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>*  ___witchesComponent;

/// @brief Field currentIngredients, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  ___currentIngredients;

/// @brief Field currentStateElapsedTime, offset: 0x138, size: 0x4, def value: None
 float_t  ___currentStateElapsedTime;

/// @brief Field currentState, offset: 0x13c, size: 0x4, def value: None
 ::GlobalNamespace::MagicCauldron_CauldronState  ___currentState;

/// [SerializeField]
/// @brief Field rendr, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___rendr;

/// @brief Field cauldronColor, offset: 0x148, size: 0x10, def value: None
 ::UnityEngine::Color  ___cauldronColor;

/// @brief Field currentColor, offset: 0x158, size: 0x10, def value: None
 ::UnityEngine::Color  ___currentColor;

/// @brief Field currentRecipeIndex, offset: 0x168, size: 0x4, def value: None
 int32_t  ___currentRecipeIndex;

/// @brief Field ingredientIndex, offset: 0x16c, size: 0x4, def value: None
 int32_t  ___ingredientIndex;

/// @brief Field waitTimeToSummonWitches, offset: 0x170, size: 0x4, def value: None
 float_t  ___waitTimeToSummonWitches;

/// [Space]
/// [SerializeField]
/// @brief Field _liquid, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MagicCauldronLiquid>  ____liquid;

/// @brief Field reusableFXContext, offset: 0x180, size: 0x8, def value: None
 ::GlobalNamespace::MagicCauldron_IngrediantFXContext*  ___reusableFXContext;

/// @brief Field reusableIngrediantArgs, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::MagicCauldron_IngredientArgs*  ___reusableIngrediantArgs;

/// @brief Field testLevitationAlwaysOn, offset: 0x190, size: 0x1, def value: None
 bool  ___testLevitationAlwaysOn;

/// @brief Field levitationRadius, offset: 0x194, size: 0x4, def value: None
 float_t  ___levitationRadius;

/// @brief Field levitationSpellDuration, offset: 0x198, size: 0x4, def value: None
 float_t  ___levitationSpellDuration;

/// @brief Field levitationStrength, offset: 0x19c, size: 0x4, def value: None
 float_t  ___levitationStrength;

/// @brief Field levitationDuration, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___levitationDuration;

/// @brief Field levitationBlendOutDuration, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___levitationBlendOutDuration;

/// @brief Field levitationBonusStrength, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___levitationBonusStrength;

/// @brief Field levitationBonusOffAtYSpeed, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___levitationBonusOffAtYSpeed;

/// @brief Field levitationBonusFullAtYSpeed, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___levitationBonusFullAtYSpeed;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 4)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x1b4, size: 0x10, def value: None
 ::GlobalNamespace::MagicCauldron_MagicCauldronData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___recipes) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___maxTimeToAddAllIngredients) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___summonWitchesDuration) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___recipeFailedDuration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___cooldownDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___allIngredients) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___flyingWitchesContainer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___audioSource) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___ingredientAddedAudio) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___recipeFailedAudio) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___bubblesParticle) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___successParticle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___splashParticle) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___CauldronActiveColor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___CauldronFailedColor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___CauldronNotReadyColor) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___witchesComponent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___currentIngredients) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___currentStateElapsedTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___currentState) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___rendr) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___cauldronColor) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___currentColor) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___currentRecipeIndex) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___ingredientIndex) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___waitTimeToSummonWitches) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ____liquid) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___reusableFXContext) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___reusableIngrediantArgs) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___testLevitationAlwaysOn) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationRadius) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationSpellDuration) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationStrength) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationDuration) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationBlendOutDuration) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationBonusStrength) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationBonusOffAtYSpeed) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ___levitationBonusFullAtYSpeed) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron, ____Data) == 0x1b4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldron) == 0x1c8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCauldron/<LevitationSpellCoroutine>d__45
class CORDL_TYPE MagicCauldron__LevitationSpellCoroutine_d__45 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MagicCauldron>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5959ad4, size 0x1bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5959c90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5959c98, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5959cd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5959ad0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MagicCauldron> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MagicCauldron>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MagicCauldron>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5958358, size 0x28, virtual false, abstract: false, final false
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
constexpr MagicCauldron__LevitationSpellCoroutine_d__45() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron__LevitationSpellCoroutine_d__45", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicCauldron__LevitationSpellCoroutine_d__45(MagicCauldron__LevitationSpellCoroutine_d__45 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron__LevitationSpellCoroutine_d__45", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicCauldron__LevitationSpellCoroutine_d__45(MagicCauldron__LevitationSpellCoroutine_d__45 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2330};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MagicCauldron>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCauldron/IngrediantFXContext
class CORDL_TYPE MagicCauldron_IngrediantFXContext : public ::System::Object {
public:
// Declarations
using Callback = ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback;

 __declspec(property(get=IFXContextParems_MagicCauldron_IngredientArgs__get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  IFXContextParems_MagicCauldron_IngredientArgs__settings;

/// @brief Field fxCallBack, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxCallBack, put=__cordl_internal_set_fxCallBack)) ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*  fxCallBack;

/// @brief Field playerSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerSettings, put=__cordl_internal_set_playerSettings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  playerSettings;

/// @brief Convert operator to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>"
constexpr operator  ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>*() noexcept;

/// @brief Method IFXContextParems<MagicCauldron.IngredientArgs>.OnPlayFX, addr 0x59599e8, size 0x2c, virtual true, abstract: false, final true
inline void IFXContextParems_MagicCauldron_IngredientArgs__OnPlayFX(::GlobalNamespace::MagicCauldron_IngredientArgs*  args) ;

/// @brief Method IFXContextParems<MagicCauldron.IngredientArgs>.get_settings, addr 0x59599e0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::FXSystemSettings> IFXContextParems_MagicCauldron_IngredientArgs__get_settings() ;

static inline ::GlobalNamespace::MagicCauldron_IngrediantFXContext* New_ctor() ;

constexpr ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback* const& __cordl_internal_get_fxCallBack() const;

constexpr ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*& __cordl_internal_get_fxCallBack() ;

constexpr ::UnityW<::GlobalNamespace::FXSystemSettings> const& __cordl_internal_get_playerSettings() const;

constexpr ::UnityW<::GlobalNamespace::FXSystemSettings>& __cordl_internal_get_playerSettings() ;

constexpr void __cordl_internal_set_fxCallBack(::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*  value) ;

constexpr void __cordl_internal_set_playerSettings(::UnityW<::GlobalNamespace::FXSystemSettings>  value) ;

/// @brief Method .ctor, addr 0x5957bf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>"
constexpr ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>* i___GlobalNamespace__IFXContextParems_1___GlobalNamespace__MagicCauldron_IngredientArgs__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldron_IngrediantFXContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron_IngrediantFXContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicCauldron_IngrediantFXContext(MagicCauldron_IngrediantFXContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron_IngrediantFXContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicCauldron_IngrediantFXContext(MagicCauldron_IngrediantFXContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2328};

/// @brief Field playerSettings, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FXSystemSettings>  ___playerSettings;

/// @brief Field fxCallBack, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*  ___fxCallBack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldron_IngrediantFXContext, ___playerSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldron_IngrediantFXContext, ___fxCallBack) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldron_IngrediantFXContext) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCauldron/IngrediantFXContext/Callback
class CORDL_TYPE IngrediantFXContext_MagicCauldron_Callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5959a28, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  key, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5959a84, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5959a14, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  key) ;

static inline ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5957c04, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IngrediantFXContext_MagicCauldron_Callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IngrediantFXContext_MagicCauldron_Callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IngrediantFXContext_MagicCauldron_Callback(IngrediantFXContext_MagicCauldron_Callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IngrediantFXContext_MagicCauldron_Callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IngrediantFXContext_MagicCauldron_Callback(IngrediantFXContext_MagicCauldron_Callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2327};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FXSArgs
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCauldron/IngredientArgs
class CORDL_TYPE MagicCauldron_IngredientArgs : public ::GlobalNamespace::FXSArgs {
public:
// Declarations
/// @brief Field key, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) int32_t  key;

static inline ::GlobalNamespace::MagicCauldron_IngredientArgs* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_key() const;

constexpr int32_t& __cordl_internal_get_key() ;

constexpr void __cordl_internal_set_key(int32_t  value) ;

/// @brief Method .ctor, addr 0x5957bfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldron_IngredientArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron_IngredientArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicCauldron_IngredientArgs(MagicCauldron_IngredientArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldron_IngredientArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicCauldron_IngredientArgs(MagicCauldron_IngredientArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2326};

/// @brief Field key, offset: 0x10, size: 0x4, def value: None
 int32_t  ___key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldron_IngredientArgs, ___key) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldron_IngredientArgs) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
