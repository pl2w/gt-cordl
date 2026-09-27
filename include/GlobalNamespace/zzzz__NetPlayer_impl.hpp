#pragma once
// IWYU pragma private; include "GlobalNamespace/NetPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_SingleCallRPC_def.hpp"
#include "GorillaTag/zzzz__ObjectPoolEvents_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_ActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_ActorNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_UserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_IsMasterClient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_IsLocal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_IsNull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_NickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_NickName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_SanitizedNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_SanitizedNickName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.set_SanitizedNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)(::StringW)>(&::GlobalNamespace::NetPlayer::set_SanitizedNickName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_DefaultName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_DefaultName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_InRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_JoinedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_JoinedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.set_JoinedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)(float_t)>(&::GlobalNamespace::NetPlayer::set_JoinedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"set_JoinedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.get_LeftTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::get_LeftTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.set_LeftTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)(float_t)>(&::GlobalNamespace::NetPlayer::set_LeftTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"set_LeftTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::NetPlayer::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.OnReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::OnReturned)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56d762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.OnTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::OnTaken)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56d76b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.CheckSingleCallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetPlayer::*)(::GlobalNamespace::NetPlayer_SingleCallRPC)>(&::GlobalNamespace::NetPlayer::CheckSingleCallRPC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e7b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.ReceivedSingleCallRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)(::GlobalNamespace::NetPlayer_SingleCallRPC)>(&::GlobalNamespace::NetPlayer::ReceivedSingleCallRPC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56e7bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.GetPlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::GetPlayerRef)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56e7c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"GetPlayerRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::ToStringFull)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56e7c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.op_Implicit___GlobalNamespace__NetPlayer_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetPlayer::op_Implicit___GlobalNamespace__NetPlayer_)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56e7d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.op_Implicit___GlobalNamespace__NetPlayer_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)(::Fusion::PlayerRef)>(&::GlobalNamespace::NetPlayer::op_Implicit___GlobalNamespace__NetPlayer_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56e7ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::NetPlayer::Get)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56e77c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)(::Fusion::PlayerRef)>(&::GlobalNamespace::NetPlayer::Get)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56e78c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)(int32_t)>(&::GlobalNamespace::NetPlayer::Get)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56e7f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetPlayer::*)()>(&::GlobalNamespace::NetPlayer::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56d6b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NetPlayer::__cordl_internal_get__SanitizedNickName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SanitizedNickName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::NetPlayer::__cordl_internal_get__SanitizedNickName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SanitizedNickName_k__BackingField;
}
constexpr void GlobalNamespace::NetPlayer::__cordl_internal_set__SanitizedNickName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SanitizedNickName_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NetPlayer::__cordl_internal_get__JoinedTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JoinedTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NetPlayer::__cordl_internal_get__JoinedTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JoinedTime_k__BackingField;
}
constexpr void GlobalNamespace::NetPlayer::__cordl_internal_set__JoinedTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JoinedTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NetPlayer::__cordl_internal_get__LeftTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NetPlayer::__cordl_internal_get__LeftTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftTime_k__BackingField;
}
constexpr void GlobalNamespace::NetPlayer::__cordl_internal_set__LeftTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LeftTime_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::NetPlayer::__cordl_internal_get_SingleCallRPCStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SingleCallRPCStatus;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::NetPlayer::__cordl_internal_get_SingleCallRPCStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SingleCallRPCStatus;
}
constexpr void GlobalNamespace::NetPlayer::__cordl_internal_set_SingleCallRPCStatus(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SingleCallRPCStatus = value;
}
inline bool GlobalNamespace::NetPlayer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetPlayer::get_ActorNumber()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetPlayer::get_UserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NetPlayer::get_IsMasterClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetPlayer::get_IsLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::NetPlayer::get_IsNull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetPlayer::get_NickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetPlayer::get_SanitizedNickName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NetPlayer::set_SanitizedNickName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::NetPlayer::get_DefaultName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NetPlayer::get_InRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::NetPlayer::get_JoinedTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetPlayer::set_JoinedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"set_JoinedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NetPlayer::get_LeftTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetPlayer::set_LeftTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"set_LeftTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NetPlayer::Equals(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, other);
}
inline void GlobalNamespace::NetPlayer::OnReturned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetPlayer::OnTaken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NetPlayer::CheckSingleCallRPC(::GlobalNamespace::NetPlayer_SingleCallRPC  RPCType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, RPCType);
}
inline void GlobalNamespace::NetPlayer::ReceivedSingleCallRPC(::GlobalNamespace::NetPlayer_SingleCallRPC  RPCType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetPlayer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, RPCType);
}
inline ::Photon::Realtime::Player* GlobalNamespace::NetPlayer::GetPlayerRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"GetPlayerRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetPlayer::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetPlayer::op_Implicit___GlobalNamespace__NetPlayer_(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method, player);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetPlayer::op_Implicit___GlobalNamespace__NetPlayer_(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method, player);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetPlayer::Get(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method, player);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetPlayer::Get(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method, player);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetPlayer::Get(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method, actorNr);
}
inline void GlobalNamespace::NetPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::NetPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetPlayer*>());
}
/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr  GlobalNamespace::NetPlayer::operator ::GorillaTag::ObjectPoolEvents*() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* GlobalNamespace::NetPlayer::i___GorillaTag__ObjectPoolEvents() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetPlayer::NetPlayer()   {
}
