#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousCosmeticEffects.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousCosmeticEffects_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousCosmeticEffects.ApplyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousCosmeticEffects::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousCosmeticEffects::ApplyAll)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d80e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousCosmeticEffects*>(),
                        {"ApplyAll", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousCosmeticEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousCosmeticEffects::*)()>(&::GorillaTag::Cosmetics::ContinuousCosmeticEffects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d80e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousCosmeticEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GorillaTag::Cosmetics::ContinuousCosmeticEffects::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GorillaTag::Cosmetics::ContinuousCosmeticEffects::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GorillaTag::Cosmetics::ContinuousCosmeticEffects::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
inline void GorillaTag::Cosmetics::ContinuousCosmeticEffects::ApplyAll(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousCosmeticEffects*>(),
                        {"ApplyAll", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void GorillaTag::Cosmetics::ContinuousCosmeticEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousCosmeticEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ContinuousCosmeticEffects* GorillaTag::Cosmetics::ContinuousCosmeticEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousCosmeticEffects*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousCosmeticEffects::ContinuousCosmeticEffects()   {
}
