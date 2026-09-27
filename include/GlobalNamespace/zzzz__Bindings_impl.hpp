#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_Components_LuauAnimatorBindings_LuauAnimator_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_Components_LuauAudioSourceBindings_LuauAudioSource_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_Components_LuauLightBindings_LuauLight_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_Components_LuauParticleSystemBindings_LuauParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_GorillaLocomotionSettings_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauAIAgent_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauGameObjectInitialState_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauGameObject_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauGrabbableEntity_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauPlayer_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauRoomState_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_MInventoryItem_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_MOnlineError_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_OnlineFunctions_BackendCallState_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_OnlineFunctions_CachedOfferDelta_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_PlayerInput_def.hpp"
#include "GlobalNamespace/zzzz__Bindings_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__LuauScriptRunner_def.hpp"
#include "GlobalNamespace/zzzz__MothershipConsumeConsumableResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetInventoryResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetMergedInventoryResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetStorefrontResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipPurchaseOfferResponse_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Bindings.GameObjectBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::GameObjectBuilder)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x5a729fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"GameObjectBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.GorillaLocomotionSettingsBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::GorillaLocomotionSettingsBuilder)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5a71e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"GorillaLocomotionSettingsBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.PlayerInputBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::PlayerInputBuilder)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5a7214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"PlayerInputBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.UpdateInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::Bindings::UpdateInputs)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5a74910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"UpdateInputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.Vec3Builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::Vec3Builder)> {
  constexpr static std::size_t size = 0xc24;
  constexpr static std::size_t addrs = 0x5a75048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"Vec3Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.QuatBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::QuatBuilder)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x5a75c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"QuatBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.PlayerBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::PlayerBuilder)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5a724d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"PlayerBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.AIAgentBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::AIAgentBuilder)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x5a73188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"AIAgentBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.GrabbableEntityBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::GrabbableEntityBuilder)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5a73770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"GrabbableEntityBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.InventoryItemBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::InventoryItemBuilder)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5a73c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"InventoryItemBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.OnlineErrorBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::OnlineErrorBuilder)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5a73f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"OnlineErrorBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.OnlineFunctionsBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::OnlineFunctionsBuilder)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5a74120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"OnlineFunctionsBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.LuaStartVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::LuaStartVibration)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a74d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"LuaStartVibration", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.LuaPlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::LuaPlaySound)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5a74e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"LuaPlaySound", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.RoomStateBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings::RoomStateBuilder)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5a743d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"RoomStateBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings.UpdateRoomState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::Bindings::UpdateRoomState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a7628c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"UpdateRoomState", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Bindings::setStaticF_LuauGameObjectList(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>*, "LuauGameObjectList", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>* GlobalNamespace::Bindings::getStaticF_LuauGameObjectList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>*, "LuauGameObjectList", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauGameObjectDepthList(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>*, "LuauGameObjectDepthList", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>* GlobalNamespace::Bindings::getStaticF_LuauGameObjectDepthList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>*, "LuauGameObjectDepthList", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauGameObjectListReverse(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>*, "LuauGameObjectListReverse", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::Bindings::getStaticF_LuauGameObjectListReverse()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::UnityW<::UnityEngine::GameObject>>*, "LuauGameObjectListReverse", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauGameObjectStates(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>*, "LuauGameObjectStates", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>* GlobalNamespace::Bindings::getStaticF_LuauGameObjectStates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::Bindings_LuauGameObjectInitialState>*, "LuauGameObjectStates", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauTriggerCallbacks(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*, "LuauTriggerCallbacks", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>* GlobalNamespace::Bindings::getStaticF_LuauTriggerCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*, "LuauTriggerCallbacks", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauPlayerList(::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*, "LuauPlayerList", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>* GlobalNamespace::Bindings::getStaticF_LuauPlayerList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*, "LuauPlayerList", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauVRRigList(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>*, "LuauVRRigList", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::Bindings::getStaticF_LuauVRRigList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::VRRig>>*, "LuauVRRigList", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LocomotionSettings(::GlobalNamespace::Bindings_GorillaLocomotionSettings*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Bindings_GorillaLocomotionSettings*, "LocomotionSettings", ::GlobalNamespace::Bindings*>(std::forward<::GlobalNamespace::Bindings_GorillaLocomotionSettings*>(value));
}
inline ::GlobalNamespace::Bindings_GorillaLocomotionSettings* GlobalNamespace::Bindings::getStaticF_LocomotionSettings()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Bindings_GorillaLocomotionSettings*, "LocomotionSettings", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LocalPlayerInput(::GlobalNamespace::Bindings_PlayerInput*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Bindings_PlayerInput*, "LocalPlayerInput", ::GlobalNamespace::Bindings*>(std::forward<::GlobalNamespace::Bindings_PlayerInput*>(value));
}
inline ::GlobalNamespace::Bindings_PlayerInput* GlobalNamespace::Bindings::getStaticF_LocalPlayerInput()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Bindings_PlayerInput*, "LocalPlayerInput", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_RoomState(::GlobalNamespace::Bindings_LuauRoomState*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Bindings_LuauRoomState*, "RoomState", ::GlobalNamespace::Bindings*>(std::forward<::GlobalNamespace::Bindings_LuauRoomState*>(value));
}
inline ::GlobalNamespace::Bindings_LuauRoomState* GlobalNamespace::Bindings::getStaticF_RoomState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Bindings_LuauRoomState*, "RoomState", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauAIAgentList(::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*, "LuauAIAgentList", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>* GlobalNamespace::Bindings::getStaticF_LuauAIAgentList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*, "LuauAIAgentList", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::setStaticF_LuauGrabbablesList(::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*, "LuauGrabbablesList", ::GlobalNamespace::Bindings*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>* GlobalNamespace::Bindings::getStaticF_LuauGrabbablesList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::IntPtr>*, "LuauGrabbablesList", ::GlobalNamespace::Bindings*>();
}
inline void GlobalNamespace::Bindings::GameObjectBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"GameObjectBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::GorillaLocomotionSettingsBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"GorillaLocomotionSettingsBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::PlayerInputBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"PlayerInputBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::UpdateInputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"UpdateInputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Bindings::Vec3Builder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"Vec3Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::QuatBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"QuatBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::PlayerBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"PlayerBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::AIAgentBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"AIAgentBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::GrabbableEntityBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"GrabbableEntityBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::InventoryItemBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"InventoryItemBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::OnlineErrorBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"OnlineErrorBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::OnlineFunctionsBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"OnlineFunctionsBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings::LuaStartVibration(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"LuaStartVibration", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings::LuaPlaySound(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"LuaPlaySound", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::RoomStateBuilder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"RoomStateBuilder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings::UpdateRoomState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings*>(),
                        {"UpdateRoomState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings::Bindings()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.DispatchOnlineError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, ::GlobalNamespace::LuauScriptRunner*, ::StringW, ::StringW, ::StringW, int32_t)>(&::GlobalNamespace::Bindings_OnlineFunctions::DispatchOnlineError)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5a8baf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"DispatchOnlineError", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LuauScriptRunner*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.GetLocalPlayerInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_OnlineFunctions::GetLocalPlayerInventory)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5a8a3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"GetLocalPlayerInventory", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.GetInventoryForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_OnlineFunctions::GetInventoryForPlayer)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5a8a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"GetInventoryForPlayer", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.FindAliveScriptRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LuauScriptRunner* (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_OnlineFunctions::FindAliveScriptRunner)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a8c378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"FindAliveScriptRunner", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.ResetOnlineFunctionsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::Bindings_OnlineFunctions::ResetOnlineFunctionsState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a8c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"ResetOnlineFunctionsState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.LoadStorefront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_OnlineFunctions::LoadStorefront)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5a8a958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"LoadStorefront", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.TryPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_OnlineFunctions::TryPurchase)> {
  constexpr static std::size_t size = 0xa6c;
  constexpr static std::size_t addrs = 0x5a8ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"TryPurchase", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.TryConsume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_OnlineFunctions::TryConsume)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5a8b5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"TryConsume", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.RateLimitBackendFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Func_1<bool>*, ::StringW)>(&::GlobalNamespace::Bindings_OnlineFunctions::RateLimitBackendFunction)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5a8c0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"RateLimitBackendFunction", {}, {::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_OnlineFunctions.ClearBackendFunctionInFlight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::Bindings_OnlineFunctions::ClearBackendFunctionInFlight)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a8c644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"ClearBackendFunctionInFlight", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Bindings_OnlineFunctions::setStaticF_CachedInventory(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>*, "CachedInventory", ::GlobalNamespace::Bindings_OnlineFunctions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>* GlobalNamespace::Bindings_OnlineFunctions::getStaticF_CachedInventory()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>*, "CachedInventory", ::GlobalNamespace::Bindings_OnlineFunctions*>();
}
inline void GlobalNamespace::Bindings_OnlineFunctions::setStaticF_VStumpMothershipOfferDisplayId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "VStumpMothershipOfferDisplayId", ::GlobalNamespace::Bindings_OnlineFunctions*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::Bindings_OnlineFunctions::getStaticF_VStumpMothershipOfferDisplayId()  {
return ::cordl_internals::getStaticField<::StringW, "VStumpMothershipOfferDisplayId", ::GlobalNamespace::Bindings_OnlineFunctions*>();
}
inline void GlobalNamespace::Bindings_OnlineFunctions::setStaticF_CachedStore(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>*, "CachedStore", ::GlobalNamespace::Bindings_OnlineFunctions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>* GlobalNamespace::Bindings_OnlineFunctions::getStaticF_CachedStore()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>*, "CachedStore", ::GlobalNamespace::Bindings_OnlineFunctions*>();
}
inline void GlobalNamespace::Bindings_OnlineFunctions::setStaticF__consentInFlight(bool  value)  {
::cordl_internals::setStaticField<bool, "_consentInFlight", ::GlobalNamespace::Bindings_OnlineFunctions*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::Bindings_OnlineFunctions::getStaticF__consentInFlight()  {
return ::cordl_internals::getStaticField<bool, "_consentInFlight", ::GlobalNamespace::Bindings_OnlineFunctions*>();
}
inline void GlobalNamespace::Bindings_OnlineFunctions::setStaticF_BackendCallStates(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>*, "BackendCallStates", ::GlobalNamespace::Bindings_OnlineFunctions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>* GlobalNamespace::Bindings_OnlineFunctions::getStaticF_BackendCallStates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState>*, "BackendCallStates", ::GlobalNamespace::Bindings_OnlineFunctions*>();
}
inline void GlobalNamespace::Bindings_OnlineFunctions::DispatchOnlineError(::GlobalNamespace::lua_State*  L, int32_t  errorCallbackRID, ::GlobalNamespace::LuauScriptRunner*  runner, ::StringW  name, ::StringW  message, ::StringW  errorCode, int32_t  httpCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"DispatchOnlineError", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LuauScriptRunner*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, errorCallbackRID, runner, name, message, errorCode, httpCode);
}
inline int32_t GlobalNamespace::Bindings_OnlineFunctions::GetLocalPlayerInventory(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"GetLocalPlayerInventory", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_OnlineFunctions::GetInventoryForPlayer(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"GetInventoryForPlayer", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline ::GlobalNamespace::LuauScriptRunner* GlobalNamespace::Bindings_OnlineFunctions::FindAliveScriptRunner(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"FindAliveScriptRunner", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauScriptRunner*>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings_OnlineFunctions::ResetOnlineFunctionsState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"ResetOnlineFunctionsState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Bindings_OnlineFunctions::LoadStorefront(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"LoadStorefront", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_OnlineFunctions::TryPurchase(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"TryPurchase", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_OnlineFunctions::TryConsume(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"TryConsume", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline bool GlobalNamespace::Bindings_OnlineFunctions::RateLimitBackendFunction(::System::Func_1<bool>*  Action, ::StringW  Key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"RateLimitBackendFunction", {}, {::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, Action, Key);
}
inline void GlobalNamespace::Bindings_OnlineFunctions::ClearBackendFunctionInFlight(::StringW  Key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_OnlineFunctions*>(),
                        {"ClearBackendFunctionInFlight", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, Key);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_OnlineFunctions::Bindings_OnlineFunctions()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a904e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1._GetInventoryForPlayer_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::*)(::GlobalNamespace::MothershipGetMergedInventoryResponse*)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::_GetInventoryForPlayer_b__1)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x5a904f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>(),
                        {"<GetInventoryForPlayer>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetMergedInventoryResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1._GetInventoryForPlayer_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::_GetInventoryForPlayer_b__2)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a90aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>(),
                        {"<GetInventoryForPlayer>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_get_callbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_get_callbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_set_callbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackRID = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_get_errorCallbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_get_errorCallbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_set_errorCallbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallbackRID = value;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::_GetInventoryForPlayer_b__1(::GlobalNamespace::MothershipGetMergedInventoryResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>(),
                        {"<GetInventoryForPlayer>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetMergedInventoryResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::_GetInventoryForPlayer_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>(),
                        {"<GetInventoryForPlayer>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, code);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_1::OnlineFunctions_Bindings___c__DisplayClass4_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0._GetInventoryForPlayer_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::_GetInventoryForPlayer_b__0)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5a900e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*>(),
                        {"<GetInventoryForPlayer>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::lua_State*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::GlobalNamespace::lua_State* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::__cordl_internal_set_L(::GlobalNamespace::lua_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::_GetInventoryForPlayer_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*>(),
                        {"<GetInventoryForPlayer>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass4_0::OnlineFunctions_Bindings___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8f478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1._GetLocalPlayerInventory_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::*)(::GlobalNamespace::MothershipGetInventoryResponse*)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::_GetLocalPlayerInventory_b__1)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x5a8f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>(),
                        {"<GetLocalPlayerInventory>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1._GetLocalPlayerInventory_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::_GetLocalPlayerInventory_b__2)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a8feac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>(),
                        {"<GetLocalPlayerInventory>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_get_callbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_get_callbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_set_callbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackRID = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_get_errorCallbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_get_errorCallbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_set_errorCallbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallbackRID = value;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::_GetLocalPlayerInventory_b__1(::GlobalNamespace::MothershipGetInventoryResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>(),
                        {"<GetLocalPlayerInventory>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::_GetLocalPlayerInventory_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>(),
                        {"<GetLocalPlayerInventory>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, code);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_1::OnlineFunctions_Bindings___c__DisplayClass3_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0._GetLocalPlayerInventory_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::_GetLocalPlayerInventory_b__0)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a8f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*>(),
                        {"<GetLocalPlayerInventory>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::lua_State*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::GlobalNamespace::lua_State* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::__cordl_internal_set_L(::GlobalNamespace::lua_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::_GetLocalPlayerInventory_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*>(),
                        {"<GetLocalPlayerInventory>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass3_0::OnlineFunctions_Bindings___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0._TryConsume_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::*)(::GlobalNamespace::MothershipConsumeConsumableResponse*)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::_TryConsume_b__0)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5a8ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>(),
                        {"<TryConsume>b__0", {}, {::i2c::type_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0._TryConsume_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::_TryConsume_b__1)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5a8f088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>(),
                        {"<TryConsume>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::lua_State*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::GlobalNamespace::lua_State* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_set_L(::GlobalNamespace::lua_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_errorCallbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_errorCallbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_set_errorCallbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallbackRID = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_callbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_callbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_set_callbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackRID = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_entitlementId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitlementId;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_get_entitlementId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitlementId;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::__cordl_internal_set_entitlementId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entitlementId = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::_TryConsume_b__0(::GlobalNamespace::MothershipConsumeConsumableResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>(),
                        {"<TryConsume>b__0", {}, {::i2c::type_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::_TryConsume_b__1(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>(),
                        {"<TryConsume>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, StatusCode);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass14_0::OnlineFunctions_Bindings___c__DisplayClass14_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8e61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1._TryPurchase_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::*)(::GlobalNamespace::MothershipPurchaseOfferResponse*)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::_TryPurchase_b__1)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5a8e624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>(),
                        {"<TryPurchase>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipPurchaseOfferResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1._TryPurchase_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::_TryPurchase_b__2)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5a8ea9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>(),
                        {"<TryPurchase>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::__cordl_internal_get_AsyncWorkComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AsyncWorkComplete;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::__cordl_internal_get_AsyncWorkComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AsyncWorkComplete;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::__cordl_internal_set_AsyncWorkComplete(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AsyncWorkComplete = value;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::_TryPurchase_b__1(::GlobalNamespace::MothershipPurchaseOfferResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>(),
                        {"<TryPurchase>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipPurchaseOfferResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::_TryPurchase_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>(),
                        {"<TryPurchase>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, StatusCode);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_1::OnlineFunctions_Bindings___c__DisplayClass13_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0._TryPurchase_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::*)(bool, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::_TryPurchase_b__0)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5a8e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*>(),
                        {"<TryPurchase>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::lua_State*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::GlobalNamespace::lua_State* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_set_L(::GlobalNamespace::lua_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_callbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_callbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_set_callbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackRID = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_errorCallbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_errorCallbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_set_errorCallbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallbackRID = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_offerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offerId;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_offerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offerId;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_set_offerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offerId = value;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_offerToPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offerToPurchase;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_get_offerToPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offerToPurchase;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::__cordl_internal_set_offerToPurchase(::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offerToPurchase = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::_TryPurchase_b__0(bool  Consented, ::System::Action_1<::StringW>*  AsyncWorkComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*>(),
                        {"<TryPurchase>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Consented, AsyncWorkComplete);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass13_0::OnlineFunctions_Bindings___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8ca84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1._LoadStorefront_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::*)(::GlobalNamespace::MothershipGetStorefrontResponse*)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::_LoadStorefront_b__1)> {
  constexpr static std::size_t size = 0x1680;
  constexpr static std::size_t addrs = 0x5a8ca8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>(),
                        {"<LoadStorefront>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetStorefrontResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1._LoadStorefront_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::_LoadStorefront_b__2)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a8e10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>(),
                        {"<LoadStorefront>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_get_callbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_get_callbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_set_callbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackRID = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_get_errorCallbackRID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_get_errorCallbackRID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallbackRID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_set_errorCallbackRID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallbackRID = value;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::_LoadStorefront_b__1(::GlobalNamespace::MothershipGetStorefrontResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>(),
                        {"<LoadStorefront>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetStorefrontResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::_LoadStorefront_b__2(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>(),
                        {"<LoadStorefront>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, StatusCode);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_1::OnlineFunctions_Bindings___c__DisplayClass11_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0._LoadStorefront_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::_LoadStorefront_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a8c8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*>(),
                        {"<LoadStorefront>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::lua_State*& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::GlobalNamespace::lua_State* const& GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::__cordl_internal_set_L(::GlobalNamespace::lua_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::_LoadStorefront_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*>(),
                        {"<LoadStorefront>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0* GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings___c__DisplayClass11_0::OnlineFunctions_Bindings___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a8c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_OfferId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferId;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_OfferId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferId;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_OfferId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferId = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_DisplayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayIndex;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_DisplayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayIndex;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_DisplayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayIndex = value;
}
constexpr bool& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_PurchaseAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAllowed;
}
constexpr bool const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_PurchaseAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseAllowed;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_PurchaseAllowed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseAllowed = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_DisplayDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayDescription;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_DisplayDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayDescription;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_DisplayDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayDescription = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_Credits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Credits;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>* const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_Credits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Credits;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_Credits(::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Credits = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_Debits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debits;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>* const& GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_get_Debits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debits;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::__cordl_internal_set_Debits(::System::Collections::Generic::List_1<::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Debits = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer* GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings_CachedOffer::OnlineFunctions_Bindings_CachedOffer()   {
}
//  Writing Method size for method: ::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::*)()>(&::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr int32_t& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_Quantity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantity;
}
constexpr int32_t const& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_Quantity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantity;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_set_Quantity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quantity = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_InGameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InGameId;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_InGameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InGameId;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_set_InGameId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InGameId = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_DisplayDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayDescription;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get_DisplayDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayDescription;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_set_DisplayDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayDescription = value;
}
constexpr ::StringW& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr ::StringW const& GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::__cordl_internal_set__cordl_ID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_ID = value;
}
inline void GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem* GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnlineFunctions_Bindings_CachedInventoryItem::OnlineFunctions_Bindings_CachedInventoryItem()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_Components.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Components::Build)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a889b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Components*>(),
                        {"Build", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Bindings_Components::setStaticF_ComponentList(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*, "ComponentList", ::GlobalNamespace::Bindings_Components*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>* GlobalNamespace::Bindings_Components::getStaticF_ComponentList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::Object*>*, "ComponentList", ::GlobalNamespace::Bindings_Components*>();
}
inline void GlobalNamespace::Bindings_Components::Build(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Components*>(),
                        {"Build", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_Components::Bindings_Components()   {
}
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings.Builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::Builder)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5a891dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings.GetAnimator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::GetAnimator)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a8a2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"GetAnimator", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings.setSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::setSpeed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a8a074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"setSpeed", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings.startPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::startPlayback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a8a118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"startPlayback", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings.stopPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::stopPlayback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a8a1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"stopPlayback", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings.reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a8a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"reset", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Components_Bindings_LuauAnimatorBindings::Builder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline ::UnityW<::UnityEngine::Animator> GlobalNamespace::Components_Bindings_LuauAnimatorBindings::GetAnimator(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"GetAnimator", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAnimatorBindings::setSpeed(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"setSpeed", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAnimatorBindings::startPlayback(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"startPlayback", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAnimatorBindings::stopPlayback(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"stopPlayback", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAnimatorBindings::reset(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAnimatorBindings*>(),
                        {"reset", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Components_Bindings_LuauAnimatorBindings::Components_Bindings_LuauAnimatorBindings()   {
}
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauLightBindings.Builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauLightBindings::Builder)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a88f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauLightBindings.GetLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauLightBindings::GetLight)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a89f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"GetLight", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauLightBindings.setColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauLightBindings::setColor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a89d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"setColor", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauLightBindings.setIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauLightBindings::setIntensity)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a89e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"setIntensity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauLightBindings.setRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauLightBindings::setRange)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a89ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"setRange", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Components_Bindings_LuauLightBindings::Builder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline ::UnityW<::UnityEngine::Light> GlobalNamespace::Components_Bindings_LuauLightBindings::GetLight(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"GetLight", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauLightBindings::setColor(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"setColor", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauLightBindings::setIntensity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"setIntensity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauLightBindings::setRange(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauLightBindings*>(),
                        {"setRange", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Components_Bindings_LuauLightBindings::Components_Bindings_LuauLightBindings()   {
}
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.Builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::Builder)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5a88c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.GetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::GetAudioSource)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a89c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"GetAudioSource", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::play)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a8987c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"play", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.setVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setVolume)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a89908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setVolume", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.setLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setLoop)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a899ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setLoop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.setPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setPitch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a89a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setPitch", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.setMinDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setMinDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a89af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setMinDistance", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings.setMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setMaxDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a89b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setMaxDistance", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::Builder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::GetAudioSource(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"GetAudioSource", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::play(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"play", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setVolume(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setVolume", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setLoop(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setLoop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setPitch(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setPitch", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setMinDistance(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setMinDistance", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::setMaxDistance(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings*>(),
                        {"setMaxDistance", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Components_Bindings_LuauAudioSourceBindings::Components_Bindings_LuauAudioSourceBindings()   {
}
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings.Builder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::Builder)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5a889d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings.GetParticleSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ParticleSystem> (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::GetParticleSystem)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a89774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"GetParticleSystem", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings.play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::play)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a89520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"play", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings.stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::stop)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a895ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"stop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings.clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::clear)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a89638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"clear", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::Builder(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"Builder", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline ::UnityW<::UnityEngine::ParticleSystem> GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::GetParticleSystem(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"GetParticleSystem", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ParticleSystem>>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::play(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"play", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::stop(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"stop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::clear(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings*>(),
                        {"clear", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Components_Bindings_LuauParticleSystemBindings::Components_Bindings_LuauParticleSystemBindings()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_RayCastUtils.RayCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_RayCastUtils::RayCast)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5a88374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_RayCastUtils*>(),
                        {"RayCast", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Bindings_RayCastUtils::setStaticF_rayHit(::UnityEngine::RaycastHit  value)  {
::cordl_internals::setStaticField<::UnityEngine::RaycastHit, "rayHit", ::GlobalNamespace::Bindings_RayCastUtils*>(std::forward<::UnityEngine::RaycastHit>(value));
}
inline ::UnityEngine::RaycastHit GlobalNamespace::Bindings_RayCastUtils::getStaticF_rayHit()  {
return ::cordl_internals::getStaticField<::UnityEngine::RaycastHit, "rayHit", ::GlobalNamespace::Bindings_RayCastUtils*>();
}
inline int32_t GlobalNamespace::Bindings_RayCastUtils::RayCast(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_RayCastUtils*>(),
                        {"RayCast", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_RayCastUtils::Bindings_RayCastUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_DataSaveUtils.ConvertForSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*)>(&::GlobalNamespace::Bindings_DataSaveUtils::ConvertForSave)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5a874f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_DataSaveUtils*>(),
                        {"ConvertForSave", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_DataSaveUtils.SerializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JObject* (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Bindings_DataSaveUtils::SerializeVector3)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a880c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_DataSaveUtils*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_DataSaveUtils.SerializeQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JObject* (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::Bindings_DataSaveUtils::SerializeQuaternion)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a881fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_DataSaveUtils*>(),
                        {"SerializeQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Linq::JToken* GlobalNamespace::Bindings_DataSaveUtils::ConvertForSave(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_DataSaveUtils*>(),
                        {"ConvertForSave", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JObject* GlobalNamespace::Bindings_DataSaveUtils::SerializeVector3(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_DataSaveUtils*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JObject*>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JObject* GlobalNamespace::Bindings_DataSaveUtils::SerializeQuaternion(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_DataSaveUtils*>(),
                        {"SerializeQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JObject*>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_DataSaveUtils::Bindings_DataSaveUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_PlayerUtils.TeleportPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_PlayerUtils::TeleportPlayer)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a87d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerUtils*>(),
                        {"TeleportPlayer", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_PlayerUtils.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_PlayerUtils::SetVelocity)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a87fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerUtils*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_PlayerUtils::TeleportPlayer(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerUtils*>(),
                        {"TeleportPlayer", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_PlayerUtils::SetVelocity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerUtils*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_PlayerUtils::Bindings_PlayerUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.ConsumeTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>* (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Bindings_JSON::ConsumeTable)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x5a85dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"ConsumeTable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.ParseStrictInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::Bindings_JSON::ParseStrictInt)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a866cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"ParseStrictInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.CompareKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::HashSet_1<::StringW>*)>(&::GlobalNamespace::Bindings_JSON::CompareKeys)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5a86740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"CompareKeys", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.TryPushValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::lua_State*, ::Newtonsoft::Json::Linq::JToken*)>(&::GlobalNamespace::Bindings_JSON::TryPushValue)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x5a868dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"TryPushValue", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.PushTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::lua_State*, ::Newtonsoft::Json::Linq::JObject*)>(&::GlobalNamespace::Bindings_JSON::PushTable)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5a87008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"PushTable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.DataSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_JSON::DataSave)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x5a85338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"DataSave", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_JSON.DataLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_JSON::DataLoad)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5a85958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"DataLoad", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Bindings_JSON::setStaticF_ModIODirectory(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ModIODirectory", ::GlobalNamespace::Bindings_JSON*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::Bindings_JSON::getStaticF_ModIODirectory()  {
return ::cordl_internals::getStaticField<::StringW, "ModIODirectory", ::GlobalNamespace::Bindings_JSON*>();
}
inline ::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>* GlobalNamespace::Bindings_JSON::ConsumeTable(::GlobalNamespace::lua_State*  L, int32_t  tableIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"ConsumeTable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>*>(nullptr, ___internal_method, L, tableIndex);
}
inline int32_t GlobalNamespace::Bindings_JSON::ParseStrictInt(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"ParseStrictInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline bool GlobalNamespace::Bindings_JSON::CompareKeys(::Newtonsoft::Json::Linq::JObject*  obj, ::System::Collections::Generic::HashSet_1<::StringW>*  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"CompareKeys", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, set);
}
inline bool GlobalNamespace::Bindings_JSON::TryPushValue(::GlobalNamespace::lua_State*  L, ::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"TryPushValue", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, L, value);
}
inline bool GlobalNamespace::Bindings_JSON::PushTable(::GlobalNamespace::lua_State*  L, ::Newtonsoft::Json::Linq::JObject*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"PushTable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, L, table);
}
inline int32_t GlobalNamespace::Bindings_JSON::DataSave(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"DataSave", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_JSON::DataLoad(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_JSON*>(),
                        {"DataLoad", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_JSON::Bindings_JSON()   {
}
//  Writing Method size for method: ::GlobalNamespace::JSON_Bindings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JSON_Bindings___c::*)()>(&::GlobalNamespace::JSON_Bindings___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a87d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSON_Bindings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JSON_Bindings___c._CompareKeys_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JSON_Bindings___c::*)(::Newtonsoft::Json::Linq::JProperty*)>(&::GlobalNamespace::JSON_Bindings___c::_CompareKeys_b__3_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a87d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSON_Bindings___c*>(),
                        {"<CompareKeys>b__3_0", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JProperty*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JSON_Bindings___c::setStaticF___9(::GlobalNamespace::JSON_Bindings___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::JSON_Bindings___c*, "<>9", ::GlobalNamespace::JSON_Bindings___c*>(std::forward<::GlobalNamespace::JSON_Bindings___c*>(value));
}
inline ::GlobalNamespace::JSON_Bindings___c* GlobalNamespace::JSON_Bindings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::JSON_Bindings___c*, "<>9", ::GlobalNamespace::JSON_Bindings___c*>();
}
inline void GlobalNamespace::JSON_Bindings___c::setStaticF___9__3_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*, "<>9__3_0", ::GlobalNamespace::JSON_Bindings___c*>(std::forward<::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>* GlobalNamespace::JSON_Bindings___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*, "<>9__3_0", ::GlobalNamespace::JSON_Bindings___c*>();
}
inline void GlobalNamespace::JSON_Bindings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSON_Bindings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::JSON_Bindings___c::_CompareKeys_b__3_0(::Newtonsoft::Json::Linq::JProperty*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSON_Bindings___c*>(),
                        {"<CompareKeys>b__3_0", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::GlobalNamespace::JSON_Bindings___c* GlobalNamespace::JSON_Bindings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JSON_Bindings___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JSON_Bindings___c::JSON_Bindings___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.New
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::New)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a835dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"New", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.Mul
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::Mul)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a835e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Mul", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.Eq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::Eq)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a835e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Eq", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a835e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.FromEuler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::FromEuler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a836c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromEuler", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.FromDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::FromDirection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a836cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromDirection", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.GetUpVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::GetUpVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a836d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"GetUpVector", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.Euler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::Euler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a836d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Euler", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.New$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::New$BurstManaged)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a83ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"New$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.Mul$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::Mul$BurstManaged)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5a83c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Mul$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.Eq$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::Eq$BurstManaged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a83dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Eq$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.FromEuler$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::FromEuler$BurstManaged)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a83f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromEuler$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.FromDirection$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::FromDirection$BurstManaged)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a84040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromDirection$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.GetUpVector$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::GetUpVector$BurstManaged)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a841c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"GetUpVector$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_QuatFunctions.Euler$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_QuatFunctions::Euler$BurstManaged)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a84344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Euler$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_QuatFunctions::New(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"New", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::Mul(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Mul", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::Eq(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Eq", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::ToString(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::FromEuler(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromEuler", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::FromDirection(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromDirection", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::GetUpVector(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"GetUpVector", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::Euler(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Euler", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::New$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"New$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::Mul$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Mul$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::Eq$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Eq$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::FromEuler$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromEuler$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::FromDirection$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"FromDirection$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::GetUpVector$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"GetUpVector$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_QuatFunctions::Euler$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_QuatFunctions*>(),
                        {"Euler$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_QuatFunctions::Bindings_QuatFunctions()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a85230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a85320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a83a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall::QuatFunctions_Bindings_Euler_00004DFC$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a85124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a851d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a851e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a85208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate::QuatFunctions_Bindings_Euler_00004DFC$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a8501c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a8510c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a839bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall::QuatFunctions_Bindings_GetUpVector_00004DFB$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a84f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a84fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a84fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a84ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate::QuatFunctions_Bindings_GetUpVector_00004DFB$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a84e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a84ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a83928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall::QuatFunctions_Bindings_FromDirection_00004DFA$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a84cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a84dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a84dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a84de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate::QuatFunctions_Bindings_FromDirection_00004DFA$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a84bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a84ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a83894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall::QuatFunctions_Bindings_FromEuler_00004DF9$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a84ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a84b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a84bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a84bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate::QuatFunctions_Bindings_FromEuler_00004DF9$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a849e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a84ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a83800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall::QuatFunctions_Bindings_Eq_00004DF7$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a848d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a84984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a84998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a849b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate::QuatFunctions_Bindings_Eq_00004DF7$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a847cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a848bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a8376c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall::QuatFunctions_Bindings_Mul_00004DF6$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a846c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a84770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a84784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a847a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate::QuatFunctions_Bindings_Mul_00004DF6$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a845b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a846a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a836d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>();
}
inline void GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall::QuatFunctions_Bindings_New_00004DF5$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a844ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a8455c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a84570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a84590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate* GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate::QuatFunctions_Bindings_New_00004DF5$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.New
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::New)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"New", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Sub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Sub)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Sub", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Mul
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Mul)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Mul", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Div
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Div)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Div", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Unm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Unm)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Unm", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Eq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Eq)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Eq", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a7e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Dot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Dot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Dot", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Cross)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Cross", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Project
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Project)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Project", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Length)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Length", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Normalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Normalize", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.SafeNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::SafeNormal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"SafeNormal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Distance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Distance", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Lerp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Rotate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Rotate", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.ZeroVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::ZeroVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"ZeroVector", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.OneVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::OneVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"OneVector", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.NearlyEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::NearlyEqual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a7e57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"NearlyEqual", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.New$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::New$BurstManaged)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a7f29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"New$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Add$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Add$BurstManaged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5a7f444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Add$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Sub$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Sub$BurstManaged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5a7f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Sub$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Mul$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Mul$BurstManaged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a7f6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Mul$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Div$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Div$BurstManaged)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a7f8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Div$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Unm$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Unm$BurstManaged)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a7f9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Unm$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Eq$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Eq$BurstManaged)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a7fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Eq$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Dot$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Dot$BurstManaged)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a7fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Dot$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Cross$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Cross$BurstManaged)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a7fddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Cross$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Project$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Project$BurstManaged)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5a7ff68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Project$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Length$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Length$BurstManaged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a8016c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Length$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Normalize$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Normalize$BurstManaged)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a8028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Normalize$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.SafeNormal$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::SafeNormal$BurstManaged)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5a8040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"SafeNormal$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Distance$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Distance$BurstManaged)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5a805c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Distance$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Lerp$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Lerp$BurstManaged)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5a8072c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Lerp$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.Rotate$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::Rotate$BurstManaged)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5a808c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Rotate$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.ZeroVector$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::ZeroVector$BurstManaged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a80a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"ZeroVector$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.OneVector$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::OneVector$BurstManaged)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a80b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"OneVector$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_Vec3Functions.NearlyEqual$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_Vec3Functions::NearlyEqual$BurstManaged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a80c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"NearlyEqual$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_Vec3Functions::New(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"New", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Add(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Sub(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Sub", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Mul(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Mul", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Div(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Div", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Unm(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Unm", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Eq(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Eq", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::ToString(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Dot(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Dot", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Cross(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Cross", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Project(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Project", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Length(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Length", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Normalize(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Normalize", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::SafeNormal(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"SafeNormal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Distance(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Distance", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Lerp(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Rotate(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Rotate", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::ZeroVector(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"ZeroVector", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::OneVector(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"OneVector", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::NearlyEqual(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"NearlyEqual", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::New$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"New$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Add$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Add$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Sub$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Sub$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Mul$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Mul$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Div$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Div$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Unm$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Unm$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Eq$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Eq$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Dot$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Dot$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Cross$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Cross$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Project$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Project$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Length$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Length$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Normalize$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Normalize$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::SafeNormal$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"SafeNormal$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Distance$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Distance$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Lerp$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Lerp$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::Rotate$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"Rotate$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::ZeroVector$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"ZeroVector$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::OneVector$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"OneVector$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_Vec3Functions::NearlyEqual$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_Vec3Functions*>(),
                        {"NearlyEqual$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_Vec3Functions::Bindings_Vec3Functions()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a834d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a835c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall::Vec3Functions_Bindings_NearlyEqual_00004DF4$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a833c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a83478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a8348c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a834ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate::Vec3Functions_Bindings_NearlyEqual_00004DF4$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a832c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a833b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a7f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall::Vec3Functions_Bindings_OneVector_00004DF3$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a831b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a83264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a83278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a83298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate::Vec3Functions_Bindings_OneVector_00004DF3$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a830ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a8319c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a7ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall::Vec3Functions_Bindings_ZeroVector_00004DF2$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a83050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a83064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a83084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate::Vec3Functions_Bindings_ZeroVector_00004DF2$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a82e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a82f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7eecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall::Vec3Functions_Bindings_Rotate_00004DF1$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a82e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a82e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate::Vec3Functions_Bindings_Rotate_00004DF1$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a82c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a82d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7ee38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall::Vec3Functions_Bindings_Lerp_00004DF0$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a82c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a82c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate::Vec3Functions_Bindings_Lerp_00004DF0$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a82a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a82b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7eda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall::Vec3Functions_Bindings_Distance_00004DEF$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a82a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a82a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate::Vec3Functions_Bindings_Distance_00004DEF$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a8285c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a8294c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7ed10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall::Vec3Functions_Bindings_SafeNormal_00004DEE$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a82814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a82834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate::Vec3Functions_Bindings_SafeNormal_00004DEE$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a82648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a82738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7ec7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall::Vec3Functions_Bindings_Normalize_00004DED$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a8253c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a825ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a82600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a82620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate::Vec3Functions_Bindings_Normalize_00004DED$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a82434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a82524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7ebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall::Vec3Functions_Bindings_Length_00004DEC$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a823d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a823ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a8240c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate::Vec3Functions_Bindings_Length_00004DEC$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a82220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a82310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7eb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall::Vec3Functions_Bindings_Project_00004DEB$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a82114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a821c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a821d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a821f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate::Vec3Functions_Bindings_Project_00004DEB$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a8200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a820fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall::Vec3Functions_Bindings_Cross_00004DEA$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a81f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a81fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate::Vec3Functions_Bindings_Cross_00004DEA$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a81df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a81ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall::Vec3Functions_Bindings_Dot_00004DE9$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a81cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a81dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate::Vec3Functions_Bindings_Dot_00004DE9$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a81be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a81cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall::Vec3Functions_Bindings_Eq_00004DE7$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a81ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a81bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate::Vec3Functions_Bindings_Eq_00004DE7$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a819d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a81ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall::Vec3Functions_Bindings_Unm_00004DE6$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a818c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a819a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate::Vec3Functions_Bindings_Unm_00004DE6$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a817bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a818ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall::Vec3Functions_Bindings_Div_00004DE5$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a816b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a81794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate::Vec3Functions_Bindings_Div_00004DE5$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a815a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a81698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall::Vec3Functions_Bindings_Mul_00004DE4$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a8149c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a8154c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a81580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate::Vec3Functions_Bindings_Mul_00004DE4$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a81394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a81484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall::Vec3Functions_Bindings_Sub_00004DE3$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a81288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a8134c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a8136c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate::Vec3Functions_Bindings_Sub_00004DE3$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a81180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a81270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall::Vec3Functions_Bindings_Add_00004DE2$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a81074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a81124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a81138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a81158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate::Vec3Functions_Bindings_Add_00004DE2$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a80f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a8105c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>();
}
inline void GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall::Vec3Functions_Bindings_New_00004DE1$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a80e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a80f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a80f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a80f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate* GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate::Vec3Functions_Bindings_New_00004DE1$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5a7c700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.GetAIAgentByEntityID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::GetAIAgentByEntityID)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5a7c8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"GetAIAgentByEntityID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.FindPrePlacedAIAgentByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::FindPrePlacedAIAgentByID)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5a7cd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"FindPrePlacedAIAgentByID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.SpawnAIAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::SpawnAIAgent)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x5a7d0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"SpawnAIAgent", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.SetDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::SetDestination)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5a7d868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"SetDestination", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.PlayAgentAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::PlayAgentAnimation)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5a7d9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"PlayAgentAnimation", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::SetTarget)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5a7db94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"SetTarget", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.GetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::GetTarget)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5a7ddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"GetTarget", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.UpdateEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, ::GlobalNamespace::Bindings_LuauAIAgent*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::UpdateEntity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a71120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"UpdateEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::Bindings_LuauAIAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_AIAgentFunctions.DestroyEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_AIAgentFunctions::DestroyEntity)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5a7dffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"DestroyEntity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::ToString(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::GetAIAgentByEntityID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"GetAIAgentByEntityID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::FindPrePlacedAIAgentByID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"FindPrePlacedAIAgentByID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::SpawnAIAgent(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"SpawnAIAgent", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::SetDestination(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"SetDestination", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::PlayAgentAnimation(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"PlayAgentAnimation", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::SetTarget(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"SetTarget", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::GetTarget(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"GetTarget", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings_AIAgentFunctions::UpdateEntity(::GlobalNamespace::GameEntity*  entity, ::GlobalNamespace::Bindings_LuauAIAgent*  luaAgent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"UpdateEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::Bindings_LuauAIAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, luaAgent);
}
inline int32_t GlobalNamespace::Bindings_AIAgentFunctions::DestroyEntity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_AIAgentFunctions*>(),
                        {"DestroyEntity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_AIAgentFunctions::Bindings_AIAgentFunctions()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5a7adac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.GetGrabbableEntityByEntityID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::GetGrabbableEntityByEntityID)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5a7afa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"GetGrabbableEntityByEntityID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.GetHoldingActorNumberByLuauID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::GetHoldingActorNumberByLuauID)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5a7b35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"GetHoldingActorNumberByLuauID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.GetHoldingActorNumberByEntityID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::GetHoldingActorNumberByEntityID)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a7b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"GetHoldingActorNumberByEntityID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.FindPrePlacedGrabbableEntityByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::FindPrePlacedGrabbableEntityByID)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5a7b898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"FindPrePlacedGrabbableEntityByID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.SpawnGrabbableEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::SpawnGrabbableEntity)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x5a7bdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"SpawnGrabbableEntity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.UpdateEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, ::GlobalNamespace::Bindings_LuauGrabbableEntity*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::UpdateEntity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a71194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"UpdateEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::Bindings_LuauGrabbableEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GrabbableEntityFunctions.DestroyEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GrabbableEntityFunctions::DestroyEntity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a7c614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"DestroyEntity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::ToString(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"ToString", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::GetGrabbableEntityByEntityID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"GetGrabbableEntityByEntityID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::GetHoldingActorNumberByLuauID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"GetHoldingActorNumberByLuauID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::GetHoldingActorNumberByEntityID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"GetHoldingActorNumberByEntityID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::FindPrePlacedGrabbableEntityByID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"FindPrePlacedGrabbableEntityByID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::SpawnGrabbableEntity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"SpawnGrabbableEntity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings_GrabbableEntityFunctions::UpdateEntity(::GlobalNamespace::GameEntity*  entity, ::GlobalNamespace::Bindings_LuauGrabbableEntity*  luaAgent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"UpdateEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::Bindings_LuauGrabbableEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, luaAgent);
}
inline int32_t GlobalNamespace::Bindings_GrabbableEntityFunctions::DestroyEntity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GrabbableEntityFunctions*>(),
                        {"DestroyEntity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_GrabbableEntityFunctions::Bindings_GrabbableEntityFunctions()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_PlayerFunctions.GetPlayerByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_PlayerFunctions::GetPlayerByID)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x5a7a77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerFunctions*>(),
                        {"GetPlayerByID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_PlayerFunctions.UpdatePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::GlobalNamespace::VRRig*, ::GlobalNamespace::Bindings_LuauPlayer*)>(&::GlobalNamespace::Bindings_PlayerFunctions::UpdatePlayer)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5a6ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerFunctions*>(),
                        {"UpdatePlayer", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::Bindings_LuauPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_PlayerFunctions::GetPlayerByID(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerFunctions*>(),
                        {"GetPlayerByID", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Bindings_PlayerFunctions::UpdatePlayer(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::VRRig*  p, ::GlobalNamespace::Bindings_LuauPlayer*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_PlayerFunctions*>(),
                        {"UpdatePlayer", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::Bindings_LuauPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, p, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_PlayerFunctions::Bindings_PlayerFunctions()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.GetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::GetDepth)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a7a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"GetDepth", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.UpdateDepthList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::Bindings_GameObjectFunctions::UpdateDepthList)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a7a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"UpdateDepthList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.New
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::New)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5a77160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"New", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.FindGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::FindGameObject)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5a772e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.FindChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(&::GlobalNamespace::Bindings_GameObjectFunctions::FindChild)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5a7a3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindChild", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.FindChildGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::FindChildGameObject)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5a777d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindChildGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.FindComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::FindComponent)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5a77d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindComponent", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.CloneGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::CloneGameObject)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5a78194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"CloneGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.DestroyGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::DestroyGameObject)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x5a78654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"DestroyGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.SetCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::SetCollision)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a78d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetCollision", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.SetVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::SetVisibility)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a78f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetVisibility", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::SetActive)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5a790d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetActive", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::SetText)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a79248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetText", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.OnTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::OnTouched)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5a79498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"OnTouched", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::SetVelocity)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5a7973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.GetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::GetVelocity)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5a79940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"GetVelocity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::SetColor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5a79bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetColor", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bindings_GameObjectFunctions.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_GameObjectFunctions::Equals)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a79f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::GetDepth(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"GetDepth", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject);
}
inline void GlobalNamespace::Bindings_GameObjectFunctions::UpdateDepthList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"UpdateDepthList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::New(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"New", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::FindGameObject(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Bindings_GameObjectFunctions::FindChild(::UnityEngine::Transform*  parent, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindChild", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, parent, name);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::FindChildGameObject(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindChildGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::FindComponent(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"FindComponent", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::CloneGameObject(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"CloneGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::DestroyGameObject(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"DestroyGameObject", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::SetCollision(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetCollision", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::SetVisibility(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetVisibility", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::SetActive(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetActive", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::SetText(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetText", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::OnTouched(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"OnTouched", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::SetVelocity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::GetVelocity(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"GetVelocity", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::SetColor(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"SetColor", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Bindings_GameObjectFunctions::Equals(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_GameObjectFunctions*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_GameObjectFunctions::Bindings_GameObjectFunctions()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameObjectFunctions_Bindings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectFunctions_Bindings___c::*)()>(&::GlobalNamespace::GameObjectFunctions_Bindings___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a7a738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectFunctions_Bindings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectFunctions_Bindings___c._UpdateDepthList_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameObjectFunctions_Bindings___c::*)(::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>)>(&::GlobalNamespace::GameObjectFunctions_Bindings___c::_UpdateDepthList_b__1_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a7a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectFunctions_Bindings___c*>(),
                        {"<UpdateDepthList>b__1_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameObjectFunctions_Bindings___c::setStaticF___9(::GlobalNamespace::GameObjectFunctions_Bindings___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GameObjectFunctions_Bindings___c*, "<>9", ::GlobalNamespace::GameObjectFunctions_Bindings___c*>(std::forward<::GlobalNamespace::GameObjectFunctions_Bindings___c*>(value));
}
inline ::GlobalNamespace::GameObjectFunctions_Bindings___c* GlobalNamespace::GameObjectFunctions_Bindings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GameObjectFunctions_Bindings___c*, "<>9", ::GlobalNamespace::GameObjectFunctions_Bindings___c*>();
}
inline void GlobalNamespace::GameObjectFunctions_Bindings___c::setStaticF___9__1_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>*, "<>9__1_0", ::GlobalNamespace::GameObjectFunctions_Bindings___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>* GlobalNamespace::GameObjectFunctions_Bindings___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>,int32_t>*, "<>9__1_0", ::GlobalNamespace::GameObjectFunctions_Bindings___c*>();
}
inline void GlobalNamespace::GameObjectFunctions_Bindings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectFunctions_Bindings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameObjectFunctions_Bindings___c::_UpdateDepthList_b__1_0(::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>  kv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameObjectFunctions_Bindings___c*>(),
                        {"<UpdateDepthList>b__1_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityW<::UnityEngine::GameObject>,::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, kv);
}
inline ::GlobalNamespace::GameObjectFunctions_Bindings___c* GlobalNamespace::GameObjectFunctions_Bindings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameObjectFunctions_Bindings___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectFunctions_Bindings___c::GameObjectFunctions_Bindings___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::Bindings_LuaEmit.Emit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Bindings_LuaEmit::Emit)> {
  constexpr static std::size_t size = 0xb30;
  constexpr static std::size_t addrs = 0x5a765e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_LuaEmit*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Bindings_LuaEmit::setStaticF_callTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "callTime", ::GlobalNamespace::Bindings_LuaEmit*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::Bindings_LuaEmit::getStaticF_callTime()  {
return ::cordl_internals::getStaticField<float_t, "callTime", ::GlobalNamespace::Bindings_LuaEmit*>();
}
inline void GlobalNamespace::Bindings_LuaEmit::setStaticF_callCount(float_t  value)  {
::cordl_internals::setStaticField<float_t, "callCount", ::GlobalNamespace::Bindings_LuaEmit*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::Bindings_LuaEmit::getStaticF_callCount()  {
return ::cordl_internals::getStaticField<float_t, "callCount", ::GlobalNamespace::Bindings_LuaEmit*>();
}
inline int32_t GlobalNamespace::Bindings_LuaEmit::Emit(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bindings_LuaEmit*>(),
                        {"Emit", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_LuaEmit::Bindings_LuaEmit()   {
}
