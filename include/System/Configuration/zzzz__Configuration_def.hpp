#pragma once
// IWYU pragma private; include "System/Configuration/Configuration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Configuration)
// Forward declare root types
namespace System::Configuration {
class Configuration;
}
// Write type traits
MARK_REF_T(::System::Configuration::Configuration*);
DEFINE_IL2CPP_CLASS(::System::Configuration::Configuration*, "System.Configuration", "Configuration");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.Configuration
class CORDL_TYPE Configuration : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Configuration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Configuration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Configuration(Configuration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Configuration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Configuration(Configuration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33062};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::Configuration) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
