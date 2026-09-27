#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/TypedLobby.hpp"
#include "Fusion/Photon/Realtime/zzzz__LobbyType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LobbyType_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::TypedLobby.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::TypedLobby::*)()>(&::Fusion::Photon::Realtime::TypedLobby::get_IsDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f5a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                        {"get_IsDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::TypedLobby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::TypedLobby::*)()>(&::Fusion::Photon::Realtime::TypedLobby::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::TypedLobby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::TypedLobby::*)(::StringW, ::Fusion::Photon::Realtime::LobbyType)>(&::Fusion::Photon::Realtime::TypedLobby::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f5dd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::LobbyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::TypedLobby.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::TypedLobby::*)()>(&::Fusion::Photon::Realtime::TypedLobby::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f5dd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Photon::Realtime::TypedLobby::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Fusion::Photon::Realtime::TypedLobby::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Fusion::Photon::Realtime::TypedLobby::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::Fusion::Photon::Realtime::LobbyType& Fusion::Photon::Realtime::TypedLobby::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Fusion::Photon::Realtime::LobbyType const& Fusion::Photon::Realtime::TypedLobby::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Fusion::Photon::Realtime::TypedLobby::__cordl_internal_set_Type(::Fusion::Photon::Realtime::LobbyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Fusion::Photon::Realtime::TypedLobby::setStaticF_Default(::Fusion::Photon::Realtime::TypedLobby*  value)  {
::cordl_internals::setStaticField<::Fusion::Photon::Realtime::TypedLobby*, "Default", ::Fusion::Photon::Realtime::TypedLobby*>(std::forward<::Fusion::Photon::Realtime::TypedLobby*>(value));
}
inline ::Fusion::Photon::Realtime::TypedLobby* Fusion::Photon::Realtime::TypedLobby::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Fusion::Photon::Realtime::TypedLobby*, "Default", ::Fusion::Photon::Realtime::TypedLobby*>();
}
inline bool Fusion::Photon::Realtime::TypedLobby::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                        {"get_IsDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::TypedLobby::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::TypedLobby::_ctor(::StringW  name, ::Fusion::Photon::Realtime::LobbyType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::LobbyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline ::StringW Fusion::Photon::Realtime::TypedLobby::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::TypedLobby*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::TypedLobby* Fusion::Photon::Realtime::TypedLobby::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::TypedLobby*>());
}
inline ::Fusion::Photon::Realtime::TypedLobby* Fusion::Photon::Realtime::TypedLobby::New_ctor(::StringW  name, ::Fusion::Photon::Realtime::LobbyType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::TypedLobby*>(name, type));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::TypedLobby::TypedLobby()   {
}
