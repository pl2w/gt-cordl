#pragma once
// IWYU pragma private; include "System/ComponentModel/InstallerTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__InstallerTypeAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::InstallerTypeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::InstallerTypeAttribute::*)(::System::Type*)>(&::System::ComponentModel::InstallerTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad587ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InstallerTypeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::InstallerTypeAttribute::*)(::StringW)>(&::System::ComponentModel::InstallerTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad58838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InstallerTypeAttribute.get_InstallerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::InstallerTypeAttribute::*)()>(&::System::ComponentModel::InstallerTypeAttribute::get_InstallerType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad58868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InstallerTypeAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::InstallerTypeAttribute::*)(::System::Object*)>(&::System::ComponentModel::InstallerTypeAttribute::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xad588e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InstallerTypeAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::InstallerTypeAttribute::*)()>(&::System::ComponentModel::InstallerTypeAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad58984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::InstallerTypeAttribute::__cordl_internal_get__typeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeName;
}
constexpr ::StringW const& System::ComponentModel::InstallerTypeAttribute::__cordl_internal_get__typeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeName;
}
constexpr void System::ComponentModel::InstallerTypeAttribute::__cordl_internal_set__typeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeName = value;
}
inline void System::ComponentModel::InstallerTypeAttribute::_ctor(::System::Type*  installerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, installerType);
}
inline void System::ComponentModel::InstallerTypeAttribute::_ctor(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline ::System::Type* System::ComponentModel::InstallerTypeAttribute::get_InstallerType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::ComponentModel::InstallerTypeAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::InstallerTypeAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InstallerTypeAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::InstallerTypeAttribute* System::ComponentModel::InstallerTypeAttribute::New_ctor(::System::Type*  installerType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::InstallerTypeAttribute*>(installerType));
}
inline ::System::ComponentModel::InstallerTypeAttribute* System::ComponentModel::InstallerTypeAttribute::New_ctor(::StringW  typeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::InstallerTypeAttribute*>(typeName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::InstallerTypeAttribute::InstallerTypeAttribute()   {
}
