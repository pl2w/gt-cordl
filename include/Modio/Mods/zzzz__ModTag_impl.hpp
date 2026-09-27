#pragma once
// IWYU pragma private; include "Modio/Mods/ModTag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModTagObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::ModTag.get_NameLocalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::ModTag::*)()>(&::Modio::Mods::ModTag::get_NameLocalized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"get_NameLocalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.set_NameLocalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModTag::*)(::StringW)>(&::Modio::Mods::ModTag::set_NameLocalized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03189c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"set_NameLocalized", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::ModTag::*)()>(&::Modio::Mods::ModTag::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0318a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.set_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModTag::*)(bool)>(&::Modio::Mods::ModTag::set_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0318ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::ModTag::*)()>(&::Modio::Mods::ModTag::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0318b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModTag::*)(int32_t)>(&::Modio::Mods::ModTag::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0318bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModTag::*)(::StringW)>(&::Modio::Mods::ModTag::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa0318c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModTag::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, bool, int32_t)>(&::Modio::Mods::ModTag::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa0318f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModTag* (*)(::Modio::API::SchemaDefinitions::ModTagObject)>(&::Modio::Mods::ModTag::Get)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa031970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"Get", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModTagObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModTag* (*)(::StringW)>(&::Modio::Mods::ModTag::Get)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa026cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModTag.SetLocalizations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModTag::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Modio::Mods::ModTag::SetLocalizations)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa026ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"SetLocalizations", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Mods::ModTag::__cordl_internal_get_ApiName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiName;
}
constexpr ::StringW const& Modio::Mods::ModTag::__cordl_internal_get_ApiName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiName;
}
constexpr void Modio::Mods::ModTag::__cordl_internal_set_ApiName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApiName = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::Mods::ModTag::__cordl_internal_get__translations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::Mods::ModTag::__cordl_internal_get__translations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translations;
}
constexpr void Modio::Mods::ModTag::__cordl_internal_set__translations(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____translations = value;
}
constexpr ::StringW& Modio::Mods::ModTag::__cordl_internal_get__NameLocalized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NameLocalized_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::ModTag::__cordl_internal_get__NameLocalized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NameLocalized_k__BackingField;
}
constexpr void Modio::Mods::ModTag::__cordl_internal_set__NameLocalized_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NameLocalized_k__BackingField = value;
}
constexpr bool& Modio::Mods::ModTag::__cordl_internal_get__IsVisible_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsVisible_k__BackingField;
}
constexpr bool const& Modio::Mods::ModTag::__cordl_internal_get__IsVisible_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsVisible_k__BackingField;
}
constexpr void Modio::Mods::ModTag::__cordl_internal_set__IsVisible_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsVisible_k__BackingField = value;
}
constexpr int32_t& Modio::Mods::ModTag::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr int32_t const& Modio::Mods::ModTag::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr void Modio::Mods::ModTag::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
inline void Modio::Mods::ModTag::setStaticF_Tags(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>*, "Tags", ::Modio::Mods::ModTag*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>* Modio::Mods::ModTag::getStaticF_Tags()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>*, "Tags", ::Modio::Mods::ModTag*>();
}
inline ::StringW Modio::Mods::ModTag::get_NameLocalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"get_NameLocalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::ModTag::set_NameLocalized(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"set_NameLocalized", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::ModTag::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::ModTag::set_IsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Mods::ModTag::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Mods::ModTag::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::ModTag::_ctor(::StringW  apiName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, apiName);
}
inline void Modio::Mods::ModTag::_ctor(::StringW  apiName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations, ::StringW  nameLocalized, bool  isVisible, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, apiName, translations, nameLocalized, isVisible, count);
}
inline ::Modio::Mods::ModTag* Modio::Mods::ModTag::Get(::Modio::API::SchemaDefinitions::ModTagObject  modTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"Get", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModTagObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModTag*>(nullptr, ___internal_method, modTag);
}
inline ::Modio::Mods::ModTag* Modio::Mods::ModTag::Get(::StringW  tagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModTag*>(nullptr, ___internal_method, tagName);
}
inline void Modio::Mods::ModTag::SetLocalizations(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModTag*>(),
                        {"SetLocalizations", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translations);
}
inline ::Modio::Mods::ModTag* Modio::Mods::ModTag::New_ctor(::StringW  apiName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModTag*>(apiName));
}
/// @brief [JsonConstructor]
inline ::Modio::Mods::ModTag* Modio::Mods::ModTag::New_ctor(::StringW  apiName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations, ::StringW  nameLocalized, bool  isVisible, int32_t  count)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModTag*>(apiName, translations, nameLocalized, isVisible, count));
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModTag::ModTag()   {
}
