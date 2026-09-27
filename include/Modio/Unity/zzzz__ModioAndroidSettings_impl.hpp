#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAndroidSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__ModioAndroidSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ModioAndroidSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAndroidSettings::*)()>(&::Modio::Unity::ModioAndroidSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9496c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAndroidSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::ModioAndroidSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAndroidSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ModioAndroidSettings* Modio::Unity::ModioAndroidSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioAndroidSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Unity::ModioAndroidSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Unity::ModioAndroidSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioAndroidSettings::ModioAndroidSettings()   {
}
