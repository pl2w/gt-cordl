#pragma once
// IWYU pragma private; include "Fusion/Protocol/ChangeMasterClient.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__ChangeMasterClient_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::ChangeMasterClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ChangeMasterClient::*)()>(&::Fusion::Protocol::ChangeMasterClient::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6022c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ChangeMasterClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ChangeMasterClient::*)(int32_t, ::Fusion::Protocol::ProtocolMessageVersion, ::System::Version*)>(&::Fusion::Protocol::ChangeMasterClient::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6022d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ChangeMasterClient.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ChangeMasterClient::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::ChangeMasterClient::SerializeProtected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6022d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(),
                    {::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ChangeMasterClient.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::ChangeMasterClient::*)()>(&::Fusion::Protocol::ChangeMasterClient::ToString)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6022d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(),
                    {::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::ChangeMasterClient::__cordl_internal_get_NewMasterClientCandidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewMasterClientCandidate;
}
constexpr int32_t const& Fusion::Protocol::ChangeMasterClient::__cordl_internal_get_NewMasterClientCandidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewMasterClientCandidate;
}
constexpr void Fusion::Protocol::ChangeMasterClient::__cordl_internal_set_NewMasterClientCandidate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewMasterClientCandidate = value;
}
inline void Fusion::Protocol::ChangeMasterClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::ChangeMasterClient::_ctor(int32_t  newMasterClientCandidate, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClientCandidate, protocolVersion, serializationVersion);
}
inline void Fusion::Protocol::ChangeMasterClient::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::ChangeMasterClient::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ChangeMasterClient*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::ChangeMasterClient* Fusion::Protocol::ChangeMasterClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::ChangeMasterClient*>());
}
inline ::Fusion::Protocol::ChangeMasterClient* Fusion::Protocol::ChangeMasterClient::New_ctor(int32_t  newMasterClientCandidate, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::ChangeMasterClient*>(newMasterClientCandidate, protocolVersion, serializationVersion));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::ChangeMasterClient::ChangeMasterClient()   {
}
