#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProviderCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/Provider/zzzz__ProviderCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsProviderCollection)
namespace System::Configuration::Provider {
class ProviderBase;
}
namespace System::Configuration {
class SettingsProvider;
}
// Forward declare root types
namespace System::Configuration {
class SettingsProviderCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsProviderCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsProviderCollection*, "System.Configuration", "SettingsProviderCollection");
// [DefaultMember("Item")]
// Dependencies System.Configuration.Provider.ProviderCollection
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsProviderCollection
class CORDL_TYPE SettingsProviderCollection : public ::System::Configuration::Provider::ProviderCollection {
public:
// Declarations
 __declspec(property(get=get_Item)) ::System::Configuration::SettingsProvider*  Item[];

/// @brief Method Add, addr 0xacf771c, size 0x38, virtual true, abstract: false, final false
inline void Add(::System::Configuration::Provider::ProviderBase*  provider) ;

static inline ::System::Configuration::SettingsProviderCollection* New_ctor() ;

/// @brief Method .ctor, addr 0xacf76ac, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xacf76e4, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsProvider* get_Item(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsProviderCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsProviderCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsProviderCollection(SettingsProviderCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsProviderCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsProviderCollection(SettingsProviderCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10972};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsProviderCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
