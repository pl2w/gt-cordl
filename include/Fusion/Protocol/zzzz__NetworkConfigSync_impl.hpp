#pragma once
// IWYU pragma private; include "Fusion/Protocol/NetworkConfigSync.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__SyncType_impl.hpp"
#include "Fusion/Protocol/zzzz__NetworkConfigSync_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "Fusion/Protocol/zzzz__SyncType_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::NetworkConfigSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::NetworkConfigSync::*)()>(&::Fusion::Protocol::NetworkConfigSync::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6024368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::NetworkConfigSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::NetworkConfigSync::*)(::Fusion::Protocol::SyncType, ::StringW, ::Fusion::Protocol::ProtocolMessageVersion, ::System::Version*)>(&::Fusion::Protocol::NetworkConfigSync::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6024374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::SyncType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::NetworkConfigSync.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::NetworkConfigSync::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::NetworkConfigSync::SerializeProtected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60243b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(),
                    {::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::NetworkConfigSync.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::NetworkConfigSync::*)()>(&::Fusion::Protocol::NetworkConfigSync::ToString)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x60243fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(),
                    {::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::SyncType& Fusion::Protocol::NetworkConfigSync::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Fusion::Protocol::SyncType const& Fusion::Protocol::NetworkConfigSync::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Fusion::Protocol::NetworkConfigSync::__cordl_internal_set_Type(::Fusion::Protocol::SyncType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::StringW& Fusion::Protocol::NetworkConfigSync::__cordl_internal_get_NetworkConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkConfig;
}
constexpr ::StringW const& Fusion::Protocol::NetworkConfigSync::__cordl_internal_get_NetworkConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkConfig;
}
constexpr void Fusion::Protocol::NetworkConfigSync::__cordl_internal_set_NetworkConfig(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkConfig = value;
}
inline void Fusion::Protocol::NetworkConfigSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::NetworkConfigSync::_ctor(::Fusion::Protocol::SyncType  type, ::StringW  serializedNetworkConfig, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::SyncType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, serializedNetworkConfig, protocolVersion, serializationVersion);
}
inline void Fusion::Protocol::NetworkConfigSync::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::NetworkConfigSync::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::NetworkConfigSync*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::NetworkConfigSync* Fusion::Protocol::NetworkConfigSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::NetworkConfigSync*>());
}
inline ::Fusion::Protocol::NetworkConfigSync* Fusion::Protocol::NetworkConfigSync::New_ctor(::Fusion::Protocol::SyncType  type, ::StringW  serializedNetworkConfig, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::NetworkConfigSync*>(type, serializedNetworkConfig, protocolVersion, serializationVersion));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::NetworkConfigSync::NetworkConfigSync()   {
}
