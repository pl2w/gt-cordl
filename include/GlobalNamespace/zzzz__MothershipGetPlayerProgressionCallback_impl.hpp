#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetPlayerProgressionCallback.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipGetPlayerProgressionCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipGetPlayerProgressionCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetPlayerProgressionCallback::*)()>(&::GlobalNamespace::MothershipGetPlayerProgressionCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53c1094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipGetPlayerProgressionCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetPlayerProgressionCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipGetPlayerProgressionCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x53c10f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipGetPlayerProgressionCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipGetPlayerProgressionCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipGetPlayerProgressionCallback* GlobalNamespace::MothershipGetPlayerProgressionCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipGetPlayerProgressionCallback::MothershipGetPlayerProgressionCallback()   {
}
