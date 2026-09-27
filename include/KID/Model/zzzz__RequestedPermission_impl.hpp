#pragma once
// IWYU pragma private; include "KID/Model/RequestedPermission.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__RequestedPermission_def.hpp"
//  Writing Method size for method: ::KID::Model::RequestedPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::RequestedPermission::*)()>(&::KID::Model::RequestedPermission::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RequestedPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::RequestedPermission::*)(::StringW)>(&::KID::Model::RequestedPermission::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cd8f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RequestedPermission.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::RequestedPermission::*)()>(&::KID::Model::RequestedPermission::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RequestedPermission.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::RequestedPermission::*)(::StringW)>(&::KID::Model::RequestedPermission::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RequestedPermission.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::RequestedPermission::*)()>(&::KID::Model::RequestedPermission::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cd8f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                    {::i2c::class_of<::KID::Model::RequestedPermission*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::RequestedPermission.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::RequestedPermission::*)()>(&::KID::Model::RequestedPermission::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd9098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                    {::i2c::class_of<::KID::Model::RequestedPermission*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::RequestedPermission::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& KID::Model::RequestedPermission::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void KID::Model::RequestedPermission::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
inline void KID::Model::RequestedPermission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::RequestedPermission::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW KID::Model::RequestedPermission::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::RequestedPermission::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::RequestedPermission*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::RequestedPermission::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::RequestedPermission*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::RequestedPermission::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::RequestedPermission*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::RequestedPermission* KID::Model::RequestedPermission::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::RequestedPermission*>());
}
inline ::KID::Model::RequestedPermission* KID::Model::RequestedPermission::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::RequestedPermission*>(name));
}
// Ctor Parameters []
constexpr ::KID::Model::RequestedPermission::RequestedPermission()   {
}
