#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/SystemConnectionSummary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__SystemConnectionSummary_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__SystemConnectionSummary_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SystemConnectionSummary::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::SystemConnectionSummary::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f67cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SystemConnectionSummary::*)(int32_t)>(&::Fusion::Photon::Realtime::SystemConnectionSummary::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f67d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary.ToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::SystemConnectionSummary::*)()>(&::Fusion::Photon::Realtime::SystemConnectionSummary::ToInt)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f67e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"ToInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::SystemConnectionSummary::*)()>(&::Fusion::Photon::Realtime::SystemConnectionSummary::ToString)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5f67f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary.GetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, int32_t)>(&::Fusion::Photon::Realtime::SystemConnectionSummary::GetBit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f67e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"GetBit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary.GetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::by_ref<int32_t>, int32_t, uint8_t)>(&::Fusion::Photon::Realtime::SystemConnectionSummary::GetBits)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f67e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"GetBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary.SetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, bool, int32_t)>(&::Fusion::Photon::Realtime::SystemConnectionSummary::SetBit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f67f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"SetBit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary.SetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, uint8_t, int32_t)>(&::Fusion::Photon::Realtime::SystemConnectionSummary::SetBits)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f67f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"SetBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr uint8_t const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_Version(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
constexpr uint8_t& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_UsedProtocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsedProtocol;
}
constexpr uint8_t const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_UsedProtocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsedProtocol;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_UsedProtocol(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsedProtocol = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppQuits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppQuits;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppQuits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppQuits;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_AppQuits(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppQuits = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppPause()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppPause;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppPause() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppPause;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_AppPause(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppPause = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppPauseRecent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppPauseRecent;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppPauseRecent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppPauseRecent;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_AppPauseRecent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppPauseRecent = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppOutOfFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppOutOfFocus;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppOutOfFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppOutOfFocus;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_AppOutOfFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppOutOfFocus = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppOutOfFocusRecent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppOutOfFocusRecent;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_AppOutOfFocusRecent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppOutOfFocusRecent;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_AppOutOfFocusRecent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppOutOfFocusRecent = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_NetworkReachable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkReachable;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_NetworkReachable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkReachable;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_NetworkReachable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkReachable = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_ErrorCodeFits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCodeFits;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_ErrorCodeFits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCodeFits;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_ErrorCodeFits(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorCodeFits = value;
}
constexpr bool& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_ErrorCodeWinSock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCodeWinSock;
}
constexpr bool const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_ErrorCodeWinSock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCodeWinSock;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_ErrorCodeWinSock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorCodeWinSock = value;
}
constexpr int32_t& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_SocketErrorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SocketErrorCode;
}
constexpr int32_t const& Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_get_SocketErrorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SocketErrorCode;
}
constexpr void Fusion::Photon::Realtime::SystemConnectionSummary::__cordl_internal_set_SocketErrorCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SocketErrorCode = value;
}
inline void Fusion::Photon::Realtime::SystemConnectionSummary::setStaticF_ProtocolIdToName(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "ProtocolIdToName", ::Fusion::Photon::Realtime::SystemConnectionSummary*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Fusion::Photon::Realtime::SystemConnectionSummary::getStaticF_ProtocolIdToName()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "ProtocolIdToName", ::Fusion::Photon::Realtime::SystemConnectionSummary*>();
}
inline void Fusion::Photon::Realtime::SystemConnectionSummary::_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Fusion::Photon::Realtime::SystemConnectionSummary::_ctor(int32_t  summary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, summary);
}
inline int32_t Fusion::Photon::Realtime::SystemConnectionSummary::ToInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"ToInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::SystemConnectionSummary::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::SystemConnectionSummary::GetBit(::by_ref<int32_t>  value, int32_t  bitpos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"GetBit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, bitpos);
}
inline uint8_t Fusion::Photon::Realtime::SystemConnectionSummary::GetBits(::by_ref<int32_t>  value, int32_t  bitpos, uint8_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"GetBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, bitpos, mask);
}
inline void Fusion::Photon::Realtime::SystemConnectionSummary::SetBit(::by_ref<int32_t>  value, bool  bitval, int32_t  bitpos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"SetBit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, bitval, bitpos);
}
inline void Fusion::Photon::Realtime::SystemConnectionSummary::SetBits(::by_ref<int32_t>  value, uint8_t  bitvals, int32_t  bitpos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary*>(),
                        {"SetBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, bitvals, bitpos);
}
inline ::Fusion::Photon::Realtime::SystemConnectionSummary* Fusion::Photon::Realtime::SystemConnectionSummary::New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::SystemConnectionSummary*>(client));
}
inline ::Fusion::Photon::Realtime::SystemConnectionSummary* Fusion::Photon::Realtime::SystemConnectionSummary::New_ctor(int32_t  summary)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::SystemConnectionSummary*>(summary));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::SystemConnectionSummary::SystemConnectionSummary()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos::*)()>(&::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f68454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos* Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos::SystemConnectionSummary_SCSBitPos()   {
}
