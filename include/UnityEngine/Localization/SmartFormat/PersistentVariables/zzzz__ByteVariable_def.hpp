#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/ByteVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class ByteVariable_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class ByteVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class ByteVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "ByteVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable_UxmlSerializedData*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "ByteVariable/UxmlSerializedData");
// [UxmlObject]
// [DisplayName("Byte", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.ByteVariable
class CORDL_TYPE ByteVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<uint8_t> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable_UxmlSerializedData;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb0495f4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteVariable(ByteVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteVariable(ByteVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// [DisplayName("Byte", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1::UxmlSerializedData<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.ByteVariable/UxmlSerializedData
class CORDL_TYPE ByteVariable_UxmlSerializedData : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<uint8_t> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb049640, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb04963c, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb049690, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteVariable_UxmlSerializedData(ByteVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteVariable_UxmlSerializedData(ByteVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::ByteVariable_UxmlSerializedData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
