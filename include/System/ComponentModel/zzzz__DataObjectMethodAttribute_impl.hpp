#pragma once
// IWYU pragma private; include "System/ComponentModel/DataObjectMethodAttribute.hpp"
#include "System/ComponentModel/zzzz__DataObjectMethodType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DataObjectMethodAttribute_def.hpp"
#include "System/ComponentModel/zzzz__DataObjectMethodType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DataObjectMethodAttribute::*)(::System::ComponentModel::DataObjectMethodType)>(&::System::ComponentModel::DataObjectMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xad52e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::DataObjectMethodType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DataObjectMethodAttribute::*)(::System::ComponentModel::DataObjectMethodType, bool)>(&::System::ComponentModel::DataObjectMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad52e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::DataObjectMethodType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DataObjectMethodAttribute::*)()>(&::System::ComponentModel::DataObjectMethodAttribute::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad52e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {"get_IsDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute.get_MethodType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::DataObjectMethodType (::System::ComponentModel::DataObjectMethodAttribute::*)()>(&::System::ComponentModel::DataObjectMethodAttribute::get_MethodType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad52e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {"get_MethodType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DataObjectMethodAttribute::*)(::System::Object*)>(&::System::ComponentModel::DataObjectMethodAttribute::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad52e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DataObjectMethodAttribute::*)()>(&::System::ComponentModel::DataObjectMethodAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad52f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectMethodAttribute.Match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DataObjectMethodAttribute::*)(::System::Object*)>(&::System::ComponentModel::DataObjectMethodAttribute::Match)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad52f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DataObjectMethodAttribute::__cordl_internal_get__IsDefault_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDefault_k__BackingField;
}
constexpr bool const& System::ComponentModel::DataObjectMethodAttribute::__cordl_internal_get__IsDefault_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDefault_k__BackingField;
}
constexpr void System::ComponentModel::DataObjectMethodAttribute::__cordl_internal_set__IsDefault_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDefault_k__BackingField = value;
}
constexpr ::System::ComponentModel::DataObjectMethodType& System::ComponentModel::DataObjectMethodAttribute::__cordl_internal_get__MethodType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MethodType_k__BackingField;
}
constexpr ::System::ComponentModel::DataObjectMethodType const& System::ComponentModel::DataObjectMethodAttribute::__cordl_internal_get__MethodType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MethodType_k__BackingField;
}
constexpr void System::ComponentModel::DataObjectMethodAttribute::__cordl_internal_set__MethodType_k__BackingField(::System::ComponentModel::DataObjectMethodType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MethodType_k__BackingField = value;
}
inline void System::ComponentModel::DataObjectMethodAttribute::_ctor(::System::ComponentModel::DataObjectMethodType  methodType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::DataObjectMethodType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodType);
}
inline void System::ComponentModel::DataObjectMethodAttribute::_ctor(::System::ComponentModel::DataObjectMethodType  methodType, bool  isDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::DataObjectMethodType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodType, isDefault);
}
inline bool System::ComponentModel::DataObjectMethodAttribute::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {"get_IsDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DataObjectMethodType System::ComponentModel::DataObjectMethodAttribute::get_MethodType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(),
                        {"get_MethodType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::DataObjectMethodType>(this, ___internal_method);
}
inline bool System::ComponentModel::DataObjectMethodAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DataObjectMethodAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DataObjectMethodAttribute::Match(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DataObjectMethodAttribute*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::ComponentModel::DataObjectMethodAttribute* System::ComponentModel::DataObjectMethodAttribute::New_ctor(::System::ComponentModel::DataObjectMethodType  methodType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DataObjectMethodAttribute*>(methodType));
}
inline ::System::ComponentModel::DataObjectMethodAttribute* System::ComponentModel::DataObjectMethodAttribute::New_ctor(::System::ComponentModel::DataObjectMethodType  methodType, bool  isDefault)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DataObjectMethodAttribute*>(methodType, isDefault));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DataObjectMethodAttribute::DataObjectMethodAttribute()   {
}
