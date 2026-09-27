#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/WebHeaderCollection.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_impl.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_impl.hpp"
#include "WebSocketSharp/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderInfo_def.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::WebSocketSharp::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xb98828c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb983b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.get_AllKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::get_AllKeys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::get_Keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW, ::StringW, ::WebSocketSharp::Net::HttpHeaderType)>(&::WebSocketSharp::Net::WebHeaderCollection::add)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb988548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.checkAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::WebSocketSharp::Net::HttpHeaderType)>(&::WebSocketSharp::Net::WebHeaderCollection::checkAllowed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb98857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkAllowed", {}, {::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.checkName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::checkName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb9885e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.checkRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW, ::WebSocketSharp::Net::HttpHeaderType)>(&::WebSocketSharp::Net::WebHeaderCollection::checkRestricted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb988710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkRestricted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.checkValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::checkValue)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb988854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.getHeaderInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::HttpHeaderInfo* (*)(::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::getHeaderInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb98897c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"getHeaderInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.getHeaderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::HttpHeaderType (*)(::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::getHeaderType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb988b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"getHeaderType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.isMultiValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool)>(&::WebSocketSharp::Net::WebHeaderCollection::isMultiValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb988bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"isMultiValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.isRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool)>(&::WebSocketSharp::Net::WebHeaderCollection::isRestricted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb9887d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"isRestricted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW, ::StringW, ::WebSocketSharp::Net::HttpHeaderType)>(&::WebSocketSharp::Net::WebHeaderCollection::set)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb988c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.InternalSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW, bool)>(&::WebSocketSharp::Net::WebHeaderCollection::InternalSet)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb983b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"InternalSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb988c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::Clear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb988d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::WebHeaderCollection::*)(int32_t)>(&::WebSocketSharp::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::WebHeaderCollection::*)(int32_t)>(&::WebSocketSharp::Net::WebHeaderCollection::GetKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb988dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.GetValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::WebSocketSharp::Net::WebHeaderCollection::*)(int32_t)>(&::WebSocketSharp::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb988db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.GetValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb988dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::WebSocketSharp::Net::WebHeaderCollection::GetObjectData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb988dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::System::Object*)>(&::WebSocketSharp::Net::WebHeaderCollection::OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb988fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb988fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::WebSocketSharp::Net::WebHeaderCollection::Set)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb98906c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::WebHeaderCollection::*)()>(&::WebSocketSharp::Net::WebHeaderCollection::ToString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb989160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::WebHeaderCollection.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::WebHeaderCollection::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::WebSocketSharp::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9892b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WebSocketSharp::Net::WebHeaderCollection::__cordl_internal_get__internallyUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internallyUsed;
}
constexpr bool const& WebSocketSharp::Net::WebHeaderCollection::__cordl_internal_get__internallyUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internallyUsed;
}
constexpr void WebSocketSharp::Net::WebHeaderCollection::__cordl_internal_set__internallyUsed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internallyUsed = value;
}
constexpr ::WebSocketSharp::Net::HttpHeaderType& WebSocketSharp::Net::WebHeaderCollection::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::WebSocketSharp::Net::HttpHeaderType const& WebSocketSharp::Net::WebHeaderCollection::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void WebSocketSharp::Net::WebHeaderCollection::__cordl_internal_set__state(::WebSocketSharp::Net::HttpHeaderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void WebSocketSharp::Net::WebHeaderCollection::setStaticF__headers(::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>*, "_headers", ::WebSocketSharp::Net::WebHeaderCollection*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>* WebSocketSharp::Net::WebHeaderCollection::getStaticF__headers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::WebSocketSharp::Net::HttpHeaderInfo*>*, "_headers", ::WebSocketSharp::Net::WebHeaderCollection*>();
}
inline void WebSocketSharp::Net::WebHeaderCollection::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void WebSocketSharp::Net::WebHeaderCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> WebSocketSharp::Net::WebHeaderCollection::get_AllKeys()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t WebSocketSharp::Net::WebHeaderCollection::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* WebSocketSharp::Net::WebHeaderCollection::get_Keys()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(this, ___internal_method);
}
inline void WebSocketSharp::Net::WebHeaderCollection::add(::StringW  name, ::StringW  value, ::WebSocketSharp::Net::HttpHeaderType  headerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, headerType);
}
inline void WebSocketSharp::Net::WebHeaderCollection::checkAllowed(::WebSocketSharp::Net::HttpHeaderType  headerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkAllowed", {}, {::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerType);
}
inline ::StringW WebSocketSharp::Net::WebHeaderCollection::checkName(::StringW  name, ::StringW  paramName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, paramName);
}
inline void WebSocketSharp::Net::WebHeaderCollection::checkRestricted(::StringW  name, ::WebSocketSharp::Net::HttpHeaderType  headerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkRestricted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, headerType);
}
inline ::StringW WebSocketSharp::Net::WebHeaderCollection::checkValue(::StringW  value, ::StringW  paramName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"checkValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, paramName);
}
inline ::WebSocketSharp::Net::HttpHeaderInfo* WebSocketSharp::Net::WebHeaderCollection::getHeaderInfo(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"getHeaderInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::HttpHeaderInfo*>(nullptr, ___internal_method, name);
}
inline ::WebSocketSharp::Net::HttpHeaderType WebSocketSharp::Net::WebHeaderCollection::getHeaderType(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"getHeaderType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::HttpHeaderType>(nullptr, ___internal_method, name);
}
inline bool WebSocketSharp::Net::WebHeaderCollection::isMultiValue(::StringW  name, bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"isMultiValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, response);
}
inline bool WebSocketSharp::Net::WebHeaderCollection::isRestricted(::StringW  name, bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"isRestricted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, response);
}
inline void WebSocketSharp::Net::WebHeaderCollection::set(::StringW  name, ::StringW  value, ::WebSocketSharp::Net::HttpHeaderType  headerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"set", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, headerType);
}
inline void WebSocketSharp::Net::WebHeaderCollection::InternalSet(::StringW  header, bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"InternalSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, response);
}
inline void WebSocketSharp::Net::WebHeaderCollection::Add(::StringW  name, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void WebSocketSharp::Net::WebHeaderCollection::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::WebHeaderCollection::Get(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::StringW WebSocketSharp::Net::WebHeaderCollection::Get(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::System::Collections::IEnumerator* WebSocketSharp::Net::WebHeaderCollection::GetEnumerator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::WebHeaderCollection::GetKey(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW> WebSocketSharp::Net::WebHeaderCollection::GetValues(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW> WebSocketSharp::Net::WebHeaderCollection::GetValues(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, name);
}
inline void WebSocketSharp::Net::WebHeaderCollection::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void WebSocketSharp::Net::WebHeaderCollection::OnDeserialization(::System::Object*  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void WebSocketSharp::Net::WebHeaderCollection::Remove(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void WebSocketSharp::Net::WebHeaderCollection::Set(::StringW  name, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::StringW WebSocketSharp::Net::WebHeaderCollection::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void WebSocketSharp::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::WebHeaderCollection*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::WebSocketSharp::Net::WebHeaderCollection* WebSocketSharp::Net::WebHeaderCollection::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::WebHeaderCollection*>(serializationInfo, streamingContext));
}
inline ::WebSocketSharp::Net::WebHeaderCollection* WebSocketSharp::Net::WebHeaderCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::WebHeaderCollection*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  WebSocketSharp::Net::WebHeaderCollection::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* WebSocketSharp::Net::WebHeaderCollection::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::WebHeaderCollection::WebHeaderCollection()   {
}
