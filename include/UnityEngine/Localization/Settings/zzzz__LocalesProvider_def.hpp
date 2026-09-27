#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalesProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalesProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
namespace UnityEngine::Localization::Settings {
class IReset;
}
namespace UnityEngine::Localization {
class IPreloadRequired;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class LocalesProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::LocalesProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::LocalesProvider*, "UnityEngine.Localization.Settings", "LocalesProvider");
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalesProvider
class CORDL_TYPE LocalesProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Locales)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  Locales;

 __declspec(property(get=get_PreloadOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  PreloadOperation;

/// @brief Field m_LoadOperation, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadOperation, put=__cordl_internal_set_m_LoadOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_LoadOperation;

/// @brief Field m_Locales, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Locales, put=__cordl_internal_set_m_Locales)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  m_Locales;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::IPreloadRequired"
constexpr operator  ::UnityEngine::Localization::IPreloadRequired*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::ILocalesProvider"
constexpr operator  ::UnityEngine::Localization::Settings::ILocalesProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IReset"
constexpr operator  ::UnityEngine::Localization::Settings::IReset*() noexcept;

/// @brief Method AddLocale, addr 0xb01dec0, size 0x318, virtual true, abstract: false, final true
inline void AddLocale(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method Finalize, addr 0xb01e3b8, size 0x98, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindFallbackLocale, addr 0xb01dd30, size 0x114, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> FindFallbackLocale(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method GetLocale, addr 0xb01de44, size 0x4c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetLocale(::StringW  code) ;

/// @brief Method GetLocale, addr 0xb01db10, size 0x220, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::Locale> GetLocale(::UnityEngine::Localization::LocaleIdentifier  id) ;

/// @brief Method GetLocale, addr 0xb01de90, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetLocale(::UnityEngine::SystemLanguage  systemLanguage) ;

static inline ::UnityEngine::Localization::Settings::LocalesProvider* New_ctor() ;

/// @brief Method RemoveLocale, addr 0xb01e1d8, size 0xdc, virtual true, abstract: false, final true
inline bool RemoveLocale(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method ResetState, addr 0xb01e348, size 0x70, virtual true, abstract: false, final true
inline void ResetState() ;

/// @brief Method System.IDisposable.Dispose, addr 0xb01e450, size 0xb8, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_m_LoadOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_m_LoadOperation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get_m_Locales() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get_m_Locales() ;

constexpr void __cordl_internal_set_m_LoadOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set_m_Locales(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

/// @brief Method .ctor, addr 0xb01e508, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Locales, addr 0xb01d8c8, size 0x74, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* get_Locales() ;

/// @brief Method get_PreloadOperation, addr 0xb01d9bc, size 0x154, virtual true, abstract: false, final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_PreloadOperation() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::IPreloadRequired"
constexpr ::UnityEngine::Localization::IPreloadRequired* i___UnityEngine__Localization__IPreloadRequired() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Settings::ILocalesProvider"
constexpr ::UnityEngine::Localization::Settings::ILocalesProvider* i___UnityEngine__Localization__Settings__ILocalesProvider() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Settings::IReset"
constexpr ::UnityEngine::Localization::Settings::IReset* i___UnityEngine__Localization__Settings__IReset() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalesProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalesProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalesProvider(LocalesProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalesProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalesProvider(LocalesProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25105};

/// @brief Field m_Locales, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  ___m_Locales;

/// @brief Field m_LoadOperation, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ___m_LoadOperation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::LocalesProvider, ___m_Locales) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalesProvider, ___m_LoadOperation) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::LocalesProvider) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
