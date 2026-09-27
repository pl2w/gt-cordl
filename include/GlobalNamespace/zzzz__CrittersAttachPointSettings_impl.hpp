#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersAttachPointSettings.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPointSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersAttachPointSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersAttachPointSettings::*)()>(&::GlobalNamespace::CrittersAttachPointSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55fb5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersAttachPointSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersAttachPointSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersAttachPointSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersAttachPointSettings::*)()>(&::GlobalNamespace::CrittersAttachPointSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fb67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAttachPointSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CrittersAttachPointSettings::__cordl_internal_get_isLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr bool const& GlobalNamespace::CrittersAttachPointSettings::__cordl_internal_get_isLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr void GlobalNamespace::CrittersAttachPointSettings::__cordl_internal_set_isLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeft = value;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& GlobalNamespace::CrittersAttachPointSettings::__cordl_internal_get_anchoredLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchoredLocation;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& GlobalNamespace::CrittersAttachPointSettings::__cordl_internal_get_anchoredLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchoredLocation;
}
constexpr void GlobalNamespace::CrittersAttachPointSettings::__cordl_internal_set_anchoredLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchoredLocation = value;
}
inline void GlobalNamespace::CrittersAttachPointSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersAttachPointSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersAttachPointSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAttachPointSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersAttachPointSettings* GlobalNamespace::CrittersAttachPointSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersAttachPointSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersAttachPointSettings::CrittersAttachPointSettings()   {
}
