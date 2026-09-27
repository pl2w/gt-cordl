#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperCasualGame.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "GlobalNamespace/zzzz__SuperCasualGame_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SuperCasualGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SuperCasualGame::MyMatIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af82c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)(::System::Object*)>(&::GlobalNamespace::SuperCasualGame::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af82c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af82cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperCasualGame::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af82d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperCasualGame::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af82d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af82dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::SuperCasualGame::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5af82e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5af8358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5af8398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::StartPlaying)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5af8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::StopPlaying)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5af8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SuperCasualGame::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5af86a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperCasualGame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperCasualGame::*)()>(&::GlobalNamespace::SuperCasualGame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af878c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::SuperCasualGame::MyMatIndex(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline void GlobalNamespace::SuperCasualGame::OnSerializeRead(::System::Object*  newData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::SuperCasualGame::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SuperCasualGame::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SuperCasualGame::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::SuperCasualGame::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline void GlobalNamespace::SuperCasualGame::AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline ::StringW GlobalNamespace::SuperCasualGame::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SuperCasualGame::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SuperCasualGame::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperCasualGame::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperCasualGame::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::SuperCasualGame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperCasualGame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperCasualGame* GlobalNamespace::SuperCasualGame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperCasualGame*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperCasualGame::SuperCasualGame()   {
}
