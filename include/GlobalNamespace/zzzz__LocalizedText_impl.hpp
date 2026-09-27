#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedText.hpp"
#include "GlobalNamespace/zzzz__ELocale_impl.hpp"
#include "GlobalNamespace/zzzz__TextComponentLegacySupportStore_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizeStringEvent_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__ELocale_def.hpp"
#include "GlobalNamespace/zzzz__LocalisationFontPair_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText__OnLocaleChanged_d__12_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText__UpdateString_d__11_def.hpp"
#include "GlobalNamespace/zzzz__TextComponentLegacySupportStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.HasFontOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::HasFontOverrides)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a68e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"HasFontOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.get_TextComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextComponentLegacySupportStore (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::get_TextComponent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a68ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"get_TextComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::Awake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5a6921c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.UpdateString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW)>(&::GlobalNamespace::LocalizedText::UpdateString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a693bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                    {::i2c::class_of<::GlobalNamespace::LocalizedText*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.OnLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW)>(&::GlobalNamespace::LocalizedText::OnLocaleChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a6947c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnLocaleChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.GetLocalizedFonts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizedText::*)(::by_ref<::GlobalNamespace::LocalisationFontPair>)>(&::GlobalNamespace::LocalizedText::GetLocalizedFonts)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5a6953c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"GetLocalizedFonts", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a69730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText._Awake_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW)>(&::GlobalNamespace::LocalizedText::_Awake_b__10_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a69850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"<Awake>b__10_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW)>(&::GlobalNamespace::LocalizedText::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a69854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"<>n__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::LocalizedText::__cordl_internal_get__isLocalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocalized;
}
constexpr bool const& GlobalNamespace::LocalizedText::__cordl_internal_get__isLocalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocalized;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set__isLocalized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLocalized = value;
}
constexpr bool& GlobalNamespace::LocalizedText::__cordl_internal_get__isNewKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNewKey;
}
constexpr bool const& GlobalNamespace::LocalizedText::__cordl_internal_get__isNewKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNewKey;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set__isNewKey(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isNewKey = value;
}
constexpr ::StringW& GlobalNamespace::LocalizedText::__cordl_internal_get__newKeyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newKeyName;
}
constexpr ::StringW const& GlobalNamespace::LocalizedText::__cordl_internal_get__newKeyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newKeyName;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set__newKeyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newKeyName = value;
}
constexpr ::GlobalNamespace::ELocale& GlobalNamespace::LocalizedText::__cordl_internal_get__previewLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewLocale;
}
constexpr ::GlobalNamespace::ELocale const& GlobalNamespace::LocalizedText::__cordl_internal_get__previewLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewLocale;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set__previewLocale(::GlobalNamespace::ELocale  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewLocale = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*& GlobalNamespace::LocalizedText::__cordl_internal_get__localisationFontsOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisationFontsOverrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>* const& GlobalNamespace::LocalizedText::__cordl_internal_get__localisationFontsOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisationFontsOverrides;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set__localisationFontsOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localisationFontsOverrides = value;
}
constexpr ::GlobalNamespace::TextComponentLegacySupportStore& GlobalNamespace::LocalizedText::__cordl_internal_get__textComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textComponent;
}
constexpr ::GlobalNamespace::TextComponentLegacySupportStore const& GlobalNamespace::LocalizedText::__cordl_internal_get__textComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textComponent;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set__textComponent(::GlobalNamespace::TextComponentLegacySupportStore  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textComponent = value;
}
inline void GlobalNamespace::LocalizedText::setStaticF__cachedELocalesList(::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>*, "_cachedELocalesList", ::GlobalNamespace::LocalizedText*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>* GlobalNamespace::LocalizedText::getStaticF__cachedELocalesList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>*, "_cachedELocalesList", ::GlobalNamespace::LocalizedText*>();
}
inline bool GlobalNamespace::LocalizedText::HasFontOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"HasFontOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::TextComponentLegacySupportStore GlobalNamespace::LocalizedText::get_TextComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"get_TextComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextComponentLegacySupportStore>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::UpdateString(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LocalizedText*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalizedText::OnLocaleChanged(::StringW  newText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnLocaleChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText);
}
inline bool GlobalNamespace::LocalizedText::GetLocalizedFonts(::by_ref<::GlobalNamespace::LocalisationFontPair>  fontData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"GetLocalizedFonts", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fontData);
}
inline void GlobalNamespace::LocalizedText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::_Awake_b__10_0(::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"<Awake>b__10_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::LocalizedText::__n__0(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"<>n__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LocalizedText* GlobalNamespace::LocalizedText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedText::LocalizedText()   {
}
