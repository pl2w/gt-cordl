#pragma once
// IWYU pragma private; include "GlobalNamespace/ILckCaptureStateProvider.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILckCaptureStateProvider.get_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckCaptureState (::GlobalNamespace::ILckCaptureStateProvider::*)()>(&::GlobalNamespace::ILckCaptureStateProvider::get_CurrentCaptureState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ILckCaptureStateProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::ILckCaptureStateProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILckCaptureStateProvider.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::GlobalNamespace::ILckCaptureStateProvider::*)()>(&::GlobalNamespace::ILckCaptureStateProvider::IsPaused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ILckCaptureStateProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::ILckCaptureStateProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckCaptureState GlobalNamespace::ILckCaptureStateProvider::get_CurrentCaptureState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ILckCaptureStateProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckCaptureState>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* GlobalNamespace::ILckCaptureStateProvider::IsPaused()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ILckCaptureStateProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
