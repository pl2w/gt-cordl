#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RequiredTargetAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__RequiredTargetAttribute_RequiredTargets_impl.hpp"
#include "Unity/Cinemachine/zzzz__RequiredTargetAttribute_def.hpp"
#include "Unity/Cinemachine/zzzz__RequiredTargetAttribute_RequiredTargets_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::RequiredTargetAttribute.get_RequiredTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RequiredTargetAttribute_RequiredTargets (::Unity::Cinemachine::RequiredTargetAttribute::*)()>(&::Unity::Cinemachine::RequiredTargetAttribute::get_RequiredTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb376c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RequiredTargetAttribute*>(),
                        {"get_RequiredTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RequiredTargetAttribute.set_RequiredTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::RequiredTargetAttribute::*)(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets)>(&::Unity::Cinemachine::RequiredTargetAttribute::set_RequiredTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb3774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RequiredTargetAttribute*>(),
                        {"set_RequiredTarget", {}, {::i2c::type_of<::GlobalNamespace::RequiredTargetAttribute_RequiredTargets>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::RequiredTargetAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::RequiredTargetAttribute::*)(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets)>(&::Unity::Cinemachine::RequiredTargetAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb377c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RequiredTargetAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RequiredTargetAttribute_RequiredTargets>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets& Unity::Cinemachine::RequiredTargetAttribute::__cordl_internal_get__RequiredTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiredTarget_k__BackingField;
}
constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets const& Unity::Cinemachine::RequiredTargetAttribute::__cordl_internal_get__RequiredTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiredTarget_k__BackingField;
}
constexpr void Unity::Cinemachine::RequiredTargetAttribute::__cordl_internal_set__RequiredTarget_k__BackingField(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiredTarget_k__BackingField = value;
}
inline ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets Unity::Cinemachine::RequiredTargetAttribute::get_RequiredTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RequiredTargetAttribute*>(),
                        {"get_RequiredTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RequiredTargetAttribute_RequiredTargets>(this, ___internal_method);
}
inline void Unity::Cinemachine::RequiredTargetAttribute::set_RequiredTarget(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RequiredTargetAttribute*>(),
                        {"set_RequiredTarget", {}, {::i2c::type_of<::GlobalNamespace::RequiredTargetAttribute_RequiredTargets>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::RequiredTargetAttribute::_ctor(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  requiredTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::RequiredTargetAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RequiredTargetAttribute_RequiredTargets>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requiredTarget);
}
inline ::Unity::Cinemachine::RequiredTargetAttribute* Unity::Cinemachine::RequiredTargetAttribute::New_ctor(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  requiredTarget)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::RequiredTargetAttribute*>(requiredTarget));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::RequiredTargetAttribute::RequiredTargetAttribute()   {
}
