#pragma once
// IWYU pragma private; include "System/ComponentModel/ImmutableObjectAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ImmutableObjectAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ImmutableObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ImmutableObjectAttribute::*)(bool)>(&::System::ComponentModel::ImmutableObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad47864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ImmutableObjectAttribute.get_Immutable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ImmutableObjectAttribute::*)()>(&::System::ComponentModel::ImmutableObjectAttribute::get_Immutable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4788c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                        {"get_Immutable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ImmutableObjectAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ImmutableObjectAttribute::*)(::System::Object*)>(&::System::ComponentModel::ImmutableObjectAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xad47894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ImmutableObjectAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ImmutableObjectAttribute::*)()>(&::System::ComponentModel::ImmutableObjectAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ImmutableObjectAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ImmutableObjectAttribute::*)()>(&::System::ComponentModel::ImmutableObjectAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad47980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::ImmutableObjectAttribute::__cordl_internal_get__Immutable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Immutable_k__BackingField;
}
constexpr bool const& System::ComponentModel::ImmutableObjectAttribute::__cordl_internal_get__Immutable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Immutable_k__BackingField;
}
constexpr void System::ComponentModel::ImmutableObjectAttribute::__cordl_internal_set__Immutable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Immutable_k__BackingField = value;
}
inline void System::ComponentModel::ImmutableObjectAttribute::setStaticF_Yes(::System::ComponentModel::ImmutableObjectAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::ImmutableObjectAttribute*, "Yes", ::System::ComponentModel::ImmutableObjectAttribute*>(std::forward<::System::ComponentModel::ImmutableObjectAttribute*>(value));
}
inline ::System::ComponentModel::ImmutableObjectAttribute* System::ComponentModel::ImmutableObjectAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::ImmutableObjectAttribute*, "Yes", ::System::ComponentModel::ImmutableObjectAttribute*>();
}
inline void System::ComponentModel::ImmutableObjectAttribute::setStaticF_No(::System::ComponentModel::ImmutableObjectAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::ImmutableObjectAttribute*, "No", ::System::ComponentModel::ImmutableObjectAttribute*>(std::forward<::System::ComponentModel::ImmutableObjectAttribute*>(value));
}
inline ::System::ComponentModel::ImmutableObjectAttribute* System::ComponentModel::ImmutableObjectAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::ImmutableObjectAttribute*, "No", ::System::ComponentModel::ImmutableObjectAttribute*>();
}
inline void System::ComponentModel::ImmutableObjectAttribute::setStaticF_Default(::System::ComponentModel::ImmutableObjectAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::ImmutableObjectAttribute*, "Default", ::System::ComponentModel::ImmutableObjectAttribute*>(std::forward<::System::ComponentModel::ImmutableObjectAttribute*>(value));
}
inline ::System::ComponentModel::ImmutableObjectAttribute* System::ComponentModel::ImmutableObjectAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::ImmutableObjectAttribute*, "Default", ::System::ComponentModel::ImmutableObjectAttribute*>();
}
inline void System::ComponentModel::ImmutableObjectAttribute::_ctor(bool  immutable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, immutable);
}
inline bool System::ComponentModel::ImmutableObjectAttribute::get_Immutable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(),
                        {"get_Immutable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::ImmutableObjectAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ImmutableObjectAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ImmutableObjectAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ImmutableObjectAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::ImmutableObjectAttribute* System::ComponentModel::ImmutableObjectAttribute::New_ctor(bool  immutable)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ImmutableObjectAttribute*>(immutable));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ImmutableObjectAttribute::ImmutableObjectAttribute()   {
}
