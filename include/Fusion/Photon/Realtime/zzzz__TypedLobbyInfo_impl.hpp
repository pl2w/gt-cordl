#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/TypedLobbyInfo.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::TypedLobbyInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::TypedLobbyInfo::*)()>(&::Fusion::Photon::Realtime::TypedLobbyInfo::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f5de78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobbyInfo*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::TypedLobbyInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::TypedLobbyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::TypedLobbyInfo::*)()>(&::Fusion::Photon::Realtime::TypedLobbyInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f5e048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobbyInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_PlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr int32_t const& Fusion::Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_PlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr void Fusion::Photon::Realtime::TypedLobbyInfo::__cordl_internal_set_PlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerCount = value;
}
constexpr int32_t& Fusion::Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_RoomCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomCount;
}
constexpr int32_t const& Fusion::Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_RoomCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomCount;
}
constexpr void Fusion::Photon::Realtime::TypedLobbyInfo::__cordl_internal_set_RoomCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomCount = value;
}
inline ::StringW Fusion::Photon::Realtime::TypedLobbyInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::TypedLobbyInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::TypedLobbyInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobbyInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::TypedLobbyInfo* Fusion::Photon::Realtime::TypedLobbyInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::TypedLobbyInfo*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::TypedLobbyInfo::TypedLobbyInfo()   {
}
