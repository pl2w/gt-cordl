#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDTitleData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDTitleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDTitleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDTitleData::*)()>(&::GlobalNamespace::KIDTitleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTitleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::KIDTitleData::__cordl_internal_get_KIDEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDEnabled;
}
constexpr ::StringW const& GlobalNamespace::KIDTitleData::__cordl_internal_get_KIDEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDEnabled;
}
constexpr void GlobalNamespace::KIDTitleData::__cordl_internal_set_KIDEnabled(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KIDEnabled = value;
}
constexpr int32_t& GlobalNamespace::KIDTitleData::__cordl_internal_get_KIDPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDPhase;
}
constexpr int32_t const& GlobalNamespace::KIDTitleData::__cordl_internal_get_KIDPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDPhase;
}
constexpr void GlobalNamespace::KIDTitleData::__cordl_internal_set_KIDPhase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KIDPhase = value;
}
constexpr ::StringW& GlobalNamespace::KIDTitleData::__cordl_internal_get_KIDNewPlayerIsoTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDNewPlayerIsoTimestamp;
}
constexpr ::StringW const& GlobalNamespace::KIDTitleData::__cordl_internal_get_KIDNewPlayerIsoTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDNewPlayerIsoTimestamp;
}
constexpr void GlobalNamespace::KIDTitleData::__cordl_internal_set_KIDNewPlayerIsoTimestamp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KIDNewPlayerIsoTimestamp = value;
}
inline void GlobalNamespace::KIDTitleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTitleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDTitleData* GlobalNamespace::KIDTitleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDTitleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDTitleData::KIDTitleData()   {
}
