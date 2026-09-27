#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/IMetadataVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMetadataVariable)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IMetadataVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "IMetadataVariable");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.IMetadataVariable
class CORDL_TYPE IMetadataVariable {
public:
// Declarations
 __declspec(property(get=get_VariableName)) ::StringW  VariableName;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// @brief Method get_VariableName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_VariableName() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IMetadataVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMetadataVariable(IMetadataVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25275};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
