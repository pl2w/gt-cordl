#pragma once
// IWYU pragma private; include "Fusion/Protocol/Message.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__IMessage_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::Message.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::Message::*)()>(&::Fusion::Protocol::Message::get_IsValid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6023174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Message*>(),
                    {::i2c::class_of<::Fusion::Protocol::Message*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message.get_HasValidVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::Message::*)()>(&::Fusion::Protocol::Message::get_HasValidVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6023178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {"get_HasValidVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message.get_CustomData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::Message::*)()>(&::Fusion::Protocol::Message::get_CustomData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60231f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {"get_CustomData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::Message* (::Fusion::Protocol::Message::*)()>(&::Fusion::Protocol::Message::Clone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6023200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Message*>(),
                    {::i2c::class_of<::Fusion::Protocol::Message*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Message::*)(::Fusion::Protocol::ProtocolMessageVersion, ::System::Version*)>(&::Fusion::Protocol::Message::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6022c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Message::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::Message::Serialize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6023280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::Protocol::BitStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Message::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::Message::SerializeProtected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60234d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Message*>(),
                    {::i2c::class_of<::Fusion::Protocol::Message*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Message.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::Message::*)()>(&::Fusion::Protocol::Message::ToString)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6022f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Message*>(),
                    {::i2c::class_of<::Fusion::Protocol::Message*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::ProtocolMessageVersion& Fusion::Protocol::Message::__cordl_internal_get_ProtocolVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProtocolVersion;
}
constexpr ::Fusion::Protocol::ProtocolMessageVersion const& Fusion::Protocol::Message::__cordl_internal_get_ProtocolVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProtocolVersion;
}
constexpr void Fusion::Protocol::Message::__cordl_internal_set_ProtocolVersion(::Fusion::Protocol::ProtocolMessageVersion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProtocolVersion = value;
}
constexpr ::System::Version*& Fusion::Protocol::Message::__cordl_internal_get_FusionSerializationVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FusionSerializationVersion;
}
constexpr ::System::Version* const& Fusion::Protocol::Message::__cordl_internal_get_FusionSerializationVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FusionSerializationVersion;
}
constexpr void Fusion::Protocol::Message::__cordl_internal_set_FusionSerializationVersion(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FusionSerializationVersion = value;
}
constexpr ::StringW& Fusion::Protocol::Message::__cordl_internal_get__customData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customData;
}
constexpr ::StringW const& Fusion::Protocol::Message::__cordl_internal_get__customData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customData;
}
constexpr void Fusion::Protocol::Message::__cordl_internal_set__customData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customData = value;
}
inline bool Fusion::Protocol::Message::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Message*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Protocol::Message::get_HasValidVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {"get_HasValidVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Fusion::Protocol::Message::get_CustomData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {"get_CustomData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::Message* Fusion::Protocol::Message::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Message*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::Message*>(this, ___internal_method);
}
inline void Fusion::Protocol::Message::_ctor(::Fusion::Protocol::ProtocolMessageVersion  protocolMessage, ::System::Version*  serializationVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protocolMessage, serializationVersion);
}
inline void Fusion::Protocol::Message::Serialize(::Fusion::Protocol::BitStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Message*>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::Protocol::BitStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Fusion::Protocol::Message::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Message*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::Message::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Message*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::Message* Fusion::Protocol::Message::New_ctor(::Fusion::Protocol::ProtocolMessageVersion  protocolMessage, ::System::Version*  serializationVersion)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Message*>(protocolMessage, serializationVersion));
}
/// @brief Convert operator to "::Fusion::Protocol::IMessage"
constexpr  Fusion::Protocol::Message::operator ::Fusion::Protocol::IMessage*() noexcept {
return static_cast<::Fusion::Protocol::IMessage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Protocol::IMessage"
constexpr ::Fusion::Protocol::IMessage* Fusion::Protocol::Message::i___Fusion__Protocol__IMessage() noexcept {
return static_cast<::Fusion::Protocol::IMessage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::Message::Message()   {
}
