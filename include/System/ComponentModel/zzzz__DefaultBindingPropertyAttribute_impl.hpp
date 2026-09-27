#pragma once
// IWYU pragma private; include "System/ComponentModel/DefaultBindingPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DefaultBindingPropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DefaultBindingPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DefaultBindingPropertyAttribute::*)()>(&::System::ComponentModel::DefaultBindingPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad53f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultBindingPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DefaultBindingPropertyAttribute::*)(::StringW)>(&::System::ComponentModel::DefaultBindingPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad53f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultBindingPropertyAttribute.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DefaultBindingPropertyAttribute::*)()>(&::System::ComponentModel::DefaultBindingPropertyAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad53f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultBindingPropertyAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DefaultBindingPropertyAttribute::*)(::System::Object*)>(&::System::ComponentModel::DefaultBindingPropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad53f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DefaultBindingPropertyAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DefaultBindingPropertyAttribute::*)()>(&::System::ComponentModel::DefaultBindingPropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad53fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DefaultBindingPropertyAttribute::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::DefaultBindingPropertyAttribute::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void System::ComponentModel::DefaultBindingPropertyAttribute::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
inline void System::ComponentModel::DefaultBindingPropertyAttribute::setStaticF_Default(::System::ComponentModel::DefaultBindingPropertyAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DefaultBindingPropertyAttribute*, "Default", ::System::ComponentModel::DefaultBindingPropertyAttribute*>(std::forward<::System::ComponentModel::DefaultBindingPropertyAttribute*>(value));
}
inline ::System::ComponentModel::DefaultBindingPropertyAttribute* System::ComponentModel::DefaultBindingPropertyAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DefaultBindingPropertyAttribute*, "Default", ::System::ComponentModel::DefaultBindingPropertyAttribute*>();
}
inline void System::ComponentModel::DefaultBindingPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::DefaultBindingPropertyAttribute::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::ComponentModel::DefaultBindingPropertyAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::DefaultBindingPropertyAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DefaultBindingPropertyAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DefaultBindingPropertyAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::DefaultBindingPropertyAttribute* System::ComponentModel::DefaultBindingPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DefaultBindingPropertyAttribute*>());
}
inline ::System::ComponentModel::DefaultBindingPropertyAttribute* System::ComponentModel::DefaultBindingPropertyAttribute::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DefaultBindingPropertyAttribute*>(name));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DefaultBindingPropertyAttribute::DefaultBindingPropertyAttribute()   {
}
