#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetPlayerProgressionTressCallback.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerCompleteClientDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipGetPlayerProgressionTressCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetPlayerProgressionTressCallback::*)()>(&::GlobalNamespace::MothershipGetPlayerProgressionTressCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53c12a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetPlayerProgressionTressCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipGetPlayerProgressionTressCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x53c1304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipGetPlayerProgressionTressCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipGetPlayerProgressionTressCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback* GlobalNamespace::MothershipGetPlayerProgressionTressCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback::MothershipGetPlayerProgressionTressCallback()   {
}
