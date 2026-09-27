#pragma once
// IWYU pragma private; include "KID/Model/Permission.hpp"
#include "KID/Model/zzzz__Permission_ManagedByEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "KID/Model/zzzz__Permission_ManagedByEnum_def.hpp"
//  Writing Method size for method: ::KID::Model::Permission.get_ManagedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Permission_ManagedByEnum (::KID::Model::Permission::*)()>(&::KID::Model::Permission::get_ManagedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"get_ManagedBy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.set_ManagedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Permission::*)(::GlobalNamespace::Permission_ManagedByEnum)>(&::KID::Model::Permission::set_ManagedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"set_ManagedBy", {}, {::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Permission::*)()>(&::KID::Model::Permission::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Permission::*)(::StringW, bool, ::GlobalNamespace::Permission_ManagedByEnum)>(&::KID::Model::Permission::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9cd8a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Permission::*)()>(&::KID::Model::Permission::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Permission::*)(::StringW)>(&::KID::Model::Permission::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::Permission::*)()>(&::KID::Model::Permission::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Permission::*)(bool)>(&::KID::Model::Permission::set_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Permission::*)()>(&::KID::Model::Permission::ToString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9cd8ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::Permission*>(),
                    {::i2c::class_of<::KID::Model::Permission*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Permission.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Permission::*)()>(&::KID::Model::Permission::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd8ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::Permission*>(),
                    {::i2c::class_of<::KID::Model::Permission*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Permission_ManagedByEnum& KID::Model::Permission::__cordl_internal_get__ManagedBy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedBy_k__BackingField;
}
constexpr ::GlobalNamespace::Permission_ManagedByEnum const& KID::Model::Permission::__cordl_internal_get__ManagedBy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedBy_k__BackingField;
}
constexpr void KID::Model::Permission::__cordl_internal_set__ManagedBy_k__BackingField(::GlobalNamespace::Permission_ManagedByEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ManagedBy_k__BackingField = value;
}
constexpr ::StringW& KID::Model::Permission::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& KID::Model::Permission::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void KID::Model::Permission::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr bool& KID::Model::Permission::__cordl_internal_get__Enabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled_k__BackingField;
}
constexpr bool const& KID::Model::Permission::__cordl_internal_get__Enabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled_k__BackingField;
}
constexpr void KID::Model::Permission::__cordl_internal_set__Enabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled_k__BackingField = value;
}
inline ::GlobalNamespace::Permission_ManagedByEnum KID::Model::Permission::get_ManagedBy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"get_ManagedBy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Permission_ManagedByEnum>(this, ___internal_method);
}
inline void KID::Model::Permission::set_ManagedBy(::GlobalNamespace::Permission_ManagedByEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"set_ManagedBy", {}, {::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::Permission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::Permission::_ctor(::StringW  name, bool  enabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, enabled, managedBy);
}
inline ::StringW KID::Model::Permission::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::Permission::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool KID::Model::Permission::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::Permission::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Permission*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Permission::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::Permission*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::Permission::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::Permission*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::Permission* KID::Model::Permission::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::Permission*>());
}
inline ::KID::Model::Permission* KID::Model::Permission::New_ctor(::StringW  name, bool  enabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::Permission*>(name, enabled, managedBy));
}
// Ctor Parameters []
constexpr ::KID::Model::Permission::Permission()   {
}
