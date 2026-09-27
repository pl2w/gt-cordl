#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsComboResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TagEffects/zzzz__TagEffectPack_impl.hpp"
#include "TagEffects/zzzz__TagEffectsComboResult_def.hpp"
#include "TagEffects/zzzz__TagEffectsCombo_def.hpp"
//  Writing Method size for method: ::TagEffects::TagEffectsComboResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsComboResult::*)()>(&::TagEffects::TagEffectsComboResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsComboResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TagEffects::TagEffectsCombo*& TagEffects::TagEffectsComboResult::__cordl_internal_get_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr ::TagEffects::TagEffectsCombo* const& TagEffects::TagEffectsComboResult::__cordl_internal_get_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr void TagEffects::TagEffectsComboResult::__cordl_internal_set_input(::TagEffects::TagEffectsCombo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input = value;
}
constexpr ::ArrayW<::UnityW<::TagEffects::TagEffectPack>>& TagEffects::TagEffectsComboResult::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::ArrayW<::UnityW<::TagEffects::TagEffectPack>> const& TagEffects::TagEffectsComboResult::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void TagEffects::TagEffectsComboResult::__cordl_internal_set_output(::ArrayW<::UnityW<::TagEffects::TagEffectPack>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
inline void TagEffects::TagEffectsComboResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsComboResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TagEffects::TagEffectsComboResult* TagEffects::TagEffectsComboResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::TagEffectsComboResult*>());
}
// Ctor Parameters []
constexpr ::TagEffects::TagEffectsComboResult::TagEffectsComboResult()   {
}
