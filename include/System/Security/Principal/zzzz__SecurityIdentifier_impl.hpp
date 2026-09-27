#pragma once
// IWYU pragma private; include "System/Security/Principal/SecurityIdentifier.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_impl.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.get_BinaryLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::get_BinaryLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa18b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                        {"get_BinaryLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetBinaryForm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::Principal::SecurityIdentifier::GetBinaryForm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa18b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                        {"GetBinaryForm", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Principal::SecurityIdentifier::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Principal::SecurityIdentifier::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void System::Security::Principal::SecurityIdentifier::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
inline void System::Security::Principal::SecurityIdentifier::setStaticF_MaxBinaryLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MaxBinaryLength", ::System::Security::Principal::SecurityIdentifier*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Principal::SecurityIdentifier::getStaticF_MaxBinaryLength()  {
return ::cordl_internals::getStaticField<int32_t, "MaxBinaryLength", ::System::Security::Principal::SecurityIdentifier*>();
}
inline void System::Security::Principal::SecurityIdentifier::setStaticF_MinBinaryLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MinBinaryLength", ::System::Security::Principal::SecurityIdentifier*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Principal::SecurityIdentifier::getStaticF_MinBinaryLength()  {
return ::cordl_internals::getStaticField<int32_t, "MinBinaryLength", ::System::Security::Principal::SecurityIdentifier*>();
}
inline int32_t System::Security::Principal::SecurityIdentifier::get_BinaryLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                        {"get_BinaryLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Principal::SecurityIdentifier::GetBinaryForm(::ArrayW<uint8_t>  binaryForm, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                        {"GetBinaryForm", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
// Ctor Parameters []
constexpr ::System::Security::Principal::SecurityIdentifier::SecurityIdentifier()   {
}
