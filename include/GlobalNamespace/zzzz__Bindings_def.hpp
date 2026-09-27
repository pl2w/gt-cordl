#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings)
namespace GlobalNamespace {
class Bindings_AIAgentFunctions;
}
namespace GlobalNamespace {
class Bindings_Components;
}
namespace GlobalNamespace {
class Bindings_DataSaveUtils;
}
namespace GlobalNamespace {
class Bindings_GameObjectFunctions;
}
namespace GlobalNamespace {
struct Bindings_GorillaLocomotionSettings;
}
namespace GlobalNamespace {
class Bindings_GrabbableEntityFunctions;
}
namespace GlobalNamespace {
class Bindings_JSON;
}
namespace GlobalNamespace {
class Bindings_LuaEmit;
}
namespace GlobalNamespace {
struct Bindings_LuauAIAgent;
}
namespace GlobalNamespace {
struct Bindings_LuauGameObjectInitialState;
}
namespace GlobalNamespace {
struct Bindings_LuauGameObject;
}
namespace GlobalNamespace {
struct Bindings_LuauGrabbableEntity;
}
namespace GlobalNamespace {
struct Bindings_LuauPlayer;
}
namespace GlobalNamespace {
struct Bindings_LuauRoomState;
}
namespace GlobalNamespace {
struct Bindings_MInventoryItem;
}
namespace GlobalNamespace {
struct Bindings_MOnlineError;
}
namespace GlobalNamespace {
class Bindings_OnlineFunctions;
}
namespace GlobalNamespace {
class Bindings_PlayerFunctions;
}
namespace GlobalNamespace {
struct Bindings_PlayerInput;
}
namespace GlobalNamespace {
class Bindings_PlayerUtils;
}
namespace GlobalNamespace {
class Bindings_QuatFunctions;
}
namespace GlobalNamespace {
class Bindings_RayCastUtils;
}
namespace GlobalNamespace {
class Bindings_Vec3Functions;
}
namespace GlobalNamespace {
class Components_Bindings_LuauAnimatorBindings;
}
namespace GlobalNamespace {
class Components_Bindings_LuauAudioSourceBindings;
}
namespace GlobalNamespace {
class Components_Bindings_LuauLightBindings;
}
namespace GlobalNamespace {
class Components_Bindings_LuauParticleSystemBindings;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GameObjectFunctions_Bindings___c;
}
namespace GlobalNamespace {
class JSON_Bindings___c;
}
namespace GlobalNamespace {
struct LuauAnimatorBindings_Components_Bindings_LuauAnimator;
}
namespace GlobalNamespace {
struct LuauAudioSourceBindings_Components_Bindings_LuauAudioSource;
}
namespace GlobalNamespace {
struct LuauLightBindings_Components_Bindings_LuauLight;
}
namespace GlobalNamespace {
struct LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem;
}
namespace GlobalNamespace {
class LuauScriptRunner;
}
namespace GlobalNamespace {
class MothershipConsumeConsumableResponse;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipGetInventoryResponse;
}
namespace GlobalNamespace {
class MothershipGetMergedInventoryResponse;
}
namespace GlobalNamespace {
class MothershipGetStorefrontResponse;
}
namespace GlobalNamespace {
class MothershipPurchaseOfferResponse;
}
namespace GlobalNamespace {
struct OnlineFunctions_Bindings_BackendCallState;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings_CachedInventoryItem;
}
namespace GlobalNamespace {
struct OnlineFunctions_Bindings_CachedOfferDelta;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings_CachedOffer;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass11_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass11_1;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass13_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass13_1;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass3_1;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass4_1;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_New_00004DF5$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_New_00004DE1$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate;
}
namespace GlobalNamespace {
struct lua_State;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
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
class Animator;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Bindings;
}
namespace GlobalNamespace {
class Bindings_AIAgentFunctions;
}
namespace GlobalNamespace {
class Bindings_Components;
}
namespace GlobalNamespace {
class Bindings_DataSaveUtils;
}
namespace GlobalNamespace {
class Bindings_GameObjectFunctions;
}
namespace GlobalNamespace {
class Bindings_GrabbableEntityFunctions;
}
namespace GlobalNamespace {
class Bindings_JSON;
}
namespace GlobalNamespace {
class Bindings_LuaEmit;
}
namespace GlobalNamespace {
class Bindings_OnlineFunctions;
}
namespace GlobalNamespace {
class Bindings_PlayerFunctions;
}
namespace GlobalNamespace {
class Bindings_PlayerUtils;
}
namespace GlobalNamespace {
class Bindings_QuatFunctions;
}
namespace GlobalNamespace {
class Bindings_RayCastUtils;
}
namespace GlobalNamespace {
class Bindings_Vec3Functions;
}
namespace GlobalNamespace {
class Components_Bindings_LuauAnimatorBindings;
}
namespace GlobalNamespace {
class Components_Bindings_LuauAudioSourceBindings;
}
namespace GlobalNamespace {
class Components_Bindings_LuauLightBindings;
}
namespace GlobalNamespace {
class Components_Bindings_LuauParticleSystemBindings;
}
namespace GlobalNamespace {
class GameObjectFunctions_Bindings___c;
}
namespace GlobalNamespace {
class JSON_Bindings___c;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings_CachedInventoryItem;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings_CachedOffer;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass11_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass11_1;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass13_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass13_1;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass3_1;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass4_0;
}
namespace GlobalNamespace {
class OnlineFunctions_Bindings___c__DisplayClass4_1;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_New_00004DF5$BurstDirectCall;
}
namespace GlobalNamespace {
class QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_New_00004DE1$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall;
}
namespace GlobalNamespace {
class Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Bindings*);
MARK_REF_T(::GlobalNamespace::Bindings_AIAgentFunctions*);
MARK_REF_T(::GlobalNamespace::Bindings_Components*);
MARK_REF_T(::GlobalNamespace::Bindings_DataSaveUtils*);
MARK_REF_T(::GlobalNamespace::Bindings_GameObjectFunctions*);
MARK_REF_T(::GlobalNamespace::Bindings_GrabbableEntityFunctions*);
MARK_REF_T(::GlobalNamespace::Bindings_JSON*);
MARK_REF_T(::GlobalNamespace::Bindings_LuaEmit*);
MARK_REF_T(::GlobalNamespace::Bindings_OnlineFunctions*);
MARK_REF_T(::GlobalNamespace::Bindings_PlayerFunctions*);
MARK_REF_T(::GlobalNamespace::Bindings_PlayerUtils*);
MARK_REF_T(::GlobalNamespace::Bindings_QuatFunctions*);
MARK_REF_T(::GlobalNamespace::Bindings_RayCastUtils*);
MARK_REF_T(::GlobalNamespace::Bindings_Vec3Functions*);
MARK_REF_T(::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*);
MARK_REF_T(::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*);
MARK_REF_T(::GlobalNamespace::Components_Bindings_LuauLightBindings*);
MARK_REF_T(::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*);
MARK_REF_T(::GlobalNamespace::GameObjectFunctions_Bindings___c*);
MARK_REF_T(::GlobalNamespace::JSON_Bindings___c*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*);
MARK_REF_T(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings*, "", "Bindings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_AIAgentFunctions*, "", "Bindings/AIAgentFunctions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_Components*, "", "Bindings/Components");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_DataSaveUtils*, "", "Bindings/DataSaveUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_GameObjectFunctions*, "", "Bindings/GameObjectFunctions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_GrabbableEntityFunctions*, "", "Bindings/GrabbableEntityFunctions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_JSON*, "", "Bindings/JSON");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_LuaEmit*, "", "Bindings/LuaEmit");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_OnlineFunctions*, "", "Bindings/OnlineFunctions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_PlayerFunctions*, "", "Bindings/PlayerFunctions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_PlayerUtils*, "", "Bindings/PlayerUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_QuatFunctions*, "", "Bindings/QuatFunctions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_RayCastUtils*, "", "Bindings/RayCastUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_Vec3Functions*, "", "Bindings/Vec3Functions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*, "", "Bindings/Components/LuauAnimatorBindings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*, "", "Bindings/Components/LuauAudioSourceBindings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Components_Bindings_LuauLightBindings*, "", "Bindings/Components/LuauLightBindings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*, "", "Bindings/Components/LuauParticleSystemBindings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameObjectFunctions_Bindings___c*, "", "Bindings/GameObjectFunctions/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JSON_Bindings___c*, "", "Bindings/JSON/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*, "", "Bindings/OnlineFunctions/CachedInventoryItem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*, "", "Bindings/OnlineFunctions/CachedOffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*, "", "Bindings/OnlineFunctions/<>c__DisplayClass11_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*, "", "Bindings/OnlineFunctions/<>c__DisplayClass11_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*, "", "Bindings/OnlineFunctions/<>c__DisplayClass13_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*, "", "Bindings/OnlineFunctions/<>c__DisplayClass13_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*, "", "Bindings/OnlineFunctions/<>c__DisplayClass14_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*, "", "Bindings/OnlineFunctions/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*, "", "Bindings/OnlineFunctions/<>c__DisplayClass3_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*, "", "Bindings/OnlineFunctions/<>c__DisplayClass4_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*, "", "Bindings/OnlineFunctions/<>c__DisplayClass4_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*, "", "Bindings/QuatFunctions/Eq_00004DF7$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/Eq_00004DF7$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*, "", "Bindings/QuatFunctions/Euler_00004DFC$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/Euler_00004DFC$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*, "", "Bindings/QuatFunctions/FromDirection_00004DFA$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/FromDirection_00004DFA$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*, "", "Bindings/QuatFunctions/FromEuler_00004DF9$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/FromEuler_00004DF9$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*, "", "Bindings/QuatFunctions/GetUpVector_00004DFB$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/GetUpVector_00004DFB$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*, "", "Bindings/QuatFunctions/Mul_00004DF6$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/Mul_00004DF6$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*, "", "Bindings/QuatFunctions/New_00004DF5$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*, "", "Bindings/QuatFunctions/New_00004DF5$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*, "", "Bindings/Vec3Functions/Add_00004DE2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Add_00004DE2$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*, "", "Bindings/Vec3Functions/Cross_00004DEA$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Cross_00004DEA$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*, "", "Bindings/Vec3Functions/Distance_00004DEF$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Distance_00004DEF$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*, "", "Bindings/Vec3Functions/Div_00004DE5$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Div_00004DE5$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*, "", "Bindings/Vec3Functions/Dot_00004DE9$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Dot_00004DE9$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*, "", "Bindings/Vec3Functions/Eq_00004DE7$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Eq_00004DE7$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*, "", "Bindings/Vec3Functions/Length_00004DEC$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Length_00004DEC$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*, "", "Bindings/Vec3Functions/Lerp_00004DF0$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Lerp_00004DF0$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*, "", "Bindings/Vec3Functions/Mul_00004DE4$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Mul_00004DE4$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*, "", "Bindings/Vec3Functions/NearlyEqual_00004DF4$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/NearlyEqual_00004DF4$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*, "", "Bindings/Vec3Functions/New_00004DE1$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/New_00004DE1$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*, "", "Bindings/Vec3Functions/Normalize_00004DED$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Normalize_00004DED$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*, "", "Bindings/Vec3Functions/OneVector_00004DF3$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/OneVector_00004DF3$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*, "", "Bindings/Vec3Functions/Project_00004DEB$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Project_00004DEB$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*, "", "Bindings/Vec3Functions/Rotate_00004DF1$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Rotate_00004DF1$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*, "", "Bindings/Vec3Functions/SafeNormal_00004DEE$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/SafeNormal_00004DEE$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*, "", "Bindings/Vec3Functions/Sub_00004DE3$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Sub_00004DE3$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*, "", "Bindings/Vec3Functions/Unm_00004DE6$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/Unm_00004DE6$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*, "", "Bindings/Vec3Functions/ZeroVector_00004DF2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*, "", "Bindings/Vec3Functions/ZeroVector_00004DF2$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings
class CORDL_TYPE Bindings : public ::System::Object {
public:
// Declarations
using AIAgentFunctions = ::GlobalNamespace::Bindings_AIAgentFunctions;

using Components = ::GlobalNamespace::Bindings_Components;

using DataSaveUtils = ::GlobalNamespace::Bindings_DataSaveUtils;

using GameObjectFunctions = ::GlobalNamespace::Bindings_GameObjectFunctions;

using GorillaLocomotionSettings = ::GlobalNamespace::Bindings_GorillaLocomotionSettings;

using GrabbableEntityFunctions = ::GlobalNamespace::Bindings_GrabbableEntityFunctions;

using JSON = ::GlobalNamespace::Bindings_JSON;

using LuaEmit = ::GlobalNamespace::Bindings_LuaEmit;

using LuauAIAgent = ::GlobalNamespace::Bindings_LuauAIAgent;

using LuauGameObject = ::GlobalNamespace::Bindings_LuauGameObject;

using LuauGameObjectInitialState = ::GlobalNamespace::Bindings_LuauGameObjectInitialState;

using LuauGrabbableEntity = ::GlobalNamespace::Bindings_LuauGrabbableEntity;

using LuauPlayer = ::GlobalNamespace::Bindings_LuauPlayer;

using LuauRoomState = ::GlobalNamespace::Bindings_LuauRoomState;

using MInventoryItem = ::GlobalNamespace::Bindings_MInventoryItem;

using MOnlineError = ::GlobalNamespace::Bindings_MOnlineError;

using OnlineFunctions = ::GlobalNamespace::Bindings_OnlineFunctions;

using PlayerFunctions = ::GlobalNamespace::Bindings_PlayerFunctions;

using PlayerInput = ::GlobalNamespace::Bindings_PlayerInput;

using PlayerUtils = ::GlobalNamespace::Bindings_PlayerUtils;

using QuatFunctions = ::GlobalNamespace::Bindings_QuatFunctions;

using RayCastUtils = ::GlobalNamespace::Bindings_RayCastUtils;

using Vec3Functions = ::GlobalNamespace::Bindings_Vec3Functions;

/// @brief Field LocalPlayerInput, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LocalPlayerInput, put=setStaticF_LocalPlayerInput)) ::GlobalNamespace::Bindings_PlayerInput*  LocalPlayerInput;

/// @brief Field LocomotionSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LocomotionSettings, put=setStaticF_LocomotionSettings)) ::GlobalNamespace::Bindings_GorillaLocomotionSettings*  LocomotionSettings;

/// @brief Field LuauAIAgentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauAIAgentList, put=setStaticF_LuauAIAgentList)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  LuauAIAgentList;

/// @brief Field LuauGameObjectDepthList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauGameObjectDepthList, put=setStaticF_LuauGameObjectDepthList)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>*  LuauGameObjectDepthList;

/// @brief Field LuauGameObjectList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauGameObjectList, put=setStaticF_LuauGameObjectList)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>*  LuauGameObjectList;

/// @brief Field LuauGameObjectListReverse, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauGameObjectListReverse, put=setStaticF_LuauGameObjectListReverse)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>*  LuauGameObjectListReverse;

/// @brief Field LuauGameObjectStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauGameObjectStates, put=setStaticF_LuauGameObjectStates)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>*  LuauGameObjectStates;

/// @brief Field LuauGrabbablesList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauGrabbablesList, put=setStaticF_LuauGrabbablesList)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  LuauGrabbablesList;

/// @brief Field LuauPlayerList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauPlayerList, put=setStaticF_LuauPlayerList)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  LuauPlayerList;

/// @brief Field LuauTriggerCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauTriggerCallbacks, put=setStaticF_LuauTriggerCallbacks)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  LuauTriggerCallbacks;

/// @brief Field LuauVRRigList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuauVRRigList, put=setStaticF_LuauVRRigList)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>*  LuauVRRigList;

/// @brief Field RoomState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RoomState, put=setStaticF_RoomState)) ::GlobalNamespace::Bindings_LuauRoomState*  RoomState;

/// @brief Method AIAgentBuilder, addr 0x5a73188, size 0x5e8, virtual false, abstract: false, final false
static inline void AIAgentBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GameObjectBuilder, addr 0x5a729fc, size 0x78c, virtual false, abstract: false, final false
static inline void GameObjectBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GorillaLocomotionSettingsBuilder, addr 0x5a71e30, size 0x31c, virtual false, abstract: false, final false
static inline void GorillaLocomotionSettingsBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GrabbableEntityBuilder, addr 0x5a73770, size 0x520, virtual false, abstract: false, final false
static inline void GrabbableEntityBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method InventoryItemBuilder, addr 0x5a73c90, size 0x284, virtual false, abstract: false, final false
static inline void InventoryItemBuilder(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method LuaPlaySound, addr 0x5a74e20, size 0x228, virtual false, abstract: false, final false
static inline int32_t LuaPlaySound(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method LuaStartVibration, addr 0x5a74d2c, size 0xf4, virtual false, abstract: false, final false
static inline int32_t LuaStartVibration(::GlobalNamespace::lua_State*  L) ;

/// @brief Method OnlineErrorBuilder, addr 0x5a73f14, size 0x20c, virtual false, abstract: false, final false
static inline void OnlineErrorBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method OnlineFunctionsBuilder, addr 0x5a74120, size 0x2b0, virtual false, abstract: false, final false
static inline void OnlineFunctionsBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method PlayerBuilder, addr 0x5a724d0, size 0x52c, virtual false, abstract: false, final false
static inline void PlayerBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method PlayerInputBuilder, addr 0x5a7214c, size 0x384, virtual false, abstract: false, final false
static inline void PlayerInputBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method QuatBuilder, addr 0x5a75c6c, size 0x620, virtual false, abstract: false, final false
static inline void QuatBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method RoomStateBuilder, addr 0x5a743d0, size 0x360, virtual false, abstract: false, final false
static inline void RoomStateBuilder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method UpdateInputs, addr 0x5a74910, size 0x1e8, virtual false, abstract: false, final false
static inline void UpdateInputs() ;

/// @brief Method UpdateRoomState, addr 0x5a7628c, size 0x74, virtual false, abstract: false, final false
static inline void UpdateRoomState() ;

/// @brief Method Vec3Builder, addr 0x5a75048, size 0xc24, virtual false, abstract: false, final false
static inline void Vec3Builder(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Bindings_PlayerInput* getStaticF_LocalPlayerInput() ;

static inline ::GlobalNamespace::Bindings_GorillaLocomotionSettings* getStaticF_LocomotionSettings() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>* getStaticF_LuauAIAgentList() ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>* getStaticF_LuauGameObjectDepthList() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>* getStaticF_LuauGameObjectList() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>* getStaticF_LuauGameObjectListReverse() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>* getStaticF_LuauGameObjectStates() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>* getStaticF_LuauGrabbablesList() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>* getStaticF_LuauPlayerList() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>* getStaticF_LuauTriggerCallbacks() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>* getStaticF_LuauVRRigList() ;

static inline ::GlobalNamespace::Bindings_LuauRoomState* getStaticF_RoomState() ;

static inline void setStaticF_LocalPlayerInput(::GlobalNamespace::Bindings_PlayerInput*  value) ;

static inline void setStaticF_LocomotionSettings(::GlobalNamespace::Bindings_GorillaLocomotionSettings*  value) ;

static inline void setStaticF_LuauAIAgentList(::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  value) ;

static inline void setStaticF_LuauGameObjectDepthList(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>*  value) ;

static inline void setStaticF_LuauGameObjectList(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>*  value) ;

static inline void setStaticF_LuauGameObjectListReverse(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_LuauGameObjectStates(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>*  value) ;

static inline void setStaticF_LuauGrabbablesList(::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  value) ;

static inline void setStaticF_LuauPlayerList(::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  value) ;

static inline void setStaticF_LuauTriggerCallbacks(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value) ;

static inline void setStaticF_LuauVRRigList(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_RoomState(::GlobalNamespace::Bindings_LuauRoomState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings(Bindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings(Bindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3201};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions
class CORDL_TYPE Bindings_OnlineFunctions : public ::System::Object {
public:
// Declarations
using BackendCallState = ::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState;

using CachedInventoryItem = ::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem;

using CachedOffer = ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer;

using CachedOfferDelta = ::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta;

using __c__DisplayClass11_0 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0;

using __c__DisplayClass11_1 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1;

using __c__DisplayClass13_0 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0;

using __c__DisplayClass13_1 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1;

using __c__DisplayClass14_0 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0;

using __c__DisplayClass3_0 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0;

using __c__DisplayClass3_1 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1;

using __c__DisplayClass4_0 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0;

using __c__DisplayClass4_1 = ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1;

/// @brief Field BackendCallStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BackendCallStates, put=setStaticF_BackendCallStates)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>*  BackendCallStates;

/// @brief Field CachedInventory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CachedInventory, put=setStaticF_CachedInventory)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>*  CachedInventory;

/// @brief Field CachedStore, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CachedStore, put=setStaticF_CachedStore)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>*  CachedStore;

/// @brief Field VStumpMothershipOfferDisplayId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VStumpMothershipOfferDisplayId, put=setStaticF_VStumpMothershipOfferDisplayId)) ::StringW  VStumpMothershipOfferDisplayId;

/// @brief Field _consentInFlight, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__consentInFlight, put=setStaticF__consentInFlight)) bool  _consentInFlight;

/// @brief Method ClearBackendFunctionInFlight, addr 0x5a8c644, size 0xe0, virtual false, abstract: false, final false
static inline void ClearBackendFunctionInFlight(::StringW  Key) ;

/// @brief Method DispatchOnlineError, addr 0x5a8baf4, size 0x1f0, virtual false, abstract: false, final false
static inline void DispatchOnlineError(::GlobalNamespace::lua_State*  L, int32_t  errorCallbackRID, ::GlobalNamespace::LuauScriptRunner*  runner, ::StringW  name, ::StringW  message, ::StringW  errorCode, int32_t  httpCode) ;

/// @brief Method FindAliveScriptRunner, addr 0x5a8c378, size 0x178, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LuauScriptRunner* FindAliveScriptRunner(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetInventoryForPlayer, addr 0x5a8a610, size 0x348, virtual false, abstract: false, final false
static inline int32_t GetInventoryForPlayer(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetLocalPlayerInventory, addr 0x5a8a3d8, size 0x238, virtual false, abstract: false, final false
static inline int32_t GetLocalPlayerInventory(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method LoadStorefront, addr 0x5a8a958, size 0x238, virtual false, abstract: false, final false
static inline int32_t LoadStorefront(::GlobalNamespace::lua_State*  L) ;

/// @brief Method RateLimitBackendFunction, addr 0x5a8c0d4, size 0x29c, virtual false, abstract: false, final false
static inline bool RateLimitBackendFunction(::System::Func_1<bool>*  Action, ::StringW  Key) ;

/// @brief Method ResetOnlineFunctionsState, addr 0x5a8c4f0, size 0xb0, virtual false, abstract: false, final false
static inline void ResetOnlineFunctionsState() ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method TryConsume, addr 0x5a8b5fc, size 0x4f8, virtual false, abstract: false, final false
static inline int32_t TryConsume(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method TryPurchase, addr 0x5a8ab90, size 0xa6c, virtual false, abstract: false, final false
static inline int32_t TryPurchase(::GlobalNamespace::lua_State*  L) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>* getStaticF_BackendCallStates() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>* getStaticF_CachedInventory() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>* getStaticF_CachedStore() ;

static inline ::StringW getStaticF_VStumpMothershipOfferDisplayId() ;

static inline bool getStaticF__consentInFlight() ;

static inline void setStaticF_BackendCallStates(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>*  value) ;

static inline void setStaticF_CachedInventory(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>*  value) ;

static inline void setStaticF_CachedStore(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>*  value) ;

static inline void setStaticF_VStumpMothershipOfferDisplayId(::StringW  value) ;

static inline void setStaticF__consentInFlight(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_OnlineFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_OnlineFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_OnlineFunctions(Bindings_OnlineFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_OnlineFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_OnlineFunctions(Bindings_OnlineFunctions const& ) = delete;

/// @brief Field BackendFunctionCooldownSeconds offset 0xffffffff size 0x4
static constexpr float_t  BackendFunctionCooldownSeconds{static_cast<float_t>(5.0f)};

/// @brief Field BackendFunctionInFlightTimeoutSeconds offset 0xffffffff size 0x4
static constexpr float_t  BackendFunctionInFlightTimeoutSeconds{static_cast<float_t>(30.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_OnlineFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass4_1
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass4_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*  CS$__8__locals1;

/// @brief Field callbackRID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_callbackRID, put=__cordl_internal_set_callbackRID)) int32_t  callbackRID;

/// @brief Field errorCallbackRID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCallbackRID, put=__cordl_internal_set_errorCallbackRID)) int32_t  errorCallbackRID;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1* New_ctor() ;

/// @brief Method <GetInventoryForPlayer>b__1, addr 0x5a904f0, size 0x5bc, virtual false, abstract: false, final false
inline void _GetInventoryForPlayer_b__1(::GlobalNamespace::MothershipGetMergedInventoryResponse*  Response) ;

/// @brief Method <GetInventoryForPlayer>b__2, addr 0x5a90aac, size 0x234, virtual false, abstract: false, final false
inline void _GetInventoryForPlayer_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  code) ;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_callbackRID() const;

constexpr int32_t& __cordl_internal_get_callbackRID() ;

constexpr int32_t const& __cordl_internal_get_errorCallbackRID() const;

constexpr int32_t& __cordl_internal_get_errorCallbackRID() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*  value) ;

constexpr void __cordl_internal_set_callbackRID(int32_t  value) ;

constexpr void __cordl_internal_set_errorCallbackRID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a904e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass4_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass4_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass4_1(OnlineFunctions_Bindings___c__DisplayClass4_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass4_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass4_1(OnlineFunctions_Bindings___c__DisplayClass4_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3199};

/// @brief Field callbackRID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___callbackRID;

/// @brief Field errorCallbackRID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___errorCallbackRID;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1, ___callbackRID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1, ___errorCallbackRID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass4_0
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::GlobalNamespace::lua_State*  L;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <GetInventoryForPlayer>b__0, addr 0x5a900e0, size 0x408, virtual false, abstract: false, final false
inline bool _GetInventoryForPlayer_b__0() ;

constexpr ::GlobalNamespace::lua_State* const& __cordl_internal_get_L() const;

constexpr ::GlobalNamespace::lua_State*& __cordl_internal_get_L() ;

constexpr void __cordl_internal_set_L(::GlobalNamespace::lua_State*  value) ;

/// @brief Method .ctor, addr 0x5a8c370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass4_0(OnlineFunctions_Bindings___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass4_0(OnlineFunctions_Bindings___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3198};

/// @brief Field L, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::lua_State*  ___L;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0, ___L) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass3_1
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass3_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*  CS$__8__locals1;

/// @brief Field callbackRID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_callbackRID, put=__cordl_internal_set_callbackRID)) int32_t  callbackRID;

/// @brief Field errorCallbackRID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCallbackRID, put=__cordl_internal_set_errorCallbackRID)) int32_t  errorCallbackRID;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1* New_ctor() ;

/// @brief Method <GetLocalPlayerInventory>b__1, addr 0x5a8f480, size 0xa2c, virtual false, abstract: false, final false
inline void _GetLocalPlayerInventory_b__1(::GlobalNamespace::MothershipGetInventoryResponse*  Response) ;

/// @brief Method <GetLocalPlayerInventory>b__2, addr 0x5a8feac, size 0x234, virtual false, abstract: false, final false
inline void _GetLocalPlayerInventory_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  code) ;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_callbackRID() const;

constexpr int32_t& __cordl_internal_get_callbackRID() ;

constexpr int32_t const& __cordl_internal_get_errorCallbackRID() const;

constexpr int32_t& __cordl_internal_get_errorCallbackRID() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*  value) ;

constexpr void __cordl_internal_set_callbackRID(int32_t  value) ;

constexpr void __cordl_internal_set_errorCallbackRID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a8f478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass3_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass3_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass3_1(OnlineFunctions_Bindings___c__DisplayClass3_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass3_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass3_1(OnlineFunctions_Bindings___c__DisplayClass3_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3197};

/// @brief Field callbackRID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___callbackRID;

/// @brief Field errorCallbackRID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___errorCallbackRID;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1, ___callbackRID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1, ___errorCallbackRID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass3_0
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::GlobalNamespace::lua_State*  L;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <GetLocalPlayerInventory>b__0, addr 0x5a8f2f4, size 0x184, virtual false, abstract: false, final false
inline bool _GetLocalPlayerInventory_b__0() ;

constexpr ::GlobalNamespace::lua_State* const& __cordl_internal_get_L() const;

constexpr ::GlobalNamespace::lua_State*& __cordl_internal_get_L() ;

constexpr void __cordl_internal_set_L(::GlobalNamespace::lua_State*  value) ;

/// @brief Method .ctor, addr 0x5a8c0cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass3_0(OnlineFunctions_Bindings___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass3_0(OnlineFunctions_Bindings___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3196};

/// @brief Field L, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::lua_State*  ___L;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0, ___L) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass14_0
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::GlobalNamespace::lua_State*  L;

/// @brief Field callbackRID, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_callbackRID, put=__cordl_internal_set_callbackRID)) int32_t  callbackRID;

/// @brief Field entitlementId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entitlementId, put=__cordl_internal_set_entitlementId)) ::StringW  entitlementId;

/// @brief Field errorCallbackRID, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCallbackRID, put=__cordl_internal_set_errorCallbackRID)) int32_t  errorCallbackRID;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <TryConsume>b__0, addr 0x5a8ed90, size 0x2f8, virtual false, abstract: false, final false
inline void _TryConsume_b__0(::GlobalNamespace::MothershipConsumeConsumableResponse*  Response) ;

/// @brief Method <TryConsume>b__1, addr 0x5a8f088, size 0x26c, virtual false, abstract: false, final false
inline void _TryConsume_b__1(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode) ;

constexpr ::GlobalNamespace::lua_State* const& __cordl_internal_get_L() const;

constexpr ::GlobalNamespace::lua_State*& __cordl_internal_get_L() ;

constexpr int32_t const& __cordl_internal_get_callbackRID() const;

constexpr int32_t& __cordl_internal_get_callbackRID() ;

constexpr ::StringW const& __cordl_internal_get_entitlementId() const;

constexpr ::StringW& __cordl_internal_get_entitlementId() ;

constexpr int32_t const& __cordl_internal_get_errorCallbackRID() const;

constexpr int32_t& __cordl_internal_get_errorCallbackRID() ;

constexpr void __cordl_internal_set_L(::GlobalNamespace::lua_State*  value) ;

constexpr void __cordl_internal_set_callbackRID(int32_t  value) ;

constexpr void __cordl_internal_set_entitlementId(::StringW  value) ;

constexpr void __cordl_internal_set_errorCallbackRID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a8c63c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass14_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass14_0(OnlineFunctions_Bindings___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass14_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass14_0(OnlineFunctions_Bindings___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3195};

/// @brief Field L, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::lua_State*  ___L;

/// @brief Field errorCallbackRID, offset: 0x18, size: 0x4, def value: None
 int32_t  ___errorCallbackRID;

/// @brief Field callbackRID, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___callbackRID;

/// @brief Field entitlementId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___entitlementId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0, ___L) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0, ___errorCallbackRID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0, ___callbackRID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0, ___entitlementId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass13_1
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass13_1 : public ::System::Object {
public:
// Declarations
/// @brief Field AsyncWorkComplete, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AsyncWorkComplete, put=__cordl_internal_set_AsyncWorkComplete)) ::System::Action_1<::StringW>*  AsyncWorkComplete;

/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*  CS$__8__locals1;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1* New_ctor() ;

/// @brief Method <TryPurchase>b__1, addr 0x5a8e624, size 0x478, virtual false, abstract: false, final false
inline void _TryPurchase_b__1(::GlobalNamespace::MothershipPurchaseOfferResponse*  Response) ;

/// @brief Method <TryPurchase>b__2, addr 0x5a8ea9c, size 0x2f4, virtual false, abstract: false, final false
inline void _TryPurchase_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_AsyncWorkComplete() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_AsyncWorkComplete() ;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr void __cordl_internal_set_AsyncWorkComplete(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*  value) ;

/// @brief Method .ctor, addr 0x5a8e61c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass13_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass13_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass13_1(OnlineFunctions_Bindings___c__DisplayClass13_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass13_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass13_1(OnlineFunctions_Bindings___c__DisplayClass13_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3194};

/// @brief Field AsyncWorkComplete, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___AsyncWorkComplete;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1, ___AsyncWorkComplete) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass13_0
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::GlobalNamespace::lua_State*  L;

/// @brief Field callbackRID, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_callbackRID, put=__cordl_internal_set_callbackRID)) int32_t  callbackRID;

/// @brief Field errorCallbackRID, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCallbackRID, put=__cordl_internal_set_errorCallbackRID)) int32_t  errorCallbackRID;

/// @brief Field offerId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_offerId, put=__cordl_internal_set_offerId)) ::StringW  offerId;

/// @brief Field offerToPurchase, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_offerToPurchase, put=__cordl_internal_set_offerToPurchase)) ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*  offerToPurchase;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <TryPurchase>b__0, addr 0x5a8e340, size 0x2dc, virtual false, abstract: false, final false
inline void _TryPurchase_b__0(bool  Consented, ::System::Action_1<::StringW>*  AsyncWorkComplete) ;

constexpr ::GlobalNamespace::lua_State* const& __cordl_internal_get_L() const;

constexpr ::GlobalNamespace::lua_State*& __cordl_internal_get_L() ;

constexpr int32_t const& __cordl_internal_get_callbackRID() const;

constexpr int32_t& __cordl_internal_get_callbackRID() ;

constexpr int32_t const& __cordl_internal_get_errorCallbackRID() const;

constexpr int32_t& __cordl_internal_get_errorCallbackRID() ;

constexpr ::StringW const& __cordl_internal_get_offerId() const;

constexpr ::StringW& __cordl_internal_get_offerId() ;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer* const& __cordl_internal_get_offerToPurchase() const;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*& __cordl_internal_get_offerToPurchase() ;

constexpr void __cordl_internal_set_L(::GlobalNamespace::lua_State*  value) ;

constexpr void __cordl_internal_set_callbackRID(int32_t  value) ;

constexpr void __cordl_internal_set_errorCallbackRID(int32_t  value) ;

constexpr void __cordl_internal_set_offerId(::StringW  value) ;

constexpr void __cordl_internal_set_offerToPurchase(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*  value) ;

/// @brief Method .ctor, addr 0x5a8c5a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass13_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass13_0(OnlineFunctions_Bindings___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass13_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass13_0(OnlineFunctions_Bindings___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3193};

/// @brief Field L, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::lua_State*  ___L;

/// @brief Field callbackRID, offset: 0x18, size: 0x4, def value: None
 int32_t  ___callbackRID;

/// @brief Field errorCallbackRID, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___errorCallbackRID;

/// @brief Field offerId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___offerId;

/// @brief Field offerToPurchase, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*  ___offerToPurchase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0, ___L) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0, ___callbackRID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0, ___errorCallbackRID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0, ___offerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0, ___offerToPurchase) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass11_1
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass11_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*  CS$__8__locals1;

/// @brief Field callbackRID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_callbackRID, put=__cordl_internal_set_callbackRID)) int32_t  callbackRID;

/// @brief Field errorCallbackRID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCallbackRID, put=__cordl_internal_set_errorCallbackRID)) int32_t  errorCallbackRID;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1* New_ctor() ;

/// @brief Method <LoadStorefront>b__1, addr 0x5a8ca8c, size 0x1680, virtual false, abstract: false, final false
inline void _LoadStorefront_b__1(::GlobalNamespace::MothershipGetStorefrontResponse*  Response) ;

/// @brief Method <LoadStorefront>b__2, addr 0x5a8e10c, size 0x234, virtual false, abstract: false, final false
inline void _LoadStorefront_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode) ;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_callbackRID() const;

constexpr int32_t& __cordl_internal_get_callbackRID() ;

constexpr int32_t const& __cordl_internal_get_errorCallbackRID() const;

constexpr int32_t& __cordl_internal_get_errorCallbackRID() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*  value) ;

constexpr void __cordl_internal_set_callbackRID(int32_t  value) ;

constexpr void __cordl_internal_set_errorCallbackRID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a8ca84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass11_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass11_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass11_1(OnlineFunctions_Bindings___c__DisplayClass11_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass11_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass11_1(OnlineFunctions_Bindings___c__DisplayClass11_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3192};

/// @brief Field callbackRID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___callbackRID;

/// @brief Field errorCallbackRID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___errorCallbackRID;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1, ___callbackRID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1, ___errorCallbackRID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/<>c__DisplayClass11_0
class CORDL_TYPE OnlineFunctions_Bindings___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::GlobalNamespace::lua_State*  L;

static inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <LoadStorefront>b__0, addr 0x5a8c8cc, size 0x1b8, virtual false, abstract: false, final false
inline bool _LoadStorefront_b__0() ;

constexpr ::GlobalNamespace::lua_State* const& __cordl_internal_get_L() const;

constexpr ::GlobalNamespace::lua_State*& __cordl_internal_get_L() ;

constexpr void __cordl_internal_set_L(::GlobalNamespace::lua_State*  value) ;

/// @brief Method .ctor, addr 0x5a8c5a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings___c__DisplayClass11_0(OnlineFunctions_Bindings___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings___c__DisplayClass11_0(OnlineFunctions_Bindings___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3191};

/// @brief Field L, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::lua_State*  ___L;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0, ___L) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/CachedOffer
class CORDL_TYPE OnlineFunctions_Bindings_CachedOffer : public ::System::Object {
public:
// Declarations
/// @brief Field Credits, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Credits, put=__cordl_internal_set_Credits)) ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  Credits;

/// @brief Field Debits, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Debits, put=__cordl_internal_set_Debits)) ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  Debits;

/// @brief Field DisplayDescription, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayDescription, put=__cordl_internal_set_DisplayDescription)) ::StringW  DisplayDescription;

/// @brief Field DisplayIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_DisplayIndex, put=__cordl_internal_set_DisplayIndex)) int32_t  DisplayIndex;

/// @brief Field DisplayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field OfferId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OfferId, put=__cordl_internal_set_OfferId)) ::StringW  OfferId;

/// @brief Field PurchaseAllowed, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PurchaseAllowed, put=__cordl_internal_set_PurchaseAllowed)) bool  PurchaseAllowed;

static inline ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>* const& __cordl_internal_get_Credits() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*& __cordl_internal_get_Credits() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>* const& __cordl_internal_get_Debits() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*& __cordl_internal_get_Debits() ;

constexpr ::StringW const& __cordl_internal_get_DisplayDescription() const;

constexpr ::StringW& __cordl_internal_get_DisplayDescription() ;

constexpr int32_t const& __cordl_internal_get_DisplayIndex() const;

constexpr int32_t& __cordl_internal_get_DisplayIndex() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_OfferId() const;

constexpr ::StringW& __cordl_internal_get_OfferId() ;

constexpr bool const& __cordl_internal_get_PurchaseAllowed() const;

constexpr bool& __cordl_internal_get_PurchaseAllowed() ;

constexpr void __cordl_internal_set_Credits(::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  value) ;

constexpr void __cordl_internal_set_Debits(::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  value) ;

constexpr void __cordl_internal_set_DisplayDescription(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayIndex(int32_t  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_OfferId(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseAllowed(bool  value) ;

/// @brief Method .ctor, addr 0x5a8c820, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings_CachedOffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings_CachedOffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings_CachedOffer(OnlineFunctions_Bindings_CachedOffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings_CachedOffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings_CachedOffer(OnlineFunctions_Bindings_CachedOffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3189};

/// @brief Field OfferId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___OfferId;

/// @brief Field DisplayIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___DisplayIndex;

/// @brief Field PurchaseAllowed, offset: 0x1c, size: 0x1, def value: None
 bool  ___PurchaseAllowed;

/// @brief Field DisplayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field DisplayDescription, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DisplayDescription;

/// @brief Field Credits, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  ___Credits;

/// @brief Field Debits, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  ___Debits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___OfferId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___DisplayIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___PurchaseAllowed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___DisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___DisplayDescription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___Credits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer, ___Debits) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/OnlineFunctions/CachedInventoryItem
class CORDL_TYPE OnlineFunctions_Bindings_CachedInventoryItem : public ::System::Object {
public:
// Declarations
/// @brief Field DisplayDescription, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayDescription, put=__cordl_internal_set_DisplayDescription)) ::StringW  DisplayDescription;

/// @brief Field DisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field InGameId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InGameId, put=__cordl_internal_set_InGameId)) ::StringW  InGameId;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Quantity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Quantity, put=__cordl_internal_set_Quantity)) int32_t  Quantity;

/// @brief Field ID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) ::StringW  _cordl_ID;

static inline ::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayDescription() const;

constexpr ::StringW& __cordl_internal_get_DisplayDescription() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_InGameId() const;

constexpr ::StringW& __cordl_internal_get_InGameId() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr int32_t const& __cordl_internal_get_Quantity() const;

constexpr int32_t& __cordl_internal_get_Quantity() ;

constexpr ::StringW const& __cordl_internal_get__cordl_ID() const;

constexpr ::StringW& __cordl_internal_get__cordl_ID() ;

constexpr void __cordl_internal_set_DisplayDescription(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_InGameId(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Quantity(int32_t  value) ;

constexpr void __cordl_internal_set__cordl_ID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a8c818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings_CachedInventoryItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings_CachedInventoryItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnlineFunctions_Bindings_CachedInventoryItem(OnlineFunctions_Bindings_CachedInventoryItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnlineFunctions_Bindings_CachedInventoryItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnlineFunctions_Bindings_CachedInventoryItem(OnlineFunctions_Bindings_CachedInventoryItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3187};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Quantity, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Quantity;

/// @brief Field InGameId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___InGameId;

/// @brief Field DisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field DisplayDescription, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___DisplayDescription;

/// @brief Field ID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____cordl_ID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem, ___Quantity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem, ___InGameId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem, ___DisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem, ___DisplayDescription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem, ____cordl_ID) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Components
class CORDL_TYPE Bindings_Components : public ::System::Object {
public:
// Declarations
using LuauAnimatorBindings = ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings;

using LuauAudioSourceBindings = ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings;

using LuauLightBindings = ::GlobalNamespace::Components_Bindings_LuauLightBindings;

using LuauParticleSystemBindings = ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings;

/// @brief Field ComponentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComponentList, put=setStaticF_ComponentList)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*  ComponentList;

/// @brief Method Build, addr 0x5a889b0, size 0x28, virtual false, abstract: false, final false
static inline void Build(::GlobalNamespace::lua_State*  L) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>* getStaticF_ComponentList() ;

static inline void setStaticF_ComponentList(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_Components() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_Components", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_Components(Bindings_Components && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_Components", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_Components(Bindings_Components const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_Components) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Components/LuauAnimatorBindings
class CORDL_TYPE Components_Bindings_LuauAnimatorBindings : public ::System::Object {
public:
// Declarations
using LuauAnimator = ::GlobalNamespace::LuauAnimatorBindings_Components_Bindings_LuauAnimator;

/// @brief Method Builder, addr 0x5a891dc, size 0x2ac, virtual false, abstract: false, final false
static inline void Builder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GetAnimator, addr 0x5a8a2b4, size 0x124, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Animator> GetAnimator(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method reset, addr 0x5a8a230, size 0x84, virtual false, abstract: false, final false
static inline int32_t reset(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setSpeed, addr 0x5a8a074, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setSpeed(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method startPlayback, addr 0x5a8a118, size 0x8c, virtual false, abstract: false, final false
static inline int32_t startPlayback(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method stopPlayback, addr 0x5a8a1a4, size 0x8c, virtual false, abstract: false, final false
static inline int32_t stopPlayback(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Components_Bindings_LuauAnimatorBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauAnimatorBindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Components_Bindings_LuauAnimatorBindings(Components_Bindings_LuauAnimatorBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauAnimatorBindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Components_Bindings_LuauAnimatorBindings(Components_Bindings_LuauAnimatorBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Components_Bindings_LuauAnimatorBindings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Components/LuauLightBindings
class CORDL_TYPE Components_Bindings_LuauLightBindings : public ::System::Object {
public:
// Declarations
using LuauLight = ::GlobalNamespace::LuauLightBindings_Components_Bindings_LuauLight;

/// @brief Method Builder, addr 0x5a88f90, size 0x24c, virtual false, abstract: false, final false
static inline void Builder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GetLight, addr 0x5a89f6c, size 0x108, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Light> GetLight(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setColor, addr 0x5a89d44, size 0xe0, virtual false, abstract: false, final false
static inline int32_t setColor(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setIntensity, addr 0x5a89e24, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setIntensity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setRange, addr 0x5a89ec8, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setRange(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Components_Bindings_LuauLightBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauLightBindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Components_Bindings_LuauLightBindings(Components_Bindings_LuauLightBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauLightBindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Components_Bindings_LuauLightBindings(Components_Bindings_LuauLightBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Components_Bindings_LuauLightBindings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Components/LuauAudioSourceBindings
class CORDL_TYPE Components_Bindings_LuauAudioSourceBindings : public ::System::Object {
public:
// Declarations
using LuauAudioSource = ::GlobalNamespace::LuauAudioSourceBindings_Components_Bindings_LuauAudioSource;

/// @brief Method Builder, addr 0x5a88c24, size 0x36c, virtual false, abstract: false, final false
static inline void Builder(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetAudioSource, addr 0x5a89c3c, size 0x108, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioSource> GetAudioSource(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method play, addr 0x5a8987c, size 0x8c, virtual false, abstract: false, final false
static inline int32_t play(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setLoop, addr 0x5a899ac, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setLoop(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setMaxDistance, addr 0x5a89b98, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setMaxDistance(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setMinDistance, addr 0x5a89af4, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setMinDistance(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setPitch, addr 0x5a89a50, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setPitch(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method setVolume, addr 0x5a89908, size 0xa4, virtual false, abstract: false, final false
static inline int32_t setVolume(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Components_Bindings_LuauAudioSourceBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauAudioSourceBindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Components_Bindings_LuauAudioSourceBindings(Components_Bindings_LuauAudioSourceBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauAudioSourceBindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Components_Bindings_LuauAudioSourceBindings(Components_Bindings_LuauAudioSourceBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Components/LuauParticleSystemBindings
class CORDL_TYPE Components_Bindings_LuauParticleSystemBindings : public ::System::Object {
public:
// Declarations
using LuauParticleSystem = ::GlobalNamespace::LuauParticleSystemBindings_Components_Bindings_LuauParticleSystem;

/// @brief Method Builder, addr 0x5a889d8, size 0x24c, virtual false, abstract: false, final false
static inline void Builder(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GetParticleSystem, addr 0x5a89774, size 0x108, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ParticleSystem> GetParticleSystem(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method clear, addr 0x5a89638, size 0x8c, virtual false, abstract: false, final false
static inline int32_t clear(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method play, addr 0x5a89520, size 0x8c, virtual false, abstract: false, final false
static inline int32_t play(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method stop, addr 0x5a895ac, size 0x8c, virtual false, abstract: false, final false
static inline int32_t stop(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Components_Bindings_LuauParticleSystemBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauParticleSystemBindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Components_Bindings_LuauParticleSystemBindings(Components_Bindings_LuauParticleSystemBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Components_Bindings_LuauParticleSystemBindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Components_Bindings_LuauParticleSystemBindings(Components_Bindings_LuauParticleSystemBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/RayCastUtils
class CORDL_TYPE Bindings_RayCastUtils : public ::System::Object {
public:
// Declarations
/// @brief Field rayHit, offset 0xffffffff, size 0x2c 
 __declspec(property(get=getStaticF_rayHit, put=setStaticF_rayHit)) ::UnityEngine::RaycastHit  rayHit;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method RayCast, addr 0x5a88374, size 0x540, virtual false, abstract: false, final false
static inline int32_t RayCast(::GlobalNamespace::lua_State*  L) ;

static inline ::UnityEngine::RaycastHit getStaticF_rayHit() ;

static inline void setStaticF_rayHit(::UnityEngine::RaycastHit  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_RayCastUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_RayCastUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_RayCastUtils(Bindings_RayCastUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_RayCastUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_RayCastUtils(Bindings_RayCastUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_RayCastUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/DataSaveUtils
class CORDL_TYPE Bindings_DataSaveUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertForSave, addr 0x5a874f0, size 0x308, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* ConvertForSave(::System::Object*  value) ;

/// @brief Method SerializeQuaternion, addr 0x5a881fc, size 0x178, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JObject* SerializeQuaternion(::UnityEngine::Quaternion  value) ;

/// @brief Method SerializeVector3, addr 0x5a880c4, size 0x138, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JObject* SerializeVector3(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_DataSaveUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_DataSaveUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_DataSaveUtils(Bindings_DataSaveUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_DataSaveUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_DataSaveUtils(Bindings_DataSaveUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_DataSaveUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/PlayerUtils
class CORDL_TYPE Bindings_PlayerUtils : public ::System::Object {
public:
// Declarations
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetVelocity, addr 0x5a87fb4, size 0x110, virtual false, abstract: false, final false
static inline int32_t SetVelocity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method TeleportPlayer, addr 0x5a87d5c, size 0x258, virtual false, abstract: false, final false
static inline int32_t TeleportPlayer(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_PlayerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_PlayerUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_PlayerUtils(Bindings_PlayerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_PlayerUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_PlayerUtils(Bindings_PlayerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_PlayerUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/JSON
class CORDL_TYPE Bindings_JSON : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::JSON_Bindings___c;

/// @brief Field ModIODirectory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ModIODirectory, put=setStaticF_ModIODirectory)) ::StringW  ModIODirectory;

/// @brief Method CompareKeys, addr 0x5a86740, size 0x19c, virtual false, abstract: false, final false
static inline bool CompareKeys(::Newtonsoft::Json::Linq::JObject*  obj, ::System::Collections::Generic::HashSet_1<::StringW>*  set) ;

/// @brief Method ConsumeTable, addr 0x5a85dbc, size 0x5bc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>* ConsumeTable(::GlobalNamespace::lua_State*  L, int32_t  tableIndex) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method DataLoad, addr 0x5a85958, size 0x464, virtual false, abstract: false, final false
static inline int32_t DataLoad(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method DataSave, addr 0x5a85338, size 0x620, virtual false, abstract: false, final false
static inline int32_t DataSave(::GlobalNamespace::lua_State*  L) ;

/// @brief Method ParseStrictInt, addr 0x5a866cc, size 0x74, virtual false, abstract: false, final false
static inline int32_t ParseStrictInt(::StringW  input) ;

/// @brief Method PushTable, addr 0x5a87008, size 0x33c, virtual false, abstract: false, final false
static inline bool PushTable(::GlobalNamespace::lua_State*  L, ::Newtonsoft::Json::Linq::JObject*  table) ;

/// @brief Method TryPushValue, addr 0x5a868dc, size 0x72c, virtual false, abstract: false, final false
static inline bool TryPushValue(::GlobalNamespace::lua_State*  L, ::Newtonsoft::Json::Linq::JToken*  value) ;

static inline ::StringW getStaticF_ModIODirectory() ;

static inline void setStaticF_ModIODirectory(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_JSON() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_JSON", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_JSON(Bindings_JSON && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_JSON", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_JSON(Bindings_JSON const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_JSON) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/JSON/<>c
class CORDL_TYPE JSON_Bindings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::JSON_Bindings___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*  __9__3_0;

static inline ::GlobalNamespace::JSON_Bindings___c* New_ctor() ;

/// @brief Method <CompareKeys>b__3_0, addr 0x5a87d48, size 0x14, virtual false, abstract: false, final false
inline ::StringW _CompareKeys_b__3_0(::Newtonsoft::Json::Linq::JProperty*  p) ;

/// @brief Method .ctor, addr 0x5a87d40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::JSON_Bindings___c* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::GlobalNamespace::JSON_Bindings___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSON_Bindings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSON_Bindings___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JSON_Bindings___c(JSON_Bindings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSON_Bindings___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSON_Bindings___c(JSON_Bindings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JSON_Bindings___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions
class CORDL_TYPE Bindings_QuatFunctions : public ::System::Object {
public:
// Declarations
using Eq_00004DF7$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall;

using Eq_00004DF7$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate;

using Euler_00004DFC$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall;

using Euler_00004DFC$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate;

using FromDirection_00004DFA$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall;

using FromDirection_00004DFA$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate;

using FromEuler_00004DF9$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall;

using FromEuler_00004DF9$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate;

using GetUpVector_00004DFB$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall;

using GetUpVector_00004DFB$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate;

using Mul_00004DF6$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall;

using Mul_00004DF6$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate;

using New_00004DF5$BurstDirectCall = ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall;

using New_00004DF5$PostfixBurstDelegate = ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Eq, addr 0x5a835e4, size 0x4, virtual false, abstract: false, final false
static inline int32_t Eq(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Eq$BurstManaged, addr 0x5a83dec, size 0x130, virtual false, abstract: false, final false
static inline int32_t Eq$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Euler, addr 0x5a836d4, size 0x4, virtual false, abstract: false, final false
static inline int32_t Euler(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Euler$BurstManaged, addr 0x5a84344, size 0x168, virtual false, abstract: false, final false
static inline int32_t Euler$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FromDirection, addr 0x5a836cc, size 0x4, virtual false, abstract: false, final false
static inline int32_t FromDirection(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method FromDirection$BurstManaged, addr 0x5a84040, size 0x180, virtual false, abstract: false, final false
static inline int32_t FromDirection$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FromEuler, addr 0x5a836c8, size 0x4, virtual false, abstract: false, final false
static inline int32_t FromEuler(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method FromEuler$BurstManaged, addr 0x5a83f1c, size 0x124, virtual false, abstract: false, final false
static inline int32_t FromEuler$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetUpVector, addr 0x5a836d0, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetUpVector(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method GetUpVector$BurstManaged, addr 0x5a841c0, size 0x184, virtual false, abstract: false, final false
static inline int32_t GetUpVector$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Mul, addr 0x5a835e0, size 0x4, virtual false, abstract: false, final false
static inline int32_t Mul(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Mul$BurstManaged, addr 0x5a83c10, size 0x1dc, virtual false, abstract: false, final false
static inline int32_t Mul$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method New, addr 0x5a835dc, size 0x4, virtual false, abstract: false, final false
static inline int32_t New(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method New$BurstManaged, addr 0x5a83ae4, size 0x12c, virtual false, abstract: false, final false
static inline int32_t New$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method ToString, addr 0x5a835e8, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ToString(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_QuatFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_QuatFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_QuatFunctions(Bindings_QuatFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_QuatFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_QuatFunctions(Bindings_QuatFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_QuatFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/Euler_00004DFC$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a85320, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a85230, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83a50, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall(QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall(QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/Euler_00004DFC$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a851e8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a85208, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a851d4, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a85124, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate(QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate(QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/GetUpVector_00004DFB$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a8510c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a8501c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a839bc, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall(QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall(QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/GetUpVector_00004DFB$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a84fd4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a84ff4, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a84fc0, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a84f10, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate(QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate(QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3163};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/FromDirection_00004DFA$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a84ef8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a84e08, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83928, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall(QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall(QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3162};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/FromDirection_00004DFA$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a84dc0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a84de0, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a84dac, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a84cfc, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate(QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate(QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3161};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/FromEuler_00004DF9$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a84ce4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a84bf4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83894, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall(QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall(QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/FromEuler_00004DF9$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a84bac, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a84bcc, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a84b98, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a84ae8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate(QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate(QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/Eq_00004DF7$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a84ad0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a849e0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83800, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall(QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall(QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/Eq_00004DF7$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a84998, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a849b8, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a84984, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a848d4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate(QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate(QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/Mul_00004DF6$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a848bc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a847cc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a8376c, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall(QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall(QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/Mul_00004DF6$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a84784, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a847a4, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a84770, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a846c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate(QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate(QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/New_00004DF5$BurstDirectCall
class CORDL_TYPE QuatFunctions_Bindings_New_00004DF5$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a846a8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a845b8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a836d8, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_New_00004DF5$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_New_00004DF5$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_New_00004DF5$BurstDirectCall(QuatFunctions_Bindings_New_00004DF5$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_New_00004DF5$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_New_00004DF5$BurstDirectCall(QuatFunctions_Bindings_New_00004DF5$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/QuatFunctions/New_00004DF5$PostfixBurstDelegate
class CORDL_TYPE QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a84570, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a84590, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a8455c, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a844ac, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate(QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate(QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions
class CORDL_TYPE Bindings_Vec3Functions : public ::System::Object {
public:
// Declarations
using Add_00004DE2$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall;

using Add_00004DE2$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate;

using Cross_00004DEA$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall;

using Cross_00004DEA$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate;

using Distance_00004DEF$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall;

using Distance_00004DEF$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate;

using Div_00004DE5$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall;

using Div_00004DE5$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate;

using Dot_00004DE9$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall;

using Dot_00004DE9$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate;

using Eq_00004DE7$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall;

using Eq_00004DE7$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate;

using Length_00004DEC$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall;

using Length_00004DEC$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate;

using Lerp_00004DF0$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall;

using Lerp_00004DF0$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate;

using Mul_00004DE4$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall;

using Mul_00004DE4$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate;

using NearlyEqual_00004DF4$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall;

using NearlyEqual_00004DF4$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate;

using New_00004DE1$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall;

using New_00004DE1$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate;

using Normalize_00004DED$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall;

using Normalize_00004DED$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate;

using OneVector_00004DF3$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall;

using OneVector_00004DF3$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate;

using Project_00004DEB$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall;

using Project_00004DEB$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate;

using Rotate_00004DF1$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall;

using Rotate_00004DF1$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate;

using SafeNormal_00004DEE$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall;

using SafeNormal_00004DEE$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate;

using Sub_00004DE3$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall;

using Sub_00004DE3$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate;

using Unm_00004DE6$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall;

using Unm_00004DE6$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate;

using ZeroVector_00004DF2$BurstDirectCall = ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall;

using ZeroVector_00004DF2$PostfixBurstDelegate = ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Add, addr 0x5a7e44c, size 0x4, virtual false, abstract: false, final false
static inline int32_t Add(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Add$BurstManaged, addr 0x5a7f444, size 0x15c, virtual false, abstract: false, final false
static inline int32_t Add$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Cross, addr 0x5a7e554, size 0x4, virtual false, abstract: false, final false
static inline int32_t Cross(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Cross$BurstManaged, addr 0x5a7fddc, size 0x18c, virtual false, abstract: false, final false
static inline int32_t Cross$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Distance, addr 0x5a7e568, size 0x4, virtual false, abstract: false, final false
static inline int32_t Distance(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Distance$BurstManaged, addr 0x5a805c8, size 0x164, virtual false, abstract: false, final false
static inline int32_t Distance$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Div, addr 0x5a7e458, size 0x4, virtual false, abstract: false, final false
static inline int32_t Div(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Div$BurstManaged, addr 0x5a7f8b0, size 0x134, virtual false, abstract: false, final false
static inline int32_t Div$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Dot, addr 0x5a7e550, size 0x4, virtual false, abstract: false, final false
static inline int32_t Dot(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Dot$BurstManaged, addr 0x5a7fcc0, size 0x11c, virtual false, abstract: false, final false
static inline int32_t Dot$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Eq, addr 0x5a7e460, size 0x4, virtual false, abstract: false, final false
static inline int32_t Eq(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Eq$BurstManaged, addr 0x5a7fb00, size 0x134, virtual false, abstract: false, final false
static inline int32_t Eq$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Length, addr 0x5a7e55c, size 0x4, virtual false, abstract: false, final false
static inline int32_t Length(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Length$BurstManaged, addr 0x5a8016c, size 0x120, virtual false, abstract: false, final false
static inline int32_t Length$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Lerp, addr 0x5a7e56c, size 0x4, virtual false, abstract: false, final false
static inline int32_t Lerp(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Lerp$BurstManaged, addr 0x5a8072c, size 0x19c, virtual false, abstract: false, final false
static inline int32_t Lerp$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Mul, addr 0x5a7e454, size 0x4, virtual false, abstract: false, final false
static inline int32_t Mul(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Mul$BurstManaged, addr 0x5a7f6fc, size 0x130, virtual false, abstract: false, final false
static inline int32_t Mul$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method NearlyEqual, addr 0x5a7e57c, size 0x4, virtual false, abstract: false, final false
static inline int32_t NearlyEqual(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method NearlyEqual$BurstManaged, addr 0x5a80c2c, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t NearlyEqual$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method New, addr 0x5a7e448, size 0x4, virtual false, abstract: false, final false
static inline int32_t New(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method New$BurstManaged, addr 0x5a7f29c, size 0x114, virtual false, abstract: false, final false
static inline int32_t New$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Normalize, addr 0x5a7e560, size 0x4, virtual false, abstract: false, final false
static inline int32_t Normalize(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Normalize$BurstManaged, addr 0x5a8028c, size 0x180, virtual false, abstract: false, final false
static inline int32_t Normalize$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method OneVector, addr 0x5a7e578, size 0x4, virtual false, abstract: false, final false
static inline int32_t OneVector(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method OneVector$BurstManaged, addr 0x5a80b54, size 0xd8, virtual false, abstract: false, final false
static inline int32_t OneVector$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Project, addr 0x5a7e558, size 0x4, virtual false, abstract: false, final false
static inline int32_t Project(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Project$BurstManaged, addr 0x5a7ff68, size 0x204, virtual false, abstract: false, final false
static inline int32_t Project$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Rotate, addr 0x5a7e570, size 0x4, virtual false, abstract: false, final false
static inline int32_t Rotate(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Rotate$BurstManaged, addr 0x5a808c8, size 0x1bc, virtual false, abstract: false, final false
static inline int32_t Rotate$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SafeNormal, addr 0x5a7e564, size 0x4, virtual false, abstract: false, final false
static inline int32_t SafeNormal(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method SafeNormal$BurstManaged, addr 0x5a8040c, size 0x1bc, virtual false, abstract: false, final false
static inline int32_t SafeNormal$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Sub, addr 0x5a7e450, size 0x4, virtual false, abstract: false, final false
static inline int32_t Sub(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Sub$BurstManaged, addr 0x5a7f5a0, size 0x15c, virtual false, abstract: false, final false
static inline int32_t Sub$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method ToString, addr 0x5a7e464, size 0xec, virtual false, abstract: false, final false
static inline int32_t ToString(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Unm, addr 0x5a7e45c, size 0x4, virtual false, abstract: false, final false
static inline int32_t Unm(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Unm$BurstManaged, addr 0x5a7f9e4, size 0x11c, virtual false, abstract: false, final false
static inline int32_t Unm$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method ZeroVector, addr 0x5a7e574, size 0x4, virtual false, abstract: false, final false
static inline int32_t ZeroVector(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method ZeroVector$BurstManaged, addr 0x5a80a84, size 0xd0, virtual false, abstract: false, final false
static inline int32_t ZeroVector$BurstManaged(::GlobalNamespace::lua_State*  L) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_Vec3Functions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_Vec3Functions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_Vec3Functions(Bindings_Vec3Functions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_Vec3Functions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_Vec3Functions(Bindings_Vec3Functions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_Vec3Functions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/NearlyEqual_00004DF4$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a835c4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a834d4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7f208, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall(Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall(Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/NearlyEqual_00004DF4$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a8348c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a834ac, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83478, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a833c8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate(Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate(Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/OneVector_00004DF3$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a833b0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a832c0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7f0b0, size 0x158, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall(Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall(Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/OneVector_00004DF3$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a83278, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a83298, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83264, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a831b4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate(Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate(Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/ZeroVector_00004DF2$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a8319c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a830ac, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7ef60, size 0x150, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall(Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall(Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/ZeroVector_00004DF2$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a83064, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a83084, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a83050, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82fa0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate(Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate(Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Rotate_00004DF1$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a82f88, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a82e98, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7eecc, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall(Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall(Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Rotate_00004DF1$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a82e50, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a82e70, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a82e3c, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82d8c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate(Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate(Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Lerp_00004DF0$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a82d74, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a82c84, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7ee38, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall(Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall(Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Lerp_00004DF0$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a82c3c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a82c5c, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a82c28, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82b78, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate(Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate(Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Distance_00004DEF$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a82b60, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a82a70, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7eda4, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall(Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall(Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Distance_00004DEF$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a82a28, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a82a48, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a82a14, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82964, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate(Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate(Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/SafeNormal_00004DEE$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a8294c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a8285c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7ed10, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall(Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall(Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3139};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/SafeNormal_00004DEE$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a82814, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a82834, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a82800, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82750, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate(Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate(Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Normalize_00004DED$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a82738, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a82648, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7ec7c, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall(Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall(Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Normalize_00004DED$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a82600, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a82620, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a825ec, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a8253c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate(Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate(Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Length_00004DEC$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a82524, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a82434, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7ebe8, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall(Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall(Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Length_00004DEC$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a823ec, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a8240c, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a823d8, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82328, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate(Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate(Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Project_00004DEB$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a82310, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a82220, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7eb54, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall(Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall(Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Project_00004DEB$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a821d8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a821f8, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a821c4, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a82114, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate(Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate(Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3132};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Cross_00004DEA$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a820fc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a8200c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7eac0, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall(Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall(Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Cross_00004DEA$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81fc4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a81fe4, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81fb0, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a81f00, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate(Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate(Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Dot_00004DE9$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a81ee8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a81df8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7ea2c, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall(Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall(Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Dot_00004DE9$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81db0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a81dd0, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81d9c, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a81cec, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate(Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate(Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Eq_00004DE7$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a81cd4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a81be4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e8f8, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall(Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall(Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Eq_00004DE7$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81b9c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a81bbc, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81b88, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a81ad8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate(Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate(Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Unm_00004DE6$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a81ac0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a819d0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e864, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall(Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall(Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Unm_00004DE6$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81988, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a819a8, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81974, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a818c4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate(Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate(Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Div_00004DE5$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a818ac, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a817bc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e7d0, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall(Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall(Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Div_00004DE5$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81774, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a81794, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81760, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a816b0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate(Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate(Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Mul_00004DE4$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a81698, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a815a8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e73c, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall(Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall(Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Mul_00004DE4$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81560, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a81580, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a8154c, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a8149c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate(Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate(Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3120};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Sub_00004DE3$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a81484, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a81394, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e6a8, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall(Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall(Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Sub_00004DE3$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a8134c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a8136c, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81338, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a81288, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate(Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate(Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Add_00004DE2$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a81270, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a81180, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e614, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall(Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall(Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/Add_00004DE2$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a81138, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a81158, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a81124, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a81074, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate(Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate(Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/New_00004DE1$BurstDirectCall
class CORDL_TYPE Vec3Functions_Bindings_New_00004DE1$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a8105c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a80f6c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a7e580, size 0x94, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_New_00004DE1$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_New_00004DE1$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_New_00004DE1$BurstDirectCall(Vec3Functions_Bindings_New_00004DE1$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_New_00004DE1$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_New_00004DE1$BurstDirectCall(Vec3Functions_Bindings_New_00004DE1$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/Vec3Functions/New_00004DE1$PostfixBurstDelegate
class CORDL_TYPE Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a80f24, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a80f44, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a80f10, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a80e60, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate(Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate(Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3114};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/AIAgentFunctions
class CORDL_TYPE Bindings_AIAgentFunctions : public ::System::Object {
public:
// Declarations
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method DestroyEntity, addr 0x5a7dffc, size 0x44c, virtual false, abstract: false, final false
static inline int32_t DestroyEntity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FindPrePlacedAIAgentByID, addr 0x5a7cd04, size 0x3e0, virtual false, abstract: false, final false
static inline int32_t FindPrePlacedAIAgentByID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetAIAgentByEntityID, addr 0x5a7c8f4, size 0x410, virtual false, abstract: false, final false
static inline int32_t GetAIAgentByEntityID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetTarget, addr 0x5a7ddf4, size 0x208, virtual false, abstract: false, final false
static inline int32_t GetTarget(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method PlayAgentAnimation, addr 0x5a7d9f8, size 0x19c, virtual false, abstract: false, final false
static inline int32_t PlayAgentAnimation(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetDestination, addr 0x5a7d868, size 0x190, virtual false, abstract: false, final false
static inline int32_t SetDestination(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetTarget, addr 0x5a7db94, size 0x260, virtual false, abstract: false, final false
static inline int32_t SetTarget(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SpawnAIAgent, addr 0x5a7d0e4, size 0x784, virtual false, abstract: false, final false
static inline int32_t SpawnAIAgent(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method ToString, addr 0x5a7c700, size 0x1f4, virtual false, abstract: false, final false
static inline int32_t ToString(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method UpdateEntity, addr 0x5a71120, size 0x74, virtual false, abstract: false, final false
static inline void UpdateEntity(::GlobalNamespace::GameEntity*  entity, ::GlobalNamespace::Bindings_LuauAIAgent*  luaAgent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_AIAgentFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_AIAgentFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_AIAgentFunctions(Bindings_AIAgentFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_AIAgentFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_AIAgentFunctions(Bindings_AIAgentFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3113};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_AIAgentFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/GrabbableEntityFunctions
class CORDL_TYPE Bindings_GrabbableEntityFunctions : public ::System::Object {
public:
// Declarations
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method DestroyEntity, addr 0x5a7c614, size 0xec, virtual false, abstract: false, final false
static inline int32_t DestroyEntity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FindPrePlacedGrabbableEntityByID, addr 0x5a7b898, size 0x530, virtual false, abstract: false, final false
static inline int32_t FindPrePlacedGrabbableEntityByID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetGrabbableEntityByEntityID, addr 0x5a7afa0, size 0x3bc, virtual false, abstract: false, final false
static inline int32_t GetGrabbableEntityByEntityID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetHoldingActorNumberByEntityID, addr 0x5a7b6c8, size 0x1d0, virtual false, abstract: false, final false
static inline int32_t GetHoldingActorNumberByEntityID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetHoldingActorNumberByLuauID, addr 0x5a7b35c, size 0x36c, virtual false, abstract: false, final false
static inline int32_t GetHoldingActorNumberByLuauID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SpawnGrabbableEntity, addr 0x5a7bdc8, size 0x84c, virtual false, abstract: false, final false
static inline int32_t SpawnGrabbableEntity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method ToString, addr 0x5a7adac, size 0x1f4, virtual false, abstract: false, final false
static inline int32_t ToString(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method UpdateEntity, addr 0x5a71194, size 0x74, virtual false, abstract: false, final false
static inline void UpdateEntity(::GlobalNamespace::GameEntity*  entity, ::GlobalNamespace::Bindings_LuauGrabbableEntity*  luaAgent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_GrabbableEntityFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_GrabbableEntityFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_GrabbableEntityFunctions(Bindings_GrabbableEntityFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_GrabbableEntityFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_GrabbableEntityFunctions(Bindings_GrabbableEntityFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_GrabbableEntityFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/PlayerFunctions
class CORDL_TYPE Bindings_PlayerFunctions : public ::System::Object {
public:
// Declarations
/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetPlayerByID, addr 0x5a7a77c, size 0x630, virtual false, abstract: false, final false
static inline int32_t GetPlayerByID(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method UpdatePlayer, addr 0x5a6ed60, size 0x308, virtual false, abstract: false, final false
static inline void UpdatePlayer(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::VRRig*  p, ::GlobalNamespace::Bindings_LuauPlayer*  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_PlayerFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_PlayerFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_PlayerFunctions(Bindings_PlayerFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_PlayerFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_PlayerFunctions(Bindings_PlayerFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3109};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_PlayerFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [BurstCompile]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/GameObjectFunctions
class CORDL_TYPE Bindings_GameObjectFunctions : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::GameObjectFunctions_Bindings___c;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method CloneGameObject, addr 0x5a78194, size 0x4c0, virtual false, abstract: false, final false
static inline int32_t CloneGameObject(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method DestroyGameObject, addr 0x5a78654, size 0x6e0, virtual false, abstract: false, final false
static inline int32_t DestroyGameObject(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Equals, addr 0x5a79f14, size 0x21c, virtual false, abstract: false, final false
static inline int32_t Equals(::GlobalNamespace::lua_State*  L) ;

/// @brief Method FindChild, addr 0x5a7a3a4, size 0x32c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindChild(::UnityEngine::Transform*  parent, ::StringW  name) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FindChildGameObject, addr 0x5a777d0, size 0x53c, virtual false, abstract: false, final false
static inline int32_t FindChildGameObject(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FindComponent, addr 0x5a77d0c, size 0x488, virtual false, abstract: false, final false
static inline int32_t FindComponent(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method FindGameObject, addr 0x5a772e4, size 0x4ec, virtual false, abstract: false, final false
static inline int32_t FindGameObject(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GetDepth, addr 0x5a7a130, size 0xbc, virtual false, abstract: false, final false
static inline int32_t GetDepth(::UnityEngine::GameObject*  gameObject) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GetVelocity, addr 0x5a79940, size 0x288, virtual false, abstract: false, final false
static inline int32_t GetVelocity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method New, addr 0x5a77160, size 0x184, virtual false, abstract: false, final false
static inline int32_t New(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method OnTouched, addr 0x5a79498, size 0x2a4, virtual false, abstract: false, final false
static inline int32_t OnTouched(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetActive, addr 0x5a790d4, size 0x174, virtual false, abstract: false, final false
static inline int32_t SetActive(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetCollision, addr 0x5a78d34, size 0x1d0, virtual false, abstract: false, final false
static inline int32_t SetCollision(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetColor, addr 0x5a79bc8, size 0x34c, virtual false, abstract: false, final false
static inline int32_t SetColor(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetText, addr 0x5a79248, size 0x250, virtual false, abstract: false, final false
static inline int32_t SetText(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetVelocity, addr 0x5a7973c, size 0x204, virtual false, abstract: false, final false
static inline int32_t SetVelocity(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method SetVisibility, addr 0x5a78f04, size 0x1d0, virtual false, abstract: false, final false
static inline int32_t SetVisibility(::GlobalNamespace::lua_State*  L) ;

/// @brief Method UpdateDepthList, addr 0x5a7a1ec, size 0x1b8, virtual false, abstract: false, final false
static inline void UpdateDepthList() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_GameObjectFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_GameObjectFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_GameObjectFunctions(Bindings_GameObjectFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_GameObjectFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_GameObjectFunctions(Bindings_GameObjectFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_GameObjectFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/GameObjectFunctions/<>c
class CORDL_TYPE GameObjectFunctions_Bindings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GameObjectFunctions_Bindings___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>*  __9__1_0;

static inline ::GlobalNamespace::GameObjectFunctions_Bindings___c* New_ctor() ;

/// @brief Method <UpdateDepthList>b__1_0, addr 0x5a7a740, size 0x3c, virtual false, abstract: false, final false
inline int32_t _UpdateDepthList_b__1_0(::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>  kv) ;

/// @brief Method .ctor, addr 0x5a7a738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GameObjectFunctions_Bindings___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::GlobalNamespace::GameObjectFunctions_Bindings___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectFunctions_Bindings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectFunctions_Bindings___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectFunctions_Bindings___c(GameObjectFunctions_Bindings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectFunctions_Bindings___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectFunctions_Bindings___c(GameObjectFunctions_Bindings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameObjectFunctions_Bindings___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bindings/LuaEmit
class CORDL_TYPE Bindings_LuaEmit : public ::System::Object {
public:
// Declarations
/// @brief Field callCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_callCount, put=setStaticF_callCount)) float_t  callCount;

/// @brief Field callTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_callTime, put=setStaticF_callTime)) float_t  callTime;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method Emit, addr 0x5a765e0, size 0xb30, virtual false, abstract: false, final false
static inline int32_t Emit(::GlobalNamespace::lua_State*  L) ;

static inline float_t getStaticF_callCount() ;

static inline float_t getStaticF_callTime() ;

static inline void setStaticF_callCount(float_t  value) ;

static inline void setStaticF_callTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_LuaEmit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bindings_LuaEmit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bindings_LuaEmit(Bindings_LuaEmit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bindings_LuaEmit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bindings_LuaEmit(Bindings_LuaEmit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3103};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Bindings_LuaEmit) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
