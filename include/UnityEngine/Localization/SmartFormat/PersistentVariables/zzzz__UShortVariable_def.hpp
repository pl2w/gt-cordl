#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/UShortVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UShortVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class UShortVariable_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class UShortVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class UShortVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "UShortVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable_UxmlSerializedData*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "UShortVariable/UxmlSerializedData");
// [UxmlObject]
// [DisplayName("Unsigned Short", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.UShortVariable
class CORDL_TYPE UShortVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<uint16_t> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable_UxmlSerializedData;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb0497bc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UShortVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UShortVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UShortVariable(UShortVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UShortVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UShortVariable(UShortVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25256};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// [DisplayName("Unsigned Short", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1::UxmlSerializedData<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.UShortVariable/UxmlSerializedData
class CORDL_TYPE UShortVariable_UxmlSerializedData : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<uint16_t> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb049808, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb049804, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb049858, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UShortVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UShortVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UShortVariable_UxmlSerializedData(UShortVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UShortVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UShortVariable_UxmlSerializedData(UShortVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::UShortVariable_UxmlSerializedData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
