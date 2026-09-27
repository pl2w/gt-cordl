#pragma once
// IWYU pragma private; include "Meta/Voice/Net/Encoding/Wit/WitChunkConverter.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkConverter_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkHeader_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6b600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.get_IsHeaderDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_IsHeaderDecoded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e6b608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_IsHeaderDecoded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.get_IsJsonDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_IsJsonDecoded)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6b618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_IsJsonDecoded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.get_IsBinaryDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_IsBinaryDecoded)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6b62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_IsBinaryDecoded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.ResetChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::ResetChunk)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e6b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"ResetChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Decode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e6b69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.DecodeChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeChunk)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9e6b70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeChunk", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.DecodeHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeHeader)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e6ba1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.DecodeJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeJson)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e6bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeJson", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.DecodeBinary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeBinary)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e6bc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeBinary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.DecodeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e6bd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Encode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e6a4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Encode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e6be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Encode)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9e6bf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.EncodeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e6be88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.EncodeFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(bool, bool)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeFlag)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e6c094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeFlag", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.EncodeLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int64_t)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e6c0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.EncodeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e6c12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.GetHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::Encoding::Wit::WitChunkHeader (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::GetHeader)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e6bca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"GetHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter.SafeShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t, int32_t)>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::SafeShift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e6c17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"SafeShift", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9e6c188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunk& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__currentChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChunk;
}
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunk const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__currentChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChunk;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__currentChunk(::Meta::Voice::Net::Encoding::Wit::WitChunk  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentChunk = value;
}
constexpr int32_t& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__headerDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerDecoded;
}
constexpr int32_t const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__headerDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerDecoded;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__headerDecoded(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerDecoded = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__headerBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerBytes;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__headerBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerBytes;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__headerBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerBytes = value;
}
constexpr int32_t& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__jsonDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsonDecoded;
}
constexpr int32_t const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__jsonDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsonDecoded;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__jsonDecoded(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jsonDecoded = value;
}
constexpr ::System::Text::StringBuilder*& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__jsonBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsonBuilder;
}
constexpr ::System::Text::StringBuilder* const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__jsonBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsonBuilder;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__jsonBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jsonBuilder = value;
}
constexpr uint64_t& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__binaryDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____binaryDecoded;
}
constexpr uint64_t const& Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_get__binaryDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____binaryDecoded;
}
constexpr void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::__cordl_internal_set__binaryDecoded(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____binaryDecoded = value;
}
inline void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::setStaticF_TextEncoding(::System::Text::UTF8Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "TextEncoding", ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* Meta::Voice::Net::Encoding::Wit::WitChunkConverter::getStaticF_TextEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "TextEncoding", ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline bool Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_IsHeaderDecoded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_IsHeaderDecoded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_IsJsonDecoded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_IsJsonDecoded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Net::Encoding::Wit::WitChunkConverter::get_IsBinaryDecoded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"get_IsBinaryDecoded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::ResetChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"ResetChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*  onChunkDecoded, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  customBinaryDecoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onChunkDecoded, customBinaryDecoder);
}
inline int32_t Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeChunk(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*  onChunkDecoded, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  customBinaryDecoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeChunk", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength, onChunkDecoded, customBinaryDecoder);
}
inline int32_t Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeHeader(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength);
}
inline int32_t Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeJson(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeJson", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength);
}
inline int32_t Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeBinary(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  customBinaryDecoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeBinary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength, customBinaryDecoder);
}
inline ::StringW Meta::Voice::Net::Encoding::Wit::WitChunkConverter::DecodeString(::ArrayW<uint8_t>  rawData, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"DecodeString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rawData, offset, length);
}
inline ::ArrayW<uint8_t> Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Encode(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunkData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, chunkData);
}
inline ::ArrayW<uint8_t> Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Encode(::StringW  jsonString, ::ArrayW<uint8_t>  binaryData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, jsonString, binaryData);
}
inline ::ArrayW<uint8_t> Meta::Voice::Net::Encoding::Wit::WitChunkConverter::Encode(::ArrayW<uint8_t>  jsonData, ::ArrayW<uint8_t>  binaryData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, jsonData, binaryData);
}
inline ::ArrayW<uint8_t> Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeString(::StringW  stringData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stringData);
}
inline uint8_t Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeFlag(bool  hasJson, bool  hasBinary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeFlag", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, hasJson, hasBinary);
}
inline void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeLength(::ArrayW<uint8_t>  destination, ::by_ref<int32_t>  offset, int64_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, offset, length);
}
inline void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::EncodeBytes(::ArrayW<uint8_t>  destination, ::by_ref<int32_t>  offset, ::ArrayW<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"EncodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, offset, source);
}
inline ::Meta::Voice::Net::Encoding::Wit::WitChunkHeader Meta::Voice::Net::Encoding::Wit::WitChunkConverter::GetHeader(::ArrayW<uint8_t>  bytes, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"GetHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::Encoding::Wit::WitChunkHeader>(nullptr, ___internal_method, bytes, offset);
}
inline int32_t Meta::Voice::Net::Encoding::Wit::WitChunkConverter::SafeShift(uint8_t  flags, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {"SafeShift", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, flags, index);
}
inline void Meta::Voice::Net::Encoding::Wit::WitChunkConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter* Meta::Voice::Net::Encoding::Wit::WitChunkConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter::WitChunkConverter()   {
}
