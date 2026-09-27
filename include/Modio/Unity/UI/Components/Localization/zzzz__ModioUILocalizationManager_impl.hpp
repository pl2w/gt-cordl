#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Localization/ModioUILocalizationManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizationManager_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizationManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.get_LocalizationExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::get_LocalizationExists)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fc9aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"get_LocalizationExists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.get_LocalizationReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::get_LocalizationReady)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9fc9b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"get_LocalizationReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.add_LanguageSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::add_LanguageSet)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fc9be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"add_LanguageSet", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.remove_LanguageSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::remove_LanguageSet)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9fc9d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"remove_LanguageSet", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.add_LanguageSetInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::add_LanguageSetInternal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9fc9c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"add_LanguageSetInternal", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.remove_LanguageSetInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::remove_LanguageSetInternal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9fc9db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"remove_LanguageSetInternal", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.get_CultureInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::get_CultureInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fc9e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"get_CultureInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.set_CultureInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::CultureInfo*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::set_CultureInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fc9eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"set_CultureInfo", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.SetCustomHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::SetCustomHandler)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fc9f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"SetCustomHandler", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.SetLanguageCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::*)(::StringW)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::SetLanguageCode)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x9fc9ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"SetLanguageCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.GetLocalizedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::GetLocalizedText)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9fca4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"GetLocalizedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::Awake)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x9fca694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fcab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager.OnPluginInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::OnPluginInitialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fcab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"OnPluginInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::*)()>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fcac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextAsset>& Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::__cordl_internal_get__locTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locTable;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::__cordl_internal_get__locTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locTable;
}
constexpr void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::__cordl_internal_set__locTable(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locTable = value;
}
constexpr bool& Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::__cordl_internal_get__setCurrentSystemCulture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setCurrentSystemCulture;
}
constexpr bool const& Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::__cordl_internal_get__setCurrentSystemCulture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setCurrentSystemCulture;
}
constexpr void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::__cordl_internal_set__setCurrentSystemCulture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setCurrentSystemCulture = value;
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::setStaticF_customLocalizationHandler(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*, "customLocalizationHandler", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(std::forward<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(value));
}
inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::getStaticF_customLocalizationHandler()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*, "customLocalizationHandler", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>();
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::setStaticF__languageCode(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_languageCode", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(std::forward<::StringW>(value));
}
inline ::StringW Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::getStaticF__languageCode()  {
return ::cordl_internals::getStaticField<::StringW, "_languageCode", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>();
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::setStaticF__languageTables(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, "_languageTables", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::getStaticF__languageTables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, "_languageTables", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>();
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::setStaticF__currentTable(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "_currentTable", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::getStaticF__currentTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "_currentTable", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>();
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::setStaticF_LanguageSetInternal(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "LanguageSetInternal", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::getStaticF_LanguageSetInternal()  {
return ::cordl_internals::getStaticField<::System::Action*, "LanguageSetInternal", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>();
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::setStaticF__CultureInfo_k__BackingField(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "<CultureInfo>k__BackingField", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::getStaticF__CultureInfo_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "<CultureInfo>k__BackingField", ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>();
}
inline bool Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::get_LocalizationExists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"get_LocalizationExists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::get_LocalizationReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"get_LocalizationReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::add_LanguageSet(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"add_LanguageSet", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::remove_LanguageSet(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"remove_LanguageSet", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::add_LanguageSetInternal(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"add_LanguageSetInternal", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::remove_LanguageSetInternal(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"remove_LanguageSetInternal", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::get_CultureInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"get_CultureInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::set_CultureInfo(::System::Globalization::CultureInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"set_CultureInfo", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::SetCustomHandler(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"SetCustomHandler", {}, {::i2c::type_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::SetLanguageCode(::StringW  isoCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"SetLanguageCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isoCode);
}
inline ::StringW Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::GetLocalizedText(::StringW  key, bool  errorIfMissing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"GetLocalizedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, errorIfMissing);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::OnPluginInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {"OnPluginInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager::ModioUILocalizationManager()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::*)(::System::Object*, ::System::IntPtr)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fcacbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::*)(::StringW, ::StringW)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fcad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fcad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::*)(::System::IAsyncResult*)>(&::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fcadac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::StringW Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::Invoke(::StringW  key, ::StringW  isoLanguageCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, isoLanguageCode);
}
inline ::System::IAsyncResult* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::BeginInvoke(::StringW  key, ::StringW  isoLanguageCode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, key, isoLanguageCode, callback, object);
}
inline ::StringW Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, result);
}
inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler* Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler::ModioUILocalizationManager_LocalizationHandler()   {
}
