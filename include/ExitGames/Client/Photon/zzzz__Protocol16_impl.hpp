#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol16.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol16_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_DeserializationFlags_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol16_GpType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.get_ProtocolType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol16::*)()>(&::ExitGames::Client::Photon::Protocol16::get_ProtocolType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa6d1908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.get_VersionBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::Protocol16::*)()>(&::ExitGames::Client::Photon::Protocol16::get_VersionBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d1948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::ExitGames::Client::Photon::Protocol16::SerializeCustom)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xa6d1950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeCustom", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::DeserializeCustom)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa6d1f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeCustom", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.GetTypeOfCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol16::*)(uint8_t)>(&::ExitGames::Client::Photon::Protocol16::GetTypeOfCode)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa6d2264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"GetTypeOfCode", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.GetCodeOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Protocol16_GpType (::ExitGames::Client::Photon::Protocol16::*)(::System::Type*)>(&::ExitGames::Client::Photon::Protocol16::GetCodeOfType)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa6d25c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"GetCodeOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.CreateArrayByType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::ExitGames::Client::Photon::Protocol16::*)(uint8_t, int16_t)>(&::ExitGames::Client::Photon::Protocol16::CreateArrayByType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6d28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"CreateArrayByType", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationRequest*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d28cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeOperationRequest", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::OperationRequest*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6d28f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6d2b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::OperationRequest* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa6d2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationResponse)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa6d2f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDisconnectMessage)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa6d3044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::OperationResponse* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::DeserializeOperationResponse)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa6d3294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeEventData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6d33dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::EventData* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::DeserializeEventData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6d343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeParameterTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*)>(&::ExitGames::Client::Photon::Protocol16::SerializeParameterTable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa6d2960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeParameterTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol16::SerializeParameterTable)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa6d2bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeParameterTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeParameterTable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa6d316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeParameterDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ParameterDictionary* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::DeserializeParameterDictionary)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa6d2e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeParameterDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol16::Serialize)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0xa6d34e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6d3cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, bool, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeBoolean)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6d3d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeShort)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa6d5258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeLengthAsShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, ::StringW)>(&::ExitGames::Client::Photon::Protocol16::SerializeLengthAsShort)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa6d1d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeLengthAsShort", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeInteger)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa6d3d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeInteger", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int64_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeLong)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa6d3ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeLong", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, float_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeFloat)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xa6d4094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeFloat", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, double_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeDouble)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa6d4348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa6d5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Array*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeArray)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0xa6d4b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<uint8_t>, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6d4724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeByteArraySegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeByteArraySegment)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa6d51c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeByteArraySegment", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeIntArrayOptimized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int32_t>, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeIntArrayOptimized)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa6d498c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeIntArrayOptimized", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<::StringW>, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeStringArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa6d5c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IList*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeObjectArray)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa6d4790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeHashTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::Hashtable*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeHashTable)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa6d4520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeHashTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IDictionary*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionary)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6d5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionaryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6d5cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionaryHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionaryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, ::by_ref<bool>, ::by_ref<bool>)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa6d5504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionaryHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionaryElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionaryElements)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0xa6d5774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionaryElements", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::Deserialize)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0xa6d5d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeByte)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6d767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeBoolean)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d6ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeShort)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa6d7694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeInteger)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa6d6198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeInteger", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeLong)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa6d6afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeLong", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeFloat)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6d6cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeFloat", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDouble)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa6d6e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6d62f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeString", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeArray)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0xa6d6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t)>(&::ExitGames::Client::Photon::Protocol16::DeserializeByteArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6d64dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t)>(&::ExitGames::Client::Photon::Protocol16::DeserializeIntArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6d6578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeIntArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeStringArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa6d63fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeObjectArray)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa6d7548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeHashTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeHashTable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa6d6644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeHashTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDictionary)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xa6d675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDictionaryArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, ::by_ref<::System::Array*>)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDictionaryArray)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa6d77b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDictionaryArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::by_ref<::System::Array*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDictionaryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::by_ref<uint8_t>, ::by_ref<uint8_t>)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDictionaryType)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa6d7a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDictionaryType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)()>(&::ExitGames::Client::Photon::Protocol16::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa6d0e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_versionBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionBytes;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_versionBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionBytes;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_versionBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___versionBytes = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memShort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memShort;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memShort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memShort;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memShort(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memShort = value;
}
constexpr ::ArrayW<int64_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memLongBlock;
}
constexpr ::ArrayW<int64_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memLongBlock;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memLongBlock(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memLongBlock = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlockBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memLongBlockBytes;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlockBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memLongBlockBytes;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memLongBlockBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memLongBlockBytes = value;
}
constexpr ::ArrayW<double_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDoubleBlock;
}
constexpr ::ArrayW<double_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDoubleBlock;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memDoubleBlock(::ArrayW<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memDoubleBlock = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlockBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDoubleBlockBytes;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlockBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDoubleBlockBytes;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memDoubleBlockBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memDoubleBlockBytes = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memInteger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memInteger;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memInteger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memInteger;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memInteger(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memInteger = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memLong;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memLong;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memLong(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memLong = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memFloat;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memFloat;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memFloat(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memFloat = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDouble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDouble;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDouble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDouble;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memDouble(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memDouble = value;
}
inline void ExitGames::Client::Photon::Protocol16::setStaticF_memFloatBlock(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "memFloatBlock", ::ExitGames::Client::Photon::Protocol16*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> ExitGames::Client::Photon::Protocol16::getStaticF_memFloatBlock()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "memFloatBlock", ::ExitGames::Client::Photon::Protocol16*>();
}
inline void ExitGames::Client::Photon::Protocol16::setStaticF_memFloatBlockBytes(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memFloatBlockBytes", ::ExitGames::Client::Photon::Protocol16*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol16::getStaticF_memFloatBlockBytes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memFloatBlockBytes", ::ExitGames::Client::Photon::Protocol16*>();
}
inline ::StringW ExitGames::Client::Photon::Protocol16::get_ProtocolType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol16::get_VersionBytes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::Protocol16::SerializeCustom(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeCustom", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dout, serObject);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol16::DeserializeCustom(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  customTypeCode, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeCustom", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, din, customTypeCode, flags);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol16::GetTypeOfCode(uint8_t  typeCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"GetTypeOfCode", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeCode);
}
inline ::GlobalNamespace::Protocol16_GpType ExitGames::Client::Photon::Protocol16::GetCodeOfType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"GetCodeOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Protocol16_GpType>(this, ___internal_method, type);
}
inline ::System::Array* ExitGames::Client::Photon::Protocol16::CreateArrayByType(uint8_t  arrayType, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"CreateArrayByType", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, arrayType, length);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationRequest*  operation, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeOperationRequest", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::OperationRequest*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operation, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::Protocol16::DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  din, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationRequest*>(this, ___internal_method, din, flags);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationResponse*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, serObject, setType);
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::Protocol16::DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DisconnectMessage*>(this, ___internal_method, stream);
}
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::Protocol16::DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationResponse*>(this, ___internal_method, stream, flags);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeEventData(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::EventData*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, serObject, setType);
}
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::Protocol16::DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer*  din, ::ExitGames::Client::Photon::EventData*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EventData*>(this, ___internal_method, din, target, flags);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, parameters);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, parameters);
}
inline ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* ExitGames::Client::Photon::Protocol16::DeserializeParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(this, ___internal_method, stream, target);
}
inline ::ExitGames::Client::Photon::ParameterDictionary* ExitGames::Client::Photon::Protocol16::DeserializeParameterDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeParameterDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ParameterDictionary*>(this, ___internal_method, stream, target, flags);
}
inline void ExitGames::Client::Photon::Protocol16::Serialize(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeByte(::ExitGames::Client::Photon::StreamBuffer*  dout, uint8_t  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeBoolean(::ExitGames::Client::Photon::StreamBuffer*  dout, bool  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int16_t  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeLengthAsShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int32_t  serObject, ::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeLengthAsShort", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, type);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeInteger(::ExitGames::Client::Photon::StreamBuffer*  dout, int32_t  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeInteger", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeLong(::ExitGames::Client::Photon::StreamBuffer*  dout, int64_t  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeLong", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeFloat(::ExitGames::Client::Photon::StreamBuffer*  dout, float_t  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeFloat", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDouble(::ExitGames::Client::Photon::StreamBuffer*  dout, double_t  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeString(::ExitGames::Client::Photon::StreamBuffer*  stream, ::StringW  value, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Array*  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeByteArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ArrayW<uint8_t>  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeByteArraySegment(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ArrayW<uint8_t>  serObject, int32_t  offset, int32_t  count, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeByteArraySegment", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, offset, count, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeIntArrayOptimized(::ExitGames::Client::Photon::StreamBuffer*  inWriter, ::ArrayW<int32_t>  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeIntArrayOptimized", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inWriter, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeStringArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ArrayW<::StringW>  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeObjectArray(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Collections::IList*  objects, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, objects, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeHashTable(::ExitGames::Client::Photon::StreamBuffer*  dout, ::ExitGames::Client::Photon::Hashtable*  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeHashTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionary(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Collections::IDictionary*  serObject, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer*  writer, ::System::Type*  dictType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionaryHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, dictType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer*  writer, ::System::Object*  dict, ::by_ref<bool>  setKeyType, ::by_ref<bool>  setValueType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionaryHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, dict, setKeyType, setValueType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionaryElements(::ExitGames::Client::Photon::StreamBuffer*  writer, ::System::Object*  dict, bool  setKeyType, bool  setValueType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"SerializeDictionaryElements", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, dict, setKeyType, setValueType);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol16::Deserialize(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  type, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, din, type, flags);
}
inline uint8_t ExitGames::Client::Photon::Protocol16::DeserializeByte(::ExitGames::Client::Photon::StreamBuffer*  din)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, din);
}
inline bool ExitGames::Client::Photon::Protocol16::DeserializeBoolean(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, din);
}
inline int16_t ExitGames::Client::Photon::Protocol16::DeserializeShort(::ExitGames::Client::Photon::StreamBuffer*  din)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, din);
}
inline int32_t ExitGames::Client::Photon::Protocol16::DeserializeInteger(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeInteger", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, din);
}
inline int64_t ExitGames::Client::Photon::Protocol16::DeserializeLong(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeLong", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, din);
}
inline float_t ExitGames::Client::Photon::Protocol16::DeserializeFloat(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeFloat", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, din);
}
inline double_t ExitGames::Client::Photon::Protocol16::DeserializeDouble(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, din);
}
inline ::StringW ExitGames::Client::Photon::Protocol16::DeserializeString(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeString", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, din);
}
inline ::System::Array* ExitGames::Client::Photon::Protocol16::DeserializeArray(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, din);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol16::DeserializeByteArray(::ExitGames::Client::Photon::StreamBuffer*  din, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, din, size);
}
inline ::ArrayW<int32_t> ExitGames::Client::Photon::Protocol16::DeserializeIntArray(::ExitGames::Client::Photon::StreamBuffer*  din, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeIntArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, din, size);
}
inline ::ArrayW<::StringW> ExitGames::Client::Photon::Protocol16::DeserializeStringArray(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, din);
}
inline ::ArrayW<::System::Object*> ExitGames::Client::Photon::Protocol16::DeserializeObjectArray(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, din);
}
inline ::ExitGames::Client::Photon::Hashtable* ExitGames::Client::Photon::Protocol16::DeserializeHashTable(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeHashTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(this, ___internal_method, din);
}
inline ::System::Collections::IDictionary* ExitGames::Client::Photon::Protocol16::DeserializeDictionary(::ExitGames::Client::Photon::StreamBuffer*  din)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, din);
}
inline bool ExitGames::Client::Photon::Protocol16::DeserializeDictionaryArray(::ExitGames::Client::Photon::StreamBuffer*  din, int16_t  size, ::by_ref<::System::Array*>  arrayResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDictionaryArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::by_ref<::System::Array*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, din, size, arrayResult);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol16::DeserializeDictionaryType(::ExitGames::Client::Photon::StreamBuffer*  reader, ::by_ref<uint8_t>  keyTypeCode, ::by_ref<uint8_t>  valTypeCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {"DeserializeDictionaryType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, reader, keyTypeCode, valTypeCode);
}
inline void ExitGames::Client::Photon::Protocol16::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol16*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::Protocol16* ExitGames::Client::Photon::Protocol16::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Protocol16*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Protocol16::Protocol16()   {
}
