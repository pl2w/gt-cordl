#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsProperty)
namespace System::Configuration {
class SettingsAttributeDictionary;
}
namespace System::Configuration {
class SettingsProvider;
}
namespace System::Configuration {
struct SettingsSerializeAs;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Configuration {
class SettingsProperty;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsProperty*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsProperty*, "System.Configuration", "SettingsProperty");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsProperty
class CORDL_TYPE SettingsProperty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Attributes)) ::System::Configuration::SettingsAttributeDictionary*  Attributes;

 __declspec(property(get=get_DefaultValue, put=set_DefaultValue)) ::System::Object*  DefaultValue;

 __declspec(property(get=get_IsReadOnly, put=set_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_PropertyType, put=set_PropertyType)) ::System::Type*  PropertyType;

 __declspec(property(get=get_Provider, put=set_Provider)) ::System::Configuration::SettingsProvider*  Provider;

 __declspec(property(get=get_SerializeAs, put=set_SerializeAs)) ::System::Configuration::SettingsSerializeAs  SerializeAs;

 __declspec(property(get=get_ThrowOnErrorDeserializing, put=set_ThrowOnErrorDeserializing)) bool  ThrowOnErrorDeserializing;

 __declspec(property(get=get_ThrowOnErrorSerializing, put=set_ThrowOnErrorSerializing)) bool  ThrowOnErrorSerializing;

static inline ::System::Configuration::SettingsProperty* New_ctor(::StringW  name) ;

static inline ::System::Configuration::SettingsProperty* New_ctor(::StringW  name, ::System::Type*  propertyType, ::System::Configuration::SettingsProvider*  provider, bool  isReadOnly, ::System::Object*  defaultValue, ::System::Configuration::SettingsSerializeAs  serializeAs, ::System::Configuration::SettingsAttributeDictionary*  attributes, bool  throwOnErrorDeserializing, bool  throwOnErrorSerializing) ;

static inline ::System::Configuration::SettingsProperty* New_ctor(::System::Configuration::SettingsProperty*  propertyToCopy) ;

/// @brief Method .ctor, addr 0xacf6c9c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0xacf6cd4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Type*  propertyType, ::System::Configuration::SettingsProvider*  provider, bool  isReadOnly, ::System::Object*  defaultValue, ::System::Configuration::SettingsSerializeAs  serializeAs, ::System::Configuration::SettingsAttributeDictionary*  attributes, bool  throwOnErrorDeserializing, bool  throwOnErrorSerializing) ;

/// @brief Method .ctor, addr 0xacf6c64, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SettingsProperty*  propertyToCopy) ;

/// @brief Method get_Attributes, addr 0xacf6d0c, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsAttributeDictionary* get_Attributes() ;

/// @brief Method get_DefaultValue, addr 0xacf6d44, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* get_DefaultValue() ;

/// @brief Method get_IsReadOnly, addr 0xacf6db4, size 0x38, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0xacf6e24, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_PropertyType, addr 0xacf6e94, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* get_PropertyType() ;

/// @brief Method get_Provider, addr 0xacf6f04, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsProvider* get_Provider() ;

/// @brief Method get_SerializeAs, addr 0xacf6f74, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsSerializeAs get_SerializeAs() ;

/// @brief Method get_ThrowOnErrorDeserializing, addr 0xacf6fe4, size 0x38, virtual false, abstract: false, final false
inline bool get_ThrowOnErrorDeserializing() ;

/// @brief Method get_ThrowOnErrorSerializing, addr 0xacf7054, size 0x38, virtual false, abstract: false, final false
inline bool get_ThrowOnErrorSerializing() ;

/// @brief Method set_DefaultValue, addr 0xacf6d7c, size 0x38, virtual true, abstract: false, final false
inline void set_DefaultValue(::System::Object*  value) ;

/// @brief Method set_IsReadOnly, addr 0xacf6dec, size 0x38, virtual true, abstract: false, final false
inline void set_IsReadOnly(bool  value) ;

/// @brief Method set_Name, addr 0xacf6e5c, size 0x38, virtual true, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_PropertyType, addr 0xacf6ecc, size 0x38, virtual true, abstract: false, final false
inline void set_PropertyType(::System::Type*  value) ;

/// @brief Method set_Provider, addr 0xacf6f3c, size 0x38, virtual true, abstract: false, final false
inline void set_Provider(::System::Configuration::SettingsProvider*  value) ;

/// @brief Method set_SerializeAs, addr 0xacf6fac, size 0x38, virtual true, abstract: false, final false
inline void set_SerializeAs(::System::Configuration::SettingsSerializeAs  value) ;

/// @brief Method set_ThrowOnErrorDeserializing, addr 0xacf701c, size 0x38, virtual false, abstract: false, final false
inline void set_ThrowOnErrorDeserializing(bool  value) ;

/// @brief Method set_ThrowOnErrorSerializing, addr 0xacf708c, size 0x38, virtual false, abstract: false, final false
inline void set_ThrowOnErrorSerializing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsProperty(SettingsProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsProperty(SettingsProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsProperty) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
