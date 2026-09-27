#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/OperationResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationResponse.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::OperationResponse::*)(uint8_t)>(&::ExitGames::Client::Photon::OperationResponse::get_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {"get_Item", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationResponse.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::OperationResponse::*)(uint8_t, ::System::Object*)>(&::ExitGames::Client::Photon::OperationResponse::set_Item)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6d00d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {"set_Item", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::OperationResponse::*)()>(&::ExitGames::Client::Photon::OperationResponse::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa6d00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationResponse.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::OperationResponse::*)()>(&::ExitGames::Client::Photon::OperationResponse::ToStringFull)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa6d0184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::OperationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::OperationResponse::*)()>(&::ExitGames::Client::Photon::OperationResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_OperationCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationCode;
}
constexpr uint8_t const& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_OperationCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationCode;
}
constexpr void ExitGames::Client::Photon::OperationResponse::__cordl_internal_set_OperationCode(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationCode = value;
}
constexpr int16_t& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_ReturnCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReturnCode;
}
constexpr int16_t const& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_ReturnCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReturnCode;
}
constexpr void ExitGames::Client::Photon::OperationResponse::__cordl_internal_set_ReturnCode(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReturnCode = value;
}
constexpr ::StringW& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_DebugMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMessage;
}
constexpr ::StringW const& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_DebugMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMessage;
}
constexpr void ExitGames::Client::Photon::OperationResponse::__cordl_internal_set_DebugMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugMessage = value;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary*& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& ExitGames::Client::Photon::OperationResponse::__cordl_internal_get_Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr void ExitGames::Client::Photon::OperationResponse::__cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameters = value;
}
inline ::System::Object* ExitGames::Client::Photon::OperationResponse::get_Item(uint8_t  parameterCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {"get_Item", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parameterCode);
}
inline void ExitGames::Client::Photon::OperationResponse::set_Item(uint8_t  parameterCode, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {"set_Item", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterCode, value);
}
inline ::StringW ExitGames::Client::Photon::OperationResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::OperationResponse::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::OperationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::OperationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::OperationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::OperationResponse*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::OperationResponse::OperationResponse()   {
}
