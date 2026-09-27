#pragma once
// IWYU pragma private; include "Meta/WitAi/RegisteredMatchIntent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__RegisteredMatchIntent_def.hpp"
#include "Meta/WitAi/zzzz__MatchIntent_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::RegisteredMatchIntent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::RegisteredMatchIntent::*)()>(&::Meta::WitAi::RegisteredMatchIntent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7448c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::RegisteredMatchIntent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Meta::WitAi::RegisteredMatchIntent::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Meta::WitAi::RegisteredMatchIntent::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Meta::WitAi::RegisteredMatchIntent::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Reflection::MethodInfo*& Meta::WitAi::RegisteredMatchIntent::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::System::Reflection::MethodInfo* const& Meta::WitAi::RegisteredMatchIntent::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void Meta::WitAi::RegisteredMatchIntent::__cordl_internal_set_method(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::Meta::WitAi::MatchIntent*& Meta::WitAi::RegisteredMatchIntent::__cordl_internal_get_matchIntent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchIntent;
}
constexpr ::Meta::WitAi::MatchIntent* const& Meta::WitAi::RegisteredMatchIntent::__cordl_internal_get_matchIntent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchIntent;
}
constexpr void Meta::WitAi::RegisteredMatchIntent::__cordl_internal_set_matchIntent(::Meta::WitAi::MatchIntent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchIntent = value;
}
inline void Meta::WitAi::RegisteredMatchIntent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::RegisteredMatchIntent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::RegisteredMatchIntent* Meta::WitAi::RegisteredMatchIntent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::RegisteredMatchIntent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::RegisteredMatchIntent::RegisteredMatchIntent()   {
}
