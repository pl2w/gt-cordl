#pragma once
// IWYU pragma private; include "System/Net/SecChannelBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__SecChannelBindings_def.hpp"
//  Writing Method size for method: ::System::Net::SecChannelBindings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SecChannelBindings::*)()>(&::System::Net::SecChannelBindings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SecChannelBindings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_dwInitiatorAddrType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwInitiatorAddrType;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_dwInitiatorAddrType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwInitiatorAddrType;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_dwInitiatorAddrType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dwInitiatorAddrType = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_cbInitiatorLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cbInitiatorLength;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_cbInitiatorLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cbInitiatorLength;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_cbInitiatorLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cbInitiatorLength = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_dwInitiatorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwInitiatorOffset;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_dwInitiatorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwInitiatorOffset;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_dwInitiatorOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dwInitiatorOffset = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_dwAcceptorAddrType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwAcceptorAddrType;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_dwAcceptorAddrType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwAcceptorAddrType;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_dwAcceptorAddrType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dwAcceptorAddrType = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_cbAcceptorLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cbAcceptorLength;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_cbAcceptorLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cbAcceptorLength;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_cbAcceptorLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cbAcceptorLength = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_dwAcceptorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwAcceptorOffset;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_dwAcceptorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwAcceptorOffset;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_dwAcceptorOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dwAcceptorOffset = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_cbApplicationDataLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cbApplicationDataLength;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_cbApplicationDataLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cbApplicationDataLength;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_cbApplicationDataLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cbApplicationDataLength = value;
}
constexpr int32_t& System::Net::SecChannelBindings::__cordl_internal_get_dwApplicationDataOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwApplicationDataOffset;
}
constexpr int32_t const& System::Net::SecChannelBindings::__cordl_internal_get_dwApplicationDataOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwApplicationDataOffset;
}
constexpr void System::Net::SecChannelBindings::__cordl_internal_set_dwApplicationDataOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dwApplicationDataOffset = value;
}
inline void System::Net::SecChannelBindings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SecChannelBindings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::SecChannelBindings* System::Net::SecChannelBindings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SecChannelBindings*>());
}
// Ctor Parameters []
constexpr ::System::Net::SecChannelBindings::SecChannelBindings()   {
}
