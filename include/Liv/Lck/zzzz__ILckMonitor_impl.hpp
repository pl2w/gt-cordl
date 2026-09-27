#pragma once
// IWYU pragma private; include "Liv/Lck/ILckMonitor.hpp"
#include "Liv/Lck/zzzz__ILckMonitor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckMonitor.get_MonitorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::ILckMonitor::*)()>(&::Liv::Lck::ILckMonitor::get_MonitorId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckMonitor*>(),
                    {::i2c::class_of<::Liv::Lck::ILckMonitor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckMonitor.SetRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckMonitor::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::ILckMonitor::SetRenderTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckMonitor*>(),
                    {::i2c::class_of<::Liv::Lck::ILckMonitor*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW Liv::Lck::ILckMonitor::get_MonitorId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckMonitor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::ILckMonitor::SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckMonitor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
