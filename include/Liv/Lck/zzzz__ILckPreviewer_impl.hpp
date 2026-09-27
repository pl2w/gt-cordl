#pragma once
// IWYU pragma private; include "Liv/Lck/ILckPreviewer.hpp"
#include "Liv/Lck/zzzz__ILckPreviewer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckPreviewer.get_IsPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ILckPreviewer::*)()>(&::Liv::Lck::ILckPreviewer::get_IsPreviewActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckPreviewer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckPreviewer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckPreviewer.set_IsPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckPreviewer::*)(bool)>(&::Liv::Lck::ILckPreviewer::set_IsPreviewActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckPreviewer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckPreviewer*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::ILckPreviewer::get_IsPreviewActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckPreviewer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::ILckPreviewer::set_IsPreviewActive(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckPreviewer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckPreviewer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckPreviewer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
