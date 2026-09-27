#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/IVariableValueChanged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVariableValueChanged)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableValueChanged;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "IVariableValueChanged");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.IVariableValueChanged
class CORDL_TYPE IVariableValueChanged {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// [CompilerGenerated]
/// @brief Method add_ValueChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_ValueChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVariableValueChanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVariableValueChanged(IVariableValueChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
