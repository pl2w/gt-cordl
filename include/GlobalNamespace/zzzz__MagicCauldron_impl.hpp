#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron.hpp"
#include "GlobalNamespace/zzzz__FXSArgs_impl.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_impl.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_MagicCauldronData_impl.hpp"
#include "GlobalNamespace/zzzz__MagicIngredientType_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__IFXContextParems_1_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldronLiquid_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_MagicCauldronData_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_Recipe_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_def.hpp"
#include "GlobalNamespace/zzzz__MagicIngredientType_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__NoncontrollableBroomstick_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::Awake)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x59578ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5957ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595820c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.LevitationSpellCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::LevitationSpellCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59582ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"LevitationSpellCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.ChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(::GlobalNamespace::MagicCauldron_CauldronState)>(&::GlobalNamespace::MagicCauldron::ChangeState)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x5957cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::UpdateState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5958210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnEventStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::OnEventStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5958748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnEventStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnEventEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::OnEventEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5958750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnEventEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnIngredientAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MagicCauldron::OnIngredientAdd)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5958758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnIngredientAdd", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.RPC_OnIngredientAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(int32_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::MagicCauldron::RPC_OnIngredientAdd)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5958958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"RPC_OnIngredientAdd", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnIngredientAddShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::MagicCauldron::OnIngredientAddShared)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x59587c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnIngredientAddShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnIngredientAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(int32_t)>(&::GlobalNamespace::MagicCauldron::OnIngredientAdd)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5958b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnIngredientAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.CheckIngredients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::CheckIngredients)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x59585ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"CheckIngredients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.UpdateCauldronColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(::UnityEngine::Color)>(&::GlobalNamespace::MagicCauldron::UpdateCauldronColor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5958380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"UpdateCauldronColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MagicCauldron::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5958ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59591e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MagicCauldron_MagicCauldronData (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59592fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(::GlobalNamespace::MagicCauldron_MagicCauldronData)>(&::GlobalNamespace::MagicCauldron::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5959358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::WriteDataFusion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59593b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::ReadDataFusion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59593e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MagicCauldron::WriteDataPUN)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x595948c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MagicCauldron::ReadDataPUN)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5959598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(float_t, int32_t, ::GlobalNamespace::MagicCauldron_CauldronState, int32_t)>(&::GlobalNamespace::MagicCauldron::ReadDataShared)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5959464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5959710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)(bool)>(&::GlobalNamespace::MagicCauldron::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59598cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron::*)()>(&::GlobalNamespace::MagicCauldron::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59598f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron.RPC_OnIngredientAdd@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::MagicCauldron::RPC_OnIngredientAdd@Invoker)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5959928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"RPC_OnIngredientAdd@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>*& GlobalNamespace::MagicCauldron::__cordl_internal_get_recipes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recipes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>* const& GlobalNamespace::MagicCauldron::__cordl_internal_get_recipes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recipes;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_recipes(::System::Collections::Generic::List_1<::GlobalNamespace::MagicCauldron_Recipe>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recipes = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_maxTimeToAddAllIngredients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimeToAddAllIngredients;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_maxTimeToAddAllIngredients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimeToAddAllIngredients;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_maxTimeToAddAllIngredients(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimeToAddAllIngredients = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_summonWitchesDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonWitchesDuration;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_summonWitchesDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonWitchesDuration;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_summonWitchesDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonWitchesDuration = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_recipeFailedDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recipeFailedDuration;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_recipeFailedDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recipeFailedDuration;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_recipeFailedDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recipeFailedDuration = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_cooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_cooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_cooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownDuration = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>>& GlobalNamespace::MagicCauldron::__cordl_internal_get_allIngredients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allIngredients;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_allIngredients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allIngredients;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_allIngredients(::ArrayW<::UnityW<::GlobalNamespace::MagicIngredientType>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allIngredients = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MagicCauldron::__cordl_internal_get_flyingWitchesContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyingWitchesContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_flyingWitchesContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyingWitchesContainer;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_flyingWitchesContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flyingWitchesContainer = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MagicCauldron::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MagicCauldron::__cordl_internal_get_ingredientAddedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ingredientAddedAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_ingredientAddedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ingredientAddedAudio;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_ingredientAddedAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ingredientAddedAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MagicCauldron::__cordl_internal_get_recipeFailedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recipeFailedAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_recipeFailedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recipeFailedAudio;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_recipeFailedAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recipeFailedAudio = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MagicCauldron::__cordl_internal_get_bubblesParticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblesParticle;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_bubblesParticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblesParticle;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_bubblesParticle(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubblesParticle = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MagicCauldron::__cordl_internal_get_successParticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successParticle;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_successParticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successParticle;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_successParticle(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successParticle = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MagicCauldron::__cordl_internal_get_splashParticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashParticle;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_splashParticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashParticle;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_splashParticle(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashParticle = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MagicCauldron::__cordl_internal_get_CauldronActiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CauldronActiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MagicCauldron::__cordl_internal_get_CauldronActiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CauldronActiveColor;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_CauldronActiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CauldronActiveColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MagicCauldron::__cordl_internal_get_CauldronFailedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CauldronFailedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MagicCauldron::__cordl_internal_get_CauldronFailedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CauldronFailedColor;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_CauldronFailedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CauldronFailedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MagicCauldron::__cordl_internal_get_CauldronNotReadyColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CauldronNotReadyColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MagicCauldron::__cordl_internal_get_CauldronNotReadyColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CauldronNotReadyColor;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_CauldronNotReadyColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CauldronNotReadyColor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>*& GlobalNamespace::MagicCauldron::__cordl_internal_get_witchesComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witchesComponent;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>* const& GlobalNamespace::MagicCauldron::__cordl_internal_get_witchesComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witchesComponent;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_witchesComponent(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___witchesComponent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentIngredients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIngredients;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>* const& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentIngredients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIngredients;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_currentIngredients(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MagicIngredientType>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIngredients = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentStateElapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStateElapsedTime;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentStateElapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentStateElapsedTime;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_currentStateElapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentStateElapsedTime = value;
}
constexpr ::GlobalNamespace::MagicCauldron_CauldronState& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::MagicCauldron_CauldronState const& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_currentState(::GlobalNamespace::MagicCauldron_CauldronState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MagicCauldron::__cordl_internal_get_rendr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendr;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MagicCauldron::__cordl_internal_get_rendr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendr;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_rendr(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rendr = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MagicCauldron::__cordl_internal_get_cauldronColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cauldronColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MagicCauldron::__cordl_internal_get_cauldronColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cauldronColor;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_cauldronColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cauldronColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColor;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_currentColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentColor = value;
}
constexpr int32_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentRecipeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRecipeIndex;
}
constexpr int32_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_currentRecipeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRecipeIndex;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_currentRecipeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRecipeIndex = value;
}
constexpr int32_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_ingredientIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ingredientIndex;
}
constexpr int32_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_ingredientIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ingredientIndex;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_ingredientIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ingredientIndex = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_waitTimeToSummonWitches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTimeToSummonWitches;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_waitTimeToSummonWitches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTimeToSummonWitches;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_waitTimeToSummonWitches(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTimeToSummonWitches = value;
}
constexpr ::UnityW<::GlobalNamespace::MagicCauldronLiquid>& GlobalNamespace::MagicCauldron::__cordl_internal_get__liquid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____liquid;
}
constexpr ::UnityW<::GlobalNamespace::MagicCauldronLiquid> const& GlobalNamespace::MagicCauldron::__cordl_internal_get__liquid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____liquid;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set__liquid(::UnityW<::GlobalNamespace::MagicCauldronLiquid>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____liquid = value;
}
constexpr ::GlobalNamespace::MagicCauldron_IngrediantFXContext*& GlobalNamespace::MagicCauldron::__cordl_internal_get_reusableFXContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableFXContext;
}
constexpr ::GlobalNamespace::MagicCauldron_IngrediantFXContext* const& GlobalNamespace::MagicCauldron::__cordl_internal_get_reusableFXContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableFXContext;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_reusableFXContext(::GlobalNamespace::MagicCauldron_IngrediantFXContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reusableFXContext = value;
}
constexpr ::GlobalNamespace::MagicCauldron_IngredientArgs*& GlobalNamespace::MagicCauldron::__cordl_internal_get_reusableIngrediantArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableIngrediantArgs;
}
constexpr ::GlobalNamespace::MagicCauldron_IngredientArgs* const& GlobalNamespace::MagicCauldron::__cordl_internal_get_reusableIngrediantArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableIngrediantArgs;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_reusableIngrediantArgs(::GlobalNamespace::MagicCauldron_IngredientArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reusableIngrediantArgs = value;
}
constexpr bool& GlobalNamespace::MagicCauldron::__cordl_internal_get_testLevitationAlwaysOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLevitationAlwaysOn;
}
constexpr bool const& GlobalNamespace::MagicCauldron::__cordl_internal_get_testLevitationAlwaysOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLevitationAlwaysOn;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_testLevitationAlwaysOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testLevitationAlwaysOn = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationRadius;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationRadius;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationRadius = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationSpellDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationSpellDuration;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationSpellDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationSpellDuration;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationSpellDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationSpellDuration = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationStrength;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationStrength;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationStrength = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationDuration;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationDuration;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationDuration = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBlendOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBlendOutDuration;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBlendOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBlendOutDuration;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationBlendOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationBlendOutDuration = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBonusStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBonusStrength;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBonusStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBonusStrength;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationBonusStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationBonusStrength = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBonusOffAtYSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBonusOffAtYSpeed;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBonusOffAtYSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBonusOffAtYSpeed;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationBonusOffAtYSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationBonusOffAtYSpeed = value;
}
constexpr float_t& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBonusFullAtYSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBonusFullAtYSpeed;
}
constexpr float_t const& GlobalNamespace::MagicCauldron::__cordl_internal_get_levitationBonusFullAtYSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levitationBonusFullAtYSpeed;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set_levitationBonusFullAtYSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levitationBonusFullAtYSpeed = value;
}
constexpr ::GlobalNamespace::MagicCauldron_MagicCauldronData& GlobalNamespace::MagicCauldron::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::MagicCauldron_MagicCauldronData const& GlobalNamespace::MagicCauldron::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::MagicCauldron::__cordl_internal_set__Data(::GlobalNamespace::MagicCauldron_MagicCauldronData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::MagicCauldron::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MagicCauldron::LevitationSpellCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"LevitationSpellCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::ChangeState(::GlobalNamespace::MagicCauldron_CauldronState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MagicCauldron::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::OnEventStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnEventStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::OnEventEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnEventEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::OnIngredientAdd(int32_t  _ingredientIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnIngredientAdd", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _ingredientIndex, info);
}
inline void GlobalNamespace::MagicCauldron::RPC_OnIngredientAdd(int32_t  _ingredientIndex, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"RPC_OnIngredientAdd", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _ingredientIndex, info);
}
inline void GlobalNamespace::MagicCauldron::OnIngredientAddShared(int32_t  _ingredientIndex, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnIngredientAddShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _ingredientIndex, info);
}
inline void GlobalNamespace::MagicCauldron::OnIngredientAdd(int32_t  _ingredientIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnIngredientAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _ingredientIndex);
}
inline bool GlobalNamespace::MagicCauldron::CheckIngredients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"CheckIngredients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::UpdateCauldronColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"UpdateCauldronColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::MagicCauldron::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MagicCauldron::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MagicCauldron_MagicCauldronData GlobalNamespace::MagicCauldron::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MagicCauldron_MagicCauldronData>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::set_Data(::GlobalNamespace::MagicCauldron_MagicCauldronData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MagicCauldron::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::MagicCauldron::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::MagicCauldron::ReadDataShared(float_t  stateElapsedTime, int32_t  recipeIndex, ::GlobalNamespace::MagicCauldron_CauldronState  state, int32_t  ingredientIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateElapsedTime, recipeIndex, state, ingredientIndex);
}
inline void GlobalNamespace::MagicCauldron::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::MagicCauldron::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicCauldron*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron::RPC_OnIngredientAdd@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron*>(),
                        {"RPC_OnIngredientAdd@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GlobalNamespace::MagicCauldron* GlobalNamespace::MagicCauldron::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicCauldron*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron::MagicCauldron()   {
}
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::*)(int32_t)>(&::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5958358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::*)()>(&::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5959ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::*)()>(&::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5959ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::*)()>(&::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::*)()>(&::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5959c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::*)()>(&::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MagicCauldron>& GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MagicCauldron> const& GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MagicCauldron>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45* GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron__LevitationSpellCoroutine_d__45::MagicCauldron__LevitationSpellCoroutine_d__45()   {
}
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_IngrediantFXContext.IFXContextParems_MagicCauldron_IngredientArgs__get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FXSystemSettings> (::GlobalNamespace::MagicCauldron_IngrediantFXContext::*)()>(&::GlobalNamespace::MagicCauldron_IngrediantFXContext::IFXContextParems_MagicCauldron_IngredientArgs__get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59599e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>(),
                        {"IFXContextParems<MagicCauldron.IngredientArgs>.get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_IngrediantFXContext.IFXContextParems_MagicCauldron_IngredientArgs__OnPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_IngrediantFXContext::*)(::GlobalNamespace::MagicCauldron_IngredientArgs*)>(&::GlobalNamespace::MagicCauldron_IngrediantFXContext::IFXContextParems_MagicCauldron_IngredientArgs__OnPlayFX)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59599e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>(),
                        {"IFXContextParems<MagicCauldron.IngredientArgs>.OnPlayFX", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_IngredientArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_IngrediantFXContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_IngrediantFXContext::*)()>(&::GlobalNamespace::MagicCauldron_IngrediantFXContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5957bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FXSystemSettings>& GlobalNamespace::MagicCauldron_IngrediantFXContext::__cordl_internal_get_playerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSettings;
}
constexpr ::UnityW<::GlobalNamespace::FXSystemSettings> const& GlobalNamespace::MagicCauldron_IngrediantFXContext::__cordl_internal_get_playerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSettings;
}
constexpr void GlobalNamespace::MagicCauldron_IngrediantFXContext::__cordl_internal_set_playerSettings(::UnityW<::GlobalNamespace::FXSystemSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerSettings = value;
}
constexpr ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*& GlobalNamespace::MagicCauldron_IngrediantFXContext::__cordl_internal_get_fxCallBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxCallBack;
}
constexpr ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback* const& GlobalNamespace::MagicCauldron_IngrediantFXContext::__cordl_internal_get_fxCallBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxCallBack;
}
constexpr void GlobalNamespace::MagicCauldron_IngrediantFXContext::__cordl_internal_set_fxCallBack(::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxCallBack = value;
}
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::MagicCauldron_IngrediantFXContext::IFXContextParems_MagicCauldron_IngredientArgs__get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>(),
                        {"IFXContextParems<MagicCauldron.IngredientArgs>.get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron_IngrediantFXContext::IFXContextParems_MagicCauldron_IngredientArgs__OnPlayFX(::GlobalNamespace::MagicCauldron_IngredientArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>(),
                        {"IFXContextParems<MagicCauldron.IngredientArgs>.OnPlayFX", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_IngredientArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void GlobalNamespace::MagicCauldron_IngrediantFXContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MagicCauldron_IngrediantFXContext* GlobalNamespace::MagicCauldron_IngrediantFXContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicCauldron_IngrediantFXContext*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>"
constexpr  GlobalNamespace::MagicCauldron_IngrediantFXContext::operator ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>*() noexcept {
return static_cast<::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>"
constexpr ::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>* GlobalNamespace::MagicCauldron_IngrediantFXContext::i___GlobalNamespace__IFXContextParems_1___GlobalNamespace__MagicCauldron_IngredientArgs__() noexcept {
return static_cast<::GlobalNamespace::IFXContextParems_1<::GlobalNamespace::MagicCauldron_IngredientArgs*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron_IngrediantFXContext::MagicCauldron_IngrediantFXContext()   {
}
//  Writing Method size for method: ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5957c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::*)(int32_t)>(&::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5959a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(),
                    {::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5959a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(),
                    {::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::*)(::System::IAsyncResult*)>(&::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5959a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(),
                    {::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::Invoke(int32_t  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::IAsyncResult* GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::BeginInvoke(int32_t  key, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, key, callback, object);
}
inline void GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback* GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IngrediantFXContext_MagicCauldron_Callback::IngrediantFXContext_MagicCauldron_Callback()   {
}
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_IngredientArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_IngredientArgs::*)()>(&::GlobalNamespace::MagicCauldron_IngredientArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5957bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngredientArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MagicCauldron_IngredientArgs::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr int32_t const& GlobalNamespace::MagicCauldron_IngredientArgs::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void GlobalNamespace::MagicCauldron_IngredientArgs::__cordl_internal_set_key(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
inline void GlobalNamespace::MagicCauldron_IngredientArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_IngredientArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MagicCauldron_IngredientArgs* GlobalNamespace::MagicCauldron_IngredientArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicCauldron_IngredientArgs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron_IngredientArgs::MagicCauldron_IngredientArgs()   {
}
