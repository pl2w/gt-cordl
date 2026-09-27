#pragma once
// IWYU pragma private; include "GorillaTagScripts/NetworkedPlayerColourNotifier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GorillaTagScripts/zzzz__NetworkedPlayerColourNotifier_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::NetworkedPlayerColourNotifier.SetLocalRigReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RigContainer*)>(&::GorillaTagScripts::NetworkedPlayerColourNotifier::SetLocalRigReference)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bc4cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"SetLocalRigReference", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::NetworkedPlayerColourNotifier.NotifyOthers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::NetworkedPlayerColourNotifier::NotifyOthers)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5bc4dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"NotifyOthers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::NetworkedPlayerColourNotifier.OnLocalColourChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::GorillaTagScripts::NetworkedPlayerColourNotifier::OnLocalColourChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5bc5044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"OnLocalColourChanged", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::NetworkedPlayerColourNotifier.OnPlayerJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::NetworkedPlayerColourNotifier::OnPlayerJoinedRoom)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5bc5130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::NetworkedPlayerColourNotifier.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::NetworkedPlayerColourNotifier::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bc539c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::setStaticF_m_localRigContainer(::UnityW<::GlobalNamespace::RigContainer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RigContainer>, "m_localRigContainer", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>(std::forward<::UnityW<::GlobalNamespace::RigContainer>>(value));
}
inline ::UnityW<::GlobalNamespace::RigContainer> GorillaTagScripts::NetworkedPlayerColourNotifier::getStaticF_m_localRigContainer()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RigContainer>, "m_localRigContainer", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>();
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::setStaticF_m_localRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::VRRig>, "m_localRig", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>(std::forward<::UnityW<::GlobalNamespace::VRRig>>(value));
}
inline ::UnityW<::GlobalNamespace::VRRig> GorillaTagScripts::NetworkedPlayerColourNotifier::getStaticF_m_localRig()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::VRRig>, "m_localRig", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>();
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::setStaticF_m_initialNetColour(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "m_initialNetColour", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GorillaTagScripts::NetworkedPlayerColourNotifier::getStaticF_m_initialNetColour()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "m_initialNetColour", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>();
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::setStaticF_m_netColourDirty(bool  value)  {
::cordl_internals::setStaticField<bool, "m_netColourDirty", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::NetworkedPlayerColourNotifier::getStaticF_m_netColourDirty()  {
return ::cordl_internals::getStaticField<bool, "m_netColourDirty", ::GorillaTagScripts::NetworkedPlayerColourNotifier*>();
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::SetLocalRigReference(::GlobalNamespace::RigContainer*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"SetLocalRigReference", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::NotifyOthers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"NotifyOthers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::OnLocalColourChanged(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"OnLocalColourChanged", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color);
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GorillaTagScripts::NetworkedPlayerColourNotifier::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::NetworkedPlayerColourNotifier*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::NetworkedPlayerColourNotifier::NetworkedPlayerColourNotifier()   {
}
