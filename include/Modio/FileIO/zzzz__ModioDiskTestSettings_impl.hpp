#pragma once
// IWYU pragma private; include "Modio/FileIO/ModioDiskTestSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/FileIO/zzzz__ModioDiskTestSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::ModioDiskTestSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::ModioDiskTestSettings::*)()>(&::Modio::FileIO::ModioDiskTestSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa054abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModioDiskTestSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::FileIO::ModioDiskTestSettings::__cordl_internal_get_OverrideDiskSpaceRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideDiskSpaceRemaining;
}
constexpr bool const& Modio::FileIO::ModioDiskTestSettings::__cordl_internal_get_OverrideDiskSpaceRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideDiskSpaceRemaining;
}
constexpr void Modio::FileIO::ModioDiskTestSettings::__cordl_internal_set_OverrideDiskSpaceRemaining(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideDiskSpaceRemaining = value;
}
constexpr int32_t& Modio::FileIO::ModioDiskTestSettings::__cordl_internal_get_BytesRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesRemaining;
}
constexpr int32_t const& Modio::FileIO::ModioDiskTestSettings::__cordl_internal_get_BytesRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesRemaining;
}
constexpr void Modio::FileIO::ModioDiskTestSettings::__cordl_internal_set_BytesRemaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BytesRemaining = value;
}
inline void Modio::FileIO::ModioDiskTestSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModioDiskTestSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::FileIO::ModioDiskTestSettings* Modio::FileIO::ModioDiskTestSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::ModioDiskTestSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::FileIO::ModioDiskTestSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::FileIO::ModioDiskTestSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::ModioDiskTestSettings::ModioDiskTestSettings()   {
}
