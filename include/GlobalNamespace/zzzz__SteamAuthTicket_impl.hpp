#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamAuthTicket.hpp"
#include "Steamworks/zzzz__HAuthTicket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SteamAuthTicket_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamAuthTicket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthTicket::*)(::Steamworks::HAuthTicket)>(&::GlobalNamespace::SteamAuthTicket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ab25ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthTicket.op_Implicit___GlobalNamespace__SteamAuthTicket_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SteamAuthTicket* (*)(::Steamworks::HAuthTicket)>(&::GlobalNamespace::SteamAuthTicket::op_Implicit___GlobalNamespace__SteamAuthTicket_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab25d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthTicket.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthTicket::*)()>(&::GlobalNamespace::SteamAuthTicket::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ab2630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                    {::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamAuthTicket.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamAuthTicket::*)()>(&::GlobalNamespace::SteamAuthTicket::Dispose)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ab26b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::HAuthTicket& GlobalNamespace::SteamAuthTicket::__cordl_internal_get_m_hAuthTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hAuthTicket;
}
constexpr ::Steamworks::HAuthTicket const& GlobalNamespace::SteamAuthTicket::__cordl_internal_get_m_hAuthTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hAuthTicket;
}
constexpr void GlobalNamespace::SteamAuthTicket::__cordl_internal_set_m_hAuthTicket(::Steamworks::HAuthTicket  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hAuthTicket = value;
}
inline void GlobalNamespace::SteamAuthTicket::_ctor(::Steamworks::HAuthTicket  hAuthTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hAuthTicket);
}
inline ::GlobalNamespace::SteamAuthTicket* GlobalNamespace::SteamAuthTicket::op_Implicit___GlobalNamespace__SteamAuthTicket_(::Steamworks::HAuthTicket  hAuthTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Steamworks::HAuthTicket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamAuthTicket*>(nullptr, ___internal_method, hAuthTicket);
}
inline void GlobalNamespace::SteamAuthTicket::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SteamAuthTicket::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SteamAuthTicket*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamAuthTicket* GlobalNamespace::SteamAuthTicket::New_ctor(::Steamworks::HAuthTicket  hAuthTicket)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamAuthTicket*>(hAuthTicket));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SteamAuthTicket::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SteamAuthTicket::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamAuthTicket::SteamAuthTicket()   {
}
