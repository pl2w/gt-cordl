#pragma once
// IWYU pragma private; include "Modio/ModioSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioSettings)
// Forward declare root types
namespace Modio {
class ModioSettings;
}
// Write type traits
MARK_REF_T(::Modio::ModioSettings*);
DEFINE_IL2CPP_CLASS(::Modio::ModioSettings*, "Modio", "ModioSettings");
// Dependencies Modio.IModioServiceSettings, Modio.LogLevel, System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioSettings
class CORDL_TYPE ModioSettings : public ::System::Object {
public:
// Declarations
/// @brief Field APIKey, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_APIKey, put=__cordl_internal_set_APIKey)) ::StringW  APIKey;

/// @brief Field DefaultLanguage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultLanguage, put=__cordl_internal_set_DefaultLanguage)) ::StringW  DefaultLanguage;

/// @brief Field GameId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameId, put=__cordl_internal_set_GameId)) int64_t  GameId;

/// @brief Field LogLevel, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogLevel, put=__cordl_internal_set_LogLevel)) ::Modio::LogLevel  LogLevel;

/// @brief Field PlatformSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlatformSettings, put=__cordl_internal_set_PlatformSettings)) ::ArrayW<::Modio::IModioServiceSettings*>  PlatformSettings;

/// @brief Field ServerURL, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerURL, put=__cordl_internal_set_ServerURL)) ::StringW  ServerURL;

/// @brief Method GetPlatformSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*>)
inline T GetPlatformSettings() ;

static inline ::Modio::ModioSettings* New_ctor() ;

/// @brief Method ShallowClone, addr 0xa01ba34, size 0x84, virtual false, abstract: false, final false
inline ::Modio::ModioSettings* ShallowClone() ;

/// @brief Method TryGetPlatformSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*>)
inline bool TryGetPlatformSettings(::by_ref<T>  settings) ;

constexpr ::StringW const& __cordl_internal_get_APIKey() const;

constexpr ::StringW& __cordl_internal_get_APIKey() ;

constexpr ::StringW const& __cordl_internal_get_DefaultLanguage() const;

constexpr ::StringW& __cordl_internal_get_DefaultLanguage() ;

constexpr int64_t const& __cordl_internal_get_GameId() const;

constexpr int64_t& __cordl_internal_get_GameId() ;

constexpr ::Modio::LogLevel const& __cordl_internal_get_LogLevel() const;

constexpr ::Modio::LogLevel& __cordl_internal_get_LogLevel() ;

constexpr ::ArrayW<::Modio::IModioServiceSettings*> const& __cordl_internal_get_PlatformSettings() const;

constexpr ::ArrayW<::Modio::IModioServiceSettings*>& __cordl_internal_get_PlatformSettings() ;

constexpr ::StringW const& __cordl_internal_get_ServerURL() const;

constexpr ::StringW& __cordl_internal_get_ServerURL() ;

constexpr void __cordl_internal_set_APIKey(::StringW  value) ;

constexpr void __cordl_internal_set_DefaultLanguage(::StringW  value) ;

constexpr void __cordl_internal_set_GameId(int64_t  value) ;

constexpr void __cordl_internal_set_LogLevel(::Modio::LogLevel  value) ;

constexpr void __cordl_internal_set_PlatformSettings(::ArrayW<::Modio::IModioServiceSettings*>  value) ;

constexpr void __cordl_internal_set_ServerURL(::StringW  value) ;

/// @brief Method .ctor, addr 0xa01bab8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioSettings(ModioSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioSettings(ModioSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17518};

/// @brief Field GameId, offset: 0x10, size: 0x8, def value: None
 int64_t  ___GameId;

/// @brief Field APIKey, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___APIKey;

/// @brief Field ServerURL, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ServerURL;

/// @brief Field DefaultLanguage, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DefaultLanguage;

/// @brief Field LogLevel, offset: 0x30, size: 0x1, def value: None
 ::Modio::LogLevel  ___LogLevel;

/// @brief Field PlatformSettings, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Modio::IModioServiceSettings*>  ___PlatformSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModioSettings, ___GameId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::ModioSettings, ___APIKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::ModioSettings, ___ServerURL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::ModioSettings, ___DefaultLanguage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::ModioSettings, ___LogLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::ModioSettings, ___PlatformSettings) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::ModioSettings) == 0x40, "Size mismatch!");

} // namespace end def Modio
