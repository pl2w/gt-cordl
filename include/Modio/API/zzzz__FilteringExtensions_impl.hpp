#pragma once
// IWYU pragma private; include "Modio/API/FilteringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/zzzz__FilteringExtensions_def.hpp"
#include "Modio/API/zzzz__Filtering_def.hpp"
//  Writing Method size for method: ::Modio::API::FilteringExtensions.ClearText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::API::Filtering)>(&::Modio::API::FilteringExtensions::ClearText)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9fded64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::FilteringExtensions*>(),
                        {"ClearText", {}, {::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Modio::API::FilteringExtensions::ClearText(::Modio::API::Filtering  filtering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::FilteringExtensions*>(),
                        {"ClearText", {}, {::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filtering);
}
// Ctor Parameters []
constexpr ::Modio::API::FilteringExtensions::FilteringExtensions()   {
}
