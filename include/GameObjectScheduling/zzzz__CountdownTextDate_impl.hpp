#pragma once
// IWYU pragma private; include "GameObjectScheduling/CountdownTextDate.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GameObjectScheduling/zzzz__CountdownTextDate_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::CountdownTextDate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownTextDate::*)()>(&::GameObjectScheduling::CountdownTextDate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ddf5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownTextDate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_CountdownTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountdownTo;
}
constexpr ::StringW const& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_CountdownTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountdownTo;
}
constexpr void GameObjectScheduling::CountdownTextDate::__cordl_internal_set_CountdownTo(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CountdownTo = value;
}
constexpr ::StringW& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_FormatString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FormatString;
}
constexpr ::StringW const& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_FormatString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FormatString;
}
constexpr void GameObjectScheduling::CountdownTextDate::__cordl_internal_set_FormatString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FormatString = value;
}
constexpr ::StringW& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_DefaultString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultString;
}
constexpr ::StringW const& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_DefaultString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultString;
}
constexpr void GameObjectScheduling::CountdownTextDate::__cordl_internal_set_DefaultString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultString = value;
}
constexpr int32_t& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_DaysThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DaysThreshold;
}
constexpr int32_t const& GameObjectScheduling::CountdownTextDate::__cordl_internal_get_DaysThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DaysThreshold;
}
constexpr void GameObjectScheduling::CountdownTextDate::__cordl_internal_set_DaysThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DaysThreshold = value;
}
inline void GameObjectScheduling::CountdownTextDate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownTextDate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::CountdownTextDate* GameObjectScheduling::CountdownTextDate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::CountdownTextDate*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::CountdownTextDate::CountdownTextDate()   {
}
