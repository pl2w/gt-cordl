#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/Provider/zzzz__ProviderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsProvider)
namespace System::Configuration {
class SettingsContext;
}
namespace System::Configuration {
class SettingsPropertyCollection;
}
namespace System::Configuration {
class SettingsPropertyValueCollection;
}
// Forward declare root types
namespace System::Configuration {
class SettingsProvider;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsProvider*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsProvider*, "System.Configuration", "SettingsProvider");
// Dependencies System.Configuration.Provider.ProviderBase
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsProvider
class CORDL_TYPE SettingsProvider : public ::System::Configuration::Provider::ProviderBase {
public:
// Declarations
 __declspec(property(get=get_ApplicationName, put=set_ApplicationName)) ::StringW  ApplicationName;

/// @brief Method GetPropertyValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  collection) ;

static inline ::System::Configuration::SettingsProvider* New_ctor() ;

/// @brief Method SetPropertyValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyValueCollection*  collection) ;

/// @brief Method .ctor, addr 0xacf70c4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplicationName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ApplicationName() ;

/// @brief Method set_ApplicationName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ApplicationName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsProvider(SettingsProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsProvider(SettingsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsProvider) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
