#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRequestConfiguration.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestEndpointInfo_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::IWitRequestConfiguration.get_RequestTimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::IWitRequestConfiguration::*)()>(&::Meta::WitAi::IWitRequestConfiguration::get_RequestTimeoutMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IWitRequestConfiguration.GetConfigurationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::IWitRequestConfiguration::*)()>(&::Meta::WitAi::IWitRequestConfiguration::GetConfigurationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IWitRequestConfiguration.GetVersionTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::IWitRequestConfiguration::*)()>(&::Meta::WitAi::IWitRequestConfiguration::GetVersionTag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IWitRequestConfiguration.GetEndpointInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::IWitRequestEndpointInfo* (::Meta::WitAi::IWitRequestConfiguration::*)()>(&::Meta::WitAi::IWitRequestConfiguration::GetEndpointInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IWitRequestConfiguration.GetClientAccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::IWitRequestConfiguration::*)()>(&::Meta::WitAi::IWitRequestConfiguration::GetClientAccessToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 4}
                ));
    return ___internal_method;
  }
};
inline int32_t Meta::WitAi::IWitRequestConfiguration::get_RequestTimeoutMs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::IWitRequestConfiguration::GetConfigurationId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::IWitRequestConfiguration::GetVersionTag()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::IWitRequestEndpointInfo* Meta::WitAi::IWitRequestConfiguration::GetEndpointInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::IWitRequestEndpointInfo*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::IWitRequestConfiguration::GetClientAccessToken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRequestConfiguration*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
