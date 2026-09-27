#pragma once
// IWYU pragma private; include "System/ComponentModel/PasswordPropertyTextAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__PasswordPropertyTextAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PasswordPropertyTextAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PasswordPropertyTextAttribute::*)()>(&::System::ComponentModel::PasswordPropertyTextAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad62770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PasswordPropertyTextAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PasswordPropertyTextAttribute::*)(bool)>(&::System::ComponentModel::PasswordPropertyTextAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad6278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PasswordPropertyTextAttribute.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PasswordPropertyTextAttribute::*)()>(&::System::ComponentModel::PasswordPropertyTextAttribute::get_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad627b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PasswordPropertyTextAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PasswordPropertyTextAttribute::*)(::System::Object*)>(&::System::ComponentModel::PasswordPropertyTextAttribute::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad627bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PasswordPropertyTextAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::PasswordPropertyTextAttribute::*)()>(&::System::ComponentModel::PasswordPropertyTextAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad62838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PasswordPropertyTextAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PasswordPropertyTextAttribute::*)()>(&::System::ComponentModel::PasswordPropertyTextAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad62840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::PasswordPropertyTextAttribute::__cordl_internal_get__Password_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password_k__BackingField;
}
constexpr bool const& System::ComponentModel::PasswordPropertyTextAttribute::__cordl_internal_get__Password_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password_k__BackingField;
}
constexpr void System::ComponentModel::PasswordPropertyTextAttribute::__cordl_internal_set__Password_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Password_k__BackingField = value;
}
inline void System::ComponentModel::PasswordPropertyTextAttribute::setStaticF_Yes(::System::ComponentModel::PasswordPropertyTextAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::PasswordPropertyTextAttribute*, "Yes", ::System::ComponentModel::PasswordPropertyTextAttribute*>(std::forward<::System::ComponentModel::PasswordPropertyTextAttribute*>(value));
}
inline ::System::ComponentModel::PasswordPropertyTextAttribute* System::ComponentModel::PasswordPropertyTextAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::PasswordPropertyTextAttribute*, "Yes", ::System::ComponentModel::PasswordPropertyTextAttribute*>();
}
inline void System::ComponentModel::PasswordPropertyTextAttribute::setStaticF_No(::System::ComponentModel::PasswordPropertyTextAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::PasswordPropertyTextAttribute*, "No", ::System::ComponentModel::PasswordPropertyTextAttribute*>(std::forward<::System::ComponentModel::PasswordPropertyTextAttribute*>(value));
}
inline ::System::ComponentModel::PasswordPropertyTextAttribute* System::ComponentModel::PasswordPropertyTextAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::PasswordPropertyTextAttribute*, "No", ::System::ComponentModel::PasswordPropertyTextAttribute*>();
}
inline void System::ComponentModel::PasswordPropertyTextAttribute::setStaticF_Default(::System::ComponentModel::PasswordPropertyTextAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::PasswordPropertyTextAttribute*, "Default", ::System::ComponentModel::PasswordPropertyTextAttribute*>(std::forward<::System::ComponentModel::PasswordPropertyTextAttribute*>(value));
}
inline ::System::ComponentModel::PasswordPropertyTextAttribute* System::ComponentModel::PasswordPropertyTextAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::PasswordPropertyTextAttribute*, "Default", ::System::ComponentModel::PasswordPropertyTextAttribute*>();
}
inline void System::ComponentModel::PasswordPropertyTextAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::PasswordPropertyTextAttribute::_ctor(bool  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
inline bool System::ComponentModel::PasswordPropertyTextAttribute::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::PasswordPropertyTextAttribute::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::ComponentModel::PasswordPropertyTextAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::PasswordPropertyTextAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PasswordPropertyTextAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::PasswordPropertyTextAttribute* System::ComponentModel::PasswordPropertyTextAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PasswordPropertyTextAttribute*>());
}
inline ::System::ComponentModel::PasswordPropertyTextAttribute* System::ComponentModel::PasswordPropertyTextAttribute::New_ctor(bool  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PasswordPropertyTextAttribute*>(password));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PasswordPropertyTextAttribute::PasswordPropertyTextAttribute()   {
}
