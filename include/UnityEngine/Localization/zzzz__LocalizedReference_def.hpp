#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Settings/zzzz__FallbackBehavior_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizedReference)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
namespace UnityEngine::Localization::Settings {
struct FallbackBehavior;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
class LocalizedReference_UxmlSerializedData;
}
namespace UnityEngine::UIElements {
struct BindingActivationContext;
}
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedReference;
}
namespace UnityEngine::Localization {
class LocalizedReference_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedReference*);
MARK_REF_T(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedReference*, "UnityEngine.Localization", "LocalizedReference");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedReference/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.Settings.FallbackBehavior, UnityEngine.Localization.Tables.TableEntryReference, UnityEngine.Localization.Tables.TableReference, UnityEngine.UIElements.CustomBinding
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedReference
class CORDL_TYPE LocalizedReference : public ::UnityEngine::UIElements::CustomBinding {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedReference_UxmlSerializedData;

 __declspec(property(get=get_FallbackState, put=set_FallbackState)) ::UnityEngine::Localization::Settings::FallbackBehavior  FallbackState;

/// @brief [UxmlAttribute("fallback")]
 __declspec(property(get=get_FallbackStateUXML, put=set_FallbackStateUXML)) ::UnityEngine::Localization::Settings::FallbackBehavior  FallbackStateUXML;

 __declspec(property(get=get_ForceSynchronous)) bool  ForceSynchronous;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_LocaleOverride, put=set_LocaleOverride)) ::UnityW<::UnityEngine::Localization::Locale>  LocaleOverride;

 __declspec(property(get=get_TableEntryReference, put=set_TableEntryReference)) ::UnityEngine::Localization::Tables::TableEntryReference  TableEntryReference;

/// @brief [UxmlAttribute("entry")]
 __declspec(property(get=get_TableEntryReferenceUXML, put=set_TableEntryReferenceUXML)) ::UnityEngine::Localization::Tables::TableEntryReference  TableEntryReferenceUXML;

 __declspec(property(get=get_TableReference, put=set_TableReference)) ::UnityEngine::Localization::Tables::TableReference  TableReference;

/// @brief [UxmlAttribute("table")]
 __declspec(property(get=get_TableReferenceUXML, put=set_TableReferenceUXML)) ::UnityEngine::Localization::Tables::TableReference  TableReferenceUXML;

 __declspec(property(get=get_WaitForCompletion, put=set_WaitForCompletion)) bool  WaitForCompletion;

/// @brief Field m_ActivatedCount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivatedCount, put=__cordl_internal_set_m_ActivatedCount)) int32_t  m_ActivatedCount;

/// @brief Field m_FallbackState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FallbackState, put=__cordl_internal_set_m_FallbackState)) ::UnityEngine::Localization::Settings::FallbackBehavior  m_FallbackState;

/// @brief Field m_LocaleOverride, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocaleOverride, put=__cordl_internal_set_m_LocaleOverride)) ::UnityW<::UnityEngine::Localization::Locale>  m_LocaleOverride;

/// @brief Field m_TableEntryReference, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TableEntryReference, put=__cordl_internal_set_m_TableEntryReference)) ::UnityEngine::Localization::Tables::TableEntryReference  m_TableEntryReference;

/// @brief Field m_TableReference, offset 0x20, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_TableReference, put=__cordl_internal_set_m_TableReference)) ::UnityEngine::Localization::Tables::TableReference  m_TableReference;

/// @brief Field m_WaitForCompletion, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WaitForCompletion, put=__cordl_internal_set_m_WaitForCompletion)) bool  m_WaitForCompletion;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Cleanup() ;

/// @brief Method CreateErrorResult, addr 0xb00fccc, size 0x228, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::BindingResult CreateErrorResult(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, ::Unity::Properties::VisitReturnCode  errorCode, ::System::Type*  sourceType) ;

/// @brief Method ForceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ForceUpdate() ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize() ;

static inline ::UnityEngine::Localization::LocalizedReference* New_ctor() ;

/// @brief Method OnActivated, addr 0xb00fc4c, size 0x40, virtual true, abstract: false, final false
inline void OnActivated(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingActivationContext>  context) ;

/// @brief Method OnAfterDeserialize, addr 0xb00fbc8, size 0x4, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb00fbc4, size 0x4, virtual true, abstract: false, final false
inline void OnBeforeSerialize() ;

/// @brief Method OnDeactivated, addr 0xb00fc8c, size 0x40, virtual true, abstract: false, final false
inline void OnDeactivated(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingActivationContext>  context) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method SetReference, addr 0xb00f898, size 0xfc, virtual false, abstract: false, final false
inline void SetReference(::UnityEngine::Localization::Tables::TableReference  table, ::UnityEngine::Localization::Tables::TableEntryReference  entry) ;

/// @brief Method ToString, addr 0xb00f994, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_m_ActivatedCount() const;

