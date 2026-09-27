#pragma once
// IWYU pragma private; include "System/Net/Security/SecurityBuffer.hpp"
#include "System/Net/Security/zzzz__SecurityBufferType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SecurityBuffer_def.hpp"
#include "System/Net/Security/zzzz__SecurityBufferType_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBinding_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SecurityBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SecurityBuffer::*)(::ArrayW<uint8_t>, ::System::Net::Security::SecurityBufferType)>(&::System::Net::Security::SecurityBuffer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xacf4628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SecurityBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Net::Security::SecurityBufferType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SecurityBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SecurityBuffer::*)(int32_t, ::System::Net::Security::SecurityBufferType)>(&::System::Net::Security::SecurityBuffer::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xacf467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SecurityBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Security::SecurityBufferType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SecurityBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SecurityBuffer::*)(::System::Security::Authentication::ExtendedProtection::ChannelBinding*)>(&::System::Net::Security::SecurityBuffer::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xacf4814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SecurityBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Security::SecurityBuffer::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr int32_t const& System::Net::Security::SecurityBuffer::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void System::Net::Security::SecurityBuffer::__cordl_internal_set_size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr ::System::Net::Security::SecurityBufferType& System::Net::Security::SecurityBuffer::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Net::Security::SecurityBufferType const& System::Net::Security::SecurityBuffer::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void System::Net::Security::SecurityBuffer::__cordl_internal_set_type(::System::Net::Security::SecurityBufferType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::Security::SecurityBuffer::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::ArrayW<uint8_t> const& System::Net::Security::SecurityBuffer::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void System::Net::Security::SecurityBuffer::__cordl_internal_set_token(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr ::System::Runtime::InteropServices::SafeHandle*& System::Net::Security::SecurityBuffer::__cordl_internal_get_unmanagedToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmanagedToken;
}
constexpr ::System::Runtime::InteropServices::SafeHandle* const& System::Net::Security::SecurityBuffer::__cordl_internal_get_unmanagedToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmanagedToken;
}
constexpr void System::Net::Security::SecurityBuffer::__cordl_internal_set_unmanagedToken(::System::Runtime::InteropServices::SafeHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unmanagedToken = value;
}
constexpr int32_t& System::Net::Security::SecurityBuffer::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr int32_t const& System::Net::Security::SecurityBuffer::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void System::Net::Security::SecurityBuffer::__cordl_internal_set_offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
inline void System::Net::Security::SecurityBuffer::_ctor(::ArrayW<uint8_t>  data, ::System::Net::Security::SecurityBufferType  tokentype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SecurityBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Net::Security::SecurityBufferType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, tokentype);
}
inline void System::Net::Security::SecurityBuffer::_ctor(int32_t  size, ::System::Net::Security::SecurityBufferType  tokentype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SecurityBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Security::SecurityBufferType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, tokentype);
}
inline void System::Net::Security::SecurityBuffer::_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SecurityBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline ::System::Net::Security::SecurityBuffer* System::Net::Security::SecurityBuffer::New_ctor(::ArrayW<uint8_t>  data, ::System::Net::Security::SecurityBufferType  tokentype)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SecurityBuffer*>(data, tokentype));
}
inline ::System::Net::Security::SecurityBuffer* System::Net::Security::SecurityBuffer::New_ctor(int32_t  size, ::System::Net::Security::SecurityBufferType  tokentype)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SecurityBuffer*>(size, tokentype));
}
inline ::System::Net::Security::SecurityBuffer* System::Net::Security::SecurityBuffer::New_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SecurityBuffer*>(binding));
}
// Ctor Parameters []
constexpr ::System::Net::Security::SecurityBuffer::SecurityBuffer()   {
}
