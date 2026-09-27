#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/Variable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Variable_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableValueChanged;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
template<typename T>
class Variable_1_UxmlSerializedData;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
template<typename T>
class Variable_1;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
template<typename T>
class Variable_1_UxmlSerializedData;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1, "UnityEngine.Localization.SmartFormat.PersistentVariables", "Variable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData, "UnityEngine.Localization.SmartFormat.PersistentVariables", "Variable`1/UxmlSerializedData");
// [UxmlObject]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
class CORDL_TYPE Variable_1 : public ::System::Object {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Field ValueChanged, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValueChanged, put=__cordl_internal_set_ValueChanged)) ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  ValueChanged;

/// @brief [UxmlAttribute("value")]
 __declspec(property(get=get_ValueUXML, put=set_ValueUXML)) T  ValueUXML;

/// @brief Field m_Value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) T  m_Value;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*() noexcept;

/// @brief Method GetSourceValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* GetSourceValue(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  _) ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<T>* New_ctor() ;

/// @brief Method SendValueChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendValueChangedEvent() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* const& __cordl_internal_get_ValueChanged() const;

constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*& __cordl_internal_get_ValueChanged() ;

constexpr T const& __cordl_internal_get_m_Value() const;

constexpr T& __cordl_internal_get_m_Value() ;

constexpr void __cordl_internal_set_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

constexpr void __cordl_internal_set_m_Value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ValueChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Method get_ValueUXML, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_ValueUXML() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableValueChanged() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_ValueChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

/// @brief Method set_ValueUXML, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ValueUXML(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Variable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Variable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Variable_1(Variable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Variable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Variable_1(Variable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25246};

/// [SerializeField]
/// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
 T  ___m_Value;

/// [CompilerGenerated]
/// @brief Field ValueChanged, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  ___ValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// Dependencies UnityEngine.UIElements.UxmlSerializedData, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1/UxmlSerializedData<T>
class CORDL_TYPE Variable_1_UxmlSerializedData : public ::UnityEngine::UIElements::UxmlSerializedData {
public:
// Declarations
/// @brief Field ValueUXML, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValueUXML, put=__cordl_internal_set_ValueUXML)) T  ValueUXML;

/// @brief Field ValueUXML_UxmlAttributeFlags, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ValueUXML_UxmlAttributeFlags, put=__cordl_internal_set_ValueUXML_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ValueUXML_UxmlAttributeFlags;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Deserialize(::System::Object*  obj) ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1_UxmlSerializedData<T>* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Register() ;

constexpr T const& __cordl_internal_get_ValueUXML() const;

constexpr T& __cordl_internal_get_ValueUXML() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_ValueUXML_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_ValueUXML_UxmlAttributeFlags() ;

constexpr void __cordl_internal_set_ValueUXML(T  value) ;

constexpr void __cordl_internal_set_ValueUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Variable_1_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Variable_1_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Variable_1_UxmlSerializedData(Variable_1_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Variable_1_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Variable_1_UxmlSerializedData(Variable_1_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25245};

/// [UxmlAttribute("value")]
/// [SerializeField]
/// @brief Field ValueUXML, offset: 0x18, size: 0x8, def value: None
 T  ___ValueUXML;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field ValueUXML_UxmlAttributeFlags, offset: 0x20, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___ValueUXML_UxmlAttributeFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
