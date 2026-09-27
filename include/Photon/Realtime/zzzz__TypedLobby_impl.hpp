#pragma once
// IWYU pragma private; include "Photon/Realtime/TypedLobby.hpp"
#include "Photon/Realtime/zzzz__LobbyType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Photon/Realtime/zzzz__LobbyType_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::TypedLobby.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::TypedLobby::*)()>(&::Photon::Realtime::TypedLobby::get_IsDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa706ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                        {"get_IsDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::TypedLobby::*)()>(&::Photon::Realtime::TypedLobby::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::TypedLobby::*)(::StringW, ::Photon::Realtime::LobbyType)>(&::Photon::Realtime::TypedLobby::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa709730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::LobbyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobby.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::TypedLobby::*)()>(&::Photon::Realtime::TypedLobby::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa70976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                    {::i2c::class_of<::Photon::Realtime::TypedLobby*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::TypedLobby::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Photon::Realtime::TypedLobby::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Photon::Realtime::TypedLobby::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::Photon::Realtime::LobbyType& Photon::Realtime::TypedLobby::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Photon::Realtime::LobbyType const& Photon::Realtime::TypedLobby::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Photon::Realtime::TypedLobby::__cordl_internal_set_Type(::Photon::Realtime::LobbyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Photon::Realtime::TypedLobby::setStaticF_Default(::Photon::Realtime::TypedLobby*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::TypedLobby*, "Default", ::Photon::Realtime::TypedLobby*>(std::forward<::Photon::Realtime::TypedLobby*>(value));
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::TypedLobby::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::TypedLobby*, "Default", ::Photon::Realtime::TypedLobby*>();
}
inline bool Photon::Realtime::TypedLobby::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                        {"get_IsDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::TypedLobby::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::TypedLobby::_ctor(::StringW  name, ::Photon::Realtime::LobbyType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::TypedLobby*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::LobbyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline ::StringW Photon::Realtime::TypedLobby::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::TypedLobby*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::TypedLobby::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::TypedLobby*>());
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::TypedLobby::New_ctor(::StringW  name, ::Photon::Realtime::LobbyType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::TypedLobby*>(name, type));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::TypedLobby::TypedLobby()   {
}
