#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSerializerScene.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializer_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializerScene_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSerializeableScene_def.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewPreNetDestroy_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.get_HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::get_HasAuthority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58f4d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x58f4db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58f4f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.OnValidEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::OnValidEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58f4f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f502c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.OnValidDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::OnValidDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58f5050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaSerializerScene::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58f50f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)(::Photon::Pun::PhotonView*)>(&::GlobalNamespace::GorillaSerializerScene::Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f5228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene.ValidOnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSerializerScene::*)(::Photon::Pun::PhotonStream*, ::by_ref<::Photon::Pun::PhotonMessageInfo>)>(&::GlobalNamespace::GorillaSerializerScene::ValidOnSerialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58f5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerScene._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerScene::*)()>(&::GlobalNamespace::GorillaSerializerScene::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58f52bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_transferrable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrable;
}
constexpr bool const& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_transferrable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrable;
}
constexpr void GlobalNamespace::GorillaSerializerScene::__cordl_internal_set_transferrable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrable = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_targetComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetComponent;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_targetComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetComponent;
}
constexpr void GlobalNamespace::GorillaSerializerScene::__cordl_internal_set_targetComponent(::UnityW<::UnityEngine::MonoBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetComponent = value;
}
constexpr ::GlobalNamespace::IGorillaSerializeableScene*& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_sceneSerializeTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneSerializeTarget;
}
constexpr ::GlobalNamespace::IGorillaSerializeableScene* const& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_sceneSerializeTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneSerializeTarget;
}
constexpr void GlobalNamespace::GorillaSerializerScene::__cordl_internal_set_sceneSerializeTarget(::GlobalNamespace::IGorillaSerializeableScene*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneSerializeTarget = value;
}
constexpr bool& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_validDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validDisable;
}
constexpr bool const& GlobalNamespace::GorillaSerializerScene::__cordl_internal_get_validDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validDisable;
}
constexpr void GlobalNamespace::GorillaSerializerScene::__cordl_internal_set_validDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validDisable = value;
}
inline bool GlobalNamespace::GorillaSerializerScene::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerScene::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerScene::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerScene::OnValidEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerScene::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerScene::OnValidDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerScene::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GorillaSerializerScene::Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {"Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootView);
}
inline bool GlobalNamespace::GorillaSerializerScene::ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaSerializerScene::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerScene*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSerializerScene* GlobalNamespace::GorillaSerializerScene::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSerializerScene*>());
}
/// @brief Convert operator to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr  GlobalNamespace::GorillaSerializerScene::operator ::Photon::Pun::IOnPhotonViewPreNetDestroy*() noexcept {
return static_cast<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IOnPhotonViewPreNetDestroy"
constexpr ::Photon::Pun::IOnPhotonViewPreNetDestroy* GlobalNamespace::GorillaSerializerScene::i___Photon__Pun__IOnPhotonViewPreNetDestroy() noexcept {
return static_cast<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr  GlobalNamespace::GorillaSerializerScene::operator ::Photon::Pun::IPhotonViewCallback*() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* GlobalNamespace::GorillaSerializerScene::i___Photon__Pun__IPhotonViewCallback() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSerializerScene::GorillaSerializerScene()   {
}
