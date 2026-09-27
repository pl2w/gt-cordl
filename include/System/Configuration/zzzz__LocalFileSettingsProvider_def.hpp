#pragma once
// IWYU pragma private; include "System/Configuration/LocalFileSettingsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__SettingsProvider_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalFileSettingsProvider)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::Configuration {
class IApplicationSettingsProvider;
}
namespace System::Configuration {
class SettingsContext;
}
namespace System::Configuration {
class SettingsPropertyCollection;
}
namespace System::Configuration {
class SettingsPropertyValueCollection;
}
namespace System::Configuration {
class SettingsPropertyValue;
}
namespace System::Configuration {
class SettingsProperty;
}
// Forward declare root types
namespace System::Configuration {
class LocalFileSettingsProvider;
}
// Write type traits
MARK_REF_T(::System::Configuration::LocalFileSettingsProvider*);
DEFINE_IL2CPP_CLASS(::System::Configuration::LocalFileSettingsProvider*, "System.Configuration", "LocalFileSettingsProvider");
// Dependencies System.Configuration.SettingsProvider
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.LocalFileSettingsProvider
class CORDL_TYPE LocalFileSettingsProvider : public ::System::Configuration::SettingsProvider {
public:
// Declarations
 __declspec(property(get=get_ApplicationName, put=set_ApplicationName)) ::StringW  ApplicationName;

/// @brief Convert operator to "::System::Configuration::IApplicationSettingsProvider"
constexpr operator  ::System::Configuration::IApplicationSettingsProvider*() noexcept;

/// @brief Method GetPreviousVersion, addr 0xacfce74, size 0x38, virtual true, abstract: false, final true
inline ::System::Configuration::SettingsPropertyValue* GetPreviousVersion(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsProperty*  property) ;

/// @brief Method GetPropertyValues, addr 0xacfceac, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties) ;

/// @brief Method Initialize, addr 0xacfcee4, size 0x38, virtual true, abstract: false, final false
inline void Initialize(::StringW  name, ::System::Collections::Specialized::NameValueCollection*  values) ;

static inline ::System::Configuration::LocalFileSettingsProvider* New_ctor() ;

/// @brief Method Reset, addr 0xacfcf1c, size 0x38, virtual true, abstract: false, final true
inline void Reset(::System::Configuration::SettingsContext*  context) ;

/// @brief Method SetPropertyValues, addr 0xacfcf54, size 0x38, virtual true, abstract: false, final false
inline void SetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyValueCollection*  values) ;

/// @brief Method Upgrade, addr 0xacfcf8c, size 0x38, virtual true, abstract: false, final true
inline void Upgrade(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties) ;

/// @brief Method .ctor, addr 0xacfcdcc, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplicationName, addr 0xacfce04, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_ApplicationName() ;

/// @brief Convert to "::System::Configuration::IApplicationSettingsProvider"
constexpr ::System::Configuration::IApplicationSettingsProvider* i___System__Configuration__IApplicationSettingsProvider() noexcept;

/// @brief Method set_ApplicationName, addr 0xacfce3c, size 0x38, virtual true, abstract: false, final false
inline void set_ApplicationName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalFileSettingsProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalFileSettingsProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalFileSettingsProvider(LocalFileSettingsProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalFileSettingsProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalFileSettingsProvider(LocalFileSettingsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::LocalFileSettingsProvider) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
