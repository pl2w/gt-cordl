#pragma once
// IWYU pragma private; include "System/ComponentModel/LocalizableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__LocalizableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::LocalizableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LocalizableAttribute::*)(bool)>(&::System::ComponentModel::LocalizableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad47bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LocalizableAttribute.get_IsLocalizable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::LocalizableAttribute::*)()>(&::System::ComponentModel::LocalizableAttribute::get_IsLocalizable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                        {"get_IsLocalizable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LocalizableAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::LocalizableAttribute::*)(::System::Object*)>(&::System::ComponentModel::LocalizableAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xad47c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LocalizableAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::LocalizableAttribute::*)()>(&::System::ComponentModel::LocalizableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LocalizableAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::LocalizableAttribute::*)()>(&::System::ComponentModel::LocalizableAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad47cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::LocalizableAttribute::__cordl_internal_get__IsLocalizable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLocalizable_k__BackingField;
}
constexpr bool const& System::ComponentModel::LocalizableAttribute::__cordl_internal_get__IsLocalizable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLocalizable_k__BackingField;
}
constexpr void System::ComponentModel::LocalizableAttribute::__cordl_internal_set__IsLocalizable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLocalizable_k__BackingField = value;
}
inline void System::ComponentModel::LocalizableAttribute::setStaticF_Yes(::System::ComponentModel::LocalizableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::LocalizableAttribute*, "Yes", ::System::ComponentModel::LocalizableAttribute*>(std::forward<::System::ComponentModel::LocalizableAttribute*>(value));
}
inline ::System::ComponentModel::LocalizableAttribute* System::ComponentModel::LocalizableAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::LocalizableAttribute*, "Yes", ::System::ComponentModel::LocalizableAttribute*>();
}
inline void System::ComponentModel::LocalizableAttribute::setStaticF_No(::System::ComponentModel::LocalizableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::LocalizableAttribute*, "No", ::System::ComponentModel::LocalizableAttribute*>(std::forward<::System::ComponentModel::LocalizableAttribute*>(value));
}
inline ::System::ComponentModel::LocalizableAttribute* System::ComponentModel::LocalizableAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::LocalizableAttribute*, "No", ::System::ComponentModel::LocalizableAttribute*>();
}
inline void System::ComponentModel::LocalizableAttribute::setStaticF_Default(::System::ComponentModel::LocalizableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::LocalizableAttribute*, "Default", ::System::ComponentModel::LocalizableAttribute*>(std::forward<::System::ComponentModel::LocalizableAttribute*>(value));
}
inline ::System::ComponentModel::LocalizableAttribute* System::ComponentModel::LocalizableAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::LocalizableAttribute*, "Default", ::System::ComponentModel::LocalizableAttribute*>();
}
inline void System::ComponentModel::LocalizableAttribute::_ctor(bool  isLocalizable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLocalizable);
}
inline bool System::ComponentModel::LocalizableAttribute::get_IsLocalizable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(),
                        {"get_IsLocalizable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::LocalizableAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::LocalizableAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::LocalizableAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LocalizableAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::LocalizableAttribute* System::ComponentModel::LocalizableAttribute::New_ctor(bool  isLocalizable)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LocalizableAttribute*>(isLocalizable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LocalizableAttribute::LocalizableAttribute()   {
}
