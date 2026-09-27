#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/StringVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class StringVariable_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class StringVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class StringVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "StringVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable_UxmlSerializedData*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "StringVariable/UxmlSerializedData");
// [UxmlObject]
// [DisplayName("String", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.StringVariable
class CORDL_TYPE StringVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<::StringW> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable_UxmlSerializedData;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb049c30, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringVariable(StringVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringVariable(StringVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25266};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// [DisplayName("String", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1::UxmlSerializedData<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.StringVariable/UxmlSerializedData
class CORDL_TYPE StringVariable_UxmlSerializedData : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<::StringW> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb049c7c, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb049c78, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb049ccc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringVariable_UxmlSerializedData(StringVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringVariable_UxmlSerializedData(StringVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable_UxmlSerializedData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
