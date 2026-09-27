#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/VariableNameValuePair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VariableNameValuePair)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariableNameValuePair;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "VariableNameValuePair");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.VariableNameValuePair
class CORDL_TYPE VariableNameValuePair : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field variable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_variable, put=__cordl_internal_set_variable)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  variable;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair* New_ctor() ;

/// @brief Method ToString, addr 0xb04a160, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* const& __cordl_internal_get_variable() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*& __cordl_internal_get_variable() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_variable(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value) ;

/// @brief Method .ctor, addr 0xb04a1e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VariableNameValuePair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VariableNameValuePair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VariableNameValuePair(VariableNameValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VariableNameValuePair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VariableNameValuePair(VariableNameValuePair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25278};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// [SerializeReference]
/// @brief Field variable, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  ___variable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair, ___variable) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
