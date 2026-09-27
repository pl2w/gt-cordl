#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayerLocal.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_def.hpp"
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandData_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandGrabState_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_InputDataMotion_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)()>(&::GlobalNamespace::GameBallPlayerLocal::Awake)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x57a77f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal._OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GameBallPlayerLocal::_OnApplicationQuit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x57a7a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"_OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(bool)>(&::GlobalNamespace::GameBallPlayerLocal::OnApplicationPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57a7bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)()>(&::GlobalNamespace::GameBallPlayerLocal::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57a7c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.OnUpdateInteract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)()>(&::GlobalNamespace::GameBallPlayerLocal::OnUpdateInteract)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57a7d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"OnUpdateInteract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::UpdateInput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x57a7dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateInput", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.UpdateHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::UpdateHand)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x57a7f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.SetGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(::GlobalNamespace::GameBallId, int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::SetGrabbed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57a8d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.ClearGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::ClearGrabbed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57a8e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.ClearAllGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)()>(&::GlobalNamespace::GameBallPlayerLocal::ClearAllGrabbed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57a8ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"ClearAllGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.UpdateStuckState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)()>(&::GlobalNamespace::GameBallPlayerLocal::UpdateStuckState)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x57a8d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateStuckState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.UpdateHandEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::UpdateHandEmpty)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x57a8164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateHandEmpty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.UpdateHandHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::UpdateHandHolding)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x57a86b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateHandHolding", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.GetXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::GetXRNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57a8028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"GetXRNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.GetHandTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GameBallPlayerLocal::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::GetHandTransform)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57a8f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"GetHandTransform", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.IsLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal::IsLeftHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a8ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"IsLeftHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.GetHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::GlobalNamespace::GameBallPlayerLocal::GetHandIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a9290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"GetHandIndex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.PlayCatchFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(bool)>(&::GlobalNamespace::GameBallPlayerLocal::PlayCatchFx)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57a929c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"PlayCatchFx", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal.PlayThrowFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)(bool)>(&::GlobalNamespace::GameBallPlayerLocal::PlayThrowFx)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57a9394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"PlayThrowFx", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal::*)()>(&::GlobalNamespace::GameBallPlayerLocal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a9498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameBallPlayer>& GlobalNamespace::GameBallPlayerLocal::__cordl_internal_get_gamePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr ::UnityW<::GlobalNamespace::GameBallPlayer> const& GlobalNamespace::GameBallPlayerLocal::__cordl_internal_get_gamePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr void GlobalNamespace::GameBallPlayerLocal::__cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GameBallPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamePlayer = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData>& GlobalNamespace::GameBallPlayerLocal::__cordl_internal_get_hands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData> const& GlobalNamespace::GameBallPlayerLocal::__cordl_internal_get_hands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr void GlobalNamespace::GameBallPlayerLocal::__cordl_internal_set_hands(::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hands = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*>& GlobalNamespace::GameBallPlayerLocal::__cordl_internal_get_inputData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputData;
}
constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*> const& GlobalNamespace::GameBallPlayerLocal::__cordl_internal_get_inputData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputData;
}
constexpr void GlobalNamespace::GameBallPlayerLocal::__cordl_internal_set_inputData(::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputData = value;
}
inline void GlobalNamespace::GameBallPlayerLocal::setStaticF_instance(::UnityW<::GlobalNamespace::GameBallPlayerLocal>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GameBallPlayerLocal>, "instance", ::GlobalNamespace::GameBallPlayerLocal*>(std::forward<::UnityW<::GlobalNamespace::GameBallPlayerLocal>>(value));
}
inline ::UnityW<::GlobalNamespace::GameBallPlayerLocal> GlobalNamespace::GameBallPlayerLocal::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GameBallPlayerLocal>, "instance", ::GlobalNamespace::GameBallPlayerLocal*>();
}
inline void GlobalNamespace::GameBallPlayerLocal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayerLocal::_OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"_OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayerLocal::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::GameBallPlayerLocal::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayerLocal::OnUpdateInteract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"OnUpdateInteract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayerLocal::UpdateInput(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateInput", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GameBallPlayerLocal::UpdateHand(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GameBallPlayerLocal::SetGrabbed(::GlobalNamespace::GameBallId  gameBallId, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, handIndex);
}
inline void GlobalNamespace::GameBallPlayerLocal::ClearGrabbed(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GameBallPlayerLocal::ClearAllGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"ClearAllGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayerLocal::UpdateStuckState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateStuckState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayerLocal::UpdateHandEmpty(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateHandEmpty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GameBallPlayerLocal::UpdateHandHolding(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"UpdateHandHolding", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::GameBallPlayerLocal::GetXRNode(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"GetXRNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method, handIndex);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GameBallPlayerLocal::GetHandTransform(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"GetHandTransform", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, handIndex);
}
inline bool GlobalNamespace::GameBallPlayerLocal::IsLeftHand(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"IsLeftHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handIndex);
}
inline int32_t GlobalNamespace::GameBallPlayerLocal::GetHandIndex(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"GetHandIndex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, leftHand);
}
inline void GlobalNamespace::GameBallPlayerLocal::PlayCatchFx(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"PlayCatchFx", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GameBallPlayerLocal::PlayThrowFx(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {"PlayThrowFx", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GameBallPlayerLocal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameBallPlayerLocal* GlobalNamespace::GameBallPlayerLocal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameBallPlayerLocal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallPlayerLocal::GameBallPlayerLocal()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal_InputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal_InputData::*)(int32_t)>(&::GlobalNamespace::GameBallPlayerLocal_InputData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57a79d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal_InputData.AddInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayerLocal_InputData::*)(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion)>(&::GlobalNamespace::GameBallPlayerLocal_InputData::AddInput)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x57a8038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {"AddInput", {}, {::i2c::type_of<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal_InputData.GetMaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GameBallPlayerLocal_InputData::*)(float_t, float_t)>(&::GlobalNamespace::GameBallPlayerLocal_InputData::GetMaxSpeed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x57a9004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {"GetMaxSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayerLocal_InputData.GetAvgVel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GameBallPlayerLocal_InputData::*)(float_t, float_t)>(&::GlobalNamespace::GameBallPlayerLocal_InputData::GetAvgVel)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x57a9110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {"GetAvgVel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameBallPlayerLocal_InputData::__cordl_internal_get_maxInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxInputs;
}
constexpr int32_t const& GlobalNamespace::GameBallPlayerLocal_InputData::__cordl_internal_get_maxInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxInputs;
}
constexpr void GlobalNamespace::GameBallPlayerLocal_InputData::__cordl_internal_set_maxInputs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxInputs = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>*& GlobalNamespace::GameBallPlayerLocal_InputData::__cordl_internal_get_inputMotionHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMotionHistory;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>* const& GlobalNamespace::GameBallPlayerLocal_InputData::__cordl_internal_get_inputMotionHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMotionHistory;
}
constexpr void GlobalNamespace::GameBallPlayerLocal_InputData::__cordl_internal_set_inputMotionHistory(::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMotionHistory = value;
}
inline void GlobalNamespace::GameBallPlayerLocal_InputData::_ctor(int32_t  maxInputs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxInputs);
}
inline void GlobalNamespace::GameBallPlayerLocal_InputData::AddInput(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {"AddInput", {}, {::i2c::type_of<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline float_t GlobalNamespace::GameBallPlayerLocal_InputData::GetMaxSpeed(float_t  ignoreRecent, float_t  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {"GetMaxSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, ignoreRecent, window);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GameBallPlayerLocal_InputData::GetAvgVel(float_t  ignoreRecent, float_t  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayerLocal_InputData*>(),
                        {"GetAvgVel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, ignoreRecent, window);
}
inline ::GlobalNamespace::GameBallPlayerLocal_InputData* GlobalNamespace::GameBallPlayerLocal_InputData::New_ctor(int32_t  maxInputs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameBallPlayerLocal_InputData*>(maxInputs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallPlayerLocal_InputData::GameBallPlayerLocal_InputData()   {
}
