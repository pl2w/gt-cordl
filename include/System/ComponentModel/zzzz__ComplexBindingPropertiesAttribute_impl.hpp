#pragma once
// IWYU pragma private; include "System/ComponentModel/ComplexBindingPropertiesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ComplexBindingPropertiesAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4b9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)(::StringW)>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad4b9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)(::StringW, ::StringW)>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad4b9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute.get_DataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4ba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {"get_DataSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute.get_DataMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4ba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {"get_DataMember", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)(::System::Object*)>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xad4ba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComplexBindingPropertiesAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&::System::ComponentModel::ComplexBindingPropertiesAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4bacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::ComplexBindingPropertiesAttribute::__cordl_internal_get__DataSource_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataSource_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ComplexBindingPropertiesAttribute::__cordl_internal_get__DataSource_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataSource_k__BackingField;
}
constexpr void System::ComponentModel::ComplexBindingPropertiesAttribute::__cordl_internal_set__DataSource_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DataSource_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::ComplexBindingPropertiesAttribute::__cordl_internal_get__DataMember_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataMember_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ComplexBindingPropertiesAttribute::__cordl_internal_get__DataMember_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataMember_k__BackingField;
}
constexpr void System::ComponentModel::ComplexBindingPropertiesAttribute::__cordl_internal_set__DataMember_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DataMember_k__BackingField = value;
}
inline void System::ComponentModel::ComplexBindingPropertiesAttribute::setStaticF_Default(::System::ComponentModel::ComplexBindingPropertiesAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::ComplexBindingPropertiesAttribute*, "Default", ::System::ComponentModel::ComplexBindingPropertiesAttribute*>(std::forward<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(value));
}
inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* System::ComponentModel::ComplexBindingPropertiesAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::ComplexBindingPropertiesAttribute*, "Default", ::System::ComponentModel::ComplexBindingPropertiesAttribute*>();
}
inline void System::ComponentModel::ComplexBindingPropertiesAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ComplexBindingPropertiesAttribute::_ctor(::StringW  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void System::ComponentModel::ComplexBindingPropertiesAttribute::_ctor(::StringW  dataSource, ::StringW  dataMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, dataMember);
}
inline ::StringW System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {"get_DataSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataMember()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(),
                        {"get_DataMember", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::ComplexBindingPropertiesAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ComplexBindingPropertiesAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* System::ComponentModel::ComplexBindingPropertiesAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComplexBindingPropertiesAttribute*>());
}
inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* System::ComponentModel::ComplexBindingPropertiesAttribute::New_ctor(::StringW  dataSource)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(dataSource));
}
inline ::System::ComponentModel::ComplexBindingPropertiesAttribute* System::ComponentModel::ComplexBindingPropertiesAttribute::New_ctor(::StringW  dataSource, ::StringW  dataMember)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComplexBindingPropertiesAttribute*>(dataSource, dataMember));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComplexBindingPropertiesAttribute::ComplexBindingPropertiesAttribute()   {
}
