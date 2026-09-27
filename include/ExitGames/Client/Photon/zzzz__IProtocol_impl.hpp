#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IProtocol.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlicePool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_DeserializationFlags_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.get_ProtocolType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::IProtocol::*)()>(&::ExitGames::Client::Photon::IProtocol::get_ProtocolType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.get_VersionBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::IProtocol::*)()>(&::ExitGames::Client::Photon::IProtocol::get_VersionBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::IProtocol::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeShort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeEventData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeOperationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::IProtocol::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::IProtocol::DeserializeShort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::IProtocol::DeserializeByte)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::EventData* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::IProtocol::DeserializeEventData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::OperationRequest* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::IProtocol::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::OperationResponse* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::IProtocol::DeserializeOperationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::IProtocol::DeserializeDisconnectMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::IProtocol::*)(::System::Object*)>(&::ExitGames::Client::Photon::IProtocol::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa6c4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::IProtocol::Deserialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6c4b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::IProtocol::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa6c4bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::IProtocol::DeserializeMessage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6c4c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"DeserializeMessage", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::ExitGames::Client::Photon::IProtocol::SerializeMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6c4cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"SerializeMessage", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)()>(&::ExitGames::Client::Photon::IProtocol::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6c4cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& ExitGames::Client::Photon::IProtocol::__cordl_internal_get_ByteArraySlicePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ByteArraySlicePool;
}
constexpr ::ExitGames::Client::Photon::ByteArraySlicePool* const& ExitGames::Client::Photon::IProtocol::__cordl_internal_get_ByteArraySlicePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ByteArraySlicePool;
}
constexpr void ExitGames::Client::Photon::IProtocol::__cordl_internal_set_ByteArraySlicePool(::ExitGames::Client::Photon::ByteArraySlicePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ByteArraySlicePool = value;
}
inline ::StringW ExitGames::Client::Photon::IProtocol::get_ProtocolType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::IProtocol::get_VersionBytes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IProtocol::Serialize(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int16_t  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeString(::ExitGames::Client::Photon::StreamBuffer*  dout, ::StringW  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeEventData(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::EventData*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationResponse*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, serObject, setType);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::Deserialize(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  type, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, din, type, flags);
}
inline int16_t ExitGames::Client::Photon::IProtocol::DeserializeShort(::ExitGames::Client::Photon::StreamBuffer*  din)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, din);
}
inline uint8_t ExitGames::Client::Photon::IProtocol::DeserializeByte(::ExitGames::Client::Photon::StreamBuffer*  din)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, din);
}
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::IProtocol::DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer*  din, ::ExitGames::Client::Photon::EventData*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EventData*>(this, ___internal_method, din, target, flags);
}
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::IProtocol::DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  din, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationRequest*>(this, ___internal_method, din, flags);
}
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::IProtocol::DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationResponse*>(this, ___internal_method, stream, flags);
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::IProtocol::DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DisconnectMessage*>(this, ___internal_method, stream);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::IProtocol::Serialize(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, obj);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::Deserialize(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::Deserialize(::ArrayW<uint8_t>  serializedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializedData);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::DeserializeMessage(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"DeserializeMessage", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeMessage(::ExitGames::Client::Photon::StreamBuffer*  ms, ::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {"SerializeMessage", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ms, msg);
}
inline void ExitGames::Client::Photon::IProtocol::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::IProtocol*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::IProtocol* ExitGames::Client::Photon::IProtocol::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::IProtocol*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::IProtocol::IProtocol()   {
}
