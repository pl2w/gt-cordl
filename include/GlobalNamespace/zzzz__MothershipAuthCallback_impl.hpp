#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAuthCallback.hpp"
#include "GlobalNamespace/zzzz__LoginCompleteDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthCallback::*)(::GlobalNamespace::MothershipClientApiClient*)>(&::GlobalNamespace::MothershipAuthCallback::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x53b8cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipAuthCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x53b8d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipAuthCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipAuthCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipAuthCallback::_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientApiClient);
}
inline void GlobalNamespace::MothershipAuthCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipAuthCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipAuthCallback* GlobalNamespace::MothershipAuthCallback::New_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipAuthCallback*>(clientApiClient));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipAuthCallback::MothershipAuthCallback()   {
}
