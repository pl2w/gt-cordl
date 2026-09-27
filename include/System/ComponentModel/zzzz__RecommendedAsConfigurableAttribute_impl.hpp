#pragma once
// IWYU pragma private; include "System/ComponentModel/RecommendedAsConfigurableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__RecommendedAsConfigurableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RecommendedAsConfigurableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RecommendedAsConfigurableAttribute::*)(bool)>(&::System::ComponentModel::RecommendedAsConfigurableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad6624c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RecommendedAsConfigurableAttribute.get_RecommendedAsConfigurable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RecommendedAsConfigurableAttribute::*)()>(&::System::ComponentModel::RecommendedAsConfigurableAttribute::get_RecommendedAsConfigurable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad66274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                        {"get_RecommendedAsConfigurable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RecommendedAsConfigurableAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RecommendedAsConfigurableAttribute::*)(::System::Object*)>(&::System::ComponentModel::RecommendedAsConfigurableAttribute::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xad6627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RecommendedAsConfigurableAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::RecommendedAsConfigurableAttribute::*)()>(&::System::ComponentModel::RecommendedAsConfigurableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad66324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RecommendedAsConfigurableAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RecommendedAsConfigurableAttribute::*)()>(&::System::ComponentModel::RecommendedAsConfigurableAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad6632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::RecommendedAsConfigurableAttribute::__cordl_internal_get__RecommendedAsConfigurable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecommendedAsConfigurable_k__BackingField;
}
constexpr bool const& System::ComponentModel::RecommendedAsConfigurableAttribute::__cordl_internal_get__RecommendedAsConfigurable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecommendedAsConfigurable_k__BackingField;
}
constexpr void System::ComponentModel::RecommendedAsConfigurableAttribute::__cordl_internal_set__RecommendedAsConfigurable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecommendedAsConfigurable_k__BackingField = value;
}
inline void System::ComponentModel::RecommendedAsConfigurableAttribute::setStaticF_No(::System::ComponentModel::RecommendedAsConfigurableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RecommendedAsConfigurableAttribute*, "No", ::System::ComponentModel::RecommendedAsConfigurableAttribute*>(std::forward<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(value));
}
inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* System::ComponentModel::RecommendedAsConfigurableAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RecommendedAsConfigurableAttribute*, "No", ::System::ComponentModel::RecommendedAsConfigurableAttribute*>();
}
inline void System::ComponentModel::RecommendedAsConfigurableAttribute::setStaticF_Yes(::System::ComponentModel::RecommendedAsConfigurableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RecommendedAsConfigurableAttribute*, "Yes", ::System::ComponentModel::RecommendedAsConfigurableAttribute*>(std::forward<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(value));
}
inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* System::ComponentModel::RecommendedAsConfigurableAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RecommendedAsConfigurableAttribute*, "Yes", ::System::ComponentModel::RecommendedAsConfigurableAttribute*>();
}
inline void System::ComponentModel::RecommendedAsConfigurableAttribute::setStaticF_Default(::System::ComponentModel::RecommendedAsConfigurableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RecommendedAsConfigurableAttribute*, "Default", ::System::ComponentModel::RecommendedAsConfigurableAttribute*>(std::forward<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(value));
}
inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* System::ComponentModel::RecommendedAsConfigurableAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RecommendedAsConfigurableAttribute*, "Default", ::System::ComponentModel::RecommendedAsConfigurableAttribute*>();
}
inline void System::ComponentModel::RecommendedAsConfigurableAttribute::_ctor(bool  recommendedAsConfigurable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recommendedAsConfigurable);
}
inline bool System::ComponentModel::RecommendedAsConfigurableAttribute::get_RecommendedAsConfigurable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(),
                        {"get_RecommendedAsConfigurable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::RecommendedAsConfigurableAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::RecommendedAsConfigurableAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::RecommendedAsConfigurableAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::RecommendedAsConfigurableAttribute* System::ComponentModel::RecommendedAsConfigurableAttribute::New_ctor(bool  recommendedAsConfigurable)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RecommendedAsConfigurableAttribute*>(recommendedAsConfigurable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RecommendedAsConfigurableAttribute::RecommendedAsConfigurableAttribute()   {
}
