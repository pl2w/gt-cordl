#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSerializer.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSerializeable_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.Photon_Pun_IPunObservable_OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializer::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaSerializer::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58f47f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaSerializer::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x58f4998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.OnSuccessfullInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaSerializer::OnSuccessfullInstantiate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f4c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.OnInstantiateSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSerializer::*)(::Photon::Pun::PhotonMessageInfo, ::by_ref<::UnityEngine::GameObject*>, ::by_ref<::System::Type*>)>(&::GlobalNamespace::GorillaSerializer::OnInstantiateSetup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58f4c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.ValidOnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSerializer::*)(::Photon::Pun::PhotonStream*, ::by_ref<::Photon::Pun::PhotonMessageInfo>)>(&::GlobalNamespace::GorillaSerializer::ValidOnSerialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f4cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializer::*)(::StringW, bool, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GorillaSerializer::SendRPC)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f4ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer.SendRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializer::*)(::StringW, ::Photon::Realtime::Player*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::GorillaSerializer::SendRPC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f4d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializer::*)()>(&::GlobalNamespace::GorillaSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f4d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaSerializer::__cordl_internal_get_successfullInstantiate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullInstantiate;
}
constexpr bool const& GlobalNamespace::GorillaSerializer::__cordl_internal_get_successfullInstantiate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullInstantiate;
}
constexpr void GlobalNamespace::GorillaSerializer::__cordl_internal_set_successfullInstantiate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successfullInstantiate = value;
}
constexpr ::GlobalNamespace::IGorillaSerializeable*& GlobalNamespace::GorillaSerializer::__cordl_internal_get_serializeTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTarget;
}
constexpr ::GlobalNamespace::IGorillaSerializeable* const& GlobalNamespace::GorillaSerializer::__cordl_internal_get_serializeTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTarget;
}
constexpr void GlobalNamespace::GorillaSerializer::__cordl_internal_set_serializeTarget(::GlobalNamespace::IGorillaSerializeable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeTarget = value;
}
constexpr ::System::Type*& GlobalNamespace::GorillaSerializer::__cordl_internal_get_targetType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetType;
}
constexpr ::System::Type* const& GlobalNamespace::GorillaSerializer::__cordl_internal_get_targetType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetType;
}
constexpr void GlobalNamespace::GorillaSerializer::__cordl_internal_set_targetType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaSerializer::__cordl_internal_get_targetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaSerializer::__cordl_internal_get_targetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr void GlobalNamespace::GorillaSerializer::__cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetObject = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GorillaSerializer::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GorillaSerializer::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GorillaSerializer::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
inline void GlobalNamespace::GorillaSerializer::Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaSerializer::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GorillaSerializer::OnSuccessfullInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline bool GlobalNamespace::GorillaSerializer::OnInstantiateSetup(::Photon::Pun::PhotonMessageInfo  info, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info, outTargetObject, outTargetType);
}
inline bool GlobalNamespace::GorillaSerializer::ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, info);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::RPCNetworkBase*>)
inline T GlobalNamespace::GorillaSerializer::AddRPCComponent()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(), 10}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializer::SendRPC(::StringW  rpcName, bool  targetOthers, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcName, targetOthers, data);
}
inline void GlobalNamespace::GorillaSerializer::SendRPC(::StringW  rpcName, ::Photon::Realtime::Player*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {"SendRPC", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcName, targetPlayer, data);
}
inline void GlobalNamespace::GorillaSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSerializer* GlobalNamespace::GorillaSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSerializer*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::GorillaSerializer::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::GorillaSerializer::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GlobalNamespace::GorillaSerializer::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GlobalNamespace::GorillaSerializer::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSerializer::GorillaSerializer()   {
}
