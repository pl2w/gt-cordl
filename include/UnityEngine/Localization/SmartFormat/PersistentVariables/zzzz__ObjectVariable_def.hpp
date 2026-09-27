#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/ObjectVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
CORDL_MODULE_EXPORT(ObjectVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class ObjectVariable_UxmlSerializedData;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class ObjectVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class ObjectVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "ObjectVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable_UxmlSerializedData*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "ObjectVariable/UxmlSerializedData");
// [UxmlObject]
// [DisplayName("Object Reference", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.ObjectVariable
class CORDL_TYPE ObjectVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<::UnityW<::UnityEngine::Object>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable_UxmlSerializedData;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb049edc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectVariable(ObjectVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectVariable(ObjectVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// [DisplayName("Object Reference", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1::UxmlSerializedData<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.ObjectVariable/UxmlSerializedData
class CORDL_TYPE ObjectVariable_UxmlSerializedData : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<::UnityW<::UnityEngine::Object>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb049f28, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb049f24, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb049f78, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectVariable_UxmlSerializedData(ObjectVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectVariable_UxmlSerializedData(ObjectVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::ObjectVariable_UxmlSerializedData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
