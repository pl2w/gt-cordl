#pragma once
// IWYU pragma private; include "System/Net/GlobalProxySelection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__GlobalProxySelection_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
//  Writing Method size for method: ::System::Net::GlobalProxySelection.get_Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::GlobalProxySelection::get_Select)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xac575e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {"get_Select", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalProxySelection.set_Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::IWebProxy*)>(&::System::Net::GlobalProxySelection::set_Select)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac576dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {"set_Select", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalProxySelection.GetEmptyWebProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::GlobalProxySelection::GetEmptyWebProxy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac57688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {"GetEmptyWebProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalProxySelection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::GlobalProxySelection::*)()>(&::System::Net::GlobalProxySelection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac57734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::IWebProxy* System::Net::GlobalProxySelection::get_Select()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {"get_Select", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::GlobalProxySelection::set_Select(::System::Net::IWebProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {"set_Select", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::GlobalProxySelection::GetEmptyWebProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {"GetEmptyWebProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline void System::Net::GlobalProxySelection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalProxySelection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::GlobalProxySelection* System::Net::GlobalProxySelection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::GlobalProxySelection*>());
}
// Ctor Parameters []
constexpr ::System::Net::GlobalProxySelection::GlobalProxySelection()   {
}
