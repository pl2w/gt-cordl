#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Binding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateTrigger_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Binding)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BindingActivationContext;
}
namespace UnityEngine::UIElements {
struct BindingLogLevel;
}
namespace UnityEngine::UIElements {
struct BindingUpdateTrigger;
}
namespace UnityEngine::UIElements {
class Binding_UxmlSerializedData;
}
namespace UnityEngine::UIElements {
struct DataSourceContextChanged;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class Binding_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Binding*);
MARK_REF_T(::UnityEngine::UIElements::Binding_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Binding*, "UnityEngine.UIElements", "Binding");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Binding_UxmlSerializedData*, "UnityEngine.UIElements", "Binding/UxmlSerializedData");
// [UxmlObject]
// Dependencies System.Object, UnityEngine.UIElements.BindingUpdateTrigger
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Binding
class CORDL_TYPE Binding : public ::System::Object {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::UIElements::Binding_UxmlSerializedData;

/// @brief Field <property>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__property_k__BackingField, put=__cordl_internal_set__property_k__BackingField)) ::StringW  _property_k__BackingField;

 __declspec(property(get=get_isDirty)) bool  isDirty;

/// @brief Field m_Dirty, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Dirty, put=__cordl_internal_set_m_Dirty)) bool  m_Dirty;

/// @brief Field m_UpdateTrigger, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateTrigger, put=__cordl_internal_set_m_UpdateTrigger)) ::UnityEngine::UIElements::BindingUpdateTrigger  m_UpdateTrigger;

 __declspec(property(put=set_property)) ::StringW  property;

/// @brief [CreateProperty]
 __declspec(property(get=get_updateTrigger, put=set_updateTrigger)) ::UnityEngine::UIElements::BindingUpdateTrigger  updateTrigger;

/// @brief Method ClearDirty, addr 0xb716170, size 0x8, virtual false, abstract: false, final false
inline void ClearDirty() ;

/// @brief Method GetGlobalLogLevel, addr 0xb715e14, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BindingLogLevel GetGlobalLogLevel() ;

/// @brief Method GetPanelLogLevel, addr 0xb715f70, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BindingLogLevel GetPanelLogLevel(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method MarkDirty, addr 0xb716164, size 0xc, virtual false, abstract: false, final false
inline void MarkDirty() ;

static inline ::UnityEngine::UIElements::Binding* New_ctor() ;

/// @brief Method OnActivated, addr 0xb716178, size 0x4, virtual true, abstract: false, final false
inline void OnActivated(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingActivationContext>  context) ;

/// @brief Method OnDataSourceChanged, addr 0xb716180, size 0x4, virtual true, abstract: false, final false
inline void OnDataSourceChanged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::DataSourceContextChanged>  context) ;

/// @brief Method OnDeactivated, addr 0xb71617c, size 0x4, virtual true, abstract: false, final false
inline void OnDeactivated(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingActivationContext>  context) ;

/// @brief Method ResetPanelLogLevel, addr 0xb716090, size 0x8c, virtual false, abstract: false, final false
static inline void ResetPanelLogLevel(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method SetGlobalLogLevel, addr 0xb715db8, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalLogLevel(::UnityEngine::UIElements::BindingLogLevel  logLevel) ;

/// @brief Method SetPanelLogLevel, addr 0xb715e6c, size 0x9c, virtual false, abstract: false, final false
static inline void SetPanelLogLevel(::UnityEngine::UIElements::IPanel*  panel, ::UnityEngine::UIElements::BindingLogLevel  logLevel) ;

constexpr ::StringW const& __cordl_internal_get__property_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__property_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_Dirty() const;

constexpr bool& __cordl_internal_get_m_Dirty() ;

constexpr ::UnityEngine::UIElements::BindingUpdateTrigger const& __cordl_internal_get_m_UpdateTrigger() const;

constexpr ::UnityEngine::UIElements::BindingUpdateTrigger& __cordl_internal_get_m_UpdateTrigger() ;

constexpr void __cordl_internal_set__property_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_m_Dirty(bool  value) ;

constexpr void __cordl_internal_set_m_UpdateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger  value) ;

/// @brief Method .ctor, addr 0xb716144, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isDirty, addr 0xb71612c, size 0x8, virtual false, abstract: false, final false
inline bool get_isDirty() ;

