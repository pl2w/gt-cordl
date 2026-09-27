#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyNumberBase.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatKilo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyNumberBase_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::OnModUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fc5a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase.IsCustomFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::IsCustomFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc5b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                        {"IsCustomFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc5bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::Modio::Unity::UI::StringFormatKilo& Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::Modio::Unity::UI::StringFormatKilo const& Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_set__format(::Modio::Unity::UI::StringFormatKilo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_get__customFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customFormat;
}
constexpr ::StringW const& Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_get__customFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customFormat;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::__cordl_internal_set__customFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customFormat = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline int64_t Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::GetValue(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline bool Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::IsCustomFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                        {"IsCustomFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase* Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase::ModPropertyNumberBase()   {
}
