#pragma once
// IWYU pragma private; include "UnityEngine/Localization/DisplayNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Localization/zzzz__DisplayNameAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::DisplayNameAttribute.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::DisplayNameAttribute::*)()>(&::UnityEngine::Localization::DisplayNameAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::DisplayNameAttribute.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::DisplayNameAttribute::*)(::StringW)>(&::UnityEngine::Localization::DisplayNameAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::DisplayNameAttribute.get_IconPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::DisplayNameAttribute::*)()>(&::UnityEngine::Localization::DisplayNameAttribute::get_IconPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"get_IconPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::DisplayNameAttribute.set_IconPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::DisplayNameAttribute::*)(::StringW)>(&::UnityEngine::Localization::DisplayNameAttribute::set_IconPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"set_IconPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::DisplayNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::DisplayNameAttribute::*)(::StringW, ::StringW)>(&::UnityEngine::Localization::DisplayNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb00d05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::DisplayNameAttribute::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::DisplayNameAttribute::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Localization::DisplayNameAttribute::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Localization::DisplayNameAttribute::__cordl_internal_get__IconPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IconPath_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::DisplayNameAttribute::__cordl_internal_get__IconPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IconPath_k__BackingField;
}
constexpr void UnityEngine::Localization::DisplayNameAttribute::__cordl_internal_set__IconPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IconPath_k__BackingField = value;
}
inline ::StringW UnityEngine::Localization::DisplayNameAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::DisplayNameAttribute::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::DisplayNameAttribute::get_IconPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"get_IconPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::DisplayNameAttribute::set_IconPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {"set_IconPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::DisplayNameAttribute::_ctor(::StringW  name, ::StringW  iconPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::DisplayNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, iconPath);
}
inline ::UnityEngine::Localization::DisplayNameAttribute* UnityEngine::Localization::DisplayNameAttribute::New_ctor(::StringW  name, ::StringW  iconPath)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::DisplayNameAttribute*>(name, iconPath));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::DisplayNameAttribute::DisplayNameAttribute()   {
}
