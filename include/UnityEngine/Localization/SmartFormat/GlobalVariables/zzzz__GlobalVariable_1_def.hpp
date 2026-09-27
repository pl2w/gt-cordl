#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/GlobalVariable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
CORDL_MODULE_EXPORT(GlobalVariable_1)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
template<typename T>
class GlobalVariable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariable_1, "UnityEngine.Localization.SmartFormat.GlobalVariables", "GlobalVariable`1");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.Variable instead.")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.GlobalVariable`1<T>
class CORDL_TYPE GlobalVariable_1 : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T> {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariable_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalVariable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalVariable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalVariable_1(GlobalVariable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalVariable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalVariable_1(GlobalVariable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
