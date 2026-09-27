#pragma once
// IWYU pragma private; include "System/ComponentModel/InheritanceAttribute.hpp"
#include "System/ComponentModel/zzzz__InheritanceLevel_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__InheritanceAttribute_def.hpp"
#include "System/ComponentModel/zzzz__InheritanceLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::InheritanceAttribute::*)()>(&::System::ComponentModel::InheritanceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xad544c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::InheritanceAttribute::*)(::System::ComponentModel::InheritanceLevel)>(&::System::ComponentModel::InheritanceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad5453c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::InheritanceLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute.get_InheritanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::InheritanceLevel (::System::ComponentModel::InheritanceAttribute::*)()>(&::System::ComponentModel::InheritanceAttribute::get_InheritanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad54564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                        {"get_InheritanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::InheritanceAttribute::*)(::System::Object*)>(&::System::ComponentModel::InheritanceAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad5456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::InheritanceAttribute::*)()>(&::System::ComponentModel::InheritanceAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad545ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::InheritanceAttribute::*)()>(&::System::ComponentModel::InheritanceAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad545f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InheritanceAttribute.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::InheritanceAttribute::*)()>(&::System::ComponentModel::InheritanceAttribute::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xad5465c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::InheritanceLevel& System::ComponentModel::InheritanceAttribute::__cordl_internal_get__InheritanceLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InheritanceLevel_k__BackingField;
}
constexpr ::System::ComponentModel::InheritanceLevel const& System::ComponentModel::InheritanceAttribute::__cordl_internal_get__InheritanceLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InheritanceLevel_k__BackingField;
}
constexpr void System::ComponentModel::InheritanceAttribute::__cordl_internal_set__InheritanceLevel_k__BackingField(::System::ComponentModel::InheritanceLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InheritanceLevel_k__BackingField = value;
}
inline void System::ComponentModel::InheritanceAttribute::setStaticF_Inherited(::System::ComponentModel::InheritanceAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::InheritanceAttribute*, "Inherited", ::System::ComponentModel::InheritanceAttribute*>(std::forward<::System::ComponentModel::InheritanceAttribute*>(value));
}
inline ::System::ComponentModel::InheritanceAttribute* System::ComponentModel::InheritanceAttribute::getStaticF_Inherited()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::InheritanceAttribute*, "Inherited", ::System::ComponentModel::InheritanceAttribute*>();
}
inline void System::ComponentModel::InheritanceAttribute::setStaticF_InheritedReadOnly(::System::ComponentModel::InheritanceAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::InheritanceAttribute*, "InheritedReadOnly", ::System::ComponentModel::InheritanceAttribute*>(std::forward<::System::ComponentModel::InheritanceAttribute*>(value));
}
inline ::System::ComponentModel::InheritanceAttribute* System::ComponentModel::InheritanceAttribute::getStaticF_InheritedReadOnly()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::InheritanceAttribute*, "InheritedReadOnly", ::System::ComponentModel::InheritanceAttribute*>();
}
inline void System::ComponentModel::InheritanceAttribute::setStaticF_NotInherited(::System::ComponentModel::InheritanceAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::InheritanceAttribute*, "NotInherited", ::System::ComponentModel::InheritanceAttribute*>(std::forward<::System::ComponentModel::InheritanceAttribute*>(value));
}
inline ::System::ComponentModel::InheritanceAttribute* System::ComponentModel::InheritanceAttribute::getStaticF_NotInherited()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::InheritanceAttribute*, "NotInherited", ::System::ComponentModel::InheritanceAttribute*>();
}
inline void System::ComponentModel::InheritanceAttribute::setStaticF_Default(::System::ComponentModel::InheritanceAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::InheritanceAttribute*, "Default", ::System::ComponentModel::InheritanceAttribute*>(std::forward<::System::ComponentModel::InheritanceAttribute*>(value));
}
inline ::System::ComponentModel::InheritanceAttribute* System::ComponentModel::InheritanceAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::InheritanceAttribute*, "Default", ::System::ComponentModel::InheritanceAttribute*>();
}
inline void System::ComponentModel::InheritanceAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::InheritanceAttribute::_ctor(::System::ComponentModel::InheritanceLevel  inheritanceLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::InheritanceLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inheritanceLevel);
}
inline ::System::ComponentModel::InheritanceLevel System::ComponentModel::InheritanceAttribute::get_InheritanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(),
                        {"get_InheritanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::InheritanceLevel>(this, ___internal_method);
}
inline bool System::ComponentModel::InheritanceAttribute::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::InheritanceAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::InheritanceAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::InheritanceAttribute::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InheritanceAttribute*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::InheritanceAttribute* System::ComponentModel::InheritanceAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::InheritanceAttribute*>());
}
inline ::System::ComponentModel::InheritanceAttribute* System::ComponentModel::InheritanceAttribute::New_ctor(::System::ComponentModel::InheritanceLevel  inheritanceLevel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::InheritanceAttribute*>(inheritanceLevel));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::InheritanceAttribute::InheritanceAttribute()   {
}
