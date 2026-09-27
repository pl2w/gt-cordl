#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/UnknownType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__UnknownType_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::UnknownType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::UnknownType::*)()>(&::ExitGames::Client::Photon::UnknownType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b881c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::UnknownType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_TypeCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeCode;
}
constexpr uint8_t const& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_TypeCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeCode;
}
constexpr void ExitGames::Client::Photon::UnknownType::__cordl_internal_set_TypeCode(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TypeCode = value;
}
constexpr int32_t& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr int32_t const& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void ExitGames::Client::Photon::UnknownType::__cordl_internal_set_Size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::UnknownType::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void ExitGames::Client::Photon::UnknownType::__cordl_internal_set_Data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline void ExitGames::Client::Photon::UnknownType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::UnknownType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::UnknownType* ExitGames::Client::Photon::UnknownType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::UnknownType*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::UnknownType::UnknownType()   {
}
