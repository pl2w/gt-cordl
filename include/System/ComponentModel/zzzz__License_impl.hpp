#pragma once
// IWYU pragma private; include "System/ComponentModel/License.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::License.get_LicenseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::License::*)()>(&::System::ComponentModel::License::get_LicenseKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::License*>(),
                    {::i2c::class_of<::System::ComponentModel::License*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::License.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::License::*)()>(&::System::ComponentModel::License::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::License*>(),
                    {::i2c::class_of<::System::ComponentModel::License*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::License._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::License::*)()>(&::System::ComponentModel::License::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad593d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::License*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::License::get_LicenseKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::License*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::License::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::License*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::License::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::License*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::License* System::ComponentModel::License::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::License*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::License::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::License::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::License::License()   {
}
