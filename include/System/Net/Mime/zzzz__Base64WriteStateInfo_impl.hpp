#pragma once
// IWYU pragma private; include "System/Net/Mime/Base64WriteStateInfo.hpp"
#include "System/Net/Mime/zzzz__WriteStateInfoBase_impl.hpp"
#include "System/Net/Mime/zzzz__Base64WriteStateInfo_def.hpp"
//  Writing Method size for method: ::System::Net::Mime::Base64WriteStateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mime::Base64WriteStateInfo::*)()>(&::System::Net::Mime::Base64WriteStateInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xace209c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::Base64WriteStateInfo.get_Padding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Mime::Base64WriteStateInfo::*)()>(&::System::Net::Mime::Base64WriteStateInfo::get_Padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace21f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"get_Padding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::Base64WriteStateInfo.set_Padding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mime::Base64WriteStateInfo::*)(int32_t)>(&::System::Net::Mime::Base64WriteStateInfo::set_Padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace21f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"set_Padding", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::Base64WriteStateInfo.get_LastBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Net::Mime::Base64WriteStateInfo::*)()>(&::System::Net::Mime::Base64WriteStateInfo::get_LastBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace2200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"get_LastBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::Base64WriteStateInfo.set_LastBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Mime::Base64WriteStateInfo::*)(uint8_t)>(&::System::Net::Mime::Base64WriteStateInfo::set_LastBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace2208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"set_LastBits", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Mime::Base64WriteStateInfo::__cordl_internal_get__Padding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Padding_k__BackingField;
}
constexpr int32_t const& System::Net::Mime::Base64WriteStateInfo::__cordl_internal_get__Padding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Padding_k__BackingField;
}
constexpr void System::Net::Mime::Base64WriteStateInfo::__cordl_internal_set__Padding_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Padding_k__BackingField = value;
}
constexpr uint8_t& System::Net::Mime::Base64WriteStateInfo::__cordl_internal_get__LastBits_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBits_k__BackingField;
}
constexpr uint8_t const& System::Net::Mime::Base64WriteStateInfo::__cordl_internal_get__LastBits_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBits_k__BackingField;
}
constexpr void System::Net::Mime::Base64WriteStateInfo::__cordl_internal_set__LastBits_k__BackingField(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastBits_k__BackingField = value;
}
inline void System::Net::Mime::Base64WriteStateInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::Mime::Base64WriteStateInfo::get_Padding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"get_Padding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Mime::Base64WriteStateInfo::set_Padding(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"set_Padding", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t System::Net::Mime::Base64WriteStateInfo::get_LastBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"get_LastBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void System::Net::Mime::Base64WriteStateInfo::set_LastBits(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Mime::Base64WriteStateInfo*>(),
                        {"set_LastBits", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Mime::Base64WriteStateInfo* System::Net::Mime::Base64WriteStateInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Mime::Base64WriteStateInfo*>());
}
// Ctor Parameters []
constexpr ::System::Net::Mime::Base64WriteStateInfo::Base64WriteStateInfo()   {
}
