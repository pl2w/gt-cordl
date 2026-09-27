#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/CustomType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__CustomType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::CustomType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::CustomType::*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeMethod*, ::ExitGames::Client::Photon::DeserializeMethod*)>(&::ExitGames::Client::Photon::CustomType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6d0b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::CustomType*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeMethod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::CustomType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::CustomType::*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeStreamMethod*, ::ExitGames::Client::Photon::DeserializeStreamMethod*)>(&::ExitGames::Client::Photon::CustomType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6d0c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::CustomType*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr uint8_t const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_Code(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Code = value;
}
constexpr ::System::Type*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::System::Type* const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::ExitGames::Client::Photon::SerializeMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SerializeFunction;
}
constexpr ::ExitGames::Client::Photon::SerializeMethod* const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SerializeFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_SerializeFunction(::ExitGames::Client::Photon::SerializeMethod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SerializeFunction = value;
}
constexpr ::ExitGames::Client::Photon::DeserializeMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeserializeFunction;
}
constexpr ::ExitGames::Client::Photon::DeserializeMethod* const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeserializeFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_DeserializeFunction(::ExitGames::Client::Photon::DeserializeMethod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeserializeFunction = value;
}
constexpr ::ExitGames::Client::Photon::SerializeStreamMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeStreamFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SerializeStreamFunction;
}
constexpr ::ExitGames::Client::Photon::SerializeStreamMethod* const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_SerializeStreamFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SerializeStreamFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_SerializeStreamFunction(::ExitGames::Client::Photon::SerializeStreamMethod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SerializeStreamFunction = value;
}
constexpr ::ExitGames::Client::Photon::DeserializeStreamMethod*& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeStreamFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeserializeStreamFunction;
}
constexpr ::ExitGames::Client::Photon::DeserializeStreamMethod* const& ExitGames::Client::Photon::CustomType::__cordl_internal_get_DeserializeStreamFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeserializeStreamFunction;
}
constexpr void ExitGames::Client::Photon::CustomType::__cordl_internal_set_DeserializeStreamFunction(::ExitGames::Client::Photon::DeserializeStreamMethod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeserializeStreamFunction = value;
}
inline void ExitGames::Client::Photon::CustomType::_ctor(::System::Type*  type, uint8_t  code, ::ExitGames::Client::Photon::SerializeMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeMethod*  deserializeFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::CustomType*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, code, serializeFunction, deserializeFunction);
}
inline void ExitGames::Client::Photon::CustomType::_ctor(::System::Type*  type, uint8_t  code, ::ExitGames::Client::Photon::SerializeStreamMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeStreamMethod*  deserializeFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::CustomType*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, code, serializeFunction, deserializeFunction);
}
inline ::ExitGames::Client::Photon::CustomType* ExitGames::Client::Photon::CustomType::New_ctor(::System::Type*  type, uint8_t  code, ::ExitGames::Client::Photon::SerializeMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeMethod*  deserializeFunction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::CustomType*>(type, code, serializeFunction, deserializeFunction));
}
inline ::ExitGames::Client::Photon::CustomType* ExitGames::Client::Photon::CustomType::New_ctor(::System::Type*  type, uint8_t  code, ::ExitGames::Client::Photon::SerializeStreamMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeStreamMethod*  deserializeFunction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::CustomType*>(type, code, serializeFunction, deserializeFunction));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::CustomType::CustomType()   {
}
