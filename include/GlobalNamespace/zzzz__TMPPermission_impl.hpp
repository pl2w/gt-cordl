#pragma once
// IWYU pragma private; include "GlobalNamespace/TMPPermission.hpp"
#include "GlobalNamespace/zzzz__ManagedBy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TMPPermission_def.hpp"
#include "GlobalNamespace/zzzz__ManagedBy_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMPPermission.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TMPPermission::*)()>(&::GlobalNamespace::TMPPermission::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2610c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPPermission.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPPermission::*)(::StringW)>(&::GlobalNamespace::TMPPermission::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPPermission.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TMPPermission::*)()>(&::GlobalNamespace::TMPPermission::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2611c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPPermission.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPPermission::*)(bool)>(&::GlobalNamespace::TMPPermission::set_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPPermission.get_ManagedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ManagedBy (::GlobalNamespace::TMPPermission::*)()>(&::GlobalNamespace::TMPPermission::get_ManagedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"get_ManagedBy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPPermission.set_ManagedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPPermission::*)(::GlobalNamespace::ManagedBy)>(&::GlobalNamespace::TMPPermission::set_ManagedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"set_ManagedBy", {}, {::i2c::type_of<::GlobalNamespace::ManagedBy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TMPPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMPPermission::*)()>(&::GlobalNamespace::TMPPermission::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2613c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TMPPermission::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::TMPPermission::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void GlobalNamespace::TMPPermission::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr bool& GlobalNamespace::TMPPermission::__cordl_internal_get__Enabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::TMPPermission::__cordl_internal_get__Enabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled_k__BackingField;
}
constexpr void GlobalNamespace::TMPPermission::__cordl_internal_set__Enabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled_k__BackingField = value;
}
constexpr ::GlobalNamespace::ManagedBy& GlobalNamespace::TMPPermission::__cordl_internal_get__ManagedBy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedBy_k__BackingField;
}
constexpr ::GlobalNamespace::ManagedBy const& GlobalNamespace::TMPPermission::__cordl_internal_get__ManagedBy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedBy_k__BackingField;
}
constexpr void GlobalNamespace::TMPPermission::__cordl_internal_set__ManagedBy_k__BackingField(::GlobalNamespace::ManagedBy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ManagedBy_k__BackingField = value;
}
inline ::StringW GlobalNamespace::TMPPermission::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TMPPermission::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TMPPermission::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TMPPermission::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ManagedBy GlobalNamespace::TMPPermission::get_ManagedBy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"get_ManagedBy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ManagedBy>(this, ___internal_method);
}
inline void GlobalNamespace::TMPPermission::set_ManagedBy(::GlobalNamespace::ManagedBy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {"set_ManagedBy", {}, {::i2c::type_of<::GlobalNamespace::ManagedBy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TMPPermission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMPPermission*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TMPPermission* GlobalNamespace::TMPPermission::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TMPPermission*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMPPermission::TMPPermission()   {
}
