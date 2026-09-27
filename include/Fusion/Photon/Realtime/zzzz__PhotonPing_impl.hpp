#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PhotonPing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonPing.StartPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::PhotonPing::*)(::StringW)>(&::Fusion::Photon::Realtime::PhotonPing::StartPing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f5e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonPing.Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::PhotonPing::*)()>(&::Fusion::Photon::Realtime::PhotonPing::Done)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f5e678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonPing.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PhotonPing::*)()>(&::Fusion::Photon::Realtime::PhotonPing::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f5e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonPing.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PhotonPing::*)()>(&::Fusion::Photon::Realtime::PhotonPing::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f5e6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonPing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PhotonPing::*)()>(&::Fusion::Photon::Realtime::PhotonPing::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f5e764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_DebugString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugString;
}
constexpr ::StringW const& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_DebugString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugString;
}
constexpr void Fusion::Photon::Realtime::PhotonPing::__cordl_internal_set_DebugString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugString = value;
}
constexpr bool& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_Successful()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Successful;
}
constexpr bool const& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_Successful() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Successful;
}
constexpr void Fusion::Photon::Realtime::PhotonPing::__cordl_internal_set_Successful(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Successful = value;
}
constexpr bool& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_GotResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GotResult;
}
constexpr bool const& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_GotResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GotResult;
}
constexpr void Fusion::Photon::Realtime::PhotonPing::__cordl_internal_set_GotResult(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GotResult = value;
}
constexpr int32_t& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_PingLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingLength;
}
constexpr int32_t const& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_PingLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingLength;
}
constexpr void Fusion::Photon::Realtime::PhotonPing::__cordl_internal_set_PingLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingLength = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_PingBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingBytes;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_PingBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingBytes;
}
constexpr void Fusion::Photon::Realtime::PhotonPing::__cordl_internal_set_PingBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingBytes = value;
}
constexpr uint8_t& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_PingId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingId;
}
constexpr uint8_t const& Fusion::Photon::Realtime::PhotonPing::__cordl_internal_get_PingId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PingId;
}
constexpr void Fusion::Photon::Realtime::PhotonPing::__cordl_internal_set_PingId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PingId = value;
}
inline void Fusion::Photon::Realtime::PhotonPing::setStaticF_RandomIdProvider(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "RandomIdProvider", ::Fusion::Photon::Realtime::PhotonPing*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* Fusion::Photon::Realtime::PhotonPing::getStaticF_RandomIdProvider()  {
return ::cordl_internals::getStaticField<::System::Random*, "RandomIdProvider", ::Fusion::Photon::Realtime::PhotonPing*>();
}
inline bool Fusion::Photon::Realtime::PhotonPing::StartPing(::StringW  ip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ip);
}
inline bool Fusion::Photon::Realtime::PhotonPing::Done()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PhotonPing::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PhotonPing::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::PhotonPing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonPing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::PhotonPing* Fusion::Photon::Realtime::PhotonPing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::PhotonPing*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Photon::Realtime::PhotonPing::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Photon::Realtime::PhotonPing::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::PhotonPing::PhotonPing()   {
}
