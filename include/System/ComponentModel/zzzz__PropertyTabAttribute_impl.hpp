#pragma once
// IWYU pragma private; include "System/ComponentModel/PropertyTabAttribute.hpp"
#include "System/ComponentModel/zzzz__PropertyTabScope_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyTabAttribute_def.hpp"
#include "System/ComponentModel/zzzz__PropertyTabScope_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)()>(&::System::ComponentModel::PropertyTabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xad5482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::System::Type*)>(&::System::ComponentModel::PropertyTabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad54950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::StringW)>(&::System::ComponentModel::PropertyTabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad54adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::System::Type*, ::System::ComponentModel::PropertyTabScope)>(&::System::ComponentModel::PropertyTabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xad54958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::PropertyTabScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::StringW, ::System::ComponentModel::PropertyTabScope)>(&::System::ComponentModel::PropertyTabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xad54ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ComponentModel::PropertyTabScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.get_TabClasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::ComponentModel::PropertyTabAttribute::*)()>(&::System::ComponentModel::PropertyTabAttribute::get_TabClasses)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xad54c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"get_TabClasses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.get_TabClassNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::ComponentModel::PropertyTabAttribute::*)()>(&::System::ComponentModel::PropertyTabAttribute::get_TabClassNames)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad54f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"get_TabClassNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.get_TabScopes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::PropertyTabScope> (::System::ComponentModel::PropertyTabAttribute::*)()>(&::System::ComponentModel::PropertyTabAttribute::get_TabScopes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad54ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"get_TabScopes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.set_TabScopes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&::System::ComponentModel::PropertyTabAttribute::set_TabScopes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad54ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"set_TabScopes", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyTabAttribute::*)(::System::Object*)>(&::System::ComponentModel::PropertyTabAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad55000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyTabAttribute::*)(::System::ComponentModel::PropertyTabAttribute*)>(&::System::ComponentModel::PropertyTabAttribute::Equals)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xad5508c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"Equals", {}, {::i2c::type_of<::System::ComponentModel::PropertyTabAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::PropertyTabAttribute::*)()>(&::System::ComponentModel::PropertyTabAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad55214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.InitializeArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::StringW>, ::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&::System::ComponentModel::PropertyTabAttribute::InitializeArrays)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad5521c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"InitializeArrays", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.InitializeArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::System::Type*>, ::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&::System::ComponentModel::PropertyTabAttribute::InitializeArrays)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad55544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"InitializeArrays", {}, {::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyTabAttribute.InitializeArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyTabAttribute::*)(::ArrayW<::StringW>, ::ArrayW<::System::Type*>, ::ArrayW<::System::ComponentModel::PropertyTabScope>)>(&::System::ComponentModel::PropertyTabAttribute::InitializeArrays)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xad55228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"InitializeArrays", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& System::ComponentModel::PropertyTabAttribute::__cordl_internal_get__tabClasses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabClasses;
}
constexpr ::ArrayW<::System::Type*> const& System::ComponentModel::PropertyTabAttribute::__cordl_internal_get__tabClasses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabClasses;
}
constexpr void System::ComponentModel::PropertyTabAttribute::__cordl_internal_set__tabClasses(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabClasses = value;
}
constexpr ::ArrayW<::StringW>& System::ComponentModel::PropertyTabAttribute::__cordl_internal_get__tabClassNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabClassNames;
}
constexpr ::ArrayW<::StringW> const& System::ComponentModel::PropertyTabAttribute::__cordl_internal_get__tabClassNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabClassNames;
}
constexpr void System::ComponentModel::PropertyTabAttribute::__cordl_internal_set__tabClassNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabClassNames = value;
}
constexpr ::ArrayW<::System::ComponentModel::PropertyTabScope>& System::ComponentModel::PropertyTabAttribute::__cordl_internal_get__TabScopes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TabScopes_k__BackingField;
}
constexpr ::ArrayW<::System::ComponentModel::PropertyTabScope> const& System::ComponentModel::PropertyTabAttribute::__cordl_internal_get__TabScopes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TabScopes_k__BackingField;
}
constexpr void System::ComponentModel::PropertyTabAttribute::__cordl_internal_set__TabScopes_k__BackingField(::ArrayW<::System::ComponentModel::PropertyTabScope>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TabScopes_k__BackingField = value;
}
inline void System::ComponentModel::PropertyTabAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::PropertyTabAttribute::_ctor(::System::Type*  tabClass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClass);
}
inline void System::ComponentModel::PropertyTabAttribute::_ctor(::StringW  tabClassName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClassName);
}
inline void System::ComponentModel::PropertyTabAttribute::_ctor(::System::Type*  tabClass, ::System::ComponentModel::PropertyTabScope  tabScope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::PropertyTabScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClass, tabScope);
}
inline void System::ComponentModel::PropertyTabAttribute::_ctor(::StringW  tabClassName, ::System::ComponentModel::PropertyTabScope  tabScope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ComponentModel::PropertyTabScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClassName, tabScope);
}
inline ::ArrayW<::System::Type*> System::ComponentModel::PropertyTabAttribute::get_TabClasses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"get_TabClasses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::ComponentModel::PropertyTabAttribute::get_TabClassNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"get_TabClassNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::System::ComponentModel::PropertyTabScope> System::ComponentModel::PropertyTabAttribute::get_TabScopes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"get_TabScopes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::PropertyTabScope>>(this, ___internal_method);
}
inline void System::ComponentModel::PropertyTabAttribute::set_TabScopes(::ArrayW<::System::ComponentModel::PropertyTabScope>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"set_TabScopes", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::PropertyTabAttribute::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool System::ComponentModel::PropertyTabAttribute::Equals(::System::ComponentModel::PropertyTabAttribute*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"Equals", {}, {::i2c::type_of<::System::ComponentModel::PropertyTabAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::ComponentModel::PropertyTabAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::ComponentModel::PropertyTabAttribute::InitializeArrays(::ArrayW<::StringW>  tabClassNames, ::ArrayW<::System::ComponentModel::PropertyTabScope>  tabScopes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"InitializeArrays", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClassNames, tabScopes);
}
inline void System::ComponentModel::PropertyTabAttribute::InitializeArrays(::ArrayW<::System::Type*>  tabClasses, ::ArrayW<::System::ComponentModel::PropertyTabScope>  tabScopes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"InitializeArrays", {}, {::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClasses, tabScopes);
}
inline void System::ComponentModel::PropertyTabAttribute::InitializeArrays(::ArrayW<::StringW>  tabClassNames, ::ArrayW<::System::Type*>  tabClasses, ::ArrayW<::System::ComponentModel::PropertyTabScope>  tabScopes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyTabAttribute*>(),
                        {"InitializeArrays", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyTabScope>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tabClassNames, tabClasses, tabScopes);
}
inline ::System::ComponentModel::PropertyTabAttribute* System::ComponentModel::PropertyTabAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyTabAttribute*>());
}
inline ::System::ComponentModel::PropertyTabAttribute* System::ComponentModel::PropertyTabAttribute::New_ctor(::System::Type*  tabClass)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyTabAttribute*>(tabClass));
}
inline ::System::ComponentModel::PropertyTabAttribute* System::ComponentModel::PropertyTabAttribute::New_ctor(::StringW  tabClassName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyTabAttribute*>(tabClassName));
}
inline ::System::ComponentModel::PropertyTabAttribute* System::ComponentModel::PropertyTabAttribute::New_ctor(::System::Type*  tabClass, ::System::ComponentModel::PropertyTabScope  tabScope)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyTabAttribute*>(tabClass, tabScope));
}
inline ::System::ComponentModel::PropertyTabAttribute* System::ComponentModel::PropertyTabAttribute::New_ctor(::StringW  tabClassName, ::System::ComponentModel::PropertyTabScope  tabScope)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyTabAttribute*>(tabClassName, tabScope));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyTabAttribute::PropertyTabAttribute()   {
}
