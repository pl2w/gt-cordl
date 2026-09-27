#pragma once
// IWYU pragma private; include "GlobalNamespace/CasualGameMode.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "GlobalNamespace/zzzz__CasualGameMode_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CasualGameMode::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CasualGameMode::MyMatIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579bc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameMode::*)(::System::Object*)>(&::GlobalNamespace::CasualGameMode::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579bc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CasualGameMode::*)()>(&::GlobalNamespace::CasualGameMode::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579bc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameMode::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CasualGameMode::OnSerializeRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579bc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameMode::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CasualGameMode::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::CasualGameMode::*)()>(&::GlobalNamespace::CasualGameMode::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579bc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameMode::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::CasualGameMode::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x579bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CasualGameMode::*)()>(&::GlobalNamespace::CasualGameMode::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x579bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CasualGameMode::*)()>(&::GlobalNamespace::CasualGameMode::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x579bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameMode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameMode::*)()>(&::GlobalNamespace::CasualGameMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579bdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::CasualGameMode::MyMatIndex(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline void GlobalNamespace::CasualGameMode::OnSerializeRead(::System::Object*  newData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::CasualGameMode::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CasualGameMode::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::CasualGameMode::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::CasualGameMode::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline void GlobalNamespace::CasualGameMode::AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline ::StringW GlobalNamespace::CasualGameMode::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CasualGameMode::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameMode*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CasualGameMode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameMode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CasualGameMode* GlobalNamespace::CasualGameMode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CasualGameMode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CasualGameMode::CasualGameMode()   {
}
