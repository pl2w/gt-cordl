#pragma once
// IWYU pragma private; include "GlobalNamespace/DeepLinkSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeepLinkSender_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeepLinkSender.SendDeepLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::DeepLinkSender::SendDeepLink)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x579a918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkSender*>(),
                        {"SendDeepLink", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DeepLinkSender::setStaticF_currentDeepLinkSentCallback(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "currentDeepLinkSentCallback", ::GlobalNamespace::DeepLinkSender*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::DeepLinkSender::getStaticF_currentDeepLinkSentCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "currentDeepLinkSentCallback", ::GlobalNamespace::DeepLinkSender*>();
}
inline bool GlobalNamespace::DeepLinkSender::SendDeepLink(uint64_t  deepLinkAppID, ::StringW  deepLinkMessage, ::System::Action_1<::StringW>*  onSent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkSender*>(),
                        {"SendDeepLink", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deepLinkAppID, deepLinkMessage, onSent);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeepLinkSender::DeepLinkSender()   {
}
