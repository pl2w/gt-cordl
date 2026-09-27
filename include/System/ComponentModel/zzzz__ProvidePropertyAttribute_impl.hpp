#pragma once
// IWYU pragma private; include "System/ComponentModel/ProvidePropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ProvidePropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ProvidePropertyAttribute::*)(::StringW, ::System::Type*)>(&::System::ComponentModel::ProvidePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad66080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ProvidePropertyAttribute::*)(::StringW, ::StringW)>(&::System::ComponentModel::ProvidePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad660e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ProvidePropertyAttribute::*)()>(&::System::ComponentModel::ProvidePropertyAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad66124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_ReceiverTypeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ProvidePropertyAttribute::*)()>(&::System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {"get_ReceiverTypeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ProvidePropertyAttribute::*)(::System::Object*)>(&::System::ComponentModel::ProvidePropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xad66134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ProvidePropertyAttribute::*)()>(&::System::ComponentModel::ProvidePropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xad661cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_TypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ProvidePropertyAttribute::*)()>(&::System::ComponentModel::ProvidePropertyAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad66214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr void System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_set__PropertyName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyName_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__ReceiverTypeName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReceiverTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__ReceiverTypeName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReceiverTypeName_k__BackingField;
}
constexpr void System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_set__ReceiverTypeName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReceiverTypeName_k__BackingField = value;
}
inline void System::ComponentModel::ProvidePropertyAttribute::_ctor(::StringW  propertyName, ::System::Type*  receiverType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, receiverType);
}
inline void System::ComponentModel::ProvidePropertyAttribute::_ctor(::StringW  propertyName, ::StringW  receiverTypeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, receiverTypeName);
}
inline ::StringW System::ComponentModel::ProvidePropertyAttribute::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(),
                        {"get_ReceiverTypeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::ProvidePropertyAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ProvidePropertyAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ProvidePropertyAttribute::get_TypeId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ProvidePropertyAttribute*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::ProvidePropertyAttribute* System::ComponentModel::ProvidePropertyAttribute::New_ctor(::StringW  propertyName, ::System::Type*  receiverType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ProvidePropertyAttribute*>(propertyName, receiverType));
}
inline ::System::ComponentModel::ProvidePropertyAttribute* System::ComponentModel::ProvidePropertyAttribute::New_ctor(::StringW  propertyName, ::StringW  receiverTypeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ProvidePropertyAttribute*>(propertyName, receiverTypeName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ProvidePropertyAttribute::ProvidePropertyAttribute()   {
}