/// @brief Method get_updateTrigger, addr 0xb716134, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::BindingUpdateTrigger get_updateTrigger() ;

/// [CompilerGenerated]
/// @brief Method set_property, addr 0xb716124, size 0x8, virtual false, abstract: false, final false
inline void set_property(::StringW  value) ;

/// @brief Method set_updateTrigger, addr 0xb71613c, size 0x8, virtual false, abstract: false, final false
inline void set_updateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Binding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Binding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Binding(Binding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Binding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Binding(Binding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7177};

/// @brief Field k_UpdateTriggerTooltip offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UpdateTriggerTooltip{u"This informs the binding system of whether the binding object should be updated on every frame, when a change occurs in the source or on every frame if change detection is impossible, and when explicitly marked as dirty."};

/// @brief Field m_Dirty, offset: 0x10, size: 0x1, def value: None
 bool  ___m_Dirty;

/// @brief Field m_UpdateTrigger, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::UIElements::BindingUpdateTrigger  ___m_UpdateTrigger;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <property>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____property_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Binding, ___m_Dirty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding, ___m_UpdateTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding, ____property_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Binding) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [ExcludeFromDocs]
// Dependencies UnityEngine.UIElements.BindingUpdateTrigger, UnityEngine.UIElements.UxmlSerializedData, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Binding/UxmlSerializedData
class CORDL_TYPE Binding_UxmlSerializedData : public ::UnityEngine::UIElements::UxmlSerializedData {
public:
// Declarations
/// @brief Field property, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_property, put=__cordl_internal_set_property)) ::StringW  property;

/// @brief Field property_UxmlAttributeFlags, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_property_UxmlAttributeFlags, put=__cordl_internal_set_property_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  property_UxmlAttributeFlags;

/// @brief Field updateTrigger, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateTrigger, put=__cordl_internal_set_updateTrigger)) ::UnityEngine::UIElements::BindingUpdateTrigger  updateTrigger;

/// @brief Field updateTrigger_UxmlAttributeFlags, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateTrigger_UxmlAttributeFlags, put=__cordl_internal_set_updateTrigger_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  updateTrigger_UxmlAttributeFlags;

/// @brief Method Deserialize, addr 0xb716184, size 0x168, virtual true, abstract: false, final false
inline void Deserialize(::System::Object*  obj) ;

static inline ::UnityEngine::UIElements::Binding_UxmlSerializedData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_property() const;

constexpr ::StringW& __cordl_internal_get_property() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_property_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_property_UxmlAttributeFlags() ;

constexpr ::UnityEngine::UIElements::BindingUpdateTrigger const& __cordl_internal_get_updateTrigger() const;

constexpr ::UnityEngine::UIElements::BindingUpdateTrigger& __cordl_internal_get_updateTrigger() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_updateTrigger_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_updateTrigger_UxmlAttributeFlags() ;

constexpr void __cordl_internal_set_property(::StringW  value) ;

constexpr void __cordl_internal_set_property_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

constexpr void __cordl_internal_set_updateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger  value) ;

constexpr void __cordl_internal_set_updateTrigger_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

/// @brief Method .ctor, addr 0xb7162ec, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Binding_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Binding_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Binding_UxmlSerializedData(Binding_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Binding_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Binding_UxmlSerializedData(Binding_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7176};

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field property, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___property;

/// [Tooltip("This informs the binding system of whether the binding object should be updated on every frame, when a change occurs in the source or on every frame if change detection is impossible, and when explicitly marked as dirty.")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field updateTrigger, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::UIElements::BindingUpdateTrigger  ___updateTrigger;

/// [HideInInspector]
/// [UxmlIgnore]
/// [SerializeField]
/// @brief Field property_UxmlAttributeFlags, offset: 0x24, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___property_UxmlAttributeFlags;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field updateTrigger_UxmlAttributeFlags, offset: 0x25, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___updateTrigger_UxmlAttributeFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Binding_UxmlSerializedData, ___property) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding_UxmlSerializedData, ___updateTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding_UxmlSerializedData, ___property_UxmlAttributeFlags) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding_UxmlSerializedData, ___updateTrigger_UxmlAttributeFlags) == 0x25, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Binding_UxmlSerializedData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
