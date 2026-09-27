#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandConnect.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect__TokenData_e__FixedBuffer_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect__UniqueId_e__FixedBuffer_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect__TokenData_e__FixedBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect__UniqueId_e__FixedBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetCommandConnect.ClampTokenLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Sockets::NetCommandConnect::ClampTokenLength)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6029818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"ClampTokenLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetCommandConnect.GetTokenDataAsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Fusion::Sockets::NetCommandConnect)>(&::Fusion::Sockets::NetCommandConnect::GetTokenDataAsArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x602994c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"GetTokenDataAsArray", {}, {::i2c::type_of<::Fusion::Sockets::NetCommandConnect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetCommandConnect.GetUniqueIdAsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Fusion::Sockets::NetCommandConnect)>(&::Fusion::Sockets::NetCommandConnect::GetUniqueIdAsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60299dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"GetUniqueIdAsArray", {}, {::i2c::type_of<::Fusion::Sockets::NetCommandConnect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetCommandConnect.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandConnect (*)(::Fusion::Sockets::NetConnectionId, uint8_t*, int32_t, uint8_t*)>(&::Fusion::Sockets::NetCommandConnect::Create)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6029a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetCommandHeader& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_Header()  {
return this->___Header;
}
constexpr ::Fusion::Sockets::NetCommandHeader const& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_Header() const {
return this->___Header;
}
constexpr void Fusion::Sockets::NetCommandConnect::__cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value)  {
this->___Header = value;
}
constexpr int32_t& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_TokenLength()  {
return this->___TokenLength;
}
constexpr int32_t const& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_TokenLength() const {
return this->___TokenLength;
}
constexpr void Fusion::Sockets::NetCommandConnect::__cordl_internal_set_TokenLength(int32_t  value)  {
this->___TokenLength = value;
}
constexpr ::Fusion::Sockets::NetConnectionId& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_ConnectionId()  {
return this->___ConnectionId;
}
constexpr ::Fusion::Sockets::NetConnectionId const& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_ConnectionId() const {
return this->___ConnectionId;
}
constexpr void Fusion::Sockets::NetCommandConnect::__cordl_internal_set_ConnectionId(::Fusion::Sockets::NetConnectionId  value)  {
this->___ConnectionId = value;
}
constexpr ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_TokenData()  {
return this->___TokenData;
}
constexpr ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer const& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_TokenData() const {
return this->___TokenData;
}
constexpr void Fusion::Sockets::NetCommandConnect::__cordl_internal_set_TokenData(::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  value)  {
this->___TokenData = value;
}
constexpr ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_UniqueId()  {
return this->___UniqueId;
}
constexpr ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer const& Fusion::Sockets::NetCommandConnect::__cordl_internal_get_UniqueId() const {
return this->___UniqueId;
}
constexpr void Fusion::Sockets::NetCommandConnect::__cordl_internal_set_UniqueId(::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  value)  {
this->___UniqueId = value;
}
inline int32_t Fusion::Sockets::NetCommandConnect::ClampTokenLength(int32_t  tokenLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"ClampTokenLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, tokenLength);
}
inline ::ArrayW<uint8_t> Fusion::Sockets::NetCommandConnect::GetTokenDataAsArray(::Fusion::Sockets::NetCommandConnect  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"GetTokenDataAsArray", {}, {::i2c::type_of<::Fusion::Sockets::NetCommandConnect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, command);
}
inline ::ArrayW<uint8_t> Fusion::Sockets::NetCommandConnect::GetUniqueIdAsArray(::Fusion::Sockets::NetCommandConnect  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"GetUniqueIdAsArray", {}, {::i2c::type_of<::Fusion::Sockets::NetCommandConnect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, command);
}
inline ::Fusion::Sockets::NetCommandConnect Fusion::Sockets::NetCommandConnect::Create(::Fusion::Sockets::NetConnectionId  id, uint8_t*  token, int32_t  tokenLength, uint8_t*  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandConnect>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandConnect>(nullptr, ___internal_method, id, token, tokenLength, uniqueId);
}
// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenData", ty: "::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UniqueId", ty: "::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetCommandConnect::NetCommandConnect(::Fusion::Sockets::NetCommandHeader  Header, int32_t  TokenLength, ::Fusion::Sockets::NetConnectionId  ConnectionId, ::GlobalNamespace::NetCommandConnect__TokenData_e__FixedBuffer  TokenData, ::GlobalNamespace::NetCommandConnect__UniqueId_e__FixedBuffer  UniqueId) noexcept  {
this->Header = Header;
this->TokenLength = TokenLength;
this->ConnectionId = ConnectionId;
this->TokenData = TokenData;
this->UniqueId = UniqueId;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetCommandConnect::NetCommandConnect()   {
}
