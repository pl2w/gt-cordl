#pragma once
// IWYU pragma private; include "System/Configuration/SettingsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsBase)
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
class SettingsProviderCollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SettingsBase;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsBase*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsBase*, "System.Configuration", "SettingsBase");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsBase
class CORDL_TYPE SettingsBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Context)) ::System::Configuration::SettingsContext*  Context;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_Properties)) ::System::Configuration::SettingsPropertyCollection*  Properties;

 __declspec(property(get=get_PropertyValues)) ::System::Configuration::SettingsPropertyValueCollection*  PropertyValues;

 __declspec(property(get=get_Providers)) ::System::Configuration::SettingsProviderCollection*  Providers;

/// @brief Method Initialize, addr 0xacf6794, size 0x38, virtual false, abstract: false, final false
inline void Initialize(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties, ::System::Configuration::SettingsProviderCollection*  providers) ;

static inline ::System::Configuration::SettingsBase* New_ctor() ;

/// @brief Method Save, addr 0xacf67cc, size 0x38, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method Synchronized, addr 0xacf6804, size 0x38, virtual false, abstract: false, final false
static inline ::System::Configuration::SettingsBase* Synchronized(::System::Configuration::SettingsBase*  settingsBase) ;

/// @brief Method .ctor, addr 0xacf65d4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Context, addr 0xacf660c, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsContext* get_Context() ;

/// @brief Method get_IsSynchronized, addr 0xacf6644, size 0x38, virtual false, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0xacf667c, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* get_Item(::StringW  propertyName) ;

/// @brief Method get_Properties, addr 0xacf66ec, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsPropertyCollection* get_Properties() ;

/// @brief Method get_PropertyValues, addr 0xacf6724, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsPropertyValueCollection* get_PropertyValues() ;

/// @brief Method get_Providers, addr 0xacf675c, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsProviderCollection* get_Providers() ;

/// @brief Method set_Item, addr 0xacf66b4, size 0x38, virtual true, abstract: false, final false
inline void set_Item(::StringW  propertyName, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsBase(SettingsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsBase(SettingsBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsBase) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
