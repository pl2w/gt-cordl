#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDMessagingTitleData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDMessagingTitleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingTitleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingTitleData::*)()>(&::GlobalNamespace::KIDMessagingTitleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a261e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingTitleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::KIDMessagingTitleData::__cordl_internal_get_KIDSetupConfirmation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDSetupConfirmation;
}
constexpr ::StringW const& GlobalNamespace::KIDMessagingTitleData::__cordl_internal_get_KIDSetupConfirmation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDSetupConfirmation;
}
constexpr void GlobalNamespace::KIDMessagingTitleData::__cordl_internal_set_KIDSetupConfirmation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KIDSetupConfirmation = value;
}
inline void GlobalNamespace::KIDMessagingTitleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingTitleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDMessagingTitleData* GlobalNamespace::KIDMessagingTitleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDMessagingTitleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDMessagingTitleData::KIDMessagingTitleData()   {
}
