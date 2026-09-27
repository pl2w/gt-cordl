#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol18.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol18_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlice_def.hpp"
#include "ExitGames/Client/Photon/zzzz__CustomType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_DeserializationFlags_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol18_GpType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.get_ProtocolType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol18::*)()>(&::ExitGames::Client::Photon::Protocol18::get_ProtocolType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa6d7d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.get_VersionBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::Protocol18::*)()>(&::ExitGames::Client::Photon::Protocol18::get_VersionBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d7d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::Serialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6d7d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeShort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6d7df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6d7e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::Deserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6d7fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::DeserializeShort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6d88c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::DeserializeByte)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6d8930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetAllowedDictionaryKeyTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::GlobalNamespace::Protocol18_GpType)>(&::ExitGames::Client::Photon::Protocol18::GetAllowedDictionaryKeyTypes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa6d8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetAllowedDictionaryKeyTypes", {}, {::i2c::type_of<::GlobalNamespace::Protocol18_GpType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetClrArrayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::GlobalNamespace::Protocol18_GpType)>(&::ExitGames::Client::Photon::Protocol18::GetClrArrayType)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa6d8aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetClrArrayType", {}, {::i2c::type_of<::GlobalNamespace::Protocol18_GpType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetCodeOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Protocol18_GpType (::ExitGames::Client::Photon::Protocol18::*)(::System::Type*)>(&::ExitGames::Client::Photon::Protocol18::GetCodeOfType)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xa6d8dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetCodeOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetCodeOfTypeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Protocol18_GpType (::ExitGames::Client::Photon::Protocol18::*)(::System::TypeCode)>(&::ExitGames::Client::Photon::Protocol18::GetCodeOfTypeCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6d938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetCodeOfTypeCode", {}, {::i2c::type_of<::System::TypeCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::Read)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa6d93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Read", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::Read)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0xa6d7fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Read", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadBoolean)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d9728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadByte)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6d8948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6d88cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt16", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadUShort)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6dac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadUShort", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa6dacd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadInt64)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa6dad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadSingle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6d9750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadSingle", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadDouble)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6d9788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadNonAllocByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ByteArraySlice* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadNonAllocByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6dae84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadNonAllocByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6d9ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCustomType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::Protocol18::ReadCustomType)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xa6d9404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCustomType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::EventData* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::DeserializeEventData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa6db174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadParameterTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::ReadParameterTable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa6db35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadParameterDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ParameterDictionary* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::ReadParameterDictionary)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa6db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadParameterDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadHashtable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadHashtable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa6d98e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadHashtable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadIntArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6db5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadIntArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::OperationRequest* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6db66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::OperationResponse* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::DeserializeOperationResponse)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa6db718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeDisconnectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::DeserializeDisconnectMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6db83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6d97c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadString", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCustomTypeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCustomTypeArray)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xa6da520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCustomTypeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::by_ref<::GlobalNamespace::Protocol18_GpType>, ::by_ref<::GlobalNamespace::Protocol18_GpType>)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryType)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa6db948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryType)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa6dbbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetDictArrayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::GetDictArrayType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa6dbe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetDictArrayType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionary)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa6d9a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::Protocol18_GpType, ::GlobalNamespace::Protocol18_GpType, ::System::Collections::IDictionary*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryElements)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa6dbf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryElements", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadObjectArray)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa6d9b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadWrapperArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadWrapperArray)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa6dc0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadWrapperArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadBooleanArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadBooleanArray)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa6d9ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadBooleanArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt16Array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadInt16Array)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6d9f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt16Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadSingleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadSingleArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa6da0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadSingleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDoubleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<double_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadDoubleArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa6d9ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDoubleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadStringArray)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6da14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadHashtableArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ExitGames::Client::Photon::Hashtable*> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadHashtableArray)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa6da220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadHashtableArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Collections::IDictionary*> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryArray)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa6da338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadArrayInArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::GlobalNamespace::IProtocol_DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadArrayInArray)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa6dab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadArrayInArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, bool)>(&::ExitGames::Client::Photon::Protocol18::ReadInt1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6d984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt1", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, bool)>(&::ExitGames::Client::Photon::Protocol18::ReadInt2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6d9890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedInt32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6d98b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedUInt32)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa6daef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedUInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedInt64)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6d98cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedUInt64)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa6dc2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt32Array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedInt32Array)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa6da9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt32Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt64Array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int64_t> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedInt64Array)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa6daa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt64Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DecodeZigZag32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(uint32_t)>(&::ExitGames::Client::Photon::Protocol18::DecodeZigZag32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6dc2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"DecodeZigZag32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DecodeZigZag64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol18::*)(uint64_t)>(&::ExitGames::Client::Photon::Protocol18::DecodeZigZag64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6dc3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"DecodeZigZag64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6d7d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Write", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, ::GlobalNamespace::Protocol18_GpType, bool)>(&::ExitGames::Client::Photon::Protocol18::Write)> {
  constexpr static std::size_t size = 0xb0c;
  constexpr static std::size_t addrs = 0xa6dc3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Write", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeEventData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6debb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteParameterTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*)>(&::ExitGames::Client::Photon::Protocol18::WriteParameterTable)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa6dede4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteParameterTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::WriteParameterTable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa6dec18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationRequest*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6de1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"SerializeOperationRequest", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::OperationRequest*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6defc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6df030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationResponse)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa6df09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6dd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, bool, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteBoolean)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6dd04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint16_t)>(&::ExitGames::Client::Photon::Protocol18::WriteUShort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6df158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteUShort", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt16)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6d7dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt16", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, double_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteDouble)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa6dd498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, float_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteSingle)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa6dd350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteSingle", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteString)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6d7e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteString", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteHashtable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteHashtable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa6dde5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteHashtable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<uint8_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteByteArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6de1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArraySegmentByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::ArraySegment_1<uint8_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteArraySegmentByte)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6dcf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArraySegmentByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteByteArraySlice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ByteArraySlice*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteByteArraySlice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa6dcec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteByteArraySlice", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ByteArraySlice*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt32ArrayCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int32_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt32ArrayCompressed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6de084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt32ArrayCompressed", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt64ArrayCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int64_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt64ArrayCompressed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6de128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt64ArrayCompressed", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteBoolArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<bool>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteBoolArray)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa6de80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteBoolArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt16Array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int16_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt16Array)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6de768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt16Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteSingleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<float_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteSingleArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa6de5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteSingleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDoubleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<double_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteDoubleArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa6de530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDoubleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteStringArray)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa6dea44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteObjectArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6df180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IList*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteObjectArray)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa6de25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArrayInArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteArrayInArray)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa6ddc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArrayInArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCustomTypeBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::CustomType*, ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::ExitGames::Client::Photon::Protocol18::WriteCustomTypeBody)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa6df20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCustomTypeBody", {}, {::i2c::type_of<::ExitGames::Client::Photon::CustomType*>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCustomType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteCustomType)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa6dd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCustomType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCustomTypeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteCustomTypeArray)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xa6dd7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCustomTypeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArrayHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*)>(&::ExitGames::Client::Photon::Protocol18::WriteArrayHeader)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa6df64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArrayHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionaryElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IDictionary*, ::GlobalNamespace::Protocol18_GpType, ::GlobalNamespace::Protocol18_GpType)>(&::ExitGames::Client::Photon::Protocol18::WriteDictionaryElements)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xa6df700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionaryElements", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteDictionary)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa6ddd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionaryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*, ::by_ref<::GlobalNamespace::Protocol18_GpType>, ::by_ref<::GlobalNamespace::Protocol18_GpType>)>(&::ExitGames::Client::Photon::Protocol18::WriteDictionaryHeader)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xa6dfab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionaryHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArrayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*, ::by_ref<::GlobalNamespace::Protocol18_GpType>)>(&::ExitGames::Client::Photon::Protocol18::WriteArrayType)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xa6dfdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArrayType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteHashtableArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteHashtableArray)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6de660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteHashtableArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionaryArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<::System::Collections::IDictionary*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteDictionaryArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa6de438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionaryArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<::System::Collections::IDictionary*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteIntLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t)>(&::ExitGames::Client::Photon::Protocol18::WriteIntLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6df17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteIntLength", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteVarInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteVarInt32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6e0258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteVarInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteCompressedInt32)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa6dd0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int64_t, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteCompressedInt64)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa6dd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint32_t)>(&::ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa6e0164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedUInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ArrayW<uint8_t>, uint32_t)>(&::ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6df5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedUInt32", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint64_t)>(&::ExitGames::Client::Photon::Protocol18::WriteCompressedUInt64)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa6e0274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.EncodeZigZag32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ExitGames::Client::Photon::Protocol18::*)(int32_t)>(&::ExitGames::Client::Photon::Protocol18::EncodeZigZag32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6e025c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"EncodeZigZag32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.EncodeZigZag64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ExitGames::Client::Photon::Protocol18::*)(int64_t)>(&::ExitGames::Client::Photon::Protocol18::EncodeZigZag64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6e0268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"EncodeZigZag64", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)()>(&::ExitGames::Client::Photon::Protocol18::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa6e0404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_versionBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionBytes;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_versionBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___versionBytes;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_versionBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___versionBytes = value;
}
constexpr ::ArrayW<double_t>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memDoubleBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDoubleBlock;
}
constexpr ::ArrayW<double_t> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memDoubleBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memDoubleBlock;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memDoubleBlock(::ArrayW<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memDoubleBlock = value;
}
constexpr ::ArrayW<float_t>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memFloatBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memFloatBlock;
}
constexpr ::ArrayW<float_t> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memFloatBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memFloatBlock;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memFloatBlock(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memFloatBlock = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCustomTypeBodyLengthSerialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memCustomTypeBodyLengthSerialized;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCustomTypeBodyLengthSerialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memCustomTypeBodyLengthSerialized;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memCustomTypeBodyLengthSerialized(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memCustomTypeBodyLengthSerialized = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memCompressedUInt32;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memCompressedUInt32;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memCompressedUInt32(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memCompressedUInt32 = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memCompressedUInt64;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memCompressedUInt64;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memCompressedUInt64(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memCompressedUInt64 = value;
}
inline void ExitGames::Client::Photon::Protocol18::setStaticF_boolMasks(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "boolMasks", ::ExitGames::Client::Photon::Protocol18*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol18::getStaticF_boolMasks()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "boolMasks", ::ExitGames::Client::Photon::Protocol18*>();
}
inline ::StringW ExitGames::Client::Photon::Protocol18::get_ProtocolType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol18::get_VersionBytes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::Protocol18::Serialize(::ExitGames::Client::Photon::StreamBuffer*  dout, ::System::Object*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeShort(::ExitGames::Client::Photon::StreamBuffer*  dout, int16_t  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeString(::ExitGames::Client::Photon::StreamBuffer*  dout, ::StringW  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dout, serObject, setType);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::Deserialize(::ExitGames::Client::Photon::StreamBuffer*  din, uint8_t  type, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, din, type, flags);
}
inline int16_t ExitGames::Client::Photon::Protocol18::DeserializeShort(::ExitGames::Client::Photon::StreamBuffer*  din)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, din);
}
inline uint8_t ExitGames::Client::Photon::Protocol18::DeserializeByte(::ExitGames::Client::Photon::StreamBuffer*  din)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, din);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::GetAllowedDictionaryKeyTypes(::GlobalNamespace::Protocol18_GpType  gpType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetAllowedDictionaryKeyTypes", {}, {::i2c::type_of<::GlobalNamespace::Protocol18_GpType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, gpType);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::GetClrArrayType(::GlobalNamespace::Protocol18_GpType  gpType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetClrArrayType", {}, {::i2c::type_of<::GlobalNamespace::Protocol18_GpType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, gpType);
}
inline ::GlobalNamespace::Protocol18_GpType ExitGames::Client::Photon::Protocol18::GetCodeOfType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetCodeOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Protocol18_GpType>(this, ___internal_method, type);
}
inline ::GlobalNamespace::Protocol18_GpType ExitGames::Client::Photon::Protocol18::GetCodeOfTypeCode(::System::TypeCode  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetCodeOfTypeCode", {}, {::i2c::type_of<::System::TypeCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Protocol18_GpType>(this, ___internal_method, type);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::Read(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Read", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream, flags, parameters);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::Read(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  gpType, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Read", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream, gpType, flags, parameters);
}
inline bool ExitGames::Client::Photon::Protocol18::ReadBoolean(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline uint8_t ExitGames::Client::Photon::Protocol18::ReadByte(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, stream);
}
inline int16_t ExitGames::Client::Photon::Protocol18::ReadInt16(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt16", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, stream);
}
inline uint16_t ExitGames::Client::Photon::Protocol18::ReadUShort(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadUShort", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, stream);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadInt32(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream);
}
inline int64_t ExitGames::Client::Photon::Protocol18::ReadInt64(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, stream);
}
inline float_t ExitGames::Client::Photon::Protocol18::ReadSingle(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadSingle", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, stream);
}
inline double_t ExitGames::Client::Photon::Protocol18::ReadDouble(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, stream);
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::Protocol18::ReadNonAllocByteArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadNonAllocByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlice*>(this, ___internal_method, stream);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol18::ReadByteArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, stream);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::ReadCustomType(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  gpType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCustomType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream, gpType);
}
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::Protocol18::DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer*  din, ::ExitGames::Client::Photon::EventData*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EventData*>(this, ___internal_method, din, target, flags);
}
inline ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* ExitGames::Client::Photon::Protocol18::ReadParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(this, ___internal_method, stream, target, flags);
}
inline ::ExitGames::Client::Photon::ParameterDictionary* ExitGames::Client::Photon::Protocol18::ReadParameterDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  target, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadParameterDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ParameterDictionary*>(this, ___internal_method, stream, target, flags);
}
inline ::ExitGames::Client::Photon::Hashtable* ExitGames::Client::Photon::Protocol18::ReadHashtable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadHashtable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<int32_t> ExitGames::Client::Photon::Protocol18::ReadIntArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadIntArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, stream);
}
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::Protocol18::DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  din, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationRequest*>(this, ___internal_method, din, flags);
}
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::Protocol18::DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationResponse*>(this, ___internal_method, stream, flags);
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::Protocol18::DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DisconnectMessage*>(this, ___internal_method, stream);
}
inline ::StringW ExitGames::Client::Photon::Protocol18::ReadString(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadString", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, stream);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::ReadCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCustomTypeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, stream);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer*  stream, ::by_ref<::GlobalNamespace::Protocol18_GpType>  keyReadType, ::by_ref<::GlobalNamespace::Protocol18_GpType>  valueReadType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, stream, keyReadType, valueReadType);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, stream);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::GetDictArrayType(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"GetDictArrayType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, stream);
}
inline ::System::Collections::IDictionary* ExitGames::Client::Photon::Protocol18::ReadDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, stream, flags, parameters);
}
inline bool ExitGames::Client::Photon::Protocol18::ReadDictionaryElements(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::Protocol18_GpType  keyReadType, ::GlobalNamespace::Protocol18_GpType  valueReadType, ::System::Collections::IDictionary*  dictionary, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryElements", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, keyReadType, valueReadType, dictionary, flags, parameters);
}
inline ::ArrayW<::System::Object*> ExitGames::Client::Photon::Protocol18::ReadObjectArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*> ExitGames::Client::Photon::Protocol18::ReadWrapperArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadWrapperArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>>(this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<bool> ExitGames::Client::Photon::Protocol18::ReadBooleanArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadBooleanArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method, stream);
}
inline ::ArrayW<int16_t> ExitGames::Client::Photon::Protocol18::ReadInt16Array(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt16Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(this, ___internal_method, stream);
}
inline ::ArrayW<float_t> ExitGames::Client::Photon::Protocol18::ReadSingleArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadSingleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, stream);
}
inline ::ArrayW<double_t> ExitGames::Client::Photon::Protocol18::ReadDoubleArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDoubleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>>(this, ___internal_method, stream);
}
inline ::ArrayW<::StringW> ExitGames::Client::Photon::Protocol18::ReadStringArray(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, stream);
}
inline ::ArrayW<::ExitGames::Client::Photon::Hashtable*> ExitGames::Client::Photon::Protocol18::ReadHashtableArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadHashtableArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ExitGames::Client::Photon::Hashtable*>>(this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<::System::Collections::IDictionary*> ExitGames::Client::Photon::Protocol18::ReadDictionaryArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadDictionaryArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::IDictionary*>>(this, ___internal_method, stream, flags, parameters);
}
inline ::System::Array* ExitGames::Client::Photon::Protocol18::ReadArrayInArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::GlobalNamespace::IProtocol_DeserializationFlags  flags, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadArrayInArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::GlobalNamespace::IProtocol_DeserializationFlags>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, stream, flags, parameters);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadInt1(::ExitGames::Client::Photon::StreamBuffer*  stream, bool  signNegative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt1", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream, signNegative);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadInt2(::ExitGames::Client::Photon::StreamBuffer*  stream, bool  signNegative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadInt2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream, signNegative);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadCompressedInt32(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream);
}
inline uint32_t ExitGames::Client::Photon::Protocol18::ReadCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedUInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, stream);
}
inline int64_t ExitGames::Client::Photon::Protocol18::ReadCompressedInt64(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, stream);
}
inline uint64_t ExitGames::Client::Photon::Protocol18::ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, stream);
}
inline ::ArrayW<int32_t> ExitGames::Client::Photon::Protocol18::ReadCompressedInt32Array(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt32Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, stream);
}
inline ::ArrayW<int64_t> ExitGames::Client::Photon::Protocol18::ReadCompressedInt64Array(::ExitGames::Client::Photon::StreamBuffer*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"ReadCompressedInt64Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(this, ___internal_method, stream);
}
inline int32_t ExitGames::Client::Photon::Protocol18::DecodeZigZag32(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"DecodeZigZag32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t ExitGames::Client::Photon::Protocol18::DecodeZigZag64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"DecodeZigZag64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::Protocol18::Write(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Write", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::Write(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, ::GlobalNamespace::Protocol18_GpType  gpType, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"Write", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, gpType, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeEventData(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::EventData*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, parameters);
}
inline void ExitGames::Client::Photon::Protocol18::WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ParameterDictionary*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteParameterTable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, parameters);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationRequest*  operation, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"SerializeOperationRequest", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::OperationRequest*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operation, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::OperationResponse*  serObject, bool  setType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteByte(::ExitGames::Client::Photon::StreamBuffer*  stream, uint8_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteBoolean(::ExitGames::Client::Photon::StreamBuffer*  stream, bool  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteBoolean", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteUShort(::ExitGames::Client::Photon::StreamBuffer*  stream, uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteUShort", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt16(::ExitGames::Client::Photon::StreamBuffer*  stream, int16_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt16", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDouble(::ExitGames::Client::Photon::StreamBuffer*  stream, double_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDouble", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteSingle(::ExitGames::Client::Photon::StreamBuffer*  stream, float_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteSingle", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteString(::ExitGames::Client::Photon::StreamBuffer*  stream, ::StringW  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteString", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteHashtable(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteHashtable", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteByteArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<uint8_t>  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteByteArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteArraySegmentByte(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::ArraySegment_1<uint8_t>  seg, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArraySegmentByte", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, seg, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteByteArraySlice(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ExitGames::Client::Photon::ByteArraySlice*  buffer, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteByteArraySlice", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ExitGames::Client::Photon::ByteArraySlice*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, buffer, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt32ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<int32_t>  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt32ArrayCompressed", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt64ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<int64_t>  values, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt64ArrayCompressed", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, values, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteBoolArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<bool>  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteBoolArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt16Array(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<int16_t>  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteInt16Array", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteSingleArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<float_t>  values, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteSingleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, values, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDoubleArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<double_t>  values, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDoubleArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, values, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteStringArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value0, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteStringArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value0, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  array, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, array, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::IList*  array, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteObjectArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, array, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteArrayInArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArrayInArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCustomTypeBody(::ExitGames::Client::Photon::CustomType*  customType, ::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCustomTypeBody", {}, {::i2c::type_of<::ExitGames::Client::Photon::CustomType*>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customType, stream, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCustomType(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCustomType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCustomTypeArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline bool ExitGames::Client::Photon::Protocol18::WriteArrayHeader(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArrayHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, type);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionaryElements(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Collections::IDictionary*  dictionary, ::GlobalNamespace::Protocol18_GpType  keyWriteType, ::GlobalNamespace::Protocol18_GpType  valueWriteType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionaryElements", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>(), ::i2c::type_of<::GlobalNamespace::Protocol18_GpType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dictionary, keyWriteType, valueWriteType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionary(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  dict, bool  setType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionary", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dict, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Type*  type, ::by_ref<::GlobalNamespace::Protocol18_GpType>  keyWriteType, ::by_ref<::GlobalNamespace::Protocol18_GpType>  valueWriteType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionaryHeader", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, type, keyWriteType, valueWriteType);
}
inline bool ExitGames::Client::Photon::Protocol18::WriteArrayType(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Type*  type, ::by_ref<::GlobalNamespace::Protocol18_GpType>  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteArrayType", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Protocol18_GpType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, type, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteHashtableArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteHashtableArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionaryArray(::ExitGames::Client::Photon::StreamBuffer*  stream, ::ArrayW<::System::Collections::IDictionary*>  dictArray, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteDictionaryArray", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::ArrayW<::System::Collections::IDictionary*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, dictArray, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteIntLength(::ExitGames::Client::Photon::StreamBuffer*  stream, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteIntLength", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteVarInt32(::ExitGames::Client::Photon::StreamBuffer*  stream, int32_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteVarInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedInt32(::ExitGames::Client::Photon::StreamBuffer*  stream, int32_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, int64_t  value, bool  writeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer*  stream, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedUInt32", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value);
}
inline int32_t ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32(::ArrayW<uint8_t>  buffer, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedUInt32", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"WriteCompressedUInt64", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, value);
}
inline uint32_t ExitGames::Client::Photon::Protocol18::EncodeZigZag32(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"EncodeZigZag32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, value);
}
inline uint64_t ExitGames::Client::Photon::Protocol18::EncodeZigZag64(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {"EncodeZigZag64", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::Protocol18::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol18*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::Protocol18* ExitGames::Client::Photon::Protocol18::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Protocol18*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Protocol18::Protocol18()   {
}
