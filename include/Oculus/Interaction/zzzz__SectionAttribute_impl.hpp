#pragma once
// IWYU pragma private; include "Oculus/Interaction/SectionAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Oculus/Interaction/zzzz__SectionAttribute_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SectionAttribute.get_SectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::SectionAttribute::*)()>(&::Oculus::Interaction::SectionAttribute::get_SectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SectionAttribute*>(),
                        {"get_SectionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SectionAttribute.set_SectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SectionAttribute::*)(::StringW)>(&::Oculus::Interaction::SectionAttribute::set_SectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SectionAttribute*>(),
                        {"set_SectionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SectionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SectionAttribute::*)(::StringW)>(&::Oculus::Interaction::SectionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3ffddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SectionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::SectionAttribute::__cordl_internal_get__SectionName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SectionName_k__BackingField;
}
constexpr ::StringW const& Oculus::Interaction::SectionAttribute::__cordl_internal_get__SectionName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SectionName_k__BackingField;
}
constexpr void Oculus::Interaction::SectionAttribute::__cordl_internal_set__SectionName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SectionName_k__BackingField = value;
}
inline ::StringW Oculus::Interaction::SectionAttribute::get_SectionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SectionAttribute*>(),
                        {"get_SectionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Interaction::SectionAttribute::set_SectionName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SectionAttribute*>(),
                        {"set_SectionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::SectionAttribute::_ctor(::StringW  sectionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SectionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sectionName);
}
inline ::Oculus::Interaction::SectionAttribute* Oculus::Interaction::SectionAttribute::New_ctor(::StringW  sectionName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SectionAttribute*>(sectionName));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SectionAttribute::SectionAttribute()   {
}
