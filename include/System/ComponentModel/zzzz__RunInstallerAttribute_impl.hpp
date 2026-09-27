#pragma once
// IWYU pragma private; include "System/ComponentModel/RunInstallerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__RunInstallerAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RunInstallerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RunInstallerAttribute::*)(bool)>(&::System::ComponentModel::RunInstallerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad6952c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RunInstallerAttribute.get_RunInstaller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RunInstallerAttribute::*)()>(&::System::ComponentModel::RunInstallerAttribute::get_RunInstaller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad69554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                        {"get_RunInstaller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RunInstallerAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RunInstallerAttribute::*)(::System::Object*)>(&::System::ComponentModel::RunInstallerAttribute::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xad6955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RunInstallerAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::RunInstallerAttribute::*)()>(&::System::ComponentModel::RunInstallerAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad69604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RunInstallerAttribute.IsDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::RunInstallerAttribute::*)()>(&::System::ComponentModel::RunInstallerAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad6960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::RunInstallerAttribute::__cordl_internal_get__RunInstaller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunInstaller_k__BackingField;
}
constexpr bool const& System::ComponentModel::RunInstallerAttribute::__cordl_internal_get__RunInstaller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunInstaller_k__BackingField;
}
constexpr void System::ComponentModel::RunInstallerAttribute::__cordl_internal_set__RunInstaller_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RunInstaller_k__BackingField = value;
}
inline void System::ComponentModel::RunInstallerAttribute::setStaticF_Yes(::System::ComponentModel::RunInstallerAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RunInstallerAttribute*, "Yes", ::System::ComponentModel::RunInstallerAttribute*>(std::forward<::System::ComponentModel::RunInstallerAttribute*>(value));
}
inline ::System::ComponentModel::RunInstallerAttribute* System::ComponentModel::RunInstallerAttribute::getStaticF_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RunInstallerAttribute*, "Yes", ::System::ComponentModel::RunInstallerAttribute*>();
}
inline void System::ComponentModel::RunInstallerAttribute::setStaticF_No(::System::ComponentModel::RunInstallerAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RunInstallerAttribute*, "No", ::System::ComponentModel::RunInstallerAttribute*>(std::forward<::System::ComponentModel::RunInstallerAttribute*>(value));
}
inline ::System::ComponentModel::RunInstallerAttribute* System::ComponentModel::RunInstallerAttribute::getStaticF_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RunInstallerAttribute*, "No", ::System::ComponentModel::RunInstallerAttribute*>();
}
inline void System::ComponentModel::RunInstallerAttribute::setStaticF_Default(::System::ComponentModel::RunInstallerAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RunInstallerAttribute*, "Default", ::System::ComponentModel::RunInstallerAttribute*>(std::forward<::System::ComponentModel::RunInstallerAttribute*>(value));
}
inline ::System::ComponentModel::RunInstallerAttribute* System::ComponentModel::RunInstallerAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RunInstallerAttribute*, "Default", ::System::ComponentModel::RunInstallerAttribute*>();
}
inline void System::ComponentModel::RunInstallerAttribute::_ctor(bool  runInstaller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runInstaller);
}
inline bool System::ComponentModel::RunInstallerAttribute::get_RunInstaller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(),
                        {"get_RunInstaller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::RunInstallerAttribute::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::RunInstallerAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::RunInstallerAttribute::IsDefaultAttribute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::RunInstallerAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::RunInstallerAttribute* System::ComponentModel::RunInstallerAttribute::New_ctor(bool  runInstaller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RunInstallerAttribute*>(runInstaller));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RunInstallerAttribute::RunInstallerAttribute()   {
}
