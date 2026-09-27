#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/QueueRuleAttribute.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AttributeSource_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__QueueRuleAttribute_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::QueueRuleAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::QueueRuleAttribute::*)()>(&::PlayFab::MultiplayerModels::QueueRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::QueueRuleAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::QueueRuleAttribute::__cordl_internal_get_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::QueueRuleAttribute::__cordl_internal_get_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr void PlayFab::MultiplayerModels::QueueRuleAttribute::__cordl_internal_set_Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Path = value;
}
constexpr ::PlayFab::MultiplayerModels::AttributeSource& PlayFab::MultiplayerModels::QueueRuleAttribute::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::PlayFab::MultiplayerModels::AttributeSource const& PlayFab::MultiplayerModels::QueueRuleAttribute::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void PlayFab::MultiplayerModels::QueueRuleAttribute::__cordl_internal_set_Source(::PlayFab::MultiplayerModels::AttributeSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Source = value;
}
inline void PlayFab::MultiplayerModels::QueueRuleAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::QueueRuleAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::QueueRuleAttribute* PlayFab::MultiplayerModels::QueueRuleAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::QueueRuleAttribute*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute::QueueRuleAttribute()   {
}