constexpr int32_t& __cordl_internal_get_m_ActivatedCount() ;

constexpr ::UnityEngine::Localization::Settings::FallbackBehavior const& __cordl_internal_get_m_FallbackState() const;

constexpr ::UnityEngine::Localization::Settings::FallbackBehavior& __cordl_internal_get_m_FallbackState() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_LocaleOverride() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_LocaleOverride() ;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& __cordl_internal_get_m_TableEntryReference() const;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference& __cordl_internal_get_m_TableEntryReference() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_m_TableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_m_TableReference() ;

constexpr bool const& __cordl_internal_get_m_WaitForCompletion() const;

constexpr bool& __cordl_internal_get_m_WaitForCompletion() ;

constexpr void __cordl_internal_set_m_ActivatedCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_FallbackState(::UnityEngine::Localization::Settings::FallbackBehavior  value) ;

constexpr void __cordl_internal_set_m_LocaleOverride(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_TableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

constexpr void __cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

constexpr void __cordl_internal_set_m_WaitForCompletion(bool  value) ;

/// @brief Method .ctor, addr 0xb00f378, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FallbackState, addr 0xb00f758, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Settings::FallbackBehavior get_FallbackState() ;

/// @brief Method get_FallbackStateUXML, addr 0xb00fc3c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Settings::FallbackBehavior get_FallbackStateUXML() ;

/// @brief Method get_ForceSynchronous, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ForceSynchronous() ;

/// @brief Method get_IsEmpty, addr 0xb00f828, size 0x70, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_LocaleOverride, addr 0xb00f768, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> get_LocaleOverride() ;

/// @brief Method get_TableEntryReference, addr 0xb00f670, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableEntryReference get_TableEntryReference() ;

/// @brief Method get_TableEntryReferenceUXML, addr 0xb00fbfc, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableEntryReference get_TableEntryReferenceUXML() ;

/// @brief Method get_TableReference, addr 0xb00f49c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableReference get_TableReference() ;

/// @brief Method get_TableReferenceUXML, addr 0xb00fbcc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableReference get_TableReferenceUXML() ;

/// @brief Method get_WaitForCompletion, addr 0xb00f818, size 0x8, virtual true, abstract: false, final false
inline bool get_WaitForCompletion() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_FallbackState, addr 0xb00f760, size 0x8, virtual false, abstract: false, final false
inline void set_FallbackState(::UnityEngine::Localization::Settings::FallbackBehavior  value) ;

/// @brief Method set_FallbackStateUXML, addr 0xb00fc44, size 0x8, virtual false, abstract: false, final false
inline void set_FallbackStateUXML(::UnityEngine::Localization::Settings::FallbackBehavior  value) ;

/// @brief Method set_LocaleOverride, addr 0xb00f770, size 0xa8, virtual false, abstract: false, final false
inline void set_LocaleOverride(::UnityEngine::Localization::Locale*  value) ;

/// @brief Method set_TableEntryReference, addr 0xb00f684, size 0x80, virtual false, abstract: false, final false
inline void set_TableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

/// @brief Method set_TableEntryReferenceUXML, addr 0xb00fc10, size 0x2c, virtual false, abstract: false, final false
inline void set_TableEntryReferenceUXML(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

/// @brief Method set_TableReference, addr 0xb00f4a8, size 0xb4, virtual false, abstract: false, final false
inline void set_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method set_TableReferenceUXML, addr 0xb00fbd8, size 0x24, virtual false, abstract: false, final false
inline void set_TableReferenceUXML(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method set_WaitForCompletion, addr 0xb00f820, size 0x8, virtual true, abstract: false, final false
inline void set_WaitForCompletion(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedReference(LocalizedReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedReference(LocalizedReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25047};

/// [SerializeField]
/// @brief Field m_TableReference, offset: 0x20, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___m_TableReference;

/// [SerializeField]
/// @brief Field m_TableEntryReference, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::Localization::Tables::TableEntryReference  ___m_TableEntryReference;

/// [SerializeField]
/// @brief Field m_FallbackState, offset: 0x58, size: 0x4, def value: None
 ::UnityEngine::Localization::Settings::FallbackBehavior  ___m_FallbackState;

/// [SerializeField]
/// @brief Field m_WaitForCompletion, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_WaitForCompletion;

/// @brief Field m_LocaleOverride, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_LocaleOverride;

/// @brief Field m_ActivatedCount, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_ActivatedCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizedReference, ___m_TableReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference, ___m_TableEntryReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference, ___m_FallbackState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference, ___m_WaitForCompletion) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference, ___m_LocaleOverride) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference, ___m_ActivatedCount) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizedReference) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.Settings.FallbackBehavior, UnityEngine.Localization.Tables.TableEntryReference, UnityEngine.Localization.Tables.TableReference, UnityEngine.UIElements.CustomBinding::UxmlSerializedData, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedReference/UxmlSerializedData
class CORDL_TYPE LocalizedReference_UxmlSerializedData : public ::UnityEngine::UIElements::CustomBinding_UxmlSerializedData {
public:
// Declarations
/// @brief Field FallbackStateUXML, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_FallbackStateUXML, put=__cordl_internal_set_FallbackStateUXML)) ::UnityEngine::Localization::Settings::FallbackBehavior  FallbackStateUXML;

/// @brief Field FallbackStateUXML_UxmlAttributeFlags, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get_FallbackStateUXML_UxmlAttributeFlags, put=__cordl_internal_set_FallbackStateUXML_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  FallbackStateUXML_UxmlAttributeFlags;

/// @brief Field TableEntryReferenceUXML, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_TableEntryReferenceUXML, put=__cordl_internal_set_TableEntryReferenceUXML)) ::UnityEngine::Localization::Tables::TableEntryReference  TableEntryReferenceUXML;

/// @brief Field TableEntryReferenceUXML_UxmlAttributeFlags, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_TableEntryReferenceUXML_UxmlAttributeFlags, put=__cordl_internal_set_TableEntryReferenceUXML_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  TableEntryReferenceUXML_UxmlAttributeFlags;

/// @brief Field TableReferenceUXML, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get_TableReferenceUXML, put=__cordl_internal_set_TableReferenceUXML)) ::UnityEngine::Localization::Tables::TableReference  TableReferenceUXML;

/// @brief Field TableReferenceUXML_UxmlAttributeFlags, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_TableReferenceUXML_UxmlAttributeFlags, put=__cordl_internal_set_TableReferenceUXML_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  TableReferenceUXML_UxmlAttributeFlags;

/// @brief Method Deserialize, addr 0xb010224, size 0x1fc, virtual true, abstract: false, final false
inline void Deserialize(::System::Object*  obj) ;

static inline ::UnityEngine::Localization::LocalizedReference_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00fef4, size 0x330, virtual false, abstract: false, final false
static inline void Register() ;

constexpr ::UnityEngine::Localization::Settings::FallbackBehavior const& __cordl_internal_get_FallbackStateUXML() const;

constexpr ::UnityEngine::Localization::Settings::FallbackBehavior& __cordl_internal_get_FallbackStateUXML() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_FallbackStateUXML_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_FallbackStateUXML_UxmlAttributeFlags() ;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& __cordl_internal_get_TableEntryReferenceUXML() const;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference& __cordl_internal_get_TableEntryReferenceUXML() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_TableEntryReferenceUXML_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_TableEntryReferenceUXML_UxmlAttributeFlags() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_TableReferenceUXML() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_TableReferenceUXML() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_TableReferenceUXML_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_TableReferenceUXML_UxmlAttributeFlags() ;

constexpr void __cordl_internal_set_FallbackStateUXML(::UnityEngine::Localization::Settings::FallbackBehavior  value) ;

constexpr void __cordl_internal_set_FallbackStateUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

constexpr void __cordl_internal_set_TableEntryReferenceUXML(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

constexpr void __cordl_internal_set_TableEntryReferenceUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

constexpr void __cordl_internal_set_TableReferenceUXML(::UnityEngine::Localization::Tables::TableReference  value) ;

constexpr void __cordl_internal_set_TableReferenceUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

/// @brief Method .ctor, addr 0xb00f39c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedReference_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedReference_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedReference_UxmlSerializedData(LocalizedReference_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedReference_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedReference_UxmlSerializedData(LocalizedReference_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25046};

/// [UxmlAttribute("table")]
/// [SerializeField]
/// @brief Field TableReferenceUXML, offset: 0x28, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___TableReferenceUXML;

/// [UxmlAttribute("entry")]
/// [SerializeField]
/// @brief Field TableEntryReferenceUXML, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::Localization::Tables::TableEntryReference  ___TableEntryReferenceUXML;

/// [UxmlAttribute("fallback")]
/// [SerializeField]
/// @brief Field FallbackStateUXML, offset: 0x60, size: 0x4, def value: None
 ::UnityEngine::Localization::Settings::FallbackBehavior  ___FallbackStateUXML;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field TableReferenceUXML_UxmlAttributeFlags, offset: 0x64, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___TableReferenceUXML_UxmlAttributeFlags;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field TableEntryReferenceUXML_UxmlAttributeFlags, offset: 0x65, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___TableEntryReferenceUXML_UxmlAttributeFlags;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field FallbackStateUXML_UxmlAttributeFlags, offset: 0x66, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___FallbackStateUXML_UxmlAttributeFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData, ___TableReferenceUXML) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData, ___TableEntryReferenceUXML) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData, ___FallbackStateUXML) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData, ___TableReferenceUXML_UxmlAttributeFlags) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData, ___TableEntryReferenceUXML_UxmlAttributeFlags) == 0x65, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData, ___FallbackStateUXML_UxmlAttributeFlags) == 0x66, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizedReference_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
