#pragma once
// IWYU pragma private; include "System/Configuration/IConfigurationSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IConfigurationSystem)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class IConfigurationSystem;
}
// Write type traits
MARK_REF_T(::System::Configuration::IConfigurationSystem*);
DEFINE_IL2CPP_CLASS(::System::Configuration::IConfigurationSystem*, "System.Configuration", "IConfigurationSystem");
// [ComVisible(false)]
// Dependencies 
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IConfigurationSystem
class CORDL_TYPE IConfigurationSystem {
public:
// Declarations
/// @brief Method GetConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetConfig(::StringW  configKey) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Init() ;

// Ctor Parameters [CppParam { name: "", ty: "IConfigurationSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConfigurationSystem(IConfigurationSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
