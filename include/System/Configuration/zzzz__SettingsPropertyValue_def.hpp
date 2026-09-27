#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsPropertyValue)
namespace System::Configuration {
class SettingsProperty;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SettingsPropertyValue;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsPropertyValue*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsPropertyValue*, "System.Configuration", "SettingsPropertyValue");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsPropertyValue
class CORDL_TYPE SettingsPropertyValue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Deserialized, put=set_Deserialized)) bool  Deserialized;

 __declspec(property(get=get_IsDirty, put=set_IsDirty)) bool  IsDirty;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Property)) ::System::Configuration::SettingsProperty*  Property;

 __declspec(property(get=get_PropertyValue, put=set_PropertyValue)) ::System::Object*  PropertyValue;

 __declspec(property(get=get_SerializedValue, put=set_SerializedValue)) ::System::Object*  SerializedValue;

 __declspec(property(get=get_UsingDefaultValue)) bool  UsingDefaultValue;

static inline ::System::Configuration::SettingsPropertyValue* New_ctor(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method .ctor, addr 0xacf739c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SettingsProperty*  property) ;

/// @brief Method get_Deserialized, addr 0xacf73d4, size 0x38, virtual false, abstract: false, final false
inline bool get_Deserialized() ;

/// @brief Method get_IsDirty, addr 0xacf7444, size 0x38, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

/// @brief Method get_Name, addr 0xacf74b4, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Property, addr 0xacf74ec, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsProperty* get_Property() ;

/// @brief Method get_PropertyValue, addr 0xacf7524, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* get_PropertyValue() ;

/// @brief Method get_SerializedValue, addr 0xacf7594, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* get_SerializedValue() ;

/// @brief Method get_UsingDefaultValue, addr 0xacf7604, size 0x38, virtual false, abstract: false, final false
inline bool get_UsingDefaultValue() ;

/// @brief Method set_Deserialized, addr 0xacf740c, size 0x38, virtual false, abstract: false, final false
inline void set_Deserialized(bool  value) ;

/// @brief Method set_IsDirty, addr 0xacf747c, size 0x38, virtual false, abstract: false, final false
inline void set_IsDirty(bool  value) ;

/// @brief Method set_PropertyValue, addr 0xacf755c, size 0x38, virtual false, abstract: false, final false
inline void set_PropertyValue(::System::Object*  value) ;

/// @brief Method set_SerializedValue, addr 0xacf75cc, size 0x38, virtual false, abstract: false, final false
inline void set_SerializedValue(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPropertyValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPropertyValue(SettingsPropertyValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPropertyValue(SettingsPropertyValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsPropertyValue) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
