#pragma once
// IWYU pragma private; include "System/Net/NetConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NetConfig_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::NetConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetConfig::*)()>(&::System::Net::NetConfig::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacac79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetConfig.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::NetConfig::*)()>(&::System::Net::NetConfig::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacac7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetConfig*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::NetConfig::__cordl_internal_get_ipv6Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ipv6Enabled;
}
constexpr bool const& System::Net::NetConfig::__cordl_internal_get_ipv6Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ipv6Enabled;
}
constexpr void System::Net::NetConfig::__cordl_internal_set_ipv6Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ipv6Enabled = value;
}
constexpr int32_t& System::Net::NetConfig::__cordl_internal_get_MaxResponseHeadersLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResponseHeadersLength;
}
constexpr int32_t const& System::Net::NetConfig::__cordl_internal_get_MaxResponseHeadersLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResponseHeadersLength;
}
constexpr void System::Net::NetConfig::__cordl_internal_set_MaxResponseHeadersLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxResponseHeadersLength = value;
}
inline void System::Net::NetConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Net::NetConfig::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetConfig*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Net::NetConfig* System::Net::NetConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetConfig*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::Net::NetConfig::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::NetConfig::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::NetConfig::NetConfig()   {
}
