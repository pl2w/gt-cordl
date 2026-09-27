#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandAccepted.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandAccepted_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetCommandAccepted.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandAccepted (*)(::Fusion::Sockets::NetConnectionId, ::Fusion::Sockets::NetConnectionId, uint32_t)>(&::Fusion::Sockets::NetCommandAccepted::Create)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6029b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandAccepted>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetCommandHeader& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_Header()  {
return this->___Header;
}
constexpr ::Fusion::Sockets::NetCommandHeader const& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_Header() const {
return this->___Header;
}
constexpr void Fusion::Sockets::NetCommandAccepted::__cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value)  {
this->___Header = value;
}
constexpr ::Fusion::Sockets::NetConnectionId& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_AcceptedLocalId()  {
return this->___AcceptedLocalId;
}
constexpr ::Fusion::Sockets::NetConnectionId const& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_AcceptedLocalId() const {
return this->___AcceptedLocalId;
}
constexpr void Fusion::Sockets::NetCommandAccepted::__cordl_internal_set_AcceptedLocalId(::Fusion::Sockets::NetConnectionId  value)  {
this->___AcceptedLocalId = value;
}
constexpr ::Fusion::Sockets::NetConnectionId& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_AcceptedRemoteId()  {
return this->___AcceptedRemoteId;
}
constexpr ::Fusion::Sockets::NetConnectionId const& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_AcceptedRemoteId() const {
return this->___AcceptedRemoteId;
}
constexpr void Fusion::Sockets::NetCommandAccepted::__cordl_internal_set_AcceptedRemoteId(::Fusion::Sockets::NetConnectionId  value)  {
this->___AcceptedRemoteId = value;
}
constexpr uint32_t& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_Counter()  {
return this->___Counter;
}
constexpr uint32_t const& Fusion::Sockets::NetCommandAccepted::__cordl_internal_get_Counter() const {
return this->___Counter;
}
constexpr void Fusion::Sockets::NetCommandAccepted::__cordl_internal_set_Counter(uint32_t  value)  {
this->___Counter = value;
}
inline ::Fusion::Sockets::NetCommandAccepted Fusion::Sockets::NetCommandAccepted::Create(::Fusion::Sockets::NetConnectionId  localId, ::Fusion::Sockets::NetConnectionId  remoteId, uint32_t  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandAccepted>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandAccepted>(nullptr, ___internal_method, localId, remoteId, counter);
}
// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AcceptedLocalId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AcceptedRemoteId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Counter", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetCommandAccepted::NetCommandAccepted(::Fusion::Sockets::NetCommandHeader  Header, ::Fusion::Sockets::NetConnectionId  AcceptedLocalId, ::Fusion::Sockets::NetConnectionId  AcceptedRemoteId, uint32_t  Counter) noexcept  {
this->Header = Header;
this->AcceptedLocalId = AcceptedLocalId;
this->AcceptedRemoteId = AcceptedRemoteId;
this->Counter = Counter;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetCommandAccepted::NetCommandAccepted()   {
}
