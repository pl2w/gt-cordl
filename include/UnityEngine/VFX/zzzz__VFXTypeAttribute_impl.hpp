#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_Usage_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_Usage_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXTypeAttribute::*)(::GlobalNamespace::VFXTypeAttribute_Usage, ::StringW)>(&::UnityEngine::VFX::VFXTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb3d6540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VFXTypeAttribute_Usage>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.get_usages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VFXTypeAttribute_Usage (::UnityEngine::VFX::VFXTypeAttribute::*)()>(&::UnityEngine::VFX::VFXTypeAttribute::get_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d6578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"get_usages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.set_usages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXTypeAttribute::*)(::GlobalNamespace::VFXTypeAttribute_Usage)>(&::UnityEngine::VFX::VFXTypeAttribute::set_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d6580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"set_usages", {}, {::i2c::type_of<::GlobalNamespace::VFXTypeAttribute_Usage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::VFXTypeAttribute::*)()>(&::UnityEngine::VFX::VFXTypeAttribute::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d6588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXTypeAttribute::*)(::StringW)>(&::UnityEngine::VFX::VFXTypeAttribute::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__usages_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usages_k__BackingField;
}
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage const& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__usages_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usages_k__BackingField;
}
constexpr void UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_set__usages_k__BackingField(::GlobalNamespace::VFXTypeAttribute_Usage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usages_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr void UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_set__name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name_k__BackingField = value;
}
inline void UnityEngine::VFX::VFXTypeAttribute::_ctor(::GlobalNamespace::VFXTypeAttribute_Usage  usages, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VFXTypeAttribute_Usage>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usages, name);
}
inline ::GlobalNamespace::VFXTypeAttribute_Usage UnityEngine::VFX::VFXTypeAttribute::get_usages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"get_usages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VFXTypeAttribute_Usage>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXTypeAttribute::set_usages(::GlobalNamespace::VFXTypeAttribute_Usage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"set_usages", {}, {::i2c::type_of<::GlobalNamespace::VFXTypeAttribute_Usage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::VFXTypeAttribute::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXTypeAttribute::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::VFX::VFXTypeAttribute* UnityEngine::VFX::VFXTypeAttribute::New_ctor(::GlobalNamespace::VFXTypeAttribute_Usage  usages, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXTypeAttribute*>(usages, name));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXTypeAttribute::VFXTypeAttribute()   {
}
