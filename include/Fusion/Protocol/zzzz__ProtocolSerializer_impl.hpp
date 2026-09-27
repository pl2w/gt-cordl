#pragma once
// IWYU pragma private; include "Fusion/Protocol/ProtocolSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Protocol/zzzz__ProtocolSerializer_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::ProtocolSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ProtocolSerializer::*)()>(&::Fusion::Protocol::ProtocolSerializer::_ctor)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x602289c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ProtocolSerializer.ConvertToMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::ProtocolSerializer::*)(::ArrayW<uint8_t>, ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*)>(&::Fusion::Protocol::ProtocolSerializer::ConvertToMessages)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x602235c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"ConvertToMessages", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ProtocolSerializer.ConvertToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::ProtocolSerializer::*)(::Fusion::Protocol::Message*, ::by_ref<::Fusion::Protocol::BitStream*>)>(&::Fusion::Protocol::ProtocolSerializer::ConvertToBuffer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6022170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"ConvertToBuffer", {}, {::i2c::type_of<::Fusion::Protocol::Message*>(), ::i2c::type_of<::by_ref<::Fusion::Protocol::BitStream*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ProtocolSerializer.RegisterProtocolMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ProtocolSerializer::*)(uint8_t, ::Fusion::Protocol::Message*)>(&::Fusion::Protocol::ProtocolSerializer::RegisterProtocolMsg)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6025be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"RegisterProtocolMsg", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Fusion::Protocol::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ProtocolSerializer.PackNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::ProtocolSerializer::*)(::Fusion::Protocol::Message*, ::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::ProtocolSerializer::PackNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6025e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"PackNext", {}, {::i2c::type_of<::Fusion::Protocol::Message*>(), ::i2c::type_of<::Fusion::Protocol::BitStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ProtocolSerializer.ReadNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::ProtocolSerializer::*)(::Fusion::Protocol::BitStream*, ::by_ref<::Fusion::Protocol::Message*>)>(&::Fusion::Protocol::ProtocolSerializer::ReadNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6025c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"ReadNext", {}, {::i2c::type_of<::Fusion::Protocol::BitStream*>(), ::i2c::type_of<::by_ref<::Fusion::Protocol::Message*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::BitStream*& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__writeStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeStream;
}
constexpr ::Fusion::Protocol::BitStream* const& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__writeStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeStream;
}
constexpr void Fusion::Protocol::ProtocolSerializer::__cordl_internal_set__writeStream(::Fusion::Protocol::BitStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeStream = value;
}
constexpr ::Fusion::Protocol::BitStream*& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__readStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readStream;
}
constexpr ::Fusion::Protocol::BitStream* const& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__readStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readStream;
}
constexpr void Fusion::Protocol::ProtocolSerializer::__cordl_internal_set__readStream(::Fusion::Protocol::BitStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readStream = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__typeToId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeToId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>* const& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__typeToId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeToId;
}
constexpr void Fusion::Protocol::ProtocolSerializer::__cordl_internal_set__typeToId(::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeToId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>*& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__idToType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idToType;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>* const& Fusion::Protocol::ProtocolSerializer::__cordl_internal_get__idToType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idToType;
}
constexpr void Fusion::Protocol::ProtocolSerializer::__cordl_internal_set__idToType(::System::Collections::Generic::Dictionary_2<uint8_t,::Fusion::Protocol::Message*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idToType = value;
}
inline void Fusion::Protocol::ProtocolSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Protocol::ProtocolSerializer::ConvertToMessages(::ArrayW<uint8_t>  data, ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*  messages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"ConvertToMessages", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, messages);
}
inline bool Fusion::Protocol::ProtocolSerializer::ConvertToBuffer(::Fusion::Protocol::Message*  message, ::by_ref<::Fusion::Protocol::BitStream*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"ConvertToBuffer", {}, {::i2c::type_of<::Fusion::Protocol::Message*>(), ::i2c::type_of<::by_ref<::Fusion::Protocol::BitStream*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, buffer);
}
inline void Fusion::Protocol::ProtocolSerializer::RegisterProtocolMsg(uint8_t  id, ::Fusion::Protocol::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"RegisterProtocolMsg", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::Fusion::Protocol::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, message);
}
inline bool Fusion::Protocol::ProtocolSerializer::PackNext(::Fusion::Protocol::Message*  msg, ::Fusion::Protocol::BitStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"PackNext", {}, {::i2c::type_of<::Fusion::Protocol::Message*>(), ::i2c::type_of<::Fusion::Protocol::BitStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, msg, stream);
}
inline bool Fusion::Protocol::ProtocolSerializer::ReadNext(::Fusion::Protocol::BitStream*  stream, ::by_ref<::Fusion::Protocol::Message*>  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ProtocolSerializer*>(),
                        {"ReadNext", {}, {::i2c::type_of<::Fusion::Protocol::BitStream*>(), ::i2c::type_of<::by_ref<::Fusion::Protocol::Message*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, msg);
}
inline ::Fusion::Protocol::ProtocolSerializer* Fusion::Protocol::ProtocolSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::ProtocolSerializer*>());
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::ProtocolSerializer::ProtocolSerializer()   {
}
