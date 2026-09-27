#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/ILoggableDependent.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggableDependent_def.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::ILoggableDependent.get_IgnoreGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::ILoggableDependent::*)()>(&::Photon::Voice::Unity::ILoggableDependent::get_IgnoreGlobalLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::ILoggableDependent*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::ILoggableDependent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::ILoggableDependent.set_IgnoreGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::ILoggableDependent::*)(bool)>(&::Photon::Voice::Unity::ILoggableDependent::set_IgnoreGlobalLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::ILoggableDependent*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::ILoggableDependent*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Photon::Voice::Unity::ILoggableDependent::get_IgnoreGlobalLogLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::ILoggableDependent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::ILoggableDependent::set_IgnoreGlobalLogLevel(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::ILoggableDependent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr  Photon::Voice::Unity::ILoggableDependent::operator ::Photon::Voice::Unity::ILoggable*() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* Photon::Voice::Unity::ILoggableDependent::i___Photon__Voice__Unity__ILoggable() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
