#pragma once
// IWYU pragma private; include "GlobalNamespace/WsProxyMessage.hpp"
#include "GlobalNamespace/zzzz__WS_PROXY_ACTIONS_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__WsProxyMessage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WsProxyMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WsProxyMessage::*)()>(&::GlobalNamespace::WsProxyMessage::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b24100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WsProxyMessage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS& GlobalNamespace::WsProxyMessage::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS const& GlobalNamespace::WsProxyMessage::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void GlobalNamespace::WsProxyMessage::__cordl_internal_set_action(::GlobalNamespace::WS_PROXY_ACTIONS  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
constexpr ::StringW& GlobalNamespace::WsProxyMessage::__cordl_internal_get_interactionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionName;
}
constexpr ::StringW const& GlobalNamespace::WsProxyMessage::__cordl_internal_get_interactionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionName;
}
constexpr void GlobalNamespace::WsProxyMessage::__cordl_internal_set_interactionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionName = value;
}
constexpr ::StringW& GlobalNamespace::WsProxyMessage::__cordl_internal_get_arguments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arguments;
}
constexpr ::StringW const& GlobalNamespace::WsProxyMessage::__cordl_internal_get_arguments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arguments;
}
constexpr void GlobalNamespace::WsProxyMessage::__cordl_internal_set_arguments(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arguments = value;
}
constexpr ::StringW& GlobalNamespace::WsProxyMessage::__cordl_internal_get_extraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraData;
}
constexpr ::StringW const& GlobalNamespace::WsProxyMessage::__cordl_internal_get_extraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraData;
}
constexpr void GlobalNamespace::WsProxyMessage::__cordl_internal_set_extraData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraData = value;
}
inline void GlobalNamespace::WsProxyMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WsProxyMessage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WsProxyMessage* GlobalNamespace::WsProxyMessage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WsProxyMessage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WsProxyMessage::WsProxyMessage()   {
}
