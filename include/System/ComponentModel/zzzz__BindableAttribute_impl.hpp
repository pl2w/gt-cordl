#pragma once
// IWYU pragma private; include "System/ComponentModel/BindableAttribute.hpp"
#include "System/ComponentModel/zzzz__BindingDirection_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__BindableAttribute_def.hpp"
#include "System/ComponentModel/zzzz__BindableSupport_def.hpp"
#include "System/ComponentModel/zzzz__BindingDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BindableAttribute::*)(bool)>(&::System::ComponentModel::BindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xad4ab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BindableAttribute::*)(bool, ::System::ComponentModel::BindingDirection)>(&::System::ComponentModel::BindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad4abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::ComponentModel::BindingDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BindableAttribute::*)(::System::ComponentModel::BindableSupport)>(&::System::ComponentModel::BindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad4abe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::BindableSupport>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BindableAttribute::*)(::System::ComponentModel::BindableSupport, ::System::ComponentModel::BindingDirection)>(&::System::ComponentModel::BindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad4ac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::BindableSupport>(), ::i2c::type_of<::System::ComponentModel::BindingDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute.get_Bindable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BindableAttribute::*)()>(&::System::ComponentModel::BindableAttribute::get_Bindable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4ac64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {"get_Bindable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute.get_Direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::BindingDirection (::System::ComponentModel::BindableAttribute::*)()>(&::System::ComponentModel::BindableAttribute::get_Direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4ac6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {"get_Direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BindableAttribute::*)(::System::Object*)>(&::System::ComponentModel::BindableAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad4ac74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::BindableAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::BindableAttribute::*)()>(&::System::ComponentModel::BindableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad4ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::BindableAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BindableAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BindableAttribute::*)()>(&::System::ComponentModel::BindableAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xad4ad38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::BindableAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::BindableAttribute::__cordl_internal_get__isDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefault;
}
constexpr bool const& System::ComponentModel::BindableAttribute::__cordl_internal_get__isDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefault;
}
constexpr void System::ComponentModel::BindableAttribute::__cordl_internal_set__isDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDefault = value;
}
constexpr bool& System::ComponentModel::BindableAttribute::__cordl_internal_get__Bindable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bindable_k__BackingField;
}
constexpr bool const& System::ComponentModel::BindableAttribute::__cordl_internal_get__Bindable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bindable_k__BackingField;
}
constexpr void System::ComponentModel::BindableAttribute::__cordl_internal_set__Bindable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bindable_k__BackingField = value;
}
constexpr ::System::ComponentModel::BindingDirection& System::ComponentModel::BindableAttribute::__cordl_internal_get__Direction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Direction_k__BackingField;
}
constexpr ::System::ComponentModel::BindingDirection const& System::ComponentModel::BindableAttribute::__cordl_internal_get__Direction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Direction_k__BackingField;
}
constexpr void System::ComponentModel::BindableAttribute::__cordl_internal_set__Direction_k__BackingField(::System::ComponentModel::BindingDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Direction_k__BackingField = value;
}
inline void System::ComponentModel::BindableAttribute::setStaticF_Yes(::System::ComponentModel::BindableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::BindableAttribute*, "Yes", ::System::ComponentModel::BindableAttribute*>(std::forward<::System::ComponentModel::BindableAttribute*>(value));
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::BindableAttribute*, "Yes", ::System::ComponentModel::BindableAttribute*>();
}
inline void System::ComponentModel::BindableAttribute::setStaticF_No(::System::ComponentModel::BindableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::BindableAttribute*, "No", ::System::ComponentModel::BindableAttribute*>(std::forward<::System::ComponentModel::BindableAttribute*>(value));
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::BindableAttribute*, "No", ::System::ComponentModel::BindableAttribute*>();
}
inline void System::ComponentModel::BindableAttribute::setStaticF_Default(::System::ComponentModel::BindableAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::BindableAttribute*, "Default", ::System::ComponentModel::BindableAttribute*>(std::forward<::System::ComponentModel::BindableAttribute*>(value));
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::BindableAttribute*, "Default", ::System::ComponentModel::BindableAttribute*>();
}
inline void System::ComponentModel::BindableAttribute::_ctor(bool  bindable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindable);
}
inline void System::ComponentModel::BindableAttribute::_ctor(bool  bindable, ::System::ComponentModel::BindingDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::ComponentModel::BindingDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindable, direction);
}
inline void System::ComponentModel::BindableAttribute::_ctor(::System::ComponentModel::BindableSupport  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::BindableSupport>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void System::ComponentModel::BindableAttribute::_ctor(::System::ComponentModel::BindableSupport  flags, ::System::ComponentModel::BindingDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::BindableSupport>(), ::i2c::type_of<::System::ComponentModel::BindingDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, direction);
}
inline bool System::ComponentModel::BindableAttribute::get_Bindable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {"get_Bindable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::BindingDirection System::ComponentModel::BindableAttribute::get_Direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BindableAttribute*>(),
                        {"get_Direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::BindingDirection>(this, ___internal_method);
}
inline bool System::ComponentModel::BindableAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BindableAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::BindableAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BindableAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::BindableAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BindableAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::New_ctor(bool  bindable)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BindableAttribute*>(bindable));
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::New_ctor(bool  bindable, ::System::ComponentModel::BindingDirection  direction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BindableAttribute*>(bindable, direction));
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::New_ctor(::System::ComponentModel::BindableSupport  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BindableAttribute*>(flags));
}
inline ::System::ComponentModel::BindableAttribute* System::ComponentModel::BindableAttribute::New_ctor(::System::ComponentModel::BindableSupport  flags, ::System::ComponentModel::BindingDirection  direction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BindableAttribute*>(flags, direction));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BindableAttribute::BindableAttribute()   {
}
