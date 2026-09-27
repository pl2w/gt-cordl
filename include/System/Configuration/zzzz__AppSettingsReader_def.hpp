#pragma once
// IWYU pragma private; include "System/Configuration/AppSettingsReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AppSettingsReader)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Configuration {
class AppSettingsReader;
}
// Write type traits
MARK_REF_T(::System::Configuration::AppSettingsReader*);
DEFINE_IL2CPP_CLASS(::System::Configuration::AppSettingsReader*, "System.Configuration", "AppSettingsReader");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.AppSettingsReader
class CORDL_TYPE AppSettingsReader : public ::System::Object {
public:
// Declarations
/// @brief Method GetValue, addr 0xacfc188, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* GetValue(::StringW  key, ::System::Type*  type) ;

static inline ::System::Configuration::AppSettingsReader* New_ctor() ;

/// @brief Method .ctor, addr 0xacfc150, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppSettingsReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppSettingsReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppSettingsReader(AppSettingsReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppSettingsReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppSettingsReader(AppSettingsReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11022};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::AppSettingsReader) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
