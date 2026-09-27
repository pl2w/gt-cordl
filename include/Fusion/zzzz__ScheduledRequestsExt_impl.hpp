#pragma once
// IWYU pragma private; include "Fusion/ScheduledRequestsExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ScheduledRequestsExt_def.hpp"
#include "Fusion/zzzz__ScheduledRequests_def.hpp"
//  Writing Method size for method: ::Fusion::ScheduledRequestsExt.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Fusion::ScheduledRequests>, ::Fusion::ScheduledRequests)>(&::Fusion::ScheduledRequestsExt::IsSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScheduledRequestsExt*>(),
                        {"IsSet", {}, {::i2c::type_of<::by_ref<::Fusion::ScheduledRequests>>(), ::i2c::type_of<::Fusion::ScheduledRequests>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ScheduledRequestsExt.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::ScheduledRequests>, ::Fusion::ScheduledRequests)>(&::Fusion::ScheduledRequestsExt::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScheduledRequestsExt*>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Fusion::ScheduledRequests>>(), ::i2c::type_of<::Fusion::ScheduledRequests>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ScheduledRequestsExt.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::ScheduledRequests>, ::Fusion::ScheduledRequests)>(&::Fusion::ScheduledRequestsExt::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScheduledRequestsExt*>(),
                        {"Clear", {}, {::i2c::type_of<::by_ref<::Fusion::ScheduledRequests>>(), ::i2c::type_of<::Fusion::ScheduledRequests>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::ScheduledRequestsExt::IsSet(::by_ref<::Fusion::ScheduledRequests>  requests, ::Fusion::ScheduledRequests  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScheduledRequestsExt*>(),
                        {"IsSet", {}, {::i2c::type_of<::by_ref<::Fusion::ScheduledRequests>>(), ::i2c::type_of<::Fusion::ScheduledRequests>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, requests, target);
}
inline void Fusion::ScheduledRequestsExt::Set(::by_ref<::Fusion::ScheduledRequests>  requests, ::Fusion::ScheduledRequests  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScheduledRequestsExt*>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Fusion::ScheduledRequests>>(), ::i2c::type_of<::Fusion::ScheduledRequests>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requests, target);
}
inline void Fusion::ScheduledRequestsExt::Clear(::by_ref<::Fusion::ScheduledRequests>  requests, ::Fusion::ScheduledRequests  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ScheduledRequestsExt*>(),
                        {"Clear", {}, {::i2c::type_of<::by_ref<::Fusion::ScheduledRequests>>(), ::i2c::type_of<::Fusion::ScheduledRequests>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requests, target);
}
// Ctor Parameters []
constexpr ::Fusion::ScheduledRequestsExt::ScheduledRequestsExt()   {
}
