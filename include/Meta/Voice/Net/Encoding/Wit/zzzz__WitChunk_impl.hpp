#pragma once
// IWYU pragma private; include "Meta/Voice/Net/Encoding/Wit/WitChunk.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkHeader_impl.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunk.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::Encoding::Wit::WitChunk::*)(::System::Object*)>(&::Meta::Voice::Net::Encoding::Wit::WitChunk::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e6b3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(),
                    {::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunk.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::Encoding::Wit::WitChunk::*)(::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::Encoding::Wit::WitChunk::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e6b480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::Encoding::Wit::WitChunk.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::Encoding::Wit::WitChunk::*)()>(&::Meta::Voice::Net::Encoding::Wit::WitChunk::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e6b568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(),
                    {::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Meta::Voice::Net::Encoding::Wit::WitChunk::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Meta::Voice::Net::Encoding::Wit::WitChunk::Equals(::Meta::Voice::Net::Encoding::Wit::WitChunk  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Meta::Voice::Net::Encoding::Wit::WitChunk::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "header", ty: "::Meta::Voice::Net::Encoding::Wit::WitChunkHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jsonString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jsonData", ty: "::Meta::WitAi::Json::WitResponseNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binaryData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunk::WitChunk(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader  header, ::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) noexcept  {
this->header = header;
this->jsonString = jsonString;
this->jsonData = jsonData;
this->binaryData = binaryData;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunk::WitChunk()   {
}
