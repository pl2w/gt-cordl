#pragma once
// IWYU pragma private; include "System/ComponentModel/DataObjectAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DataObjectAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DataObjectAttribute::*)()>(&::System::ComponentModel::DataObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad529e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DataObjectAttribute::*)(bool)>(&::System::ComponentModel::DataObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad52a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.get_IsDataObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DataObjectAttribute::*)()>(&::System::ComponentModel::DataObjectAttribute::get_IsDataObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad52a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                        {"get_IsDataObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DataObjectAttribute::*)(::System::Object*)>(&::System::ComponentModel::DataObjectAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad52a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DataObjectAttribute::*)()>(&::System::ComponentModel::DataObjectAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad52ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DataObjectAttribute::*)()>(&::System::ComponentModel::DataObjectAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad52afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DataObjectAttribute::__cordl_internal_get__IsDataObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataObject_k__BackingField;
}
constexpr bool const& System::ComponentModel::DataObjectAttribute::__cordl_internal_get__IsDataObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataObject_k__BackingField;
}
constexpr void System::ComponentModel::DataObjectAttribute::__cordl_internal_set__IsDataObject_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDataObject_k__BackingField = value;
}
inline void System::ComponentModel::DataObjectAttribute::setStaticF_DataObject(::System::ComponentModel::DataObjectAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DataObjectAttribute*, "DataObject", ::System::ComponentModel::DataObjectAttribute*>(std::forward<::System::ComponentModel::DataObjectAttribute*>(value));
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::getStaticF_DataObject()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DataObjectAttribute*, "DataObject", ::System::ComponentModel::DataObjectAttribute*>();
}
inline void System::ComponentModel::DataObjectAttribute::setStaticF_NonDataObject(::System::ComponentModel::DataObjectAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DataObjectAttribute*, "NonDataObject", ::System::ComponentModel::DataObjectAttribute*>(std::forward<::System::ComponentModel::DataObjectAttribute*>(value));
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::getStaticF_NonDataObject()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DataObjectAttribute*, "NonDataObject", ::System::ComponentModel::DataObjectAttribute*>();
}
inline void System::ComponentModel::DataObjectAttribute::setStaticF_Default(::System::ComponentModel::DataObjectAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DataObjectAttribute*, "Default", ::System::ComponentModel::DataObjectAttribute*>(std::forward<::System::ComponentModel::DataObjectAttribute*>(value));
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DataObjectAttribute*, "Default", ::System::ComponentModel::DataObjectAttribute*>();
}
inline void System::ComponentModel::DataObjectAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::DataObjectAttribute::_ctor(bool  isDataObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDataObject);
}
inline bool System::ComponentModel::DataObjectAttribute::get_IsDataObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(),
                        {"get_IsDataObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::DataObjectAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DataObjectAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DataObjectAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataObjectAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DataObjectAttribute*>());
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::New_ctor(bool  isDataObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DataObjectAttribute*>(isDataObject));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DataObjectAttribute::DataObjectAttribute()   {
}
