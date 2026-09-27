#pragma once
// IWYU pragma private; include "Fusion/TraceChannelsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__TraceChannelsExtensions_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
//  Writing Method size for method: ::Fusion::TraceChannelsExtensions.AddChannelsFromDefines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TraceChannels (*)(::Fusion::TraceChannels)>(&::Fusion::TraceChannelsExtensions::AddChannelsFromDefines)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e110c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceChannelsExtensions*>(),
                        {"AddChannelsFromDefines", {}, {::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::TraceChannels Fusion::TraceChannelsExtensions::AddChannelsFromDefines(::Fusion::TraceChannels  traceChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceChannelsExtensions*>(),
                        {"AddChannelsFromDefines", {}, {::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TraceChannels>(nullptr, ___internal_method, traceChannels);
}
// Ctor Parameters []
constexpr ::Fusion::TraceChannelsExtensions::TraceChannelsExtensions()   {
}
