#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/ILckTopButtons.hpp"
#include "Liv/Lck/Tablet/zzzz__ILckTopButtons_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::ILckTopButtons.ShowButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::ILckTopButtons::*)()>(&::Liv::Lck::Tablet::ILckTopButtons::ShowButtons)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(),
                    {::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::ILckTopButtons.HideButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::ILckTopButtons::*)()>(&::Liv::Lck::Tablet::ILckTopButtons::HideButtons)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(),
                    {::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::ILckTopButtons.SetCameraPageVisualsManually
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::ILckTopButtons::*)()>(&::Liv::Lck::Tablet::ILckTopButtons::SetCameraPageVisualsManually)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(),
                    {::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Tablet::ILckTopButtons::ShowButtons()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::ILckTopButtons::HideButtons()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::ILckTopButtons::SetCameraPageVisualsManually()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Tablet::ILckTopButtons*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
