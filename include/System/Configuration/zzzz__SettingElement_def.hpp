#pragma once
// IWYU pragma private; include "System/Configuration/SettingElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
class SettingValueElement;
}
namespace System::Configuration {
struct SettingsSerializeAs;
}
// Forward declare root types
namespace System::Configuration {
class SettingElement;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingElement*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingElement*, "System.Configuration", "SettingElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingElement
class CORDL_TYPE SettingElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_SerializeAs, put=set_SerializeAs)) ::System::Configuration::SettingsSerializeAs  SerializeAs;

 __declspec(property(get=get_Value, put=set_Value)) ::System::Configuration::SettingValueElement*  Value;

static inline ::System::Configuration::SettingElement* New_ctor() ;

static inline ::System::Configuration::SettingElement* New_ctor(::StringW  name, ::System::Configuration::SettingsSerializeAs  serializeAs) ;

/// @brief Method .ctor, addr 0xacfc460, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacfc498, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Configuration::SettingsSerializeAs  serializeAs) ;

/// @brief Method get_Name, addr 0xacfc4d0, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Properties, addr 0xacfc540, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_SerializeAs, addr 0xacfc578, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsSerializeAs get_SerializeAs() ;

/// @brief Method get_Value, addr 0xacfc5e8, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingValueElement* get_Value() ;

/// @brief Method set_Name, addr 0xacfc508, size 0x38, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_SerializeAs, addr 0xacfc5b0, size 0x38, virtual false, abstract: false, final false
inline void set_SerializeAs(::System::Configuration::SettingsSerializeAs  value) ;

/// @brief Method set_Value, addr 0xacfc620, size 0x38, virtual false, abstract: false, final false
inline void set_Value(::System::Configuration::SettingValueElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingElement(SettingElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingElement(SettingElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingElement) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
