#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/GlobalVariablesSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PersistentVariablesSource_def.hpp"
CORDL_MODULE_EXPORT(GlobalVariablesSource)
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class GlobalVariablesSource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource*, "UnityEngine.Localization.SmartFormat.Extensions", "GlobalVariablesSource");
// [Obsolete("Please use PersistentVariablesSource instead (UnityUpgradable) -> PersistentVariablesSource")]
// Dependencies UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.GlobalVariablesSource
class CORDL_TYPE GlobalVariablesSource : public ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method .ctor, addr 0xb03c5d8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalVariablesSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalVariablesSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalVariablesSource(GlobalVariablesSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalVariablesSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalVariablesSource(GlobalVariablesSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
