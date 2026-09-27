#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomGameMode.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "GlobalNamespace/zzzz__CustomGameMode_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__LuauScriptRunner_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CustomGameMode::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::System::Object*)>(&::GlobalNamespace::CustomGameMode::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CustomGameMode::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomGameMode::*)()>(&::GlobalNamespace::CustomGameMode::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6e468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::CustomGameMode::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::CustomGameMode::*)()>(&::GlobalNamespace::CustomGameMode::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6e474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomGameMode::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomGameMode::MyMatIndex)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a6e47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.GetRigScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CustomGameMode::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::CustomGameMode::GetRigScale)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a6e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"GetRigScale", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomGameMode::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x5a6e72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomGameMode::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5a6f068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomGameMode::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5a6f3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnPlayerHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, int32_t, float_t)>(&::GlobalNamespace::CustomGameMode::OnPlayerHit)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5a6f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"OnPlayerHit", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.TaggedByAI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, int32_t)>(&::GlobalNamespace::CustomGameMode::TaggedByAI)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a6f9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"TaggedByAI", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.HitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomGameMode::HitPlayer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnEntityGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*, bool)>(&::GlobalNamespace::CustomGameMode::OnEntityGrabbed)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5a6fbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"OnEntityGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.OnGameEntityRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::CustomGameMode::OnGameEntityRemoved)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x5a6fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"OnGameEntityRemoved", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)()>(&::GlobalNamespace::CustomGameMode::StartPlaying)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a70358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.LuaStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomGameMode::LuaStart)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x5a704ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"LuaStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)()>(&::GlobalNamespace::CustomGameMode::StopPlaying)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a71208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.StopScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomGameMode::StopScript)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0x5a71340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"StopScript", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.TouchPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CustomGameMode::TouchPlayer)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a71b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"TouchPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.TaggedByEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomGameMode::TaggedByEnvironment)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5a71cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"TaggedByEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.GameModeBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::CustomGameMode::GameModeBindings)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5a6cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"GameModeBindings", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.LocalPlayerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::CustomGameMode::*)()>(&::GlobalNamespace::CustomGameMode::LocalPlayerSpeed)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5a74730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.AfterTickGamemode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::CustomGameMode::AfterTickGamemode)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5a6d414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"AfterTickGamemode", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.PreTickGamemode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::CustomGameMode::PreTickGamemode)> {
  constexpr static std::size_t size = 0xc60;
  constexpr static std::size_t addrs = 0x5a6d7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"PreTickGamemode", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.RunGamemodeScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::CustomGameMode::RunGamemodeScript)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5a70fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"RunGamemodeScript", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode.RunGamemodeScriptFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::CustomGameMode::RunGamemodeScriptFromFile)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5a74af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"RunGamemodeScriptFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomGameMode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomGameMode::*)()>(&::GlobalNamespace::CustomGameMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a74cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomGameMode::setStaticF_gameScriptRunner(::GlobalNamespace::LuauScriptRunner*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LuauScriptRunner*, "gameScriptRunner", ::GlobalNamespace::CustomGameMode*>(std::forward<::GlobalNamespace::LuauScriptRunner*>(value));
}
inline ::GlobalNamespace::LuauScriptRunner* GlobalNamespace::CustomGameMode::getStaticF_gameScriptRunner()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LuauScriptRunner*, "gameScriptRunner", ::GlobalNamespace::CustomGameMode*>();
}
inline void GlobalNamespace::CustomGameMode::setStaticF_LuaScript(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "LuaScript", ::GlobalNamespace::CustomGameMode*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomGameMode::getStaticF_LuaScript()  {
return ::cordl_internals::getStaticField<::StringW, "LuaScript", ::GlobalNamespace::CustomGameMode*>();
}
inline void GlobalNamespace::CustomGameMode::setStaticF_WasInRoom(bool  value)  {
::cordl_internals::setStaticField<bool, "WasInRoom", ::GlobalNamespace::CustomGameMode*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomGameMode::getStaticF_WasInRoom()  {
return ::cordl_internals::getStaticField<bool, "WasInRoom", ::GlobalNamespace::CustomGameMode*>();
}
inline void GlobalNamespace::CustomGameMode::setStaticF_GameModeInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "GameModeInitialized", ::GlobalNamespace::CustomGameMode*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomGameMode::getStaticF_GameModeInitialized()  {
return ::cordl_internals::getStaticField<bool, "GameModeInitialized", ::GlobalNamespace::CustomGameMode*>();
}
inline void GlobalNamespace::CustomGameMode::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::CustomGameMode::OnSerializeRead(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::CustomGameMode::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::System::Object* GlobalNamespace::CustomGameMode::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomGameMode::AddFusionDataBehaviour(::Fusion::NetworkObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::CustomGameMode::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomGameMode::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline float_t GlobalNamespace::CustomGameMode::GetRigScale(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"GetRigScale", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, rig);
}
inline void GlobalNamespace::CustomGameMode::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::CustomGameMode::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::CustomGameMode::OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::CustomGameMode::OnPlayerHit(::GlobalNamespace::GameEntity*  entity, int32_t  hitPlayer, float_t  damage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"OnPlayerHit", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, hitPlayer, damage);
}
inline void GlobalNamespace::CustomGameMode::TaggedByAI(::GlobalNamespace::GameEntity*  entity, int32_t  taggedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"TaggedByAI", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, taggedPlayer);
}
inline void GlobalNamespace::CustomGameMode::HitPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer);
}
inline void GlobalNamespace::CustomGameMode::OnEntityGrabbed(::GlobalNamespace::GameEntity*  entity, bool  isGrabbed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"OnEntityGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity, isGrabbed);
}
inline void GlobalNamespace::CustomGameMode::OnGameEntityRemoved(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"OnGameEntityRemoved", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entity);
}
inline void GlobalNamespace::CustomGameMode::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomGameMode::LuaStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"LuaStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomGameMode::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomGameMode::StopScript()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"StopScript", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomGameMode::TouchPlayer(::GlobalNamespace::NetPlayer*  touchedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"TouchPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, touchedPlayer);
}
inline void GlobalNamespace::CustomGameMode::TaggedByEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"TaggedByEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomGameMode::GameModeBindings(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"GameModeBindings", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline ::ArrayW<float_t> GlobalNamespace::CustomGameMode::LocalPlayerSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomGameMode*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomGameMode::AfterTickGamemode(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"AfterTickGamemode", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::CustomGameMode::PreTickGamemode(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"PreTickGamemode", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::CustomGameMode::RunGamemodeScript(::StringW  script)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"RunGamemodeScript", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, script);
}
inline void GlobalNamespace::CustomGameMode::RunGamemodeScriptFromFile(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {"RunGamemodeScriptFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filename);
}
inline void GlobalNamespace::CustomGameMode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomGameMode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomGameMode* GlobalNamespace::CustomGameMode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomGameMode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomGameMode::CustomGameMode()   {
}
