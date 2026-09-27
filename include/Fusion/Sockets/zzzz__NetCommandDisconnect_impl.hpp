#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandDisconnect.hpp"
#include "Fusion/Sockets/zzzz__NetCommandDisconnect__TokenData_e__FixedBuffer_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_impl.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandDisconnect_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandDisconnect__TokenData_e__FixedBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetCommandDisconnect.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandDisconnect (*)(::Fusion::Sockets::NetDisconnectReason, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetCommandDisconnect::Create)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6029b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandDisconnect>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetCommandDisconnect.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandDisconnect (*)(::Fusion::Sockets::NetDisconnectReason, uint8_t*, int32_t)>(&::Fusion::Sockets::NetCommandDisconnect::Create)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6029d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandDisconnect>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetCommandHeader& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_Header()  {
return this->___Header;
}
constexpr ::Fusion::Sockets::NetCommandHeader const& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_Header() const {
return this->___Header;
}
constexpr void Fusion::Sockets::NetCommandDisconnect::__cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value)  {
this->___Header = value;
}
constexpr ::Fusion::Sockets::NetDisconnectReason& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_Reason()  {
return this->___Reason;
}
constexpr ::Fusion::Sockets::NetDisconnectReason const& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_Reason() const {
return this->___Reason;
}
constexpr void Fusion::Sockets::NetCommandDisconnect::__cordl_internal_set_Reason(::Fusion::Sockets::NetDisconnectReason  value)  {
this->___Reason = value;
}
constexpr int32_t& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_TokenLength()  {
return this->___TokenLength;
}
constexpr int32_t const& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_TokenLength() const {
return this->___TokenLength;
}
constexpr void Fusion::Sockets::NetCommandDisconnect::__cordl_internal_set_TokenLength(int32_t  value)  {
this->___TokenLength = value;
}
constexpr ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_TokenData()  {
return this->___TokenData;
}
constexpr ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer const& Fusion::Sockets::NetCommandDisconnect::__cordl_internal_get_TokenData() const {
return this->___TokenData;
}
constexpr void Fusion::Sockets::NetCommandDisconnect::__cordl_internal_set_TokenData(::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  value)  {
this->___TokenData = value;
}
inline ::Fusion::Sockets::NetCommandDisconnect Fusion::Sockets::NetCommandDisconnect::Create(::Fusion::Sockets::NetDisconnectReason  reason, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandDisconnect>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandDisconnect>(nullptr, ___internal_method, reason, token);
}
inline ::Fusion::Sockets::NetCommandDisconnect Fusion::Sockets::NetCommandDisconnect::Create(::Fusion::Sockets::NetDisconnectReason  reason, uint8_t*  token, int32_t  tokenLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandDisconnect>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandDisconnect>(nullptr, ___internal_method, reason, token, tokenLength);
}
// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reason", ty: "::Fusion::Sockets::NetDisconnectReason", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenData", ty: "::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetCommandDisconnect::NetCommandDisconnect(::Fusion::Sockets::NetCommandHeader  Header, ::Fusion::Sockets::NetDisconnectReason  Reason, int32_t  TokenLength, ::GlobalNamespace::NetCommandDisconnect__TokenData_e__FixedBuffer  TokenData) noexcept  {
this->Header = Header;
this->Reason = Reason;
this->TokenLength = TokenLength;
this->TokenData = TokenData;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetCommandDisconnect::NetCommandDisconnect()   {
}
