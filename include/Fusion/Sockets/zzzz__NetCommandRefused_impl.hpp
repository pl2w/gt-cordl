#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandRefused.hpp"
#include "Fusion/Sockets/zzzz__NetCommandHeader_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_impl.hpp"
#include "Fusion/Sockets/zzzz__NetCommandRefused_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetCommandRefused.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetCommandRefused (*)(::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::Sockets::NetCommandRefused::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6029b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandRefused>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetCommandHeader& Fusion::Sockets::NetCommandRefused::__cordl_internal_get_Header()  {
return this->___Header;
}
constexpr ::Fusion::Sockets::NetCommandHeader const& Fusion::Sockets::NetCommandRefused::__cordl_internal_get_Header() const {
return this->___Header;
}
constexpr void Fusion::Sockets::NetCommandRefused::__cordl_internal_set_Header(::Fusion::Sockets::NetCommandHeader  value)  {
this->___Header = value;
}
constexpr ::Fusion::Sockets::NetConnectFailedReason& Fusion::Sockets::NetCommandRefused::__cordl_internal_get_Reason()  {
return this->___Reason;
}
constexpr ::Fusion::Sockets::NetConnectFailedReason const& Fusion::Sockets::NetCommandRefused::__cordl_internal_get_Reason() const {
return this->___Reason;
}
constexpr void Fusion::Sockets::NetCommandRefused::__cordl_internal_set_Reason(::Fusion::Sockets::NetConnectFailedReason  value)  {
this->___Reason = value;
}
inline ::Fusion::Sockets::NetCommandRefused Fusion::Sockets::NetCommandRefused::Create(::Fusion::Sockets::NetConnectFailedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetCommandRefused>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectFailedReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetCommandRefused>(nullptr, ___internal_method, reason);
}
// Ctor Parameters [CppParam { name: "Header", ty: "::Fusion::Sockets::NetCommandHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reason", ty: "::Fusion::Sockets::NetConnectFailedReason", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetCommandRefused::NetCommandRefused(::Fusion::Sockets::NetCommandHeader  Header, ::Fusion::Sockets::NetConnectFailedReason  Reason) noexcept  {
this->Header = Header;
this->Reason = Reason;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetCommandRefused::NetCommandRefused()   {
}
