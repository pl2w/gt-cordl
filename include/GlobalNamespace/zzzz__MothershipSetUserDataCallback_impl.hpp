#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSetUserDataCallback.hpp"
#include "GlobalNamespace/zzzz__SetUserDataCompleteClientDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipSetUserDataCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipSetUserDataCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipSetUserDataCallback::*)(::GlobalNamespace::MothershipClientApiClient*)>(&::GlobalNamespace::MothershipSetUserDataCallback::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x53c1998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipSetUserDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipSetUserDataCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipSetUserDataCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipSetUserDataCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53c1a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipSetUserDataCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipSetUserDataCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipSetUserDataCallback::_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipSetUserDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientApiClient);
}
inline void GlobalNamespace::MothershipSetUserDataCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipSetUserDataCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipSetUserDataCallback* GlobalNamespace::MothershipSetUserDataCallback::New_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipSetUserDataCallback*>(clientApiClient));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipSetUserDataCallback::MothershipSetUserDataCallback()   {
}
