#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalVariable)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
namespace UnityEngine::Localization {
class LocalVariable_UxmlSerializedData;
}
namespace UnityEngine::UIElements {
class UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalVariable;
}
namespace UnityEngine::Localization {
class LocalVariable_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalVariable*);
MARK_REF_T(::UnityEngine::Localization::LocalVariable_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalVariable*, "UnityEngine.Localization", "LocalVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalVariable_UxmlSerializedData*, "UnityEngine.Localization", "LocalVariable/UxmlSerializedData");
// [UxmlObject]
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalVariable
class CORDL_TYPE LocalVariable : public ::System::Object {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalVariable_UxmlSerializedData;

/// [UxmlAttribute]
/// @brief [Delayed]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief [UxmlObjectReference]
 __declspec(property(get=get_Variable, put=set_Variable)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  Variable;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Variable>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Variable_k__BackingField, put=__cordl_internal_set__Variable_k__BackingField)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  _Variable_k__BackingField;

static inline ::UnityEngine::Localization::LocalVariable* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* const& __cordl_internal_get__Variable_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*& __cordl_internal_get__Variable_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Variable_k__BackingField(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value) ;

/// @brief Method .ctor, addr 0xb014fd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xb014fb8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Variable, addr 0xb014fc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* get_Variable() ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xb014fc0, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Variable, addr 0xb014fd0, size 0x8, virtual false, abstract: false, final false
inline void set_Variable(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVariable(LocalVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVariable(LocalVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25061};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Variable>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  ____Variable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalVariable, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalVariable, ____Variable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.UIElements.UxmlSerializedData, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalVariable/UxmlSerializedData
class CORDL_TYPE LocalVariable_UxmlSerializedData : public ::UnityEngine::UIElements::UxmlSerializedData {
public:
// Declarations
/// @brief Field Name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Name_UxmlAttributeFlags, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_Name_UxmlAttributeFlags, put=__cordl_internal_set_Name_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  Name_UxmlAttributeFlags;

/// @brief Field Variable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variable, put=__cordl_internal_set_Variable)) ::UnityEngine::UIElements::UxmlSerializedData*  Variable;

/// @brief Field Variable_UxmlAttributeFlags, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Variable_UxmlAttributeFlags, put=__cordl_internal_set_Variable_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  Variable_UxmlAttributeFlags;

/// @brief Method CreateInstance, addr 0xb015250, size 0x54, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method Deserialize, addr 0xb0152a4, size 0x1fc, virtual true, abstract: false, final false
inline void Deserialize(::System::Object*  obj) ;

static inline ::UnityEngine::Localization::LocalVariable_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb014fe0, size 0x270, virtual false, abstract: false, final false
static inline void Register() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_Name_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_Name_UxmlAttributeFlags() ;

constexpr ::UnityEngine::UIElements::UxmlSerializedData* const& __cordl_internal_get_Variable() const;

constexpr ::UnityEngine::UIElements::UxmlSerializedData*& __cordl_internal_get_Variable() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_Variable_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_Variable_UxmlAttributeFlags() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Name_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

constexpr void __cordl_internal_set_Variable(::UnityEngine::UIElements::UxmlSerializedData*  value) ;

constexpr void __cordl_internal_set_Variable_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

/// @brief Method .ctor, addr 0xb0154a0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVariable_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVariable_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVariable_UxmlSerializedData(LocalVariable_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVariable_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVariable_UxmlSerializedData(LocalVariable_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25060};

/// [UxmlObjectReference]
/// [SerializeReference]
/// @brief Field Variable, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlSerializedData*  ___Variable;

/// [Delayed]
/// [SerializeField]
/// @brief Field Name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Name;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field Variable_UxmlAttributeFlags, offset: 0x28, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___Variable_UxmlAttributeFlags;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field Name_UxmlAttributeFlags, offset: 0x29, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___Name_UxmlAttributeFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalVariable_UxmlSerializedData, ___Variable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalVariable_UxmlSerializedData, ___Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalVariable_UxmlSerializedData, ___Variable_UxmlAttributeFlags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalVariable_UxmlSerializedData, ___Name_UxmlAttributeFlags) == 0x29, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalVariable_UxmlSerializedData) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization
