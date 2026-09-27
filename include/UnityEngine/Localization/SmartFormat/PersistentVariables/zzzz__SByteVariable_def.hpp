#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/SByteVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SByteVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class SByteVariable_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class SByteVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class SByteVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "SByteVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable_UxmlSerializedData*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "SByteVariable/UxmlSerializedData");
// [UxmlObject]
// [DisplayName("Signed Byte", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.SByteVariable
class CORDL_TYPE SByteVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<int8_t> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable_UxmlSerializedData;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb049510, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SByteVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SByteVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SByteVariable(SByteVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SByteVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SByteVariable(SByteVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25250};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// [DisplayName("Signed Byte", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1::UxmlSerializedData<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.SByteVariable/UxmlSerializedData
class CORDL_TYPE SByteVariable_UxmlSerializedData : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<int8_t> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb04955c, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb049558, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb0495ac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SByteVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SByteVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SByteVariable_UxmlSerializedData(SByteVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SByteVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SByteVariable_UxmlSerializedData(SByteVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25249};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::SByteVariable_UxmlSerializedData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
