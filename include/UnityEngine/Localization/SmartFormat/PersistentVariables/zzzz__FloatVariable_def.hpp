#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/FloatVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class FloatVariable_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class FloatVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class FloatVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "FloatVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable_UxmlSerializedData*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "FloatVariable/UxmlSerializedData");
// [UxmlObject]
// [DisplayName("Float", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.FloatVariable
class CORDL_TYPE FloatVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<float_t> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable_UxmlSerializedData;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb049d14, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatVariable(FloatVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatVariable(FloatVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// [DisplayName("Float", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1::UxmlSerializedData<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.FloatVariable/UxmlSerializedData
class CORDL_TYPE FloatVariable_UxmlSerializedData : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<float_t> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb049d60, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb049d5c, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb049db0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatVariable_UxmlSerializedData(FloatVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatVariable_UxmlSerializedData(FloatVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable_UxmlSerializedData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
