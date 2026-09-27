#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFXMono.hpp"
#include "GorillaTag/MonkeFX/zzzz__MonkeFXSettingsSO_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/MonkeFX/zzzz__MonkeFXMono_def.hpp"
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFXMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MonkeFX::MonkeFXMono::*)()>(&::GorillaTag::MonkeFX::MonkeFXMono::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFXMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>& GorillaTag::MonkeFX::MonkeFXMono::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>> const& GorillaTag::MonkeFX::MonkeFXMono::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GorillaTag::MonkeFX::MonkeFXMono::__cordl_internal_set_settings(::ArrayW<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
inline void GorillaTag::MonkeFX::MonkeFXMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFXMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::MonkeFX::MonkeFXMono* GorillaTag::MonkeFX::MonkeFXMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::MonkeFX::MonkeFXMono*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::MonkeFX::MonkeFXMono::MonkeFXMono()   {
}
