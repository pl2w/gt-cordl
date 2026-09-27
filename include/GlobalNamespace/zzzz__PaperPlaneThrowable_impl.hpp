#pragma once
// IWYU pragma private; include "GlobalNamespace/PaperPlaneThrowable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PaperPlaneThrowable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiterWithCooldown_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnLaunchRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::PaperPlaneThrowable::OnLaunchRPC)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x578c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"OnLaunchRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x578cebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x578cfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnPhotonEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::PaperPlaneThrowable::OnPhotonEvent)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x578d084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"OnPhotonEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::Start)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x578d568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::PaperPlaneThrowable::OnGrab)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x578d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.FetchViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::PaperPlaneThrowable*)>(&::GlobalNamespace::PaperPlaneThrowable::FetchViewID)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x578c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"FetchViewID", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneThrowable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PaperPlaneThrowable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::PaperPlaneThrowable::OnRelease)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x578d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.GetThrowableId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::GetThrowableId)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x578cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"GetThrowableId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.LaunchProjectileLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::PaperPlaneThrowable::LaunchProjectileLocal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x578cc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"LaunchProjectileLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.OnProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PaperPlaneThrowable::OnProjectileHit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x578dcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x578dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.CalcAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::GlobalNamespace::PaperPlaneThrowable::CalcAngularVelocity)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x578deec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"CalcAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable.DropItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::DropItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578e00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperPlaneThrowable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperPlaneThrowable::*)()>(&::GlobalNamespace::PaperPlaneThrowable::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x578e014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____projectilePrefab;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____projectilePrefab = value;
}
constexpr float_t& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get_minThrowSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minThrowSpeed;
}
constexpr float_t const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get_minThrowSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minThrowSpeed;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set_minThrowSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minThrowSpeed = value;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown*& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get_m_spamCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spamCheck;
}
constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get_m_spamCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spamCheck;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set_m_spamCheck(::GlobalNamespace::CallLimiterWithCooldown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spamCheck = value;
}
constexpr ::StringW& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__throwableID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwableID;
}
constexpr ::StringW const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__throwableID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwableID;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__throwableID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throwableID = value;
}
constexpr ::System::Nullable_1<int32_t>& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__throwableIdHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwableIdHash;
}
constexpr ::System::Nullable_1<int32_t> const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__throwableIdHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwableIdHash;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__throwableIdHash(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throwableIdHash = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__lastWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__lastWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWorldPos;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__lastWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWorldPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__lastWorldRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWorldRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__lastWorldRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWorldRot;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__lastWorldRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWorldRot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__itemWorldVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemWorldVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__itemWorldVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemWorldVel;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__itemWorldVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemWorldVel = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__itemWorldAngVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemWorldAngVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PaperPlaneThrowable::__cordl_internal_get__itemWorldAngVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____itemWorldAngVel;
}
constexpr void GlobalNamespace::PaperPlaneThrowable::__cordl_internal_set__itemWorldAngVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____itemWorldAngVel = value;
}
inline void GlobalNamespace::PaperPlaneThrowable::setStaticF__playerView(::UnityW<::UnityEngine::Camera>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Camera>, "_playerView", ::GlobalNamespace::PaperPlaneThrowable*>(std::forward<::UnityW<::UnityEngine::Camera>>(value));
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::PaperPlaneThrowable::getStaticF__playerView()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Camera>, "_playerView", ::GlobalNamespace::PaperPlaneThrowable*>();
}
inline void GlobalNamespace::PaperPlaneThrowable::setStaticF_gLaunchRPC(::GlobalNamespace::PhotonEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PhotonEvent*, "gLaunchRPC", ::GlobalNamespace::PaperPlaneThrowable*>(std::forward<::GlobalNamespace::PhotonEvent*>(value));
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::PaperPlaneThrowable::getStaticF_gLaunchRPC()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PhotonEvent*, "gLaunchRPC", ::GlobalNamespace::PaperPlaneThrowable*>();
}
inline void GlobalNamespace::PaperPlaneThrowable::setStaticF_kProjectileEvent(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kProjectileEvent", ::GlobalNamespace::PaperPlaneThrowable*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PaperPlaneThrowable::getStaticF_kProjectileEvent()  {
return ::cordl_internals::getStaticField<int32_t, "kProjectileEvent", ::GlobalNamespace::PaperPlaneThrowable*>();
}
inline void GlobalNamespace::PaperPlaneThrowable::setStaticF_gEventArgs(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "gEventArgs", ::GlobalNamespace::PaperPlaneThrowable*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::PaperPlaneThrowable::getStaticF_gEventArgs()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "gEventArgs", ::GlobalNamespace::PaperPlaneThrowable*>();
}
inline void GlobalNamespace::PaperPlaneThrowable::setStaticF_gRaiseOpts(::Photon::Realtime::RaiseEventOptions*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "gRaiseOpts", ::GlobalNamespace::PaperPlaneThrowable*>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* GlobalNamespace::PaperPlaneThrowable::getStaticF_gRaiseOpts()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "gRaiseOpts", ::GlobalNamespace::PaperPlaneThrowable*>();
}
inline void GlobalNamespace::PaperPlaneThrowable::OnLaunchRPC(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"OnLaunchRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, receiver, args, info);
}
inline void GlobalNamespace::PaperPlaneThrowable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneThrowable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneThrowable::OnPhotonEvent(::ExitGames::Client::Photon::EventData*  evData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"OnPhotonEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evData);
}
inline void GlobalNamespace::PaperPlaneThrowable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneThrowable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline int32_t GlobalNamespace::PaperPlaneThrowable::FetchViewID(::GlobalNamespace::PaperPlaneThrowable*  ppt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"FetchViewID", {}, {::i2c::type_of<::GlobalNamespace::PaperPlaneThrowable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ppt);
}
inline bool GlobalNamespace::PaperPlaneThrowable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline int32_t GlobalNamespace::PaperPlaneThrowable::GetThrowableId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"GetThrowableId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneThrowable::LaunchProjectileLocal(::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"LaunchProjectileLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launchPos, launchRot, releaseVel);
}
inline void GlobalNamespace::PaperPlaneThrowable::OnProjectileHit(::UnityEngine::Vector3  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint);
}
inline void GlobalNamespace::PaperPlaneThrowable::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PaperPlaneThrowable::CalcAngularVelocity(::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {"CalcAngularVelocity", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to, dt);
}
inline void GlobalNamespace::PaperPlaneThrowable::DropItem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperPlaneThrowable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperPlaneThrowable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PaperPlaneThrowable* GlobalNamespace::PaperPlaneThrowable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaperPlaneThrowable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaperPlaneThrowable::PaperPlaneThrowable()   {
}
