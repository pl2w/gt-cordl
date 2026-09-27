#pragma once
// IWYU pragma private; include "Fusion/HostMigrationConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__HostMigrationConfig_def.hpp"
//  Writing Method size for method: ::Fusion::HostMigrationConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HostMigrationConfig::*)()>(&::Fusion::HostMigrationConfig::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fd1744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::HostMigrationConfig::__cordl_internal_get_EnableAutoUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableAutoUpdate;
}
constexpr bool const& Fusion::HostMigrationConfig::__cordl_internal_get_EnableAutoUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableAutoUpdate;
}
constexpr void Fusion::HostMigrationConfig::__cordl_internal_set_EnableAutoUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableAutoUpdate = value;
}
constexpr int32_t& Fusion::HostMigrationConfig::__cordl_internal_get_UpdateDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateDelay;
}
constexpr int32_t const& Fusion::HostMigrationConfig::__cordl_internal_get_UpdateDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateDelay;
}
constexpr void Fusion::HostMigrationConfig::__cordl_internal_set_UpdateDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateDelay = value;
}
inline void Fusion::HostMigrationConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HostMigrationConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HostMigrationConfig* Fusion::HostMigrationConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HostMigrationConfig*>());
}
// Ctor Parameters []
constexpr ::Fusion::HostMigrationConfig::HostMigrationConfig()   {
}
